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

#include "DataDictionary.h"
#include "Message.h"
#include <fstream>
#include <memory>

#include "PUGIXML_DOMDocument.h"

#ifdef _MSC_VER
#define RESET_AUTO_PTR(OLD, NEW) OLD = NEW;
#else
#define RESET_AUTO_PTR(OLD, NEW) OLD.reset( NEW.release() );
#endif

namespace FIX
{

ALIGN_DECL_DEFAULT const DataDictionary::group_key_holder DataDictionary::GroupKey =
       { DataDictionary::string_type("_header_"),
         DataDictionary::string_type("_trailer_") };
#if defined(__BYTE_ORDER__)  && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
ALIGN_DECL_DEFAULT HOTDATA const DataDictionary::MsgInfo::AdminSet DataDictionary::MsgInfo::adminTypeSet =
  { { { 0, 4128768, 2, 0, 0, 0, 0, 0 } } };
#else // construct on load
ALIGN_DECL_DEFAULT const DataDictionary::MsgInfo::AdminSet DataDictionary::MsgInfo::adminTypeSet;

COLDSECTION DataDictionary::MsgInfo::AdminSet::AdminSet()
{
  _value.set('0');
  _value.set('1');
  _value.set('2');
  _value.set('3');
  _value.set('4');
  _value.set('5');
  _value.set('A');
};
#endif

DataDictionary::FieldToProps DataDictionary::m_noProps;
DataDictionary::FieldToGroup DataDictionary::m_noGroups;
DataDictionary::MsgFields    DataDictionary::m_noFields;
DataDictionary::MsgTypeData DataDictionary::m_noData( DataDictionary::m_noFields,
                                                      DataDictionary::m_noGroups,
                                                      DataDictionary::m_noProps );
COLDSECTION DataDictionary::DataDictionary()
: m_hasVersion( false ), m_checks(AllChecks),
  m_headerData( false ), m_trailerData( false ),
  m_headerGroups( get_allocator<FieldToGroup>() ),
  m_trailerGroups( get_allocator<FieldToGroup>() ),
  m_messageGroups( MsgTypeGroups::key_compare(), get_allocator<MsgTypeGroups>() ),
  m_messageFields( MsgTypeFieldProps::key_compare(), get_allocator<MsgTypeFieldProps>() ),
  m_requiredFields(MsgTypeRequiredFields::key_compare(), get_allocator<MsgTypeRequiredFields>() ),
  m_messageData( get_allocator<MsgTypeToData>() ),
  m_orderedFields( get_allocator<OrderedFields>() ),
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  m_storeMsgFieldsOrder( false ),
  m_headerOrderedFields( get_allocator<OrderedFields>() ),
  m_trailerOrderedFields( get_allocator<OrderedFields>() ),
#endif
  m_fieldTypes( get_allocator<FieldTypes>() ),
  m_fieldValues(get_allocator<FieldToValue>() )
{
  Message::HeaderFieldSet::spec( *this );
  Message::TrailerFieldSet::spec( *this );
}

COLDSECTION DataDictionary::DataDictionary( std::istream& stream, bool preserveMsgFieldsOrder )
THROW_DECL( ConfigError )
: m_hasVersion( false ), m_checks(AllChecks),
  m_headerData( false ), m_trailerData( false ),
  m_headerGroups( get_allocator<FieldToGroup>() ),
  m_trailerGroups( get_allocator<FieldToGroup>() ),
  m_messageGroups( MsgTypeGroups::key_compare(), get_allocator<MsgTypeGroups>() ),
  m_messageFields( MsgTypeFieldProps::key_compare(), get_allocator<MsgTypeFieldProps>() ),
  m_requiredFields(MsgTypeRequiredFields::key_compare(), get_allocator<MsgTypeRequiredFields>() ),
  m_messageData( get_allocator<MsgTypeToData>() ),
  m_orderedFields( get_allocator<OrderedFields>() ),
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  m_storeMsgFieldsOrder( preserveMsgFieldsOrder ),
  m_headerOrderedFields( get_allocator<OrderedFields>() ),
  m_trailerOrderedFields( get_allocator<OrderedFields>() ),
#endif
  m_fieldTypes( get_allocator<FieldTypes>() ),
  m_fieldValues(get_allocator<FieldToValue>() )
{
#ifndef ENABLE_DICTIONARY_FIELD_ORDER
  if (preserveMsgFieldsOrder) throw ConfigError("Custom message field order was not enabled for this build");
#endif
  Message::HeaderFieldSet::spec( *this );
  Message::TrailerFieldSet::spec( *this );
  readFromStream( stream );
}

COLDSECTION DataDictionary::DataDictionary( const std::string& url, bool preserveMsgFieldsOrder )
THROW_DECL( ConfigError )
: m_hasVersion( false ), m_checks(AllChecks),
  m_headerData( false ), m_trailerData( false ),
  m_headerGroups( get_allocator<FieldToGroup>() ),
  m_trailerGroups( get_allocator<FieldToGroup>() ),
  m_messageGroups( MsgTypeGroups::key_compare(), get_allocator<MsgTypeGroups>() ),
  m_messageFields( MsgTypeFieldProps::key_compare(), get_allocator<MsgTypeFieldProps>() ),
  m_requiredFields(MsgTypeRequiredFields::key_compare(), get_allocator<MsgTypeRequiredFields>() ),
  m_messageData( get_allocator<MsgTypeToData>() ),
  m_orderedFields( get_allocator<OrderedFields>() ),
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  m_storeMsgFieldsOrder( preserveMsgFieldsOrder ),
  m_headerOrderedFields( get_allocator<OrderedFields>() ),
  m_trailerOrderedFields( get_allocator<OrderedFields>() ),
#endif
  m_fieldTypes( get_allocator<FieldTypes>() ),
  m_fieldValues(get_allocator<FieldToValue>() )
{
#ifndef ENABLE_DICTIONARY_FIELD_ORDER
  if (preserveMsgFieldsOrder) throw ConfigError("Custom message field order was not enabled for this build");
#endif
  Message::HeaderFieldSet::spec( *this );
  Message::TrailerFieldSet::spec( *this );
  readFromURL( url );
}

COLDSECTION DataDictionary::DataDictionary( const DataDictionary& copy )
: DataDictionaryBase(copy),
  m_hasVersion( false ), m_checks(AllChecks),
  m_headerData( false ), m_trailerData( false ),
  m_headerGroups( get_allocator<FieldToGroup>() ),
  m_trailerGroups( get_allocator<FieldToGroup>() ),
  m_messageGroups( MsgTypeGroups::key_compare(), get_allocator<MsgTypeGroups>() ),
  m_messageFields( MsgTypeFieldProps::key_compare(), get_allocator<MsgTypeFieldProps>() ),
  m_requiredFields(MsgTypeRequiredFields::key_compare(), get_allocator<MsgTypeRequiredFields>() ),
  m_messageData( get_allocator<MsgTypeToData>() ),
  m_orderedFields( get_allocator<OrderedFields>() ),
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  m_storeMsgFieldsOrder( false ),
  m_headerOrderedFields( get_allocator<OrderedFields>() ),
  m_trailerOrderedFields( get_allocator<OrderedFields>() ),
#endif
  m_fieldTypes( get_allocator<FieldTypes>() ),
  m_fieldValues(get_allocator<FieldToValue>() )
{
  *this = copy;
}

COLDSECTION DataDictionary::~DataDictionary()
{
  for ( FieldToGroup::iterator i = m_headerGroups.begin(); i != m_headerGroups.end(); ++i)
    delete i->second.second;
  for ( FieldToGroup::iterator i = m_trailerGroups.begin(); i != m_trailerGroups.end(); ++i)
    delete i->second.second;
  for ( MsgTypeGroups::iterator g = m_messageGroups.begin(); g != m_messageGroups.end(); ++g )
  {
    FieldToGroup& groups = g->second;
    for ( FieldToGroup::iterator i = groups.begin(); i != groups.end(); ++i )
      delete i->second.second;
  }
}

COLDSECTION DataDictionary& DataDictionary::operator=( const DataDictionary& rhs )
{
  m_hasVersion = rhs.m_hasVersion;
  m_checks = rhs.m_checks;
  m_beginString = rhs.m_beginString;
  m_applVerID = rhs.m_applVerID;
  m_headerData = rhs.m_headerData;
  m_trailerData = rhs.m_trailerData;

  m_fieldProps = rhs.m_fieldProps;
  m_orderedFields = rhs.m_orderedFields;
  m_orderedFieldsArray = rhs.m_orderedFieldsArray;
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  m_storeMsgFieldsOrder = rhs.m_storeMsgFieldsOrder;
  m_headerOrderedFields = rhs.m_headerOrderedFields;
  m_headerOrderArray = rhs.m_headerOrderArray;
  m_trailerOrderedFields = rhs.m_trailerOrderedFields;
  m_trailerOrderArray = rhs.m_trailerOrderArray;
#endif
  m_requiredHeaderFields = rhs.m_requiredHeaderFields;
  m_requiredTrailerFields = rhs.m_requiredTrailerFields;
  m_fieldTypes = rhs.m_fieldTypes;
  m_fieldNames = rhs.m_fieldNames;
  m_names = rhs.m_names;
  m_valueNames = rhs.m_valueNames;
  m_messageFields = rhs.m_messageFields;
  m_requiredFields = rhs.m_requiredFields;

  for (FieldToValue::const_iterator i = rhs.m_fieldValues.begin();
       i != rhs.m_fieldValues.end(); ++i)
  {
    FieldToValue::iterator it = m_fieldValues.insert(
      FieldToValue::value_type( i->first,
        Values( get_allocator<Values>() ) ) ).first;
    it->second = i->second;
  }

  for (FieldToGroup::const_iterator i = rhs.m_headerGroups.begin();
       i != rhs.m_headerGroups.end(); ++i )
  {
    FieldToGroup::iterator it = m_headerGroups.insert( std::make_pair(i->first, i->second) ).first;
    it->second.second = new DataDictionary( *i->second.second );
  }

  for (FieldToGroup::const_iterator i = rhs.m_trailerGroups.begin();
       i != rhs.m_trailerGroups.end(); ++i )
  {
    FieldToGroup::iterator it = m_trailerGroups.insert( std::make_pair(i->first, i->second) ).first;
    it->second.second = new DataDictionary( *i->second.second );
  }

  for (MsgTypeGroups::const_iterator i = rhs.m_messageGroups.begin();
       i != rhs.m_messageGroups.end(); ++i )
  {
    const FieldToGroup& src = i->second;
    FieldToGroup& dst = m_messageGroups.insert( std::make_pair( i->first, FieldToGroup() ) ).first->second;
    for (FieldToGroup::const_iterator j = src.begin(); j != src.end(); ++j)
    {
      FieldToGroup::iterator it = dst.insert( std::make_pair( j->first, j->second ) ).first;
      it->second.second = new DataDictionary( *j->second.second );
    }
  }

  for (MsgTypeToData::const_iterator i = rhs.m_messageData.begin();
       i != rhs.m_messageData.end(); ++i )
  {
    MsgTypeGroups::iterator git = m_messageGroups.find( i->first );
    if ( git != m_messageGroups.end() )
      m_messageData.insert( std::make_pair( i->first,
        MsgTypeData( m_requiredFields.find( i->first )->second,
                   git->second, m_messageFields.find( i->first )->second )) );
    else
      m_messageData.insert( std::make_pair( i->first,
        MsgTypeData( m_requiredFields.find( i->first )->second,
                   m_messageFields.find( i->first )->second )) );
  }

  return *this;
}

void DataDictionary::checkHasRequiredInGroups( const FieldToGroup& groupFields, const FieldMap& body ) const
{
  FieldMap::g_iterator g, gend = body.g_end();
  for( g = body.g_begin(); g != gend; ++g )
  {
    int delim;
    const DataDictionary* DD = getGroup( groupFields, g->first, delim);
    if ( DD )
    {
      const MsgFields& nestedFields = DD->getNestedBodyFields();
      const FieldToGroup* nestedGroups =
        DD->m_messageGroups.empty() ? NULL : &DD->m_messageGroups.begin()->second;
      FieldMap::g_item_const_iterator gitem, gitem_end = g->second.end();
      for( gitem = g->second.begin(); gitem != gitem_end; ++gitem )
        DD->checkHasRequiredUnordered( nestedFields, nestedGroups, **gitem );
    }
  }
}

void LIGHTUSE COLDSECTION DataDictionary::validate( const Message& message, bool bodyOnly ) const
THROW_DECL( FIX::Exception )
{
  const Header& header = message.getHeader();
  FieldMap::iterator it = header.begin();
  FieldMap::iterator end = header.end();
  if( LIKELY(it != end && it->first == FIELD::BeginString) )
  {
    const BeginString& beginString = (const BeginString&) it->second;
    if( LIKELY(++it != end) )
    {
      if( LIKELY(it->first == FIELD::MsgType) )
      {
        MsgInfo msgInfo( this, this, LIKELY(!m_messageData.empty()) ? (const MsgType*) &it->second : NULL );
        validate( message, beginString, msgInfo, bodyOnly ? (DataDictionary*)NULL : this );
        return;
      }
      if( LIKELY(++it != end && it->first == FIELD::MsgType) )
      {
        MsgInfo msgInfo( this, this, LIKELY(!m_messageData.empty()) ? (const MsgType*) &it->second : NULL );
        validate( message, beginString, msgInfo, bodyOnly ? (DataDictionary*)NULL : this );
        return;
      }
    }
    throw FieldNotFound( FIELD::MsgType );
  }
  throw FieldNotFound( FIELD::BeginString );
}

void HEAVYUSE HOTSECTION DataDictionary::validate( const Message& message,
                               const BeginString& beginString,
                               const DataDictionary::MsgInfo& msgInfo,
                               const DataDictionary* const pSessionDD)
THROW_DECL( FIX::Exception )
{
  const DataDictionary* pAppDD = msgInfo.applicationDictionary();
  unsigned session_checks, app_checks;

  if( LIKELY(pSessionDD != 0) )
  {
    if( pSessionDD->m_hasVersion )
    {
      if( pSessionDD->getVersion() != beginString )
      {
        throw UnsupportedVersion();
      }
    }
    session_checks = pSessionDD->m_checks;
  }
  else
    session_checks = 0;

  app_checks = (pAppDD) ? pAppDD->m_checks : 0;
  session_checks |= app_checks;

  if( session_checks ) 
  {
    const Header& header = message.getHeader();
    const char* tag = message.hasInvalidTagFormat();
    int field = 0;

    if( tag )
      throw InvalidTagNumber(tag, ::strchr(tag, '=') - tag);

    if( isChecked(FieldsOutOfOrder, session_checks) )
    {
      if ( !message.hasValidStructure(field) )
        throw TagOutOfOrder(field);
    }
  
    const Trailer& trailer = message.getTrailer();

    if ( pAppDD != 0 )
    {
      bool hasVersion = pAppDD->m_hasVersion;
      bool hasBegin = !pAppDD->m_beginString.empty();
      const MsgTypeData* msgData = msgInfo.messageData();

      if ( hasVersion )
      {
        if( isChecked(UnknownMsgType, app_checks) && !msgData)
          throw InvalidMessageType();
        if( isChecked(RequiredFields, app_checks) )
          pAppDD->checkHasRequired( msgData, header, message, trailer );
      }

      if ( pSessionDD != 0 ) pSessionDD->iterate( header, trailer,
                                                  pSessionDD->m_hasVersion,
                                                 !pSessionDD->m_beginString.empty() );
      if ( msgData )
        pAppDD->iterate( message, *msgData, hasVersion, hasBegin );
      else if ( !hasVersion && !hasBegin )
        pAppDD->iterate( message );
      else
        pAppDD->iterate( message,  DataDictionary::m_noData, hasVersion, hasBegin );
    }
    else if ( pSessionDD != 0 )
      pSessionDD->iterate( header, trailer, pSessionDD->m_hasVersion,
                                           !pSessionDD->m_beginString.empty() );
  }
}

void HEAVYUSE HOTSECTION DataDictionary::iterate( const FieldMap& map ) const
{
  int lastField = 0;

  FieldMap::iterator i, ibegin = map.begin(), iend = map.end();
  for ( i = ibegin; i != iend; ++i )
  {
    const FieldBase& field = i->second;
    if( LIKELY((field.getTag() != lastField) || i == ibegin) )
    {
      checkHasValue( field );
      lastField = field.getTag();
      continue;
    }
    throw RepeatedTag( lastField );
  }
}

void HEAVYUSE HOTSECTION DataDictionary::iterate( const FieldMap& map, bool hasVersion, bool hasBegin ) const
{
  int lastField = 0;

  FieldMap::iterator i, ibegin = map.begin(), iend = map.end();
  for ( i = ibegin; i != iend; ++i )
  {
    const FieldBase& field = i->second;
    if( LIKELY((field.getTag() != lastField) || i == ibegin) )
    {
      checkHasValue( field );
  
      if ( hasVersion )
      {
        checkValidFormat( field );
        checkValue( field );
      }
  
      if ( hasBegin && shouldCheckTag(field) )
        checkValidTagNumber( field );

      lastField = field.getTag();
      continue;
    }
    throw RepeatedTag( lastField );
  }
}

void HEAVYUSE HOTSECTION DataDictionary::iterate( const FieldMap& map, const MsgTypeData& msgData, bool hasVersion, bool hasBegin ) const
{
  int lastField = 0;

  FieldMap::iterator i, ibegin = map.begin(), iend = map.end();
  for ( i = ibegin; i != iend; ++i )
  {
    const FieldBase& field = i->second;
    if( LIKELY((field.getTag() != lastField) || i == ibegin) )
    {
      checkHasValue( field );
  
      if ( hasVersion )
      {
        checkValidFormat( field );
        checkValue( field );
      }
  
      if ( hasBegin && shouldCheckTag(field) )
      {
        checkValidTagNumber( field );
        checkIsInMessage( field, msgData );
        checkGroupCount( field, map, msgData );
      }
      lastField = field.getTag();
      continue;
    }
    throw RepeatedTag( lastField );
  }
}

void LIGHTUSE COLDSECTION DataDictionary::readFromURL( const std::string& url )
THROW_DECL( ConfigError )
{
  DOMDocumentPtr pDoc = DOMDocumentPtr(new PUGIXML_DOMDocument());

  if(!pDoc->load(url))
    throw ConfigError(url + ": Could not parse data dictionary file");

  try
  {
    readFromDocument( pDoc );
  }
  catch( ConfigError& e )
  {
    throw ConfigError( url + ": " + e.what() );
  }
}

void LIGHTUSE COLDSECTION DataDictionary::readFromStream( std::istream& stream )
THROW_DECL( ConfigError )
{
  DOMDocumentPtr pDoc = DOMDocumentPtr(new PUGIXML_DOMDocument());

  if(!pDoc->load(stream))
    throw ConfigError("Could not parse data dictionary stream");

  readFromDocument( pDoc );
}

void LIGHTUSE COLDSECTION DataDictionary::readFromDocument( const DOMDocumentPtr& pDoc )
THROW_DECL( ConfigError )
{
  // VERSION
  DOMNodePtr pFixNode = pDoc->getNode("/fix");
  if(!pFixNode.get())
    throw ConfigError("Could not parse data dictionary file"
                      ", or no <fix> node found at root");
  DOMAttributesPtr attrs = pFixNode->getAttributes();
  std::string type = "FIX";
  if(attrs->get("type", type))
  {
    if(type != "FIX" && type != "FIXT")
      throw ConfigError("type attribute must be FIX or FIXT");
  }
  std::string major;
  if(!attrs->get("major", major))
    throw ConfigError("major attribute not found on <fix>");
  std::string minor;
  if(!attrs->get("minor", minor))
    throw ConfigError("minor attribute not found on <fix>");
  setVersion(type + "." + major + "." + minor);

  // FIELDS
  DOMNodePtr pFieldsNode = pDoc->getNode("/fix/fields");
  if(!pFieldsNode.get())
    throw ConfigError("<fields> section not found in data dictionary");

  DOMNodePtr pFieldNode = pFieldsNode->getFirstChildNode();
  if(!pFieldNode.get()) throw ConfigError("No fields defined");

  while(pFieldNode.get())
  {
    if(pFieldNode->getName() == "field")
    {
      DOMAttributesPtr attrs = pFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError("<field> does not have a name attribute");
      std::string number;
      if(!attrs->get("number", number))
        throw ConfigError("<field> " + name + " does not have a number attribute");
      int num = atoi(number.c_str());
      std::string type;
      if(!attrs->get("type", type))
        throw ConfigError("<field> " + name + " does not have a type attribute");
      addField(num);
      addFieldType(num, XMLTypeToType(type));
      addFieldName(num, name);

      DOMNodePtr pFieldValueNode = pFieldNode->getFirstChildNode();
      while(pFieldValueNode.get())
      {
        if(pFieldValueNode->getName() == "value")
        {
          DOMAttributesPtr attrs = pFieldValueNode->getAttributes();
          std::string enumeration;
          if(!attrs->get("enum", enumeration))
            throw ConfigError("<value> does not have enum attribute in field " + name);
          addFieldValue(num, enumeration);
          std::string description;
          if(attrs->get("description", description))
            addValueName(num, enumeration, description);
        }
        RESET_AUTO_PTR(pFieldValueNode, pFieldValueNode->getNextSiblingNode());
      }
    }
    RESET_AUTO_PTR(pFieldNode, pFieldNode->getNextSiblingNode());
  }

  // HEADER
  if( type == "FIXT" || (type == "FIX" && major < "5") )
  {
    DOMNodePtr pHeaderNode = pDoc->getNode("/fix/header");
    if(!pHeaderNode.get())
      throw ConfigError("<header> section not found in data dictionary");

    DOMNodePtr pHeaderFieldNode = pHeaderNode->getFirstChildNode();
    if(!pHeaderFieldNode.get()) throw ConfigError("No header fields defined");

    while(pHeaderFieldNode.get())
    {
      if(pHeaderFieldNode->getName() == "field" || pHeaderFieldNode->getName() == "group" )
      {
        DOMAttributesPtr attrs = pHeaderFieldNode->getAttributes();
        std::string name;
        if(!attrs->get("name", name))
          throw ConfigError("<field> does not have a name attribute");
        std::string required = "false";
        attrs->get("required", required);
        addHeaderField(lookupXMLFieldNumber(pDoc.get(), name), required == "true");
      }
      if(pHeaderFieldNode->getName() == "group")
      {
        DOMAttributesPtr attrs = pHeaderFieldNode->getAttributes();
        std::string required;
        attrs->get("required", required);
        bool isRequired = (required == "Y" || required == "y");
        addXMLGroup(pDoc.get(), pHeaderFieldNode.get(), String::Copy()( GroupKey.Header ), *this, isRequired);
      }

      RESET_AUTO_PTR(pHeaderFieldNode, pHeaderFieldNode->getNextSiblingNode());
    }
  }

  // TRAILER
    if( type == "FIXT" || (type == "FIX" && major < "5") )
    {
    DOMNodePtr pTrailerNode = pDoc->getNode("/fix/trailer");
    if(!pTrailerNode.get())
      throw ConfigError("<trailer> section not found in data dictionary");

    DOMNodePtr pTrailerFieldNode = pTrailerNode->getFirstChildNode();
    if(!pTrailerFieldNode.get()) throw ConfigError("No trailer fields defined");

    while(pTrailerFieldNode.get())
    {
      if(pTrailerFieldNode->getName() == "field" || pTrailerFieldNode->getName() == "group" )
      {
        DOMAttributesPtr attrs = pTrailerFieldNode->getAttributes();
        std::string name;
        if(!attrs->get("name", name))
          throw ConfigError("<field> does not have a name attribute");
        std::string required = "false";
        attrs->get("required", required);
        addTrailerField(lookupXMLFieldNumber(pDoc.get(), name), required == "true");
      }
      if(pTrailerFieldNode->getName() == "group")
      {
        DOMAttributesPtr attrs = pTrailerFieldNode->getAttributes();
        std::string required;
        attrs->get("required", required);
        bool isRequired = (required == "Y" || required == "y");
        addXMLGroup(pDoc.get(), pTrailerFieldNode.get(), String::Copy()( GroupKey.Trailer ), *this, isRequired);
      }

      RESET_AUTO_PTR(pTrailerFieldNode, pTrailerFieldNode->getNextSiblingNode());
    }
  }

  // MSGTYPE
  DOMNodePtr pMessagesNode = pDoc->getNode("/fix/messages");
  if(!pMessagesNode.get())
    throw ConfigError("<messages> section not found in data dictionary");

  DOMNodePtr pMessageNode = pMessagesNode->getFirstChildNode();
  if(!pMessageNode.get()) throw ConfigError("No messages defined");

  while(pMessageNode.get())
  {
    if(pMessageNode->getName() == "message")
    {
      DOMAttributesPtr attrs = pMessageNode->getAttributes();
      std::string msgtype;
      if(!attrs->get("msgtype", msgtype))
        throw ConfigError("<field> does not have a name attribute");
      addMsgType(msgtype);

      std::string name;
      if(attrs->get("name", name))
        addValueName( 35, msgtype, name );

      DOMNodePtr pMessageFieldNode = pMessageNode->getFirstChildNode();
      while( pMessageFieldNode.get() )
      {
        if(pMessageFieldNode->getName() == "field"
           || pMessageFieldNode->getName() == "group")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string name;
          if(!attrs->get("name", name))
            throw ConfigError("<field> does not have a name attribute");
          int num = lookupXMLFieldNumber(pDoc.get(), name);
          addMsgField(msgtype, num);

          std::string required;
          if(attrs->get("required", required)
             && (required == "Y" || required == "y"))
          {
            addRequiredField(msgtype, num);
          }
        }
        else if(pMessageFieldNode->getName() == "component")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string required;
          attrs->get("required", required);
          bool isRequired = (required == "Y" || required == "y");
          addXMLComponentFields(pDoc.get(), pMessageFieldNode.get(),
                                msgtype, *this, isRequired);
        }
        if(pMessageFieldNode->getName() == "group")
        {
          DOMAttributesPtr attrs = pMessageFieldNode->getAttributes();
          std::string required;
          attrs->get("required", required);
          bool isRequired = (required == "Y" || required == "y");
          addXMLGroup(pDoc.get(), pMessageFieldNode.get(), msgtype, *this, isRequired);
        }
        RESET_AUTO_PTR(pMessageFieldNode,
                       pMessageFieldNode->getNextSiblingNode());
      }
    }
    RESET_AUTO_PTR(pMessageNode, pMessageNode->getNextSiblingNode());
  }
}

