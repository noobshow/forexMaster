/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_DATADICTIONARYPROVIDER_H
#define FIX_DATADICTIONARYPROVIDER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "DataDictionary.h"
#include "Exceptions.h"
#include "Utility.h"

namespace FIX
{
class BeginString;
class ApplVerID;

/**
* Queries for DataDictionary based on appropriate version of %FIX.
*/

class DataDictionaryProvider
{
public:
  typedef DataDictionary::string_type key_type;

  DataDictionaryProvider() {}
  DataDictionaryProvider( const DataDictionaryProvider& copy );

  const DataDictionary* getSessionDataDictionary(const BeginString& beginString) const;

  const DataDictionary* getApplicationDataDictionary(const key_type& applVerID) const;
  const DataDictionary* getApplicationDataDictionary(const ApplVerID& applVerID) const;

  void addTransportDataDictionary(const BeginString& beginString, ptr::shared_ptr<DataDictionary>);
  void addApplicationDataDictionary(const ApplVerID& applVerID, ptr::shared_ptr<DataDictionary>);

  void addTransportDataDictionary(const BeginString& beginString, const std::string& path)
  { addTransportDataDictionary(beginString, ptr::shared_ptr<DataDictionary>( new DataDictionary(path) )); }
  void addApplicationDataDictionary(const ApplVerID& applVerID, const std::string& path)
  { addApplicationDataDictionary(applVerID, ptr::shared_ptr<DataDictionary>( new DataDictionary(path) )); }

  static DataDictionary& defaultSessionDataDictionary() { return m_emptyDictionary; }
  static DataDictionaryProvider& defaultProvider() { return m_empty; }

private:
#ifdef HAVE_BOOST
  typedef boost::unordered_map<key_type, ptr::shared_ptr<DataDictionary>, ItemHash, String::equal_to> dictionary_map_t;
#else
  typedef std::map<key_type, ptr::shared_ptr<DataDictionary> > dictionary_map_t;
#endif

  dictionary_map_t m_transportDictionaries;
  dictionary_map_t m_applicationDictionaries;

  static DataDictionary m_emptyDictionary;
  static DataDictionaryProvider m_empty;
};
}

#endif //FIX_DATADICTIONARYPROVIDER_H

