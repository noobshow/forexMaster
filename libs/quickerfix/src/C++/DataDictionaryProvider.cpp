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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "DataDictionaryProvider.h"
#include "Fields.h"
#include "DataDictionary.h"

namespace FIX
{
DataDictionary DataDictionaryProvider::m_emptyDictionary;
DataDictionaryProvider DataDictionaryProvider::m_empty;

DataDictionaryProvider::DataDictionaryProvider( const DataDictionaryProvider& copy )
{
  *this = copy;
}

const DataDictionary NOTHROW_PRE * NOTHROW_POST HEAVYUSE
DataDictionaryProvider::getSessionDataDictionary
(const BeginString& beginString) const 
{
  dictionary_map_t::const_iterator find =
    m_transportDictionaries.find(beginString.forString( String::Rval() ));
  if( find != m_transportDictionaries.end() )
    return &*find->second;
  
  return NULL;
}

const DataDictionary NOTHROW_PRE * NOTHROW_POST HEAVYUSE
DataDictionaryProvider::getApplicationDataDictionary
(const DataDictionaryProvider::key_type& applVerID) const
{
  dictionary_map_t::const_iterator find = m_applicationDictionaries.find(applVerID);
  if( find != m_applicationDictionaries.end() )
    return &*find->second;

  return NULL;
}

const DataDictionary NOTHROW_PRE * NOTHROW_POST HEAVYUSE
DataDictionaryProvider::getApplicationDataDictionary
(const ApplVerID& applVerID) const
{
  return getApplicationDataDictionary( applVerID.forString( String::Rval() ) );
}

void DataDictionaryProvider::addTransportDataDictionary
(const BeginString& beginString, ptr::shared_ptr<DataDictionary> pDD)
{
  m_transportDictionaries[beginString.forString( String::Rval() )] = pDD;
}

void DataDictionaryProvider::addApplicationDataDictionary
(const ApplVerID& applVerID, ptr::shared_ptr<DataDictionary> pDD)
{
  m_applicationDictionaries[applVerID.forString( String::Rval() )] = pDD;
}
}