message_order const&  DataDictionary::getOrderedFields() const
{
  if( m_orderedFieldsArray ) return m_orderedFieldsArray;

  Util::scoped_array<int>::type ordered( new int[m_orderedFields.size() + 1] );
  copy_to_array(m_orderedFields.begin(), m_orderedFields.end(), ordered.get(), m_orderedFields.size() + 1);
  ordered.get()[m_orderedFields.size()] = 0;

  return  (m_orderedFieldsArray = message_order(ordered.get()));
}

#ifdef ENABLE_DICTIONARY_FIELD_ORDER
message_order const& LIGHTUSE COLDSECTION DataDictionary::getHeaderOrderedFields() const
THROW_DECL( ConfigError )
{
  if( m_headerOrderArray ) return m_headerOrderArray;

  if (m_headerOrderedFields.size() == 0)
    throw ConfigError("<Header> does not have a stored message order");

  Util::scoped_array<int>::type ordered( new int[m_headerOrderedFields.size() + 1] );
  copy_to_array(m_headerOrderedFields.begin(), m_headerOrderedFields.end(), ordered.get(), m_headerOrderedFields.size() + 1);
  ordered.get()[m_headerOrderedFields.size()] = 0;

  return  (m_headerOrderArray = message_order(ordered.get()));
}

