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

#include "Message.h"
#include "Utility.h"
#include "Values.h"
#include <iomanip>

namespace FIX
{
const char* Message::FieldReader::ErrDelimiter = "Equal sign not found in field";
const char* Message::FieldReader::ErrSOH = "SOH not found at end of field";

SmartPtr<DataDictionary> Message::s_dataDictionary;

int HEAVYUSE HOTSECTION
Message::FieldCounter::countGroups(FieldMap::g_const_iterator git,
                               const FieldMap::g_const_iterator& gend)
{
  int result;
  for( result = 0 ; git != gend; ++git )
  {
    FieldMap::g_item_const_iterator end = git->second.end();
    for ( FieldMap::g_item_const_iterator it = git->second.begin();
          it != end; ++it )
      result += countBody(**it);
  }
  return result;
}

Message::FieldCounter::Data HEAVYUSE HOTSECTION
Message::FieldCounter::syncGroups(FieldMap::g_const_iterator git,
                               const FieldMap::g_const_iterator& gend)
{
  Data d;
  for( ; git != gend; ++git )
  {
    FieldMap::g_item_const_iterator end = git->second.end();
    for ( FieldMap::g_item_const_iterator it = git->second.begin();
          it != end; ++it )
      d += syncBody(**it);
  }
  return d;
}

namespace detail {
	class ProxyBuffer {

		typedef uint32_t word_type;
		Sg::sg_buf_t buf_;

		public:
			ProxyBuffer(std::string& s) {
				IOV_BUF(buf_) = const_cast<char*>( String::data(s) );
				IOV_LEN(buf_) = 0;
			}
			ProxyBuffer& append(const char* src, std::size_t len) {
				Sg::append(buf_, src, len);
				return *this;
			}
			ProxyBuffer& append(int field, int sz, const char* src, std::size_t len) {
                                char* dst = (char*)IOV_BUF(buf_) + IOV_LEN(buf_);
                                Util::Tag::write(dst, field, sz);
                                dst[sz++] = '=';
                                IOV_LEN(buf_) += sz;
                                Sg::append(buf_, src, len);
                                IOV_LEN(buf_)++;
                                dst[sz + len] = '\001';
                                return *this;

			}
			char* data() const {
				return Sg::data<char*>(buf_);
			}
			std::size_t size() const {
				return Sg::size(buf_);
			}
	};
}

std::string& HEAVYUSE HOTSECTION
Message::toString( const FieldCounter& c, std::string& str ) const
{
  int csuml = c.getCsumFieldLength();
  int l = c.getBodyLength();

  FieldBase& bodyLengthField = Sequence::set_in_ordered(m_header, PositiveIntField::Pack(c.getBodyLengthTag(), l))->second;
  l += c.getBeginStringLength() + bodyLengthField.calcSerializationLength() + csuml;

  // NOTE: make sure string storage is reset so we can write directly to the string buffer even if it's a COW string
  str.clear();
#ifndef NO_PROXY_BUFFER
  str.resize(l);
  detail::ProxyBuffer sbuf(str);
#else
  str.reserve(l);
  std::string& sbuf = str;
#endif

  int v = c.getBodyBytes();
  if( v ) // have field byte sum
      v = c.getBeginStringBytes() + bodyLengthField.calcSerializationBytes() + v;
  FieldBase& f = Sequence::set_in_ordered(m_trailer, CheckSumField::Pack(c.getCheckSumTag(), v & 255))->second;

  m_trailer.serializeTo( 
    FieldMap::serializeTo(
      m_header.serializeTo( sbuf ) ) );

  if( !v ) // do checksum in place
  {
    char* p = (char*)sbuf.data();
    v = Util::CharBuffer::byteSum( p, l - csuml ) & 255;
    p += l - c.getCsumFieldValueLength();
    CheckSumConvertor::write(p, (unsigned char) v );
    f.setPacked( StringField::Pack( c.getCheckSumTag(), p, 3 ) );
  }
  return str;
}

bool Message::extractField ( Message::FieldReader& reader,
    const DataDictionary* pSessionDD, const DataDictionary* pAppDD,
    const Group* pGroup)
{
  const char* errpos = reader.scan();
  if( LIKELY(!errpos) )
  {
    int field = reader.getField();
    return (LIKELY(!pSessionDD || !pSessionDD->isDataField(field)) &&
            LIKELY(!pAppDD || pAppDD == pSessionDD || !pAppDD->isDataField(field))) ||
            extractFieldDataLength( reader,
                                    pGroup ? static_cast<const FieldMap&>(*pGroup)
                                           : (isHeaderField(field) ? static_cast<const FieldMap&>(m_header)
                                                                   : static_cast<const FieldMap&>(*this)), field );
  }

  setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
  reader.skip();
  return false;
}

// FIXT deserialization with separate session and application dictionaries
void HEAVYUSE HOTSECTION
Message::readString( Message::FieldReader& reader, bool doValidation,
                    DataDictionary::MsgInfo& msgInfo,
                    const DataDictionary& sessionDataDictionary,
                    DataDictionaryProvider& dictionaryProvider )
{
  const DataDictionary* pApplicationDictionary = msgInfo.applicationDictionary();

  FieldMap* section[3] = { this, &m_header, &m_trailer };
  const DataDictionary::FieldToGroup* groupFields[3] = { NULL, &sessionDataDictionary.headerGroups(),
                                                               &sessionDataDictionary.trailerGroups() };
  const DataDictionary* dict[3] = { pApplicationDictionary, &sessionDataDictionary, &sessionDataDictionary };
  const DataDictionary::string_type* dictionary_ver = NULL;
  DataDictionary::FieldProperties::location_type location, order =
    DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Header );
  int field;
  const MsgType* msgType;
  const char* errpos;

