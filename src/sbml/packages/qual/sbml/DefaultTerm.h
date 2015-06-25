/**
 * @file:   DefaultTerm.h
 * @brief:  Implementation of the DefaultTerm class
 * @author: Generated by autocreate code
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2013-2015 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *     3. University of Heidelberg, Heidelberg, Germany
 * 
 * Copyright (C) 2009-2013 jointly by the following organizations:
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
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
 *
 * @class DefaultTerm
 * @sbmlbrief{qual} The default result of a Transition.
 *
 * The DefaultTerm defines the default result of a Transition. This term is
 * used if there are no other FunctionTerm elements or if none of the Math
 * elements of the FunctionTerm elements evaluates to @c true.
 */

#ifndef DefaultTerm_H__
#define DefaultTerm_H__


#include <sbml/common/extern.h>
#include <sbml/common/sbmlfwd.h>
#include <sbml/packages/qual/common/qualfwd.h>


#ifdef __cplusplus


#include <string>


#include <sbml/SBase.h>
#include <sbml/ListOf.h>
#include <sbml/packages/qual/extension/QualExtension.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN DefaultTerm : public SBase
{

protected:

  int           mResultLevel;
  bool          mIsSetResultLevel;


public:

  /**
   * Creates a new DefaultTerm with the given level, version, and package version.
   *
   * @param level an unsigned int, the SBML Level to assign to this DefaultTerm
   *
   * @param version an unsigned int, the SBML Version to assign to this DefaultTerm
   *
   * @param pkgVersion an unsigned int, the SBML Qual Version to assign to this DefaultTerm
   */
  DefaultTerm(unsigned int level      = QualExtension::getDefaultLevel(),
              unsigned int version    = QualExtension::getDefaultVersion(),
              unsigned int pkgVersion = QualExtension::getDefaultPackageVersion());


  /**
   * Creates a new DefaultTerm with the given QualPkgNamespaces object.
   *
   * @param qualns the QualPkgNamespaces object
   */
  DefaultTerm(QualPkgNamespaces* qualns);


  /**
   * Copy constructor for DefaultTerm.
   *
   * @param orig the DefaultTerm instance to copy.
   */
  DefaultTerm(const DefaultTerm& orig);


  /**
   * Assignment operator for DefaultTerm.
   *
   * @param rhs the object whose values are used as the basis
   * of the assignment
   */
  DefaultTerm& operator=(const DefaultTerm& rhs);


  /**
   * Creates and returns a deep copy of this DefaultTerm object.
   *
   * @return a (deep) copy of this DefaultTerm object.
   */
  virtual DefaultTerm* clone () const;


  /**
   * Destructor for DefaultTerm.
   */
  virtual ~DefaultTerm();


  /**
   * Returns the value of the "resultLevel" attribute of this DefaultTerm.
   *
   * @return the value of the "resultLevel" attribute of this DefaultTerm as a integer.
   */
  virtual int getResultLevel() const;


  /**
   * Predicate returning @c true or @c false depending on whether this
   * DefaultTerm's "resultLevel" attribute has been set.
   *
   * @return @c true if this DefaultTerm's "resultLevel" attribute has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetResultLevel() const;


  /**
   * Sets the value of the "resultLevel" attribute of this DefaultTerm.
   *
   * @param resultLevel int value of the "resultLevel" attribute to be set
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_ATTRIBUTE_VALUE, OperationReturnValues_t}
   */
  virtual int setResultLevel(int resultLevel);


  /**
   * Unsets the value of the "resultLevel" attribute of this DefaultTerm.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetResultLevel();


  /**
   * Returns the XML name of this object.
   *
   * @return the name of this element.
   */
  virtual const std::string& getElementName () const;


  /**
   * Returns the libSBML type code of this object instance.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SBML type code for this object:
   * @sbmlconstant{SBML_QUAL_DEFAULT_TERM, SBMLQualTypeCode_t}
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   * @see getPackageName()
   */
  virtual int getTypeCode () const;


  /**
   * Predicate returning @c true if all the required attributes
   * for this DefaultTerm object have been set.
   *
   * @note The required attributes for a DefaultTerm object are:
   *
   * @return a boolean value indicating whether all the required
   * attributes for this object have been defined.
   */
  virtual bool hasRequiredAttributes() const;


  /** @cond doxygenLibsbmlInternal */
  /**
   * Subclasses should override this method to write out their contained
   * SBML objects as XML elements.  Be sure to call your parents
   * implementation of this method as well.
   */
  virtual void writeElements (XMLOutputStream& stream) const;


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Accepts the given SBMLVisitor.
   */
  virtual bool accept (SBMLVisitor& v) const;
  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Sets the parent SBMLDocument.
   */
  virtual void setSBMLDocument (SBMLDocument* d);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Enables/Disables the given package with this element.
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
               const std::string& pkgPrefix, bool flag);


  /** @endcond */