message_order const& LIGHTUSE COLDSECTION DataDictionary::getTrailerOrderedFields() const
THROW_DECL( ConfigError )
{
  if( m_trailerOrderArray ) return m_trailerOrderArray;

  if (m_trailerOrderedFields.size() == 0)
    throw ConfigError("<Trailer> does not have a stored message order");

  Util::scoped_array<int>::type ordered( new int[m_trailerOrderedFields.size() + 1] );
  copy_to_array(m_trailerOrderedFields.begin(), m_trailerOrderedFields.end(), ordered.get(), m_trailerOrderedFields.size() + 1);
  ordered.get()[m_trailerOrderedFields.size()] = 0;

  return  (m_trailerOrderArray = message_order(ordered.get()));
}
#endif

int DataDictionary::lookupXMLFieldNumber( DOMDocument* pDoc, DOMNode* pNode ) const
{
  DOMAttributesPtr attrs = pNode->getAttributes();
  std::string name;
  if(!attrs->get("name", name))
    throw ConfigError("No name given to field");
  return lookupXMLFieldNumber( pDoc, name );
}

int DataDictionary::lookupXMLFieldNumber
( DOMDocument* pDoc, const std::string& name ) const
{
  NameToField::const_iterator i = m_names.find(name);
  if( i == m_names.end() )
    throw ConfigError("Field " + name + " not defined in fields section");
  return i->second;
}