  if ( doValidation )
  {
    const BodyLength* pBodyLength = readSpecHeader( reader, msgType );
     
    if ( UNLIKELY(msgInfo.messageType( msgType ) != DataDictionary::MsgInfo::Admin::None) )
      msgInfo.applicationDictionary( dict[ DataDictionary::FieldProperties::Body ] =
                                     pApplicationDictionary = &sessionDataDictionary );
    while ( reader ) {
      if( LIKELY(!(errpos = reader.scan())) )
      {
        field = reader.getField();
        if ( LIKELY(field != FIELD::ApplVerID) )
        {
          DataDictionary::FieldProperties props = sessionDataDictionary.getProps( field );
          location = props.location();

          if ( UNLIKELY(DataDictionary::FieldProperties::locationOrder(location) < order) )
            setErrorStatusBit( tag_out_of_order, field );

          if ( LIKELY(DataDictionary::FieldProperties::isBody( location )) )
          {
            order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Body );
            if ( LIKELY(pApplicationDictionary != NULL) )
            {
vdict:
              props = pApplicationDictionary->getProps( field );
              if ( UNLIKELY(props.hasData()) ) extractFieldDataLength( reader, *this, field );
            }
            else
            {
              dict[DataDictionary::FieldProperties::Body] = pApplicationDictionary =
                dictionary_ver ? dictionaryProvider.getApplicationDataDictionary( *dictionary_ver )
                               : msgInfo.defaultApplicationDictionary();
              if ( LIKELY(pApplicationDictionary != NULL) )
              {
                msgInfo.applicationDictionary( pApplicationDictionary );
                goto vdict;
              }
            }
            reader.flushField( *this );
          }
          else
          {
            if ( UNLIKELY(props.hasData()) ) extractFieldDataLength( reader, *section[location], field );
            if ( LIKELY(DataDictionary::FieldProperties::isHeader( location )) )
            {
              setHeaderStatusBits( field );
#ifdef HAVE_EMX
              if ( verifyEMX(field, msgInfo.adminType() == DataDictionary::MsgInfo::Admin::None) )
                msgInfo.messageType( (const StringField*)reader.flushHeaderField( m_header ), false );
              else
#endif
              reader.flushHeaderField( m_header );
            }
            else
            {
              order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Trailer );
              reader.flushTrailerField( m_trailer );
            }
          }
          if ( LIKELY(!props.hasGroup()) ) continue; // fast path

          const DataDictionary::MsgTypeData* typeData;
          const DataDictionary::FieldToGroup* groups;
          if ( LIKELY((groups = groupFields[location]) != NULL) ||
               ((typeData = msgInfo.messageData()) && (groups = groupFields[location] = typeData->groups())) )
          {
            int delim;
            const DataDictionary* groupDD = dict[location]->getGroup( *groups, field, delim );     
            if ( LIKELY(groupDD != NULL) ) setGroup( reader, *section[location], *dict[location], field, delim, *groupDD );
          }
        }
        else
        {
          const FieldBase* applVerID = reader.flushHeaderField( *this );
          dictionary_ver = &applVerID->getRawString();
        }
      }
      else
      {
        setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
        reader.skip();
      }
    }
    validate(pBodyLength);
  }
  else
  {
    msgType = NULL;
    if ( LIKELY(readSpecHeaderField( reader, FIELD::BeginString ) &&
                readSpecHeaderField( reader, FIELD::BodyLength )) )
    {
      while ( reader )
      {
        if( LIKELY(!(errpos = reader.scan())) )
        {
rest:
          field = reader.getField();
          if ( LIKELY(field != FIELD::ApplVerID) )
          {
            DataDictionary::FieldProperties props = sessionDataDictionary.getProps( field );
            location = props.location();
  
            if ( UNLIKELY(DataDictionary::FieldProperties::locationOrder(location) < order) )
              setErrorStatusBit( tag_out_of_order, field );
  
            if ( LIKELY(DataDictionary::FieldProperties::isBody( location )) )
            {
              order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Body );
              if ( LIKELY(pApplicationDictionary != NULL) )
              {
ndict:
                props = pApplicationDictionary->getProps( field );
                if ( UNLIKELY(props.hasData()) ) extractFieldDataLength( reader, *this, field );
              }
              else 
              {
                dict[DataDictionary::FieldProperties::Body] = pApplicationDictionary =
                  dictionary_ver ? dictionaryProvider.getApplicationDataDictionary( *dictionary_ver )
                                 : msgInfo.defaultApplicationDictionary(); 
                if ( LIKELY(pApplicationDictionary != NULL) )
                {
                  msgInfo.applicationDictionary( pApplicationDictionary );
                  goto ndict;
                }
              }
              reader.flushField( *this );
            }
            else
            {
              if ( UNLIKELY(props.hasData()) ) extractFieldDataLength( reader, *section[location], field );
              if ( LIKELY(DataDictionary::FieldProperties::isHeader( location )) )
              {
                setHeaderStatusBits( field );
                const FieldBase* stored = reader.flushHeaderField( m_header );
                if ( UNLIKELY(field == FIELD::MsgType) )
                {
                  msgType = (MsgType*)stored;
                  if ( UNLIKELY(msgInfo.messageType( msgType ) != DataDictionary::MsgInfo::Admin::None) )
                    msgInfo.applicationDictionary( dict[ DataDictionary::FieldProperties::Body ] =
                                                   pApplicationDictionary = &sessionDataDictionary );
#ifdef HAVE_EMX
                }
                else
                {
                  if ( verifyEMX(field, msgInfo.adminType() == DataDictionary::MsgInfo::Admin::None) )
                    msgInfo.messageType( (const StringField*)stored, false );
#endif
                }
              }
              else
              {
                order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Trailer );
                reader.flushTrailerField( m_trailer );
              }
            }
            if ( LIKELY(!props.hasGroup()) ) continue; // fast path
  
            const DataDictionary::MsgTypeData* typeData;
            const DataDictionary::FieldToGroup* groups;
            if ( LIKELY((groups = groupFields[location]) != NULL) ||
                 ((typeData = msgInfo.messageData()) && (groups = groupFields[location] = typeData->groups())) )
            {
              int delim;
              const DataDictionary* groupDD = dict[location]->getGroup( *groups, field, delim );     
              if ( LIKELY(groupDD != NULL) ) setGroup( reader, *section[location], *dict[location], field, delim, *groupDD );
            }
          }
          else
          {
            const FieldBase* applVerID = reader.flushHeaderField( *this );
            dictionary_ver = &applVerID->getRawString();
          }
        }
        else
        {
          setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
          reader.skip();
        }
      }
    }
    else goto rest;
  }
}

