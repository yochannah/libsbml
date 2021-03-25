/**
 * @file FbcAnnotationPlugin.h
 * @brief Definition of the FbcAnnotationPlugin class.
 * @author SBMLTeam
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML. Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2019 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2013-2018 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 * 3. University of Heidelberg, Heidelberg, Germany
 *
 * Copyright (C) 2009-2013 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. EMBL European Bioinformatics Institute (EMBL-EBI), Hinxton, UK
 *
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 * Pasadena, CA, USA
 *
 * Copyright (C) 2002-2005 jointly by the following organizations:
 * 1. California Institute of Technology, Pasadena, CA, USA
 * 2. Japan Science and Technology Agency, Japan
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation. A copy of the license agreement is provided in the
 * file named "LICENSE.txt" included with this software distribution and also
 * available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class FbcAnnotationPlugin
 * @sbmlbrief{fbc} Extension of Annotation.
 */


#ifndef FbcAnnotationPlugin_H__
#define FbcAnnotationPlugin_H__


#include <sbml/common/extern.h>


#ifdef __cplusplus


#include <sbml/extension/SBasePlugin.h>
#include <sbml/packages/fbc/sbml/ListOfKeyValuePairs.h>
#include <sbml/packages/fbc/sbml/KeyValuePair.h>


LIBSBML_CPP_NAMESPACE_BEGIN


class LIBSBML_EXTERN FbcAnnotationPlugin : public SBasePlugin
{
protected:

  /** @cond doxygenLibsbmlInternal */

  ListOfKeyValuePairs mKeyValuePairs;

  /** @endcond */

public:

  /**
   * Creates a new FbcAnnotationPlugin using the given URI, prefix and package
   * namespace.
   *
   * @param uri a string, representing the URI of the SBML Level&nbsp;3 package
   * implemented by this libSBML package extension.
   *
   * @param prefix a string, the XML namespace prefix being used for this
   * package.
   *
   * @param fbcns a pointer to the namesspaces object (FbcPkgNamespaces) for
   * this package.
   *
   * @copydetails doc_what_are_xmlnamespaces
   *
   * @copydetails doc_what_are_sbmlnamespaces
   */
  FbcAnnotationPlugin(const std::string& uri,
                      const std::string& prefix,
                      FbcPkgNamespaces* fbcns);


  /**
   * Copy constructor for FbcAnnotationPlugin.
   *
   * @param orig the FbcAnnotationPlugin instance to copy.
   */
  FbcAnnotationPlugin(const FbcAnnotationPlugin& orig);


  /**
   * Assignment operator for FbcAnnotationPlugin.
   *
   * @param rhs the FbcAnnotationPlugin object whose values are to be used as
   * the basis of the assignment.
   */
  FbcAnnotationPlugin& operator=(const FbcAnnotationPlugin& rhs);


  /**
   * Creates and returns a deep copy of this FbcAnnotationPlugin object.
   *
   * @return a (deep) copy of this FbcAnnotationPlugin object.
   */
  virtual FbcAnnotationPlugin* clone() const;


  /**
   * Destructor for FbcAnnotationPlugin.
   */
  virtual ~FbcAnnotationPlugin();