int LIGHTUSE COLDSECTION DataDictionary::addXMLComponentFields( DOMDocument* pDoc, DOMNode* pNode,
                                            const std::string& msgtype,
                                            DataDictionary& DD,
                                            bool componentRequired )
{
  int firstField = 0;

  DOMAttributesPtr attrs = pNode->getAttributes();
  std::string name;
  if(!attrs->get("name", name))
    throw ConfigError("No name given to component");

  DOMNodePtr pComponentNode =
    pDoc->getNode("/fix/components/component[@name='" + name + "']");
  if(pComponentNode.get() == 0)
    throw ConfigError("Component not found: " + name);

  DOMNodePtr pComponentFieldNode = pComponentNode->getFirstChildNode();
  while(pComponentFieldNode.get())
  {
    if(pComponentFieldNode->getName() == "field"
       || pComponentFieldNode->getName() == "group")
    {
      DOMAttributesPtr attrs = pComponentFieldNode->getAttributes();
      std::string name;
      if(!attrs->get("name", name))
        throw ConfigError("No name given to field");
      int field = lookupXMLFieldNumber(pDoc, name);
      if( firstField == 0 ) firstField = field;

      std::string required;
      if(attrs->get("required", required)
         && (required == "Y" || required =="y")
         && componentRequired)
      {
        addRequiredField(msgtype, field);
      }

      DD.addField(field);
      DD.addMsgField(msgtype, field);
    }
    if(pComponentFieldNode->getName() == "component")
    {
      DOMAttributesPtr attrs = pComponentFieldNode->getAttributes();
      std::string required;
      attrs->get("required", required);
      bool isRequired = (required == "Y" || required == "y");
      addXMLComponentFields(pDoc, pComponentFieldNode.get(),
                            msgtype, DD, isRequired);
    }
    if(pComponentFieldNode->getName() == "group")
    {
      DOMAttributesPtr attrs = pComponentFieldNode->getAttributes();
      std::string required;
      attrs->get("required", required);
      bool isRequired = (required == "Y" || required == "y");
      addXMLGroup(pDoc, pComponentFieldNode.get(), msgtype, DD, isRequired);
    }
    RESET_AUTO_PTR(pComponentFieldNode,
      pComponentFieldNode->getNextSiblingNode());
  }
  return firstField;
}