// standard deserializatrion with a single dictionary only
void HEAVYUSE HOTSECTION
Message::readString( Message::FieldReader& reader, bool doValidation,
                     DataDictionary::MsgInfo& msgInfo, const DataDictionary& dataDictionary )
{
  FieldMap* section[3] = { this, &m_header, &m_trailer };
  const DataDictionary::FieldToGroup* groupFields[3] = { NULL, &dataDictionary.headerGroups(),
                                                               &dataDictionary.trailerGroups() };
  DataDictionary::FieldProperties::location_type location, order =
    DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Header );
  int field;
  const MsgType* msgType;
  const char* errpos;

  if( doValidation )
  {
    const BodyLength* pBodyLength = readSpecHeader( reader, msgType );

    msgInfo.messageType( msgType );
    while ( reader )
    {
      if( LIKELY(!(errpos = reader.scan())) )
      {
        field = reader.getField();
        DataDictionary::FieldProperties props = dataDictionary.getProps( field );
        location = props.location();

        if ( UNLIKELY(DataDictionary::FieldProperties::locationOrder(location) < order) )
          setErrorStatusBit( tag_out_of_order, field );

        if ( UNLIKELY(props.hasData()) ) extractFieldDataLength( reader, *section[location], field );

        if ( LIKELY(DataDictionary::FieldProperties::isBody( location )) )
        {
          order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Body );
          reader.flushField( *this );
        }
        else
        {
          if ( LIKELY(DataDictionary::FieldProperties::isHeader( location )) )
          {
            setHeaderStatusBits( field );
#ifdef HAVE_EMX
            if ( verifyEMX(field, msgInfo.adminType() == DataDictionary::MsgInfo::Admin::None) )
              msgInfo.messageType( (const StringField*)reader.flushHeaderField( m_header ), false ); 
            else
#endif
            reader.flushHeaderField( m_header );
          }
          else
          {
            order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Trailer );
            reader.flushTrailerField( m_trailer );
          }
        }
        if ( LIKELY(!props.hasGroup()) ) continue; // fast path

        const DataDictionary::MsgTypeData* typeData;
        const DataDictionary::FieldToGroup* groups = groupFields[location];
        if ( LIKELY(groups != NULL) ||
             ((typeData = msgInfo.messageData()) && (groups = groupFields[location] = typeData->groups())) )
        {
          int delim;
          const DataDictionary* groupDD = dataDictionary.getGroup( *groups, field, delim );     
          if ( LIKELY(groupDD != NULL) ) setGroup( reader, *section[location], dataDictionary, field, delim, *groupDD );
        }
      }
      else
      {
        setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
        reader.skip();
      }
    }
    validate(pBodyLength);
  }
  else
  {
    if ( LIKELY(readSpecHeaderField( reader, FIELD::BeginString ) &&
                readSpecHeaderField( reader, FIELD::BodyLength )) )
    {
      while ( reader )
      {
        if( LIKELY(!(errpos = reader.scan())) )
        {
rest:
          field = reader.getField();
          DataDictionary::FieldProperties props = dataDictionary.getProps( field );
          location = props.location();
  
          if ( UNLIKELY(DataDictionary::FieldProperties::locationOrder(location) < order) )
            setErrorStatusBit( tag_out_of_order, field );
  
          if ( UNLIKELY(props.hasData()) ) extractFieldDataLength( reader, *section[location], field );
  
          if ( LIKELY(DataDictionary::FieldProperties::isBody( location )) )
          {
            order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Body );
            reader.flushField( *this );
          }
          else
          {
            if ( LIKELY(DataDictionary::FieldProperties::isHeader( location )) )
            {
              setHeaderStatusBits( field );
              const FieldBase* stored = reader.flushHeaderField( m_header );
	      if( field == FIELD::MsgType )
              {
                msgInfo.messageType( (const MsgType*)stored );
#ifdef HAVE_EMX
              }
              else
              {
                if ( verifyEMX(field) && msgInfo.adminType() == DataDictionary::MsgInfo::Admin::None )
                  msgInfo.messageType( (const StringField*)stored, false );
#endif
              }
            }
            else
            {
              order = DataDictionary::FieldProperties::locationOrder( DataDictionary::FieldProperties::Trailer );
              reader.flushTrailerField( m_trailer );
            }
          }
          if ( LIKELY(!props.hasGroup()) ) continue; // fast path
  
          const DataDictionary::MsgTypeData* typeData;
          const DataDictionary::FieldToGroup* groups = groupFields[location];
          if ( LIKELY(groups != NULL) ||
               ((typeData = msgInfo.messageData()) && (groups = groupFields[location] = typeData->groups())) )
          {
            int delim;
            const DataDictionary* groupDD = dataDictionary.getGroup( *groups, field, delim );     
            if ( LIKELY(groupDD != NULL) ) setGroup( reader, *section[location], dataDictionary, field, delim, *groupDD );
          }
        }
        else 
        {
          setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
          reader.skip();
        }
      }
    }
    else goto rest;
  }
}