  /**
   * Returns the ListOfKeyValuePairs from this FbcAnnotationPlugin.
   *
   * @return the ListOfKeyValuePairs from this FbcAnnotationPlugin.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  const ListOfKeyValuePairs* getListOfKeyValuePairs() const;


  /**
   * Returns the ListOfKeyValuePairs from this FbcAnnotationPlugin.
   *
   * @return the ListOfKeyValuePairs from this FbcAnnotationPlugin.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  ListOfKeyValuePairs* getListOfKeyValuePairs();


  /**
   * Get a KeyValuePair from the FbcAnnotationPlugin.
   *
   * @param n an unsigned int representing the index of the KeyValuePair to
   * retrieve.
   *
   * @return the nth KeyValuePair in the ListOfKeyValuePairs within this
   * FbcAnnotationPlugin or @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  KeyValuePair* getKeyValuePair(unsigned int n);


  /**
   * Get a KeyValuePair from the FbcAnnotationPlugin.
   *
   * @param n an unsigned int representing the index of the KeyValuePair to
   * retrieve.
   *
   * @return the nth KeyValuePair in the ListOfKeyValuePairs within this
   * FbcAnnotationPlugin or @c NULL if no such object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  const KeyValuePair* getKeyValuePair(unsigned int n) const;


  /**
   * Get a KeyValuePair from the FbcAnnotationPlugin based on its identifier.
   *
   * @param sid a string representing the identifier of the KeyValuePair to
   * retrieve.
   *
   * @return the KeyValuePair in the ListOfKeyValuePairs within this
   * FbcAnnotationPlugin with the given @p sid or @c NULL if no such
   * KeyValuePair exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  KeyValuePair* getKeyValuePair(const std::string& sid);


  /**
   * Get a KeyValuePair from the FbcAnnotationPlugin based on its identifier.
   *
   * @param sid a string representing the identifier of the KeyValuePair to
   * retrieve.
   *
   * @return the KeyValuePair in the ListOfKeyValuePairs within this
   * FbcAnnotationPlugin with the given @p sid or @c NULL if no such
   * KeyValuePair exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  const KeyValuePair* getKeyValuePair(const std::string& sid) const;


  /**
   * Adds a copy of the given KeyValuePair to this FbcAnnotationPlugin.
   *
   * @param kvp the KeyValuePair object to add.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_LEVEL_MISMATCH, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_VERSION_MISMATCH, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_PKG_VERSION_MISMATCH, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_DUPLICATE_OBJECT_ID, OperationReturnValues_t}
   *
   * @copydetails doc_note_object_is_copied
   *
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  int addKeyValuePair(const KeyValuePair* kvp);


  /**
   * Get the number of KeyValuePair objects in this FbcAnnotationPlugin.
   *
   * @return the number of KeyValuePair objects in this FbcAnnotationPlugin.
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  unsigned int getNumKeyValuePairs() const;


  /**
   * Creates a new KeyValuePair object, adds it to this FbcAnnotationPlugin
   * object and returns the KeyValuePair object created.
   *
   * @return a new KeyValuePair object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   * @see removeKeyValuePair(unsigned int n)
   */
  KeyValuePair* createKeyValuePair();


  /**
   * Removes the nth KeyValuePair from this FbcAnnotationPlugin and returns a
   * pointer to it.
   *
   * @param n an unsigned int representing the index of the KeyValuePair to
   * remove.
   *
   * @return a pointer to the nth KeyValuePair in this FbcAnnotationPlugin.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(const std::string& sid)
   */
  KeyValuePair* removeKeyValuePair(unsigned int n);


  /**
   * Removes the KeyValuePair from this FbcAnnotationPlugin based on its
   * identifier and returns a pointer to it.
   *
   * @param sid a string representing the identifier of the KeyValuePair to
   * remove.
   *
   * @return the KeyValuePair in this FbcAnnotationPlugin based on the
   * identifier or NULL if no such KeyValuePair exists.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addKeyValuePair(const KeyValuePair* object)
   * @see createKeyValuePair()
   * @see getKeyValuePair(const std::string& sid)
   * @see getKeyValuePair(unsigned int n)
   * @see getNumKeyValuePairs()
   * @see removeKeyValuePair(unsigned int n)
   */
  KeyValuePair* removeKeyValuePair(const std::string& sid);



  /** @cond doxygenLibsbmlInternal */