void LIGHTUSE COLDSECTION DataDictionary::addXMLGroup( DOMDocument* pDoc, DOMNode* pNode,
                                  const std::string& msgtype,
                                  DataDictionary& DD, bool groupRequired  )
{
  DOMAttributesPtr attrs = pNode->getAttributes();
  std::string name;
  if(!attrs->get("name", name))
    throw ConfigError("No name given to group");
  int group = lookupXMLFieldNumber( pDoc, name );
  int delim = 0;
  int field = 0;
  DataDictionary groupDD;
  DOMNodePtr node = pNode->getFirstChildNode();
  while(node.get())
  {
    if( node->getName() == "field" )
    {
      field = lookupXMLFieldNumber( pDoc, node.get() );
      groupDD.addField( field );

      DOMAttributesPtr attrs = node->getAttributes();
      std::string required;
      if( attrs->get("required", required)
         && ( required == "Y" || required =="y" )
         && groupRequired )
      {
        groupDD.addRequiredField(msgtype, field);
      }
    }
    else if( node->getName() == "component" )
    {
      field = addXMLComponentFields( pDoc, node.get(), msgtype, groupDD, false );
    }
    else if( node->getName() == "group" )
    {
      field = lookupXMLFieldNumber( pDoc, node.get() );
      groupDD.addField( field );
      DOMAttributesPtr attrs = node->getAttributes();
      std::string required;
      if( attrs->get("required", required )
         && ( required == "Y" || required =="y" )
         && groupRequired)
      {
        groupDD.addRequiredField(msgtype, field);
      }
      bool isRequired = false;
      if( attrs->get("required", required) )
      isRequired = (required == "Y" || required == "y");
      addXMLGroup( pDoc, node.get(), msgtype, groupDD, isRequired );
    }
    if( delim == 0 ) delim = field;
    RESET_AUTO_PTR(node, node->getNextSiblingNode());
  }

  if( delim ) DD.addGroup( msgtype, group, delim, groupDD );
}