// generic case without a dictionary
const MsgType* HEAVYUSE HOTSECTION
Message::readString( Message::FieldReader& reader, bool doValidation )
{
  int field;
  field_type type = header;
  const char* errpos;
  const MsgType* msgType = NULL;

  if ( doValidation ) {
    const BodyLength* pBodyLength = readSpecHeader( reader, msgType );
  
    while ( reader )
    {
      if( LIKELY(!(errpos = reader.scan())) )
      {
        field = reader.getField();
        if ( isHeaderField( field ) )
        {
          if ( UNLIKELY(type != header) ) setErrorStatusBit( tag_out_of_order, field );
          setHeaderStatusBits( field );
          reader.flushHeaderField( m_header );
#ifdef HAVE_EMX
          verifyEMX(field);
#endif
        }
        else if ( LIKELY(!isTrailerField( field )) )
        {
          if ( UNLIKELY(type == trailer) ) setErrorStatusBit( tag_out_of_order, field );
          type = body;
          reader.flushField( *this );
        }
        else
        {
          type = trailer;
          reader.flushTrailerField( m_trailer );
        }
      }
      else
      {
        setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
        reader.skip();
      }
    }
    validate(pBodyLength);
  }
  else
  {
    if ( LIKELY(readSpecHeaderField( reader, FIELD::BeginString ) &&
                readSpecHeaderField( reader, FIELD::BodyLength )) )
    {
      while ( reader )
      {
        if ( LIKELY(!(errpos = reader.scan())) ) {
rest:
          field = reader.getField();
          if ( isHeaderField( field ) )
          {
            if ( UNLIKELY(type != header) ) setErrorStatusBit( tag_out_of_order, field );
  	    setHeaderStatusBits( field );
	    const FieldBase* f = reader.flushHeaderField( m_header );
	    msgType = (field == FIELD::MsgType) ? (const MsgType*)f : msgType;
#ifdef HAVE_EMX
            verifyEMX(field);
#endif
 	  }
          else if ( LIKELY(!isTrailerField( field )) )
          {
            if ( UNLIKELY(type == trailer) ) setErrorStatusBit( tag_out_of_order, field );
            type = body;
            reader.flushField( *this );
          }
          else 
          {
            type = trailer;
            reader.flushTrailerField( m_trailer );
          }
        }
        else 
        {
          setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
          reader.skip();
        }
      }
    }
    else goto rest; 
  }
  return msgType;
}