  /**
   * Write any contained elements
   */
  virtual void writeElements(XMLOutputStream& stream) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Accepts the given SBMLVisitor
   */
  virtual bool accept(SBMLVisitor& v) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the parent SBMLDocument
   */
  virtual void setSBMLDocument(SBMLDocument* d);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Connects to child elements
   */
  virtual void connectToChild();

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Connects to parent element
   */
  virtual void connectToParent(SBase* base);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Enables/disables the given package with this element
   */
  virtual void enablePackageInternal(const std::string& pkgURI,
                                     const std::string& pkgPrefix,
                                     bool flag);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Updates the namespaces when setLevelVersion is used
   */
  virtual void updateSBMLNamespace(const std::string& package,
                                   unsigned int level,
                                   unsigned int version);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Gets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Predicate returning @c true if this FbcAnnotationPlugin's attribute
   * "attributeName" is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this FbcAnnotationPlugin's attribute "attributeName"
   * has been set, otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Sets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this
   * FbcAnnotationPlugin.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates and returns an new "elementName" object in this
   * FbcAnnotationPlugin.
   *
   * @param elementName, the name of the element to create.
   *
   * @return pointer to the element created.
   */
  virtual SBase* createChildObject(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Adds a new "elementName" object to this FbcAnnotationPlugin.
   *
   * @param elementName, the name of the element to create.
   *
   * @param element, pointer to the element to be added.
   *
   * @copydetails doc_returns_success_code
   * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int addChildObject(const std::string& elementName,
                             const SBase* element);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Removes and returns the new "elementName" object with the given id in this
   * FbcAnnotationPlugin.
   *
   * @param elementName, the name of the element to remove.
   *
   * @param id, the id of the element to remove.
   *
   * @return pointer to the element removed.
   */
  virtual SBase* removeChildObject(const std::string& elementName,
                                   const std::string& id);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the number of "elementName" in this FbcAnnotationPlugin.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @return unsigned int number of elements.
   */
  virtual unsigned int getNumObjects(const std::string& elementName);

  /** @endcond */



  /** @cond doxygenLibsbmlInternal */

  /**
   * Returns the nth object of "objectName" in this FbcAnnotationPlugin.
   *
   * @param elementName, the name of the element to get number of.
   *
   * @param index, unsigned int the index of the object to retrieve.
   *
   * @return pointer to the object.
   */
  virtual SBase* getObject(const std::string& elementName, unsigned int index);

  /** @endcond */




  #endif /* !SWIG */


  /**
   * Returns the first child element that has the given @p id in the model-wide
   * SId namespace, or @c NULL if no such object is found.
   *
   * @param id a string representing the id attribute of the object to
   * retrieve.
   *
   * @return a pointer to the SBase element with the given @p id. If no such
   * object is found, this method returns @c NULL.
   */
  virtual SBase* getElementBySId(const std::string& id);


  /**
   * Returns the first child element that has the given @p metaid, or @c NULL
   * if no such object is found.
   *
   * @param metaid a string representing the metaid attribute of the object to
   * retrieve.
   *
   * @return a pointer to the SBase element with the given @p metaid. If no
   * such object is found this method returns @c NULL.
   */
  virtual SBase* getElementByMetaId(const std::string& metaid);


  /**
   * Returns a List of all child SBase objects, including those nested to an
   * arbitrary depth.
   *
   * @param filter an ElementFilter that may impose restrictions on the objects
   * to be retrieved.
   *
   * @return a List pointer of pointers to all SBase child objects with any
   * restriction imposed.
   */
  virtual List* getAllElements(ElementFilter * filter = NULL);



  /** @cond doxygenLibsbmlInternal */

  /**
   * Append items from model (used in comp flattening)
   *
   * @param model a pointer to a model object.
   *
   */
  int appendFrom(const Model* model);

  /** @endcond */


protected:


  /** @cond doxygenLibsbmlInternal */

  /**
   * Creates a new object from the next XMLToken on the XMLInputStream
   */
  virtual SBase* createObject(XMLInputStream& stream);

  /** @endcond */


};



LIBSBML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSBML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Returns a ListOf_t * containing KeyValuePair_t objects from this
 * FbcAnnotationPlugin_t.
 *
 * @param fap the FbcAnnotationPlugin_t structure whose ListOfKeyValuePairs is
 * sought.
 *
 * @return the ListOfKeyValuePairs from this FbcAnnotationPlugin_t as a
 * ListOf_t *.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @see FbcAnnotationPlugin_addKeyValuePair()
 * @see FbcAnnotationPlugin_createKeyValuePair()
 * @see FbcAnnotationPlugin_getKeyValuePairById()
 * @see FbcAnnotationPlugin_getKeyValuePair()
 * @see FbcAnnotationPlugin_getNumKeyValuePairs()
 * @see FbcAnnotationPlugin_removeKeyValuePairById()
 * @see FbcAnnotationPlugin_removeKeyValuePair()
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
ListOf_t*
FbcAnnotationPlugin_getListOfKeyValuePairs(FbcAnnotationPlugin_t* fap);


/**
 * Get a KeyValuePair_t from the FbcAnnotationPlugin_t.
 *
 * @param fap the FbcAnnotationPlugin_t structure to search.
 *
 * @param n an unsigned int representing the index of the KeyValuePair_t to
 * retrieve.
 *
 * @return the nth KeyValuePair_t in the ListOfKeyValuePairs within this
 * FbcAnnotationPlugin or @c NULL if no such object exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
KeyValuePair_t*
FbcAnnotationPlugin_getKeyValuePair(FbcAnnotationPlugin_t* fap,
                                    unsigned int n);


/**
 * Get a KeyValuePair_t from the FbcAnnotationPlugin_t based on its identifier.
 *
 * @param fap the FbcAnnotationPlugin_t structure to search.
 *
 * @param sid a string representing the identifier of the KeyValuePair_t to
 * retrieve.
 *
 * @return the KeyValuePair_t in the ListOfKeyValuePairs within this
 * FbcAnnotationPlugin with the given @p sid or @c NULL if no such
 * KeyValuePair_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
KeyValuePair_t*
FbcAnnotationPlugin_getKeyValuePairById(FbcAnnotationPlugin_t* fap,
                                        const char *sid);


/**
 * Adds a copy of the given KeyValuePair_t to this FbcAnnotationPlugin_t.
 *
 * @param fap the FbcAnnotationPlugin_t structure to which the KeyValuePair_t
 * should be added.
 *
 * @param kvp the KeyValuePair_t object to add.
 *
 * @copydetails doc_returns_success_code
 * @li @sbmlconstant{LIBSBML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_INVALID_OBJECT, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_LEVEL_MISMATCH, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_VERSION_MISMATCH, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_PKG_VERSION_MISMATCH, OperationReturnValues_t}
 * @li @sbmlconstant{LIBSBML_DUPLICATE_OBJECT_ID, OperationReturnValues_t}
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
int
FbcAnnotationPlugin_addKeyValuePair(FbcAnnotationPlugin_t* fap,
                                    const KeyValuePair_t* kvp);


/**
 * Get the number of KeyValuePair_t objects in this FbcAnnotationPlugin_t.
 *
 * @param fap the FbcAnnotationPlugin_t structure to query.
 *
 * @return the number of KeyValuePair_t objects in this FbcAnnotationPlugin_t.
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
unsigned int
FbcAnnotationPlugin_getNumKeyValuePairs(FbcAnnotationPlugin_t* fap);


/**
 * Creates a new KeyValuePair_t object, adds it to this FbcAnnotationPlugin_t
 * object and returns the KeyValuePair_t object created.
 *
 * @param fap the FbcAnnotationPlugin_t structure to which the KeyValuePair_t
 * should be added.
 *
 * @return a new KeyValuePair_t object instance.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
KeyValuePair_t*
FbcAnnotationPlugin_createKeyValuePair(FbcAnnotationPlugin_t* fap);


/**
 * Removes the nth KeyValuePair_t from this FbcAnnotationPlugin_t and returns a
 * pointer to it.
 *
 * @param fap the FbcAnnotationPlugin_t structure to search.
 *
 * @param n an unsigned int representing the index of the KeyValuePair_t to
 * remove.
 *
 * @return a pointer to the nth KeyValuePair_t in this FbcAnnotationPlugin_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
KeyValuePair_t*
FbcAnnotationPlugin_removeKeyValuePair(FbcAnnotationPlugin_t* fap,
                                       unsigned int n);


/**
 * Removes the KeyValuePair_t from this FbcAnnotationPlugin_t based on its
 * identifier and returns a pointer to it.
 *
 * @param fap the FbcAnnotationPlugin_t structure to search.
 *
 * @param sid a string representing the identifier of the KeyValuePair_t to
 * remove.
 *
 * @return the KeyValuePair_t in this FbcAnnotationPlugin_t based on the
 * identifier or NULL if no such KeyValuePair_t exists.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof FbcAnnotationPlugin_t
 */
LIBSBML_EXTERN
KeyValuePair_t*
FbcAnnotationPlugin_removeKeyValuePairById(FbcAnnotationPlugin_t* fap,
                                           const char* sid);




END_C_DECLS




LIBSBML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !FbcAnnotationPlugin_H__ */