TYPE::Type DataDictionary::XMLTypeToType( const std::string& type ) const
{
  if ( m_beginString < "FIX.4.2" && type == "CHAR" )
    return TYPE::String;

  if ( type == "STRING" ) return TYPE::String;
  if ( type == "CHAR" ) return TYPE::Char;
  if ( type == "PRICE" ) return TYPE::Price;
  if ( type == "INT" ) return TYPE::Int;
  if ( type == "AMT" ) return TYPE::Amt;
  if ( type == "QTY" ) return TYPE::Qty;
  if ( type == "CURRENCY" ) return TYPE::Currency;
  if ( type == "MULTIPLEVALUESTRING" ) return TYPE::MultipleValueString;
  if ( type == "MULTIPLESTRINGVALUE" ) return TYPE::MultipleStringValue;
  if ( type == "MULTIPLECHARVALUE" ) return TYPE::MultipleCharValue;
  if ( type == "EXCHANGE" ) return TYPE::Exchange;
  if ( type == "UTCTIMESTAMP" ) return TYPE::UtcTimeStamp;
  if ( type == "BOOLEAN" ) return TYPE::Boolean;
  if ( type == "LOCALMKTDATE" ) return TYPE::LocalMktDate;
  if ( type == "DATA" ) return TYPE::Data;
  if ( type == "FLOAT" ) return TYPE::Float;
  if ( type == "PRICEOFFSET" ) return TYPE::PriceOffset;
  if ( type == "MONTHYEAR" ) return TYPE::MonthYear;
  if ( type == "DAYOFMONTH" ) return TYPE::DayOfMonth;
  if ( type == "UTCDATE" ) return TYPE::UtcDate;
  if ( type == "UTCDATEONLY" ) return TYPE::UtcDateOnly;
  if ( type == "UTCTIMEONLY" ) return TYPE::UtcTimeOnly;
  if ( type == "NUMINGROUP" ) return TYPE::NumInGroup;
  if ( type == "PERCENTAGE" ) return TYPE::Percentage;
  if ( type == "SEQNUM" ) return TYPE::SeqNum;
  if ( type == "LENGTH" ) return TYPE::Length;
  if ( type == "COUNTRY" ) return TYPE::Country;
  if ( type == "TIME" ) return TYPE::UtcTimeStamp;
  return TYPE::Unknown;
}