void LIGHTUSE Message::setGroup( const std::string& msg,
                        const FieldBase& field, const std::string& str,
                        std::string::size_type& pos, FieldMap& fields,
                        const DataDictionary& dataDictionary )
{
  FieldReader reader( str, pos );
  const DataDictionary::MsgTypeData* mdata =
    dataDictionary.getMessageData( static_cast<const DataDictionary::string_type&>(msg) );
  const DataDictionary::FieldToGroup* groups;
  if ( mdata && (groups = mdata->groups()) != NULL )
  {
    int delim;
    const DataDictionary* groupDD = dataDictionary.getGroup( *groups, field.getTag(), delim );     
    if ( groupDD ) setGroup( reader, fields, dataDictionary, field.getTag(), delim, *groupDD );
  }
  pos = reader.pos() - String::data(str);
}

void HEAVYUSE HOTSECTION Message::setGroup( Message::FieldReader& reader,
			FieldMap& fields,
                        const DataDictionary& dataDictionary,
                        int group, int delim,
                        const DataDictionary& groupDD )
{
  SmartPtr<Group> pGroup;
  while ( reader )
  {
    const char* pos = reader.pos();
    const char* errpos = reader.scan();
    if( LIKELY(!errpos) )
    {
      int field = reader.getField();
      DataDictionary::FieldProperties props = dataDictionary.getProps( field );
      if ( props.hasData() ) extractFieldDataLength( reader, pGroup.get() ? *pGroup : fields, field );

      if ( // found delimiter
           (field == delim)
           // no delimiter, but field belongs to group or already processed
           || ((pGroup.get() == 0 || pGroup->isSetField( field )) &&
                groupDD.isField( field )) )
      {
        if ( pGroup.get() )
        {
          fields.addGroupPtr( group, pGroup.release(), false );
        }
        reader.startGroupAt();
        pGroup.reset( new Group( field, delim, groupDD.getOrderedFields() ) );
      }
      else if ( !groupDD.isField( field ) )
      {
        if ( pGroup.get() )
        {
          fields.addGroupPtr( group, pGroup.release(), false );
        }
        reader.rewind( pos );
        return ;
      }
  
      if ( !pGroup.get() ) return ;
      int d, end = reader.flushGroupField( *pGroup );
      const DataDictionary* pDD = groupDD.getNestedGroup( field, d );
      if ( pDD ) setGroup( reader, *pGroup, dataDictionary, field, d, *pDD );
      reader.startGroupAt( end );
    }
    else
    {
      setErrorStatusBit( invalid_tag_format, (intptr_t)errpos );
      reader.skip();
    }
  }
}