protected:

  /** @cond doxygenLibsbmlInternal */
  /**
   * Get the list of expected attributes for this element.
   */
  virtual void addExpectedAttributes(ExpectedAttributes& attributes);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Read values from the given XMLAttributes set into their specific fields.
   */
  virtual void readAttributes (const XMLAttributes& attributes,
                               const ExpectedAttributes& expectedAttributes);


  /** @endcond */


  /** @cond doxygenLibsbmlInternal */
  /**
   * Write values of XMLAttributes to the output stream.
   */
  virtual void writeAttributes (XMLOutputStream& stream) const;


  /** @endcond */



};



LIBSBML_CPP_NAMESPACE_END

#endif  /*  __cplusplus  */

#ifndef SWIG

LIBSBML_CPP_NAMESPACE_BEGIN
BEGIN_C_DECLS

/**
 * Creates a new DefaultTerm_t structure using the given SBML @p level
 * and @p version values.
 *
 * @param level an unsigned int, the SBML Level to assign to this
 * DefaultTerm_t
 * @param version an unsigned int, the SBML Version to assign to this
 * DefaultTerm_t
 * @param pkgVersion an unsigned int, the SBML 'Qual' package Version to assign to this
 * DefaultTerm_t
 *
 * @return a pointer to the newly created DefaultTerm_t structure.
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
DefaultTerm_t *
DefaultTerm_create(unsigned int level, unsigned int version,
                   unsigned int pkgVersion);


/**
 * Frees the given DefaultTerm_t structure.
 *
 * @param dt the DefaultTerm_t structure to free.
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
void
DefaultTerm_free(DefaultTerm_t * dt);


/**
 * Returns a copy of the given DefaultTerm_t structure.
 *
 * @param dt the DefaultTerm_t structure to copy.
 * 
 * @return a (deep) copy of the DefaultTerm_t.
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
DefaultTerm_t *
DefaultTerm_clone(DefaultTerm_t * dt);


/**
 * Takes a DefaultTerm_t structure and returns its resultLevel.
 *
 * @param dt the DefaultTerm_t whose resultLevel is sought.
 *
 * @return the resultLevel attribute of the given DefaultTerm_t, as an @c int.
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
int
DefaultTerm_getResultLevel(DefaultTerm_t * dt);


/**
 * Predicate returning @c true or @c false depending on whether the given
 * DefaultTerm_t structure's resultLevel is set.
 *
 * @param dt the DefaultTerm_t structure to query
 * 
 * @return @c non-zero (true) if the "resultLevel" attribute of the given
 * DefaultTerm_t structure is set, zero (false) otherwise.
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
int
DefaultTerm_isSetResultLevel(DefaultTerm_t * dt);


/**
 * Sets the "resultLevel" attribute of the given DefaultTerm_t
 * structure.
 *
 * @param dt the DefaultTerm_t structure
 * 
 * @param resultLevel the value of resultLevel to assign to the "resultLevel" attribute
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_UNEXPECTED_ATTRIBUTE, OperationReturnValues_t}
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
int
DefaultTerm_setResultLevel(DefaultTerm_t * dt, int resultLevel);


/**
 * Unsets the "resultLevel" attribute of the given DefaultTerm_t structure.
 *
 * @param dt the DefaultTerm_t structure to unset
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
int
DefaultTerm_unsetResultLevel(DefaultTerm_t * dt);


/**
  * Predicate returning @c true or @c false depending on whether
  * all the required attributes for the given DefaultTerm_t structure
  * have been set.
  *
  * @note The required attributes for a DefaultTerm_t structure are:
  * @li useValuesfromTriggerTime ( L3 onwards )
  *
 * @memberof DefaultTerm_t
 */
LIBSBML_EXTERN
int
DefaultTerm_hasRequiredAttributes(DefaultTerm_t * dt);




END_C_DECLS
LIBSBML_CPP_NAMESPACE_END

#endif  /*  !SWIG  */

#endif /*  DefaultTerm_H__  */