void DataDictionary::setVersion( const std::string& beginString )
{
  std::string applVerID = Message::toApplVerID(beginString);
  m_applVerID.assign( applVerID.c_str(), applVerID.size() );
  m_beginString = beginString;
  m_hasVersion = true;
}

void LIGHTUSE COLDSECTION DataDictionary::addField( int field )
{
  m_fieldProps[ field ].defined( true );
  m_orderedFields.push_back( field );
}

void LIGHTUSE COLDSECTION DataDictionary::addFieldName( int field, const std::string& name )
{
  if( m_names.insert( std::make_pair(name, field) ).second == false )
    throw ConfigError( "Field named " + name + " defined multiple times" );
  m_fieldNames[field] = name;
}

void LIGHTUSE COLDSECTION DataDictionary::addValueName( int field, const std::string& value, const std::string& name )
{
  m_valueNames[std::make_pair(field, value)] = name;
}

DataDictionary::MsgTypeToData::iterator LIGHTUSE COLDSECTION DataDictionary::addMsgType( const std::string& msgType )
{
  string_type name = string_type( msgType.c_str(), msgType.length());
  MsgTypeToData::iterator it = m_messageData.find( name );
  if ( it == m_messageData.end() ) 
  {
    it = m_messageData.insert( std::make_pair( name,
           MsgTypeData( m_requiredFields.insert( std::make_pair(name, MsgFields( ) ) ).first->second,
                        m_messageFields.insert( std::make_pair(name, FieldToProps( get_allocator<FieldToProps>()) ) ).first->second ) )
         ).first;
  }
  return it;
}