bool LIGHTUSE Message::setStringHeader( const std::string& str )
{
  clear();

  FieldReader reader(str);
  int count = 0;
  while ( reader )
  {
    if( extractField( reader ) )
    {
      if( count < 3 )
      {
        if ( LIKELY(headerOrder[ count++ ] == reader.getField()) )
        { 
          reader.flushSpecHeaderField( m_header );
          continue;
        }
        return false;
      }

      if( isHeaderField( reader.getField() ) )
        reader.flushHeaderField( m_header );
      else break;
    }
  }
  return true;
}

void Message::validate(const BodyLength* pBodyLength)
{
  if ( pBodyLength )
  {
    try
    {
      if ( LIKELY(*pBodyLength == bodyLength()) )
      {
        const CheckSum& aCheckSum = FIELD_GET_REF( m_trailer, CheckSum );
        if ( LIKELY(aCheckSum == checkSum()) )
          return;

        std::stringstream text;
        text << "Expected CheckSum=" << checkSum()
             << ", Received CheckSum=" << (int)aCheckSum;
        throw InvalidMessage(text.str());
      }
      std::stringstream text;
      text << "Expected BodyLength=" << bodyLength()
           << ", Received BodyLength=" << (int)*pBodyLength;
      throw InvalidMessage(text.str());
    }
    catch ( FieldNotFound& )
    {
      throw InvalidMessage("CheckSum missing");
    }
    catch ( IncorrectDataFormat& )
    {
      throw InvalidMessage("BodyLength or Checksum has wrong format");
    }
  }
  else
    throw InvalidMessage("BodyLength missing");
#ifdef HAVE_EMX
  if (!getStatusBit(emx_compatible))
    throw InvalidMessage("EMX message type (9426) not found");
#endif
}

