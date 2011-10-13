
/**
* @file    SBMLLevelVersionConverter.cpp
* @brief   Implementation of SBMLRuleConverter, a converter sorting rules
* @author  Frank Bergmann 
* 
* <!--------------------------------------------------------------------------
* This file is part of libSBML.  Please visit http://sbml.org for more
* information about SBML, and the latest version of libSBML.
*
* Copyright (C) 2009-2011 jointly by the following organizations: 
*     1. California Institute of Technology, Pasadena, CA, USA
*     2. EMBL European Bioinformatics Institute (EBML-EBI), Hinxton, UK
*  
* Copyright (C) 2006-2008 by the California Institute of Technology,
*     Pasadena, CA, USA 
*  
* Copyright (C) 2002-2005 jointly by the following organizations: 
*     1. California Institute of Technology, Pasadena, CA, USA
*     2. Japan Science and Technology Agency, Japan
* 
* This library is free software; you can redistribute it and/or modify it
* under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation.  A copy of the license agreement is provided
* in the file named "LICENSE.txt" included with this software distribution
* and also available online as http://sbml.org/software/libsbml/license.html
* ------------------------------------------------------------------------ -->
*/


#include <sbml/conversion/SBMLRuleConverter.h>
#include <sbml/conversion/SBMLConverterRegistry.h>
#include <sbml/conversion/SBMLConverterRegister.h>
#include <sbml/Rule.h>

#ifdef __cplusplus

#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;
LIBSBML_CPP_NAMESPACE_BEGIN

  void SBMLRuleConverter::init()
{
  SBMLConverterRegistry::getInstance().addConverter(new SBMLRuleConverter());
}

SBMLRuleConverter::SBMLRuleConverter() : SBMLConverter()
{

}


SBMLRuleConverter::SBMLRuleConverter(const SBMLRuleConverter& orig) :
SBMLConverter(orig)
{
}

SBMLConverter* 
  SBMLRuleConverter::clone() const
{
  return new SBMLRuleConverter(*this);
}

ConversionProperties
  SBMLRuleConverter::getDefaultProperties() const
{
  static ConversionProperties prop;
  prop.addOption("sortRules", true, "sort rules");
  return prop;
}

bool 
  SBMLRuleConverter::matchesProperties(const ConversionProperties &props) const
{
  if (&props == NULL || !props.hasOption("sortRules"))
    return false;
  return true;
}


static void getSymbols(const ASTNode* node, vector<string>& list)
{
  if (node == NULL) return;
  if (node->isName())
  {
    string name = node->getName();
    vector<string>::iterator it = find(list.begin(), list.end(), name);
    if (it != list.end())
      list.push_back(name);
  }

  for (unsigned int i = 0; i < node->getNumChildren(); i++)
  {
    getSymbols(node->getChild(i), list);
  }

}

static vector<string> getSymbols(const ASTNode* nodes)
{
  vector<string> result;
  if (nodes == NULL) return result;

  getSymbols(nodes, result);

  return result;

}


static vector<AssignmentRule*> reorderRules(vector<AssignmentRule*>& assignmentRules)
{
  if (assignmentRules.size() < 2) return assignmentRules;

  //for (size_t n = 0; n < assignmentRules.size(); n++)
  //  cout << "before: " << assignmentRules[n]->getMetaId() << endl; 


  map<int, vector<string> > allSymbols;
  map<string, vector<string> > map;
  vector<string> idList;
  vector<AssignmentRule*> result;

  // read id list, initialize all symbols
  for (int index = 0; index < assignmentRules.size(); index++)
  {
    AssignmentRule* rule = (AssignmentRule*)assignmentRules[index];
    string variable = rule->getVariable();
    if (!rule->isSetMath())
      allSymbols[index] = vector<string>();
    else
      allSymbols[index] = getSymbols(rule->getMath());
    idList.push_back(variable);
    map[variable] = vector<string>();
  }


  // initialize order array
  vector<int> order;
  for (int i = 0; i < assignmentRules.size(); i++)
  {
    order.push_back(i);
  }

  // build dependency graph
  for (int i = 0; i < idList.size(); i++)
  {
    string id = idList[0];
    for (int index = 0; index < assignmentRules.size(); index++)
    {
      vector<string>::iterator it = ::find(allSymbols[index].begin(), allSymbols[index].end(), id);
      if (it != allSymbols[index].end())
      {
        map[(assignmentRules[index])->getVariable()].push_back(id);
      }
    }
  }


  // sort
  bool changed = true;
  while (changed)
  {
    changed = false;
    for (int i = 0; i < order.size(); i++)
    {

      int first = order[i];
      for (int j = i + 1; j < order.size(); j++)
      {
        int second = order[j];

        string secondVar = assignmentRules[second]->getVariable();
        string firstVar = assignmentRules[first]->getVariable();


        vector<string>::iterator it = ::find(map[firstVar].begin(), map[firstVar].end(), secondVar);

        if (it != map[firstVar].end())
        {
          // found dependency, swap and start over
          order[i] = second;
          order[j] = first;

          changed = true;
          break;
        }
      }

      // if swapped start over
      if (changed)
        break;
    }
  }


  // create new order
  for (int i = 0; i < order.size(); i++)
    result.push_back(assignmentRules[order[i]]);


  
  //for (size_t n = 0; n < result.size(); n++)
  //  cout << "after: " << result[n]->getMetaId() << endl; 

  return result;
}

int 
  SBMLRuleConverter::convert()
{
  if (mDocument == NULL) return LIBSBML_INVALID_OBJECT;
  Model* mModel = mDocument->getModel();
  if (mModel == NULL) return LIBSBML_INVALID_OBJECT;

  bool success = false;  

  /* if there are no function definitions bail now */
  if (mModel->getNumRules() == 0)
  {
    return LIBSBML_OPERATION_SUCCESS;
  }

  /* check consistency of model */
  /* since this function will write to the error log we should
  * clear anything in the log first
  */
  mDocument->getErrorLog()->clearLog();
  unsigned char origValidators = mDocument->getApplicableValidators();

  mDocument->setApplicableValidators(AllChecksON);


  unsigned int errors = mDocument->checkConsistency();

  /* replace original consistency checks */
  mDocument->setApplicableValidators(origValidators);

  if (mDocument->getErrorLog()->getNumFailsWithSeverity(LIBSBML_SEV_ERROR) != 0)
  {
    return LIBSBML_CONV_INVALID_SRC_DOCUMENT;
  }


  vector<AssignmentRule*> assignmentRules;
  unsigned int numRules = mModel->getNumRules();
  // for any math in document replace each function def
  for (unsigned int i = 1 ; i <= numRules;  i++)
  {
    Rule* rule = mModel->getRule(numRules - i);
    if (rule->getTypeCode() == SBML_ASSIGNMENT_RULE)
    {
      assignmentRules.push_back((AssignmentRule*)mModel->removeRule(numRules - i));
    }

  }

  assignmentRules = reorderRules(assignmentRules);

  for (unsigned int i = 1; i <= assignmentRules.size();i++)
    mModel->getListOfRules()->insertAndOwn(0,assignmentRules[assignmentRules.size()-i]);

  if (success) return LIBSBML_OPERATION_SUCCESS;
  return LIBSBML_OPERATION_FAILED;

}

/** @cond doxygen-c-only */


/** @endcond */

LIBSBML_CPP_NAMESPACE_END

#endif  /* __cplusplus */