void LIGHTUSE COLDSECTION DataDictionary::addMsgField( const std::string& msgType, int field )
{
  string_type name = string_type( msgType.c_str(), msgType.length());
  MsgTypeToData::iterator i = m_messageData.find( name );
  if ( i == m_messageData.end() ) i = addMsgType( msgType );

  std::pair<FieldToProps::iterator, bool> r = i->second.m_defined.insert( std::make_pair( field, m_fieldProps[ field ]) );
  if ( isDataField( field ) )
  {
    m_fieldProps[ field ].hasData(true);
    r.first->second.hasData(true);
  }
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  if ( m_storeMsgFieldsOrder )
    i->second.m_ordered.push_back( field );
#endif
}

void LIGHTUSE COLDSECTION DataDictionary::addHeaderField( int field, bool required )
{
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  if ( m_storeMsgFieldsOrder )
    m_headerOrderedFields.push_back(field);
#endif
  m_fieldProps[ field ].userLocation( FieldProperties::Header );
  if ( isDataField( field ) )
    m_headerData = true;
  if ( required )
    m_requiredHeaderFields.insert( field );
}

void LIGHTUSE COLDSECTION DataDictionary::addTrailerField( int field, bool required )
{
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  if ( m_storeMsgFieldsOrder )
    m_trailerOrderedFields.push_back(field);
#endif
  m_fieldProps[ field ].userLocation( FieldProperties::Trailer );
  if ( isDataField( field ) )
    m_trailerData = true;
  if ( required )
    m_requiredTrailerFields.insert( field );
}

void LIGHTUSE COLDSECTION DataDictionary::addFieldType( int field, FIX::TYPE::Type type )
{
  m_fieldTypes[ field ] = type;
  m_fieldProps[ field ].hasData(type == TYPE::Data);
}

void LIGHTUSE COLDSECTION DataDictionary::addRequiredField( const std::string& msgType, int field )
{
  string_type name = string_type( msgType.c_str(), msgType.length());
  MsgTypeToData::iterator i = m_messageData.find( name );
  if ( i == m_messageData.end() ) i = addMsgType( msgType );
  i->second.m_required.insert( field );
}

void LIGHTUSE COLDSECTION DataDictionary::addFieldValue( int field, const DataDictionary::string_type& value )
{
  FieldToValue::iterator i = m_fieldValues.find( field );
  if (i == m_fieldValues.end())
    m_fieldValues.insert(
      FieldToValue::value_type(
        field, Values( get_allocator<Values>()) ) );
  m_fieldValues[ field ].insert( value );
}

void LIGHTUSE COLDSECTION DataDictionary::addGroup( const std::string& msgType, int field, int delim,
               const DataDictionary& dataDictionary )
{
  DataDictionary * pDD = new DataDictionary( dataDictionary );
  pDD->setVersion( getVersion() );

  m_fieldProps[ field ].hasGroup(true); // at least one message type

  string_type name = string_type( msgType.c_str(), msgType.length());

  if ( name == GroupKey.Header )
    m_headerGroups[ field ] = std::make_pair( delim, pDD );
  else if ( name == GroupKey.Trailer )
    m_trailerGroups[ field ] = std::make_pair( delim, pDD );
  else
  {
    MsgTypeToData::iterator i = m_messageData.find( name );
    if ( i == m_messageData.end() ) i = addMsgType( msgType );

    if ( i->second.groups() == NULL )
      i->second.groups( m_messageGroups.insert( std::make_pair( name, FieldToGroup( get_allocator<FieldToGroup>() )) ).first->second );
    (*i->second.m_groups)[ field ] = std::make_pair( delim, pDD );
    i->second.m_defined[ field ].hasGroup(true);
  }
}

}