static ALIGN_DECL_DEFAULT const int s_HeaderFieldList[] =
{
FIELD::BeginString,
FIELD::BodyLength,
FIELD::MsgType, // first 3 in this order!
FIELD::SenderCompID,
FIELD::TargetCompID,
FIELD::OnBehalfOfCompID,
FIELD::DeliverToCompID,
FIELD::SecureDataLen,
FIELD::MsgSeqNum,
FIELD::SenderSubID,
FIELD::SenderLocationID,
FIELD::TargetSubID,
FIELD::TargetLocationID,
FIELD::OnBehalfOfSubID,
FIELD::OnBehalfOfLocationID,
FIELD::DeliverToSubID,
FIELD::DeliverToLocationID,
FIELD::PossDupFlag,
FIELD::PossResend,
FIELD::SendingTime,
FIELD::OrigSendingTime,
FIELD::XmlDataLen,
FIELD::XmlData,
FIELD::MessageEncoding,
FIELD::LastMsgSeqNumProcessed,
FIELD::OnBehalfOfSendingTime,
FIELD::ApplVerID,
FIELD::CstmApplVerID,
FIELD::NoHops,
#ifdef HAVE_EMX
FIELD::EMX::MsgType,
#endif
0
};

static ALIGN_DECL_DEFAULT const int s_TrailerFieldList[] =
{
FIELD::CheckSum, // should be first
FIELD::Signature,
FIELD::SignatureLength,
0
};

#ifdef HAVE_EMX
const std::string Message::m_emx_none;
#endif

#if defined(__BYTE_ORDER__)  && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__) && !defined(HAVE_EMX)
ALIGN_DECL_DEFAULT HOTDATA const Message::HeaderFieldSet Message::headerFieldSet =
  { { { 768, 51775500, 67108864, 68681730, 245763, 0, 3145728, 0,
        0, 0, 134217728, 393216, 0, 0, 0, 0,
        0, 0, 0, 524288, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 768, 0, 0, 0, 0 } } };
#else // construct on load
ALIGN_DECL_DEFAULT const Message::HeaderFieldSet Message::headerFieldSet;

COLDSECTION Message::HeaderFieldSet::HeaderFieldSet()
{
  for(const int* p = s_HeaderFieldList; *p; p++)
    if ((unsigned)*p < size()) _value.set(*p); 
}
#endif

void COLDSECTION Message::HeaderFieldSet::spec( DataDictionary& dict )
{
  for(int i = 0; s_HeaderFieldList[i]; i++)
    dict.addSpecHeaderField( s_HeaderFieldList[i] );
}

void COLDSECTION Message::TrailerFieldSet::spec( DataDictionary& dict )
{
  for(int i = 0; s_TrailerFieldList[i]; i++)
    dict.addSpecTrailerField( s_TrailerFieldList[i] );
}


void Message::reverseRoute( const Header& header )
{
  // required routing tags
  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  m_header.removeField( beginString.getTag() );
  m_header.removeField( senderCompID.getTag() );
  m_header.removeField( targetCompID.getTag() );

  if( header.getFieldIfSet( beginString ) )
  {
    if( beginString.getValue().size() )
      m_header.setField( beginString );

    OnBehalfOfLocationID onBehalfOfLocationID;
    DeliverToLocationID deliverToLocationID;

    m_header.removeField( onBehalfOfLocationID.getTag() );
    m_header.removeField( deliverToLocationID.getTag() );

    if( beginString >= BeginString_FIX41 )
    {
      if( header.getFieldIfSet( onBehalfOfLocationID ) )
      {
        if( onBehalfOfLocationID.hasValue() )
          m_header.setField( DeliverToLocationID( onBehalfOfLocationID ) );
      }

      if( header.getFieldIfSet( deliverToLocationID ) )
      {
        if( deliverToLocationID.hasValue() )
          m_header.setField( OnBehalfOfLocationID( deliverToLocationID ) );
      }
    }
  }

  if( header.getFieldIfSet( senderCompID ) )
  {
    if( senderCompID.hasValue() )
      m_header.setField( TargetCompID( senderCompID ) );
  }

  if( header.getFieldIfSet( targetCompID ) )
  {
    if( targetCompID.hasValue() )
      m_header.setField( SenderCompID( targetCompID ) );
  }

  // optional routing tags
  OnBehalfOfCompID onBehalfOfCompID;
  OnBehalfOfSubID onBehalfOfSubID;
  DeliverToCompID deliverToCompID;
  DeliverToSubID deliverToSubID;

  m_header.removeField( onBehalfOfCompID.getTag() );
  m_header.removeField( onBehalfOfSubID.getTag() );
  m_header.removeField( deliverToCompID.getTag() );
  m_header.removeField( deliverToSubID.getTag() );

  if( header.getFieldIfSet( onBehalfOfCompID ) )
  {
    if( onBehalfOfCompID.hasValue() )
      m_header.setField( DeliverToCompID( onBehalfOfCompID ) );
  }

  if( header.getFieldIfSet( onBehalfOfSubID ) )
  {
    if( onBehalfOfSubID.hasValue() )
      m_header.setField( DeliverToSubID( onBehalfOfSubID ) );
  }

  if( header.getFieldIfSet( deliverToCompID ) )
  {
    if( deliverToCompID.hasValue() )
      m_header.setField( OnBehalfOfCompID( deliverToCompID ) );
  }

  if( header.getFieldIfSet( deliverToSubID ) )
  {
    if( deliverToSubID.hasValue() )
      m_header.setField( OnBehalfOfSubID( deliverToSubID ) );
  }
}

bool COLDSECTION Message::InitializeXML( const std::string& url )
{
  try
  {
    s_dataDictionary.reset( new DataDictionary(url) );
    return true;
  }
  catch( ConfigError& )
  { return false; }
}

std::string Message::toXML() const
{
  std::string str;
  return toXML( str );
}

std::string& Message::toXML( std::string& str ) const
{
  std::stringstream stream;
  stream << "<message>"                         << std::endl
         << std::setw(2) << " " << "<header>"   << std::endl
         << toXMLFields(getHeader(), 4)
         << std::setw(2) << " " << "</header>"  << std::endl
         << std::setw(2) << " " << "<body>"     << std::endl
         << toXMLFields(*this, 4)
         << std::setw(2) << " " << "</body>"    << std::endl
         << std::setw(2) << " " << "<trailer>"  << std::endl
         << toXMLFields(getTrailer(), 4)
         << std::setw(2) << " " << "</trailer>" << std::endl
         << "</message>";

  return str = stream.str();
}

std::string Message::toXMLFields(const FieldMap& fields, int space) const
{
  std::stringstream stream;
  FieldMap::iterator i;
  std::string name;
  for(i = fields.begin(); i != fields.end(); ++i)
  {
    int field = i->first;
    std::string value = i->second.getString();

    stream << std::setw(space) << " " << "<field ";
    if(s_dataDictionary.get() && s_dataDictionary->getFieldName(field, name))
    {
      stream << "name=\"" << name << "\" ";
    }
    stream << "number=\"" << field << "\"";
    if(s_dataDictionary.get()
       && s_dataDictionary->getValueName(field, value, name))
    {
      stream << " enum=\"" << name << "\"";
    }
    stream << ">";
    stream << "<![CDATA[" << value << "]]>";
    stream << "</field>" << std::endl;
  }

  FieldMap::g_iterator j;
  for(j = fields.g_begin(); j != fields.g_end(); ++j)
  {
    FieldMap::g_item_const_iterator k, kend = j->second.end();
    for(k = j->second.begin(); k != kend; ++k)
    {
      stream << std::setw(space) << " " << "<group>" << std::endl
             << toXMLFields(*(*k), space+2)
             << std::setw(space) << " " << "</group>" << std::endl;
    }
  }

  return stream.str();
}
}
