/**
 * @file    SBMLConstructorException.h
 * @brief   Definition of SBMLConstructorException, the exception class for constructor exceptions
 * @author  Ben Bornstein
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

#ifndef SBML_CONSTRUCTOR_EXCEPTION_H
#define SBML_CONSTRUCTOR_EXCEPTION_H

#include <sbml/common/extern.h>
#include <sbml/SBMLNamespaces.h>

#ifdef __cplusplus

#include <string>
#include <stdexcept>
#include <algorithm>

LIBSBML_CPP_NAMESPACE_BEGIN

/** @cond doxygen-libsbml-internal */
class LIBSBML_EXTERN SBMLConstructorException : public std::invalid_argument
{
public:

  /* constructor */
  SBMLConstructorException (std::string errmsg = "");
  SBMLConstructorException (std::string errmsg, std::string sbmlErrMsg);
  SBMLConstructorException (std::string elementName, SBMLNamespaces* xmlns);
  virtual ~SBMLConstructorException () throw();
  
  const std::string getSBMLErrMsg() const { return mSBMLErrMsg; }

private:
  std::string mSBMLErrMsg;
};

LIBSBML_CPP_NAMESPACE_END

#endif // __cplusplus

#endif // SBML_CONSTRUCTOR_EXCEPTION_H