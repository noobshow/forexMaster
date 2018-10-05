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

#ifndef FIX_MESSAGE
#define FIX_MESSAGE

#ifdef _MSC_VER
#pragma warning( disable: 4786 )
#endif

#include "FieldMap.h"
#include "FixFields.h"
#include "FixExtensions.h"
#include "Group.h"
#include "SessionID.h"
#include "DataDictionary.h"
#include "DataDictionaryProvider.h"
#include "Values.h"
#include <vector>
#include <memory>

namespace FIX
{
static int const headerOrder[] =
  {
    FIELD::BeginString,
    FIELD::BodyLength,
    FIELD::MsgType
  };

class Header : public FieldMap
{
public:
  Header() : FieldMap(message_order( message_order::header ) )
  {}

  Header(const message_order& order) : FieldMap(order)
  {}

  Header(const FieldMap::allocator_type& a, const message_order& order) : FieldMap(a, order)
  {}

  Header(const FieldMap::allocator_type& a, const message_order& order, const FieldMap::Options& opt) : FieldMap( a, order, opt)
  {}

  Header(const FieldMap::allocator_type& a, const Header& other) : FieldMap(a, other)
  {}

  void addGroup( const FIX::Group& group )
  { FieldMap::addGroup( group.field(), group ); }

  void replaceGroup( unsigned num, const FIX::Group& group )
  { FieldMap::replaceGroup( num, group.field(), group ); }

  Group& getGroup( unsigned num, FIX::Group& group ) const
  { group.clear();
    return static_cast < Group& >
      ( FieldMap::getGroup( num, group.field(), group ) );
  }

  void removeGroup( unsigned num, const FIX::Group& group )
  { FieldMap::removeGroup( num, group.field() ); }
  void removeGroup( const FIX::Group& group )
  { FieldMap::removeGroup( group.field() ); }

  bool hasGroup( const FIX::Group& group ) const
  { return FieldMap::hasGroup( group.field() ); }
  bool hasGroup( unsigned num, const FIX::Group& group ) const
  { return FieldMap::hasGroup( num, group.field() ); }
};

class Trailer : public FieldMap
{
public:
  Trailer() : FieldMap(message_order( message_order::trailer ) )
  {}

  Trailer(const message_order& order) : FieldMap(order)
  {}

  Trailer(FieldMap::allocator_type& a, const message_order& order) : FieldMap(a, order)
  {}

  Trailer(const FieldMap::allocator_type& a, const message_order& order, const FieldMap::Options& opt) : FieldMap( a, order, opt)
  {}

  Trailer(const FieldMap::allocator_type& a, const Trailer& other) : FieldMap(a, other)
  {}

  void addGroup( const FIX::Group& group )
  { FieldMap::addGroup( group.field(), group ); }

  void replaceGroup( unsigned num, const FIX::Group& group )
  { FieldMap::replaceGroup( num, group.field(), group ); }

  Group& getGroup( unsigned num, FIX::Group& group ) const
  { group.clear();
    return static_cast < Group& >
      ( FieldMap::getGroup( num, group.field(), group ) );
  }

  void removeGroup( unsigned num, const FIX::Group& group )
  { FieldMap::removeGroup( num, group.field() ); }
  void removeGroup( const FIX::Group& group )
  { FieldMap::removeGroup( group.field() ); }

  bool hasGroup( const FIX::Group& group ) const
  { return FieldMap::hasGroup( group.field() ); }
  bool hasGroup( unsigned num, const FIX::Group& group ) const
  { return FieldMap::hasGroup( num, group.field() ); }
};

/**
 * Base class for all %FIX messages.
 *
 * A message consists of three field maps.  One for the header, the body,
 * and the trailer.
 */
class Message : public FieldMap
{
public:

  enum SerializationHint
  {
    KeepFieldChecksum,
    SerializedOnce
  };

  static inline MsgType::Pack identifyType( const char* message, std::size_t length )
  {
    Util::CharBuffer::Fixed<4> msgTypeTag = { { '\001', '3', '5', '=' } };
    const char* p = Util::CharBuffer::find( msgTypeTag, message, length );
    if ( p != NULL )
    {
      p += 4;
      const char* e = Util::CharBuffer::find( Util::CharBuffer::Fixed<1>('\001'), p, length - (p - message) );
      if ( e != NULL )
        return MsgType::Pack( p, e - p );
    }
    throw MessageParseError();
  }

private:
  friend class DataDictionary;
  friend class Session;

  struct HeaderFieldSet
  {
    Util::BitArray<1280, uint32_t> _value;
#if !defined(__BYTE_ORDER__)  || (__BYTE_ORDER__ != __ORDER_LITTLE_ENDIAN__) || defined(HAVE_EMX)
    HeaderFieldSet();
#endif // static initialization otherwise
    void static spec( DataDictionary& dict );
    std::size_t size() const { return _value.size(); }
    bool test( std::size_t bit ) const { return _value.test( bit ); }
  };
  static ALIGN_DECL_DEFAULT const HeaderFieldSet headerFieldSet;

  struct TrailerFieldSet
  {
    void static spec( DataDictionary& dict );
  };

  typedef uintptr_t status_value_type;
  enum status_enum_type {
	tag_out_of_order,
	invalid_tag_format,
	incorrect_data_format,

	has_external_allocator,

#ifdef HAVE_EMX
	emx_compatible,
#endif

	has_sender_comp_id = FIELD::SenderCompID - (sizeof(status_value_type) <= 4 ? 32 : 0), // 49/17
	has_target_comp_id = FIELD::TargetCompID - (sizeof(status_value_type) <= 4 ? 32 : 0), // 56/24
	serialized_once    = (sizeof(status_value_type) * 8) - 1
  };
  static const intptr_t status_error_mask =  (1 << tag_out_of_order) |
                                             (1 << invalid_tag_format) |
                                             (1 << incorrect_data_format);

  enum field_type { header, body, trailer };

  class FieldReader : public Sequence {

    static const char* ErrDelimiter;
    static const char* ErrSOH;

    int  m_field, m_pos;
    int  m_length, m_csum;
    int  m_hdr, m_body, m_trl, m_grp;
    const char* m_start;
    const char* const m_end;

    inline void step() {
      m_start += m_pos + 1;
      m_pos = 0;
    }

  public:
    typedef String::value_type result_type;

    FieldReader ( const char* s, const char* e )
    : m_field(0), m_pos(0), m_length(0), m_csum(0),
      m_hdr(0), m_body(0), m_trl(0), m_grp(0),
      m_start(s), m_end(e) {}

    FieldReader ( const char* p, std::size_t n )
    : m_field(0), m_pos(0), m_length(0), m_csum(0),
      m_hdr(0), m_body(0), m_trl(0), m_grp(0),
      m_start(p), m_end(p + n) {}

    FieldReader ( const std::string& s )
    : m_field(0), m_pos(0), m_length(0), m_csum(0),
      m_hdr(0), m_body(0), m_trl(0), m_grp(0),
      m_start(String::data(s)),
      m_end(m_start + String::size(s)) {}

    FieldReader ( const std::string& s, std::string::size_type pos )
    : m_field(0), m_pos(0), m_length(0), m_csum(0),
      m_hdr(0), m_body(0), m_trl(0), m_grp(0),
      m_start(String::data(s) + pos),
      m_end(String::data(s) + String::size(s)) {}

    char getTagLength() const
    { return static_cast<char>(m_length + 1); }

    short getTagChecksum() const
    { return static_cast<short>(m_csum + (int)'='); }

    operator bool () const
    { return m_start + m_pos < m_end; }

    const char* scan ();
    void skip ();

    const char* pos () const
    { return m_start + m_pos; }

    const char* end () const
    { return m_end; }

    void pos(int pos)
    { m_pos = pos; }

    void rewind ( const char* p )
    { m_start = p; m_pos = 0; }

    void startGroupAt( int n = 0 ) { m_grp = n; }

    /// Store ordered header fields 
    const FieldBase* flushSpecHeaderField(FieldMap& map)
    {
      const FieldBase& r = Sequence::push_back_to_ordered( map, *this )->second;
      step();
      return &r;
    }

    const FieldBase* flushHeaderField(FieldMap& map)
    {
      const FieldBase& r = ( LIKELY(Sequence::header_compare(map, m_hdr, m_field)) )
                            ? m_hdr = m_field, Sequence::push_back_to_ordered( map, *this )->second
                            : Sequence::insert_into_ordered( map, *this )->second;
      step();
      return &r;
    }

    void HEAVYUSE flushField(FieldMap& map)
    {
      if ( LIKELY(m_body < m_field) )
      {
        Sequence::push_back_to( map, *this );
        m_body = m_field;
      }
      else
        Sequence::insert_into( map, *this );
      step();
    }

    void flushTrailerField(FieldMap& map)
    {
      if ( LIKELY(Sequence::trailer_compare(map, m_trl, m_field)) )
      {
        Sequence::push_back_to_ordered( map, *this );
        m_trl = m_field;
      }
      else
        Sequence::insert_into_ordered( map, *this );
      step();
    }

    int flushGroupField(FieldMap& map)
    {
      if ( LIKELY(Sequence::group_compare(map, m_grp, m_field) || m_grp == 0) )
      {
        Sequence::push_back_to( map, *this );
        m_grp = m_field;
      }
      else
        Sequence::insert_into( map, *this );
      step();
      return m_grp;
    }

    int PURE_DECL getField() const { return m_field; }

    void assign_to(String::value_type& s) const
    {
      s.assign(m_start, m_pos);
    }
    operator String::value_type () const
    {
      return String::value_type(m_start, m_pos);
    }
  };

  class FieldCounter
  {
    struct Data {
      int m_length, m_bytesum;
      Data(int l = 0, int c = 0) : m_length(l), m_bytesum(c) {}
      Data& operator+=(const Data& o)
      { m_length += o.m_length; m_bytesum += o.m_bytesum; return *this; }
    };
    Data m_begin, m_inner;
    const int bodyLengthTag;
    const int checkSumTag;

    // iterate and count without updating per-field serialization data
    int countGroups(FieldMap::g_const_iterator git,
                    const FieldMap::g_const_iterator& gend);
    void countHeader(const FieldMap& fields);
    void countHeader(int beginStringTag, int bodyLengthDag,
                     const FieldMap& fields);
    int countBody(const FieldMap& fields);
    void countNonHeader(const FieldMap& body, const FieldMap& trailer);

    // iterate and store updated per-field length and checksum
    Data syncGroups(FieldMap::g_const_iterator git,
                     const FieldMap::g_const_iterator& gend);
    void syncHeader(const FieldMap& fields);
    void syncHeader(int beginStringTag, int bodyLengthDag,
                     const FieldMap& fields);
    Data syncBody(const FieldMap& fields);
    void syncNonHeader(const FieldMap& body, const FieldMap& trailer);
  public:

    FieldCounter(const Message& msg, bool oneoff)
    : bodyLengthTag(FIELD::BodyLength), checkSumTag(FIELD::CheckSum)
    {
      if (oneoff)
      {
        countHeader(msg.m_header);
        countNonHeader(msg, msg.m_trailer);
      }
      else
      {
        syncHeader(msg.m_header);
        syncNonHeader(msg, msg.m_trailer);
      }
    }
    FieldCounter(const Message& msg, bool oneoff,
      int beginStringField,
      int bodyLengthField = FIELD::BodyLength,
      int checkSumField = FIELD::CheckSum )
    : bodyLengthTag(bodyLengthField), checkSumTag(checkSumField)
    {
      if (oneoff)
      {
        countHeader(beginStringField, bodyLengthField, msg.m_header);
        countNonHeader(msg, msg.m_trailer);
      }
      else
      {
        syncHeader(beginStringField, bodyLengthField, msg.m_header);
        syncNonHeader(msg, msg.m_trailer);
      }
    }

    int getBodyLengthTag () const
    { return bodyLengthTag; }

    int getCheckSumTag () const
    { return checkSumTag; }

    int getBodyLength() const
    { return m_inner.m_length; }

    int getBodyBytes() const
    { return m_inner.m_bytesum; }

    int getBeginStringLength() const
    { return m_begin.m_length; }

    int getBeginStringBytes() const
    { return m_begin.m_bytesum; }

    int getCsumFieldLength() const
    {
      int csumPayloadLength = CheckSumConvertor::MaxValueSize + 1;
      int csumTagLength = (unsigned)Util::UInt::numDigits(checkSumTag) + 1;
      return csumTagLength + csumPayloadLength;
    }
    int getCsumFieldValueLength() const {
      return CheckSumConvertor::MaxValueSize + 1;
    }
  };

  // parses header up to MsgType and returns pointer to the BodyLength field
  const BodyLength* readSpecHeader( FieldReader& reader, const MsgType*& msgType )
  {
    if( LIKELY(reader && !reader.scan() && reader.getField() == FIELD::BeginString) )
    {
      reader.flushSpecHeaderField( m_header );
      if ( LIKELY(reader && !reader.scan() && reader.getField() == FIELD::BodyLength) )
      {
        const BodyLength* pBodyLength = (const BodyLength*)reader.flushSpecHeaderField( m_header );
        if ( LIKELY(reader && !reader.scan() && reader.getField() == FIELD::MsgType) )
        {
          msgType = (const MsgType*) reader.flushSpecHeaderField( m_header );
          return pBodyLength;
        }
      }
    }
    throw InvalidMessage("Header fields out of order");
  }

  // if false then the field did not match and has not been flushed from the reader
  bool readSpecHeaderField( FieldReader& reader, int fieldType)
  {
    if( reader )
    {
      if ( LIKELY(!reader.scan()) )
      {
        if ( LIKELY(reader.getField() == fieldType) )
        {
          reader.flushSpecHeaderField( m_header );
        }
        else return false;
      }
      else reader.skip();
    }
    return true;
  }

  void HEAVYUSE readString( FieldReader& reader, bool validate,
                   DataDictionary::MsgInfo& msgInfo,
		   const FIX::DataDictionary& sessionDataDictionary,
                   DataDictionaryProvider& dictionaryProvider );
  void HEAVYUSE readString( FieldReader& reader, bool validate, DataDictionary::MsgInfo& msgInfo,
                  const FIX::DataDictionary& dataDictionary );
  const MsgType* HEAVYUSE readString( FieldReader& reader, bool validate );

  static const std::size_t HeaderFieldCountEstimate = 8;
  static const std::size_t TrailerFieldCountEstimate= 4;
  static inline std::size_t bodyFieldCountEstimate(std::size_t available = ItemAllocatorTraits::DefaultCapacity)
  { 
    return (available > (HeaderFieldCountEstimate + TrailerFieldCountEstimate))
           ? (available - HeaderFieldCountEstimate - TrailerFieldCountEstimate) : HeaderFieldCountEstimate;
  }

  // session interface for incoming messages
  HEAVYUSE Message( const char* p, std::size_t n,
           DataDictionary::MsgInfo& msgInfo,
           const DataDictionary* dataDictionary,
           FieldMap::allocator_type& a,
           bool validate )
  THROW_DECL( InvalidMessage )
  : FieldMap(a),
    m_header( a, message_order( message_order::header ) ),
    m_trailer( a, message_order( message_order::trailer ) ),
    m_status( 0 )
  {
    FieldReader reader( p, n );
    if( dataDictionary )
      readString( reader, validate, msgInfo, *dataDictionary );
    else
      msgInfo.messageType( readString( reader, validate ) );
  }

#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  void resetOrder( const MsgType::Pack& msgType,
                   const DataDictionary& sessionDataDictionary,
                   const DataDictionary& applicationDataDictionary )
  {
    // this substitution depends on the compare_type of the field container
    // using a reference to the m_order of its FieldMap wrapper 
    m_header.m_order = sessionDataDictionary.getHeaderOrderedFields();
    m_trailer.m_order = sessionDataDictionary.getTrailerOrderedFields();
    m_order = applicationDataDictionary.getMessageOrderedFields(msgType);
  }
#endif

  // session interface for incoming FIXT messages
  HEAVYUSE Message( const char* p, std::size_t n,
           DataDictionary::MsgInfo& msgInfo,
           const DataDictionary* sessionDataDictionary,
           DataDictionaryProvider& dictionaryProvider,
           FieldMap::allocator_type& a,
           bool validate )
  THROW_DECL( InvalidMessage )
  : FieldMap(a),
    m_header( a, message_order( message_order::header ) ),
    m_trailer( a, message_order( message_order::trailer ) ),
    m_status( 0 )
  {
    FieldReader reader(p, n);
    readString( reader, validate, msgInfo,
                sessionDataDictionary ? *sessionDataDictionary
                                      : dictionaryProvider.defaultSessionDataDictionary(),
                dictionaryProvider );
  }

  // session interface for resending messages
  Message( const std::string& s,
           DataDictionary::MsgInfo& msgInfo,
           const DataDictionary* sessionDataDictionary,
           DataDictionaryProvider* dictionaryProvider,
           FieldMap::allocator_type& a,
           bool validate )
  THROW_DECL( InvalidMessage )
  : FieldMap(a),
    m_header( a, message_order( message_order::header ) ),
    m_trailer( a, message_order( message_order::trailer ) ),
    m_status( 0 )
  {
    FieldReader reader(String::data(s), String::size(s));
    if (dictionaryProvider) // FIXT
    {
      if (sessionDataDictionary)
      {
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
        if (sessionDataDictionary->isMessageFieldsOrderPreserved())
        {
          const DataDictionary* applicationDictionary = msgInfo.defaultApplicationDictionary(); 
          MsgType::Pack t = identifyType( String::data(s), String::size(s) );
          resetOrder( t, *sessionDataDictionary,
                    (!DataDictionary::MsgInfo::isAdminMsgType(t) && applicationDictionary)
                                            ? *applicationDictionary : *sessionDataDictionary );
        }
#endif
      }
      else
        sessionDataDictionary = &dictionaryProvider->defaultSessionDataDictionary();
      readString( reader, validate, msgInfo, *sessionDataDictionary, *dictionaryProvider );
    }
    else if (sessionDataDictionary)
    {
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
        if (sessionDataDictionary->isMessageFieldsOrderPreserved())
          resetOrder( identifyType(String::data(s), String::size(s) ),
                      *sessionDataDictionary, *sessionDataDictionary );
#endif
      msgInfo.applicationDictionary( sessionDataDictionary );
      readString( reader, validate, msgInfo, *sessionDataDictionary );
    }
    else
      readString( reader, validate );
  }

  // session interface for protocol messages
  Message( const MsgType::Pack& msgType, const DataDictionary* sessionDataDictionary, FieldMap::allocator_type& a)
  : FieldMap(a),
    m_header( a, message_order( message_order::header ) ),
    m_trailer( a, message_order( message_order::trailer ) ),
    m_status( 0 )
  {
    if (sessionDataDictionary)
    {
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
      if (sessionDataDictionary->isMessageFieldsOrderPreserved())
        resetOrder( msgType, *sessionDataDictionary, *sessionDataDictionary );
#endif
    }
    m_header.setField( msgType );
  }
  Message( const MsgType::Pack& msgType,
           const DataDictionary* sessionDataDictionary,
           const DataDictionary* applicationDataDictionary, FieldMap::allocator_type& a)
  : FieldMap(a),
    m_header( a, message_order( message_order::header ) ),
    m_trailer( a, message_order( message_order::trailer ) ),
    m_status( 0 )
  {
    if (sessionDataDictionary)
    {
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
      if (sessionDataDictionary->isMessageFieldsOrderPreserved())
        resetOrder( msgType, *sessionDataDictionary,
                    applicationDataDictionary ? *applicationDataDictionary : *sessionDataDictionary );
#endif
    }
    m_header.setField( msgType );
  }

  std::string& toString( const FieldCounter&, std::string& ) const;

  template <typename S> typename S::buffer_type& HEAVYUSE toBuffer( S& s ) const
  {
    const int csuml = FieldTag::Traits<FIELD::CheckSum>::length + /*=*/1 + CheckSumConvertor::MaxValueSize + /*\001*/1;
    bool nosync = getStatusBit( serialized_once );
    FieldCounter c( *this, nosync );
    int b, l = c.getBodyLength();
    const FieldBase& bodyLengthField =
      Sequence::set_in_ordered(m_header, PositiveIntField::Pack(FIELD::BodyLength, l))->second;
    l += c.getBeginStringLength() + bodyLengthField.calcSerializationLength() + csuml;

    b = (nosync) ? 0 : (c.getBeginStringBytes() + bodyLengthField.calcSerializationBytes() + c.getBodyBytes());
    FieldBase& f = Sequence::set_in_ordered(m_trailer, CheckSumField::Pack(FIELD::CheckSum, b & 255))->second;

    typename S::buffer_type& r = m_trailer.serializeTo(
                                   FieldMap::serializeTo(
                                     m_header.serializeTo(
                                       s.buffer( l ) ) ) );
    if (nosync)
    {
      char* p = (char*)&r[0]; // !!! no multi-tier iovecs
      b = Util::CharBuffer::byteSum( p, l - csuml ) & 255;
      p += l - c.getCsumFieldValueLength();
      CheckSumConvertor::write(p, (unsigned char) b );
      f.setPacked( StringField::Pack( FIELD::CheckSum, p, 3 ) );
    }
    return r; 
  }

  void HEAVYUSE setGroup( Message::FieldReader& reader, FieldMap& section,
                 const DataDictionary& messageDD, int group, int delim, const DataDictionary& groupDD);
protected:
  /// Constructor for derived classes
  template <typename Packed>
  Message( const BeginString::Pack& beginString, const Packed& msgType )
  : FieldMap( FieldMap::create_allocator() ),
    m_header( get_allocator(), message_order( message_order::header ) ),
    m_trailer( get_allocator(), message_order( message_order::trailer ) ),
    m_status( 0 )
  {
    Sequence::push_back_to_ordered(m_header, beginString );
    Sequence::push_back_to_ordered(m_header, msgType );
  }

public:

  HEAVYUSE Message()
  : FieldMap( FieldMap::create_allocator(), message_order( message_order::normal ), Options( bodyFieldCountEstimate(), false ) ),
    m_header( get_allocator(), message_order( message_order::header ), Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), message_order( message_order::trailer ), Options( TrailerFieldCountEstimate ) ),
    m_status( 0 ) {}

  /// Construct a message with hints
  HEAVYUSE Message( SerializationHint hint, int fieldEstimate = ItemAllocatorTraits::DefaultCapacity )
  : FieldMap( FieldMap::create_allocator( fieldEstimate ),
    message_order( message_order::normal ), Options( bodyFieldCountEstimate( fieldEstimate ), false) ),
    m_header( get_allocator(), message_order( message_order::header ), Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), message_order( message_order::trailer ), Options( TrailerFieldCountEstimate ) ),
    m_status( createStatus(serialized_once, hint == SerializedOnce) ) {}

  /// Construct a message from a string
  HEAVYUSE Message( const std::string& string, bool validate = true )
  THROW_DECL( InvalidMessage )
  : FieldMap( FieldMap::create_allocator(), message_order( message_order::normal ), Options( bodyFieldCountEstimate(), false ) ),
    m_header( get_allocator(), message_order( message_order::header ), Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), message_order( message_order::trailer ), Options( TrailerFieldCountEstimate ) ),
    m_status( 0 )
  {
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate );
  }

  /// Construct a message from a string using a data dictionary
  HEAVYUSE Message( const std::string& string, const FIX::DataDictionary& dataDictionary,
           bool validate = true )
  THROW_DECL( InvalidMessage )
  : FieldMap( FieldMap::create_allocator(), message_order( message_order::normal ), Options( bodyFieldCountEstimate(), false) ),
    m_header( get_allocator(), message_order( message_order::header ), Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), message_order( message_order::trailer ), Options( TrailerFieldCountEstimate ) ),
    m_status( 0 )
  {
    DataDictionary::MsgInfo msgInfo( dataDictionary );
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate, msgInfo, dataDictionary );
  }

  /// Construct a message from a string using a session and application data dictionary
  HEAVYUSE Message( const std::string& string, const FIX::DataDictionary& sessionDataDictionary,
           const FIX::DataDictionary& applicationDataDictionary, bool validate = true )
  THROW_DECL( InvalidMessage )
  : FieldMap( FieldMap::create_allocator(), message_order( message_order::normal ), Options( bodyFieldCountEstimate(), false ) ),
    m_header( get_allocator(), message_order( message_order::header ), Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), message_order( message_order::trailer ), Options( TrailerFieldCountEstimate ) ),
    m_status( 0 )
  {
    DataDictionary::MsgInfo msgInfo( applicationDataDictionary );
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate, msgInfo, sessionDataDictionary, DataDictionaryProvider::defaultProvider() );
  }

  HEAVYUSE Message( const std::string& string, const FIX::DataDictionary& sessionDataDictionary,
           const FIX::DataDictionary& applicationDataDictionary,
           FieldMap::allocator_type& allocator, bool validate = true )
  THROW_DECL( InvalidMessage )
  : FieldMap( allocator, message_order( message_order::normal ), Options( bodyFieldCountEstimate(), false) ),
    m_header( allocator, message_order( message_order::header ), Options( HeaderFieldCountEstimate ) ),
    m_trailer( allocator, message_order( message_order::trailer ), Options( TrailerFieldCountEstimate ) ),
    m_status( 0 )
  {
    DataDictionary::MsgInfo msgInfo( applicationDataDictionary );
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate, msgInfo, sessionDataDictionary, DataDictionaryProvider::defaultProvider() );
  }

#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  Message( const message_order& headerOrder, const message_order& trailerOrder, const message_order& bodyOrder )
  : FieldMap( FieldMap::create_allocator(), bodyOrder, Options( bodyFieldCountEstimate(), false ) ),
    m_header( get_allocator(), headerOrder, Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), trailerOrder, Options( TrailerFieldCountEstimate ) ),
    m_status( 0 ) {}

  Message( const message_order& headerOrder, const message_order& trailerOrder, const message_order& bodyOrder,
           const std::string& string, bool validate = true )
  THROW_DECL( InvalidMessage )
  : FieldMap( FieldMap::create_allocator(), bodyOrder, Options( bodyFieldCountEstimate(), false ) ),
    m_header( get_allocator(), headerOrder, Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), trailerOrder, Options( TrailerFieldCountEstimate ) ),
    m_status( 0 )
  {
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate );
  }

  Message( const message_order& headerOrder, const message_order& trailerOrder, const message_order& bodyOrder,
           const std::string& string, const FIX::DataDictionary& sessionDataDictionary,
           const FIX::DataDictionary& applicationDataDictionary, bool validate = true )
  THROW_DECL( InvalidMessage )
  : FieldMap( FieldMap::create_allocator(), bodyOrder, Options( bodyFieldCountEstimate(), false ) ),
    m_header( get_allocator(), headerOrder, Options( HeaderFieldCountEstimate ) ),
    m_trailer( get_allocator(), trailerOrder, Options( TrailerFieldCountEstimate ) ),
    m_status( 0 )
  {
    DataDictionary::MsgInfo msgInfo( applicationDataDictionary );
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate, msgInfo, sessionDataDictionary, DataDictionaryProvider::defaultProvider() );
  }
#endif // ENABLE_DICTIONARY_FIELD_ORDER

  Message( const Message& copy )
  : FieldMap( FieldMap::create_allocator(), copy ),
    m_header( get_allocator(), copy.m_header ),
    m_trailer( get_allocator(), copy.m_trailer )
  {
    m_status = copy.m_status;
    m_status_data = copy.m_status_data;
  }

  /// Set global data dictionary for encoding messages into XML
  static bool InitializeXML( const std::string& string );

  FieldMap& addGroup( FIX::Group& group )
  { return FieldMap::addGroup( group.field(), group ); }

  void replaceGroup( unsigned num, const FIX::Group& group )
  { FieldMap::replaceGroup( num, group.field(), group ); }

  Group& getGroup( unsigned num, FIX::Group& group ) const THROW_DECL( FieldNotFound )
  { group.clear();
    return static_cast < Group& >
      ( FieldMap::getGroup( num, group.field(), group ) );
  }

  void removeGroup( unsigned num, const FIX::Group& group )
  { FieldMap::removeGroup( num, group.field() ); }
  void removeGroup( const FIX::Group& group )
  { FieldMap::removeGroup( group.field() ); }

  bool hasGroup( const FIX::Group& group ) const
  { return FieldMap::hasGroup( group.field() ); }
  bool hasGroup( unsigned num, const FIX::Group& group ) const
  { return FieldMap::hasGroup( num, group.field() ); }

  /// Get a string representation without making a copy
  inline std::string& toString( std::string& str ) const
  {
    bool nosync = getStatusBit( serialized_once );
    return toString( FieldCounter( *this, nosync), str );
  }

  /// Get a string representation without making a copy
  inline std::string& toString( std::string& str,
                         int beginStringField,
                         int bodyLengthField = FIELD::BodyLength, 
                         int checkSumField = FIELD::CheckSum ) const
  {
    bool nosync = getStatusBit( serialized_once ) && checkSumField == FIELD::CheckSum;
    return toString( FieldCounter( *this, nosync,
                                   beginStringField,
                                   bodyLengthField,
                                   checkSumField ), str );
  }

  /// Get a string representation of the message
  inline std::string toString() const
  {
    std::string str;
    bool nosync = getStatusBit( serialized_once );
    toString( FieldCounter( *this, nosync ), str );
    return str;
  }

  /// Get a string representation of the message
  inline std::string toString( int beginStringField,
                        int bodyLengthField = FIELD::BodyLength,
                        int checkSumField = FIELD::CheckSum ) const
  {
    std::string str;
    bool nosync = getStatusBit( serialized_once ) && checkSumField == FIELD::CheckSum;
    toString( FieldCounter( *this, nosync, 
                            beginStringField,
                            bodyLengthField,
                            checkSumField ), str );
    return str;
  }

  /// Get a XML representation of the message
  std::string toXML() const;
  /// Get a XML representation without making a copy
  std::string& toXML( std::string& ) const;

  /**
   * Add header informations depending on a source message.
   * This can be used to add routing informations like OnBehalfOfCompID
   * and DeliverToCompID to a message.
   */
  void reverseRoute( const Header& );

  /**
   * Set a message based on a string representation
   * This will fill in the fields on the message by parsing out the string
   * that is passed in.  It will return true on success and false
   * on failure.
   */
  void setString( const std::string& string, bool validate ) THROW_DECL( InvalidMessage )
  {
    clear();
    FieldReader reader( String::data(string), String::size(string) );
    readString( reader, validate );
  }
  void setString( const std::string& string ) THROW_DECL( InvalidMessage )
  { setString( string, true ); }

  void setString( const std::string& string,
                  bool validate,
                  const FIX::DataDictionary* pSessionDataDictionary,
                  const FIX::DataDictionary* pApplicationDataDictionary ) THROW_DECL( InvalidMessage )
  {
    clear();
    FieldReader reader( String::data(string), String::size(string) );
    if ( LIKELY(pSessionDataDictionary != pApplicationDataDictionary) )
    {
      DataDictionary::MsgInfo msgInfo(pApplicationDataDictionary, pApplicationDataDictionary );
      readString( reader, validate, msgInfo,
                  pSessionDataDictionary ? *pSessionDataDictionary
                                         : DataDictionaryProvider::defaultProvider().defaultSessionDataDictionary(),
                  DataDictionaryProvider::defaultProvider() );
    }
    else if (pSessionDataDictionary)
    {
      DataDictionary::MsgInfo msgInfo( *pSessionDataDictionary );
      readString( reader, validate, msgInfo, *pSessionDataDictionary );
    }
    else
      readString( reader, validate );
  }
  void setString( const std::string& string,
                  bool validate,
                  const FIX::DataDictionary* pDataDictionary ) THROW_DECL( InvalidMessage )
  {
    clear();
    FieldReader reader( String::data(string), String::size(string) );
    if ( pDataDictionary )
    {
      DataDictionary::MsgInfo msgInfo( *pDataDictionary );
      readString( reader, validate, msgInfo, *pDataDictionary );
    }
    else
      readString( reader, validate );
  }

  void LIGHTUSE setGroup( const std::string& msg, const FieldBase& field,
                 const std::string& string, std::string::size_type& pos,
                 FieldMap& map, const DataDictionary& dataDictionary );

  /**
   * Set a messages header from a string
   * This is an optimization that can be used to get useful information
   * from the header of a FIX string without parsing the whole thing.
   */
  bool LIGHTUSE setStringHeader( const std::string& string );

  /// Getter for the message header
  const Header& getHeader() const { return m_header; }
  /// Mutable getter for the message header
  Header& getHeader() { return m_header; }
  /// Getter for the message trailer
  const Trailer& getTrailer() const { return m_trailer; }
  /// Mutable getter for the message trailer
  Trailer& getTrailer() { return m_trailer; }

  bool hasValidStructure(int& field) const
  {
    if( getStatusBit(tag_out_of_order) )
    {
      field = (int)m_status_data;
      return false;
    }
    return true;
  }

  const char* hasInvalidTagFormat() const
  {
    return getStatusBit(invalid_tag_format) ? (const char*)m_status_data: NULL;
  }

  int bodyLength( int beginStringField = FIELD::BeginString, 
              int bodyLengthField = FIELD::BodyLength, 
              int checkSumField = FIELD::CheckSum ) const
  {
    return FieldCounter( *this, true,
                          beginStringField,
                          bodyLengthField,
                          checkSumField ).getBodyLength();
  }

  int checkSum( int checkSumField = FIELD::CheckSum ) const
  { return ( m_header.calculateTotal(checkSumField)
             + calculateTotal(checkSumField)
             + m_trailer.calculateTotal(checkSumField) ) & 255;
  }

  inline bool NOTHROW isAdmin() const
  { 
    if( m_header.isSetField(FIELD::MsgType) )
    {
      const MsgType& msgType = FIELD_GET_REF( m_header, MsgType );
      return DataDictionary::MsgInfo::isAdminMsgType( msgType );
    }
    return false;
  }

  inline bool NOTHROW isApp() const
  { 
    if( m_header.isSetField(FIELD::MsgType) )
    {
      const MsgType& msgType = FIELD_GET_REF( m_header, MsgType );
      return !DataDictionary::MsgInfo::isAdminMsgType( msgType );
    }
    return false;
  }

  bool isEmpty()
  { return m_header.isEmpty() && FieldMap::isEmpty() && m_trailer.isEmpty(); }

  void clear()
  { 
/*
    m_status_data = 0;
    m_status &= (1 << has_external_allocator);
    if (LIKELY(!m_status))
    {
      m_header.discard();
      FieldMap::discard();
      m_trailer.discard();
      m_allocator.clear();
    }
    else
*/
    {
      m_header.clear();
      FieldMap::clear();
      m_trailer.clear();
    }
  }

  static inline bool NOTHROW isAdminMsgType( const MsgType& msgType )
  { return DataDictionary::MsgInfo::isAdminMsgType( msgType ); }

  static ApplVerID toApplVerID(const BeginString& value)
  {
    if( value == BeginString_FIX40 )
      return ApplVerID(ApplVerID_FIX40);
    if( value == BeginString_FIX41 )
      return ApplVerID(ApplVerID_FIX41);
    if( value == BeginString_FIX42 )
      return ApplVerID(ApplVerID_FIX42);
    if( value == BeginString_FIX43 )
      return ApplVerID(ApplVerID_FIX43);
    if( value == BeginString_FIX44 )
      return ApplVerID(ApplVerID_FIX44);
    if( value == BeginString_FIX50 )
      return ApplVerID(ApplVerID_FIX50);
    if( value == "FIX.5.0SP1" )
      return ApplVerID(ApplVerID_FIX50SP1);
    if( value == "FIX.5.0SP2" )
      return ApplVerID(ApplVerID_FIX50SP2);
    return ApplVerID(ApplVerID(value));
  }

  static BeginString toBeginString( const ApplVerID& applVerID )
  {
    if( applVerID == ApplVerID_FIX40 )
      return BeginString(BeginString_FIX40);
    else if( applVerID == ApplVerID_FIX41 )
      return BeginString(BeginString_FIX41);
    else if( applVerID == ApplVerID_FIX42 )
      return BeginString(BeginString_FIX42);
    else if( applVerID == ApplVerID_FIX43 )
      return BeginString(BeginString_FIX43);
    else if( applVerID == ApplVerID_FIX44 )
      return BeginString(BeginString_FIX44);
    else if( applVerID == ApplVerID_FIX50 )
      return BeginString(BeginString_FIX50);
    else if( applVerID == ApplVerID_FIX50SP1 )
      return BeginString(BeginString_FIX50);
    else if( applVerID == ApplVerID_FIX50SP2 )
      return BeginString(BeginString_FIX50);
    else
      return BeginString("");
  }


  static inline bool isHeaderField( int field,
				    const DataDictionary* pD = 0 )
  {
    return ( LIKELY((unsigned)field < headerFieldSet.size()) &&
	     headerFieldSet.test( field ) ) || 
	   ( pD && pD->isHeaderField( field ) );
  }
  
  static inline bool isHeaderField( const FieldBase& field,
				    const DataDictionary* pD = 0 )
  {
    return isHeaderField( field.getField(), pD );
  }
  
  static inline bool isTrailerField( int field,
                                     const DataDictionary* pD = 0 )
  {
    return (field == FIELD::SignatureLength) ||
	   (field == FIELD::Signature) ||
	   (field == FIELD::CheckSum) ||
	   (pD && pD->isTrailerField( field ));
  }
  
  static inline bool isTrailerField( const FieldBase& field,
                                     const DataDictionary* pD = 0 )
  {
    return isTrailerField( field.getField(), pD );
  }

  /// Returns the session ID of the intended recipient
  SessionID getSessionID( const std::string& qualifier = "" ) const THROW_DECL( FieldNotFound );
  /// Sets the session ID of the intended recipient
  void setSessionID( const SessionID& sessionID );

#ifdef HAVE_EMX
  void setSubMessageType(const std::string & subMsgType)
  {
    m_header.setField(EMX::MsgType::Pack(subMsgType));
    setStatusBit(emx_compatible);
  }

  const std::string & getSubMessageType() const { 
    return getStatusBit(emx_compatible) ? m_header.getField(FIELD::EMX::MsgType) : m_emx_none;
  }
#endif

private:

  HEAVYUSE bool extractFieldDataLength( FieldReader& reader, const FieldMap& section, int field )
  {
    // length field is 1 less except for Signature
    int lenField = (field != FIELD::Signature) ? (field - 1) : FIELD::SignatureLength;
    const FieldBase* fieldPtr = section.getFieldPtrIfSet( lenField );
    if ( LIKELY(NULL != fieldPtr) )
    {
      const FieldBase::string_type& fieldLength = fieldPtr->getRawString();
      if ( LIKELY(IntConvertor::parse( fieldLength, lenField )) )
        reader.pos( lenField );
      else
      {
        setErrorStatusBit( incorrect_data_format, lenField );
        throw InvalidMessage("format error for data length field " + IntConvertor::convert(lenField));
      }
    } else
      throw InvalidMessage("missing data length field " + IntConvertor::convert(lenField));
    return true;
  }

  bool extractField ( FieldReader& f,
		      const DataDictionary* pSessionDD = 0,
		      const DataDictionary* pAppDD = 0,
		      const Group* pGroup = 0);
  void validate(const BodyLength* pBodyLength);
  std::string toXMLFields(const FieldMap& fields, int space) const;

  static inline status_value_type createStatus(status_enum_type bit, bool v)
  {
    return (status_value_type)v << bit;
  }

  inline void setStatusBit(status_enum_type bit)
  {
    m_status |= (status_value_type)1 << bit;
  }

#ifdef HAVE_EMX
  inline bool verifyEMX(int field, bool isAppMessage = true) {
    if (field == FIELD::EMX::MsgType || !isAppMessage) 
    {
      m_status |= createStatus(emx_compatible, true);
      return isAppMessage;
    }
    return false;
  }
  static const std::string m_emx_none;
#endif

  inline void setHeaderStatusBits(int field) {
    // SenderCompID and TargetCompID tag values are between 32 and 64
    status_value_type v = ((status_value_type)(field < 64) << (field - ((sizeof(status_value_type) <= 4) ? 32 : 0))) &
			 (((status_value_type)1 << has_sender_comp_id) | ((status_value_type)1 << has_target_comp_id ));
    m_status |= v;
  }

  inline void setErrorStatusBit(status_enum_type bit, intptr_t data)
  {
    if ( !(m_status & status_error_mask) )
    {
      m_status_data = data;
      m_status |= (status_value_type)1 << bit;
    }
  }

  inline void clearStatusBit(status_enum_type bit)
  {
    m_status &= ~((status_value_type)1 << bit);
  }

  inline bool getStatusBit(status_enum_type bit) const
  {
    return (m_status & ((status_value_type)1 << bit)) != 0;
  }

protected:
  mutable Header m_header;
  mutable Trailer m_trailer;
  status_value_type m_status;
  intptr_t m_status_data;

  static SmartPtr<DataDictionary> s_dataDictionary;
};
/*! @} */

inline const char* Message::FieldReader::scan()
{
  const char* b = m_start + m_pos;
  const char* p = Util::Tag::delimit(b, (unsigned)(m_end - b));
  if ( LIKELY(p != NULL) )
  {
    m_length = (int)(p - b);
    if ( LIKELY(Util::Tag::parse(b, p, m_field, m_csum)) )
    {
      p++;
      b = Util::CharBuffer::find( Util::CharBuffer::Fixed<1>('\001'), p, m_end - p );
      if ( LIKELY(b != NULL) )
      {
        m_start = p;
        m_pos = (int)(b - p);
        return NULL;
      }
      else
        b = ErrSOH;
    }
    else
      return b;
  }
  else
    b = ErrDelimiter;

  m_field = 0;
  throw InvalidMessage(b);
}

inline void Message::FieldReader::skip()
{
  const char* b = m_start + m_pos;
  const char* p = Util::CharBuffer::find( Util::CharBuffer::Fixed<1>('\001'), b, m_end - b );
  if ( LIKELY(p != NULL) )
  {
    m_start = b;
    m_pos = (int)(p - b + 1);
    return;
  }

  m_field = 0;
  throw InvalidMessage(ErrSOH);
}

inline void HEAVYUSE
Message::FieldCounter::countHeader( const FieldMap& fields )
{
  int length = 0;
  FieldMap::const_iterator it = fields.begin();
  const FieldMap::const_iterator end = fields.end();

  if( LIKELY(it != end) )
  {
    if( LIKELY(it->first == FIELD::BeginString) )
    {
      m_begin.m_length = (int)it->second.calcSerializationLength();
      if( LIKELY(++it != end) )
        if( LIKELY(it->first == FIELD::BodyLength) )
          ++it;
    }
    else
    {
      if( it->first == FIELD::BodyLength )
        ++it;
    }
    for( ; it != end; ++it )
    {
      length += (int)it->second.calcSerializationLength();
    }
  }
  m_inner.m_length = length;

  FieldMap::g_const_iterator git = fields.g_begin();
  FieldMap::g_const_iterator gend = fields.g_end();
  if (LIKELY(git == gend)) return;
  m_inner.m_length += countGroups(git, gend);
}

inline void HEAVYUSE
Message::FieldCounter::countHeader( int beginStringField,
                                    int bodyLengthField,
                                    const FieldMap& fields )
{
  int length = 0;
  const FieldMap::const_iterator end = fields.end();
  for( FieldMap::const_iterator it = fields.begin(); it != end; ++it )
  {
    int tag = it->first;
    if ( LIKELY(tag != bodyLengthField) )
    {
      if( LIKELY(tag != beginStringField) )
        length += (int)it->second.calcSerializationLength();
      else
        m_begin.m_length += (int)it->second.calcSerializationLength();
    }
  }
  m_inner.m_length = length;

  FieldMap::g_const_iterator git = fields.g_begin();
  FieldMap::g_const_iterator gend = fields.g_end();
  if (LIKELY(git == gend)) return;
  m_inner.m_length += countGroups(git, gend);
}

inline int HEAVYUSE
Message::FieldCounter::countBody(const FieldMap& fields)
{
  int result = 0;
  const FieldMap::const_iterator end = fields.end();
  for( FieldMap::const_iterator it = fields.begin();
       LIKELY(it != end); ++it )
  {
    result += (int)it->second.calcSerializationLength();
  }
  return result + countGroups(fields.g_begin(), fields.g_end());
}

inline void HEAVYUSE
Message::FieldCounter::countNonHeader(const FieldMap& body, const FieldMap& trailer)
{
  int length = countBody(body);

  const FieldMap::const_iterator end = trailer.end();
  for ( FieldMap::const_iterator it = trailer.begin();
        it != end; ++it )
  {
    if ( it->first != checkSumTag )
      length += (int)it->second.calcSerializationLength();
  }
  m_inner.m_length += length;

  FieldMap::g_const_iterator git = trailer.g_begin();
  FieldMap::g_const_iterator gend = trailer.g_end();
  if (LIKELY(git == gend)) return;
  m_inner.m_length += countGroups(git, gend);
}

inline void HEAVYUSE
Message::FieldCounter::syncHeader( const FieldMap& fields )
{
  int length = 0, bytesum = 0;
  FieldMap::const_iterator it = fields.begin();
  const FieldMap::const_iterator end = fields.end();

  if( LIKELY(it != end) )
  {
    if( LIKELY(it->first == FIELD::BeginString) )
    {
      it->second.addSerializationData( m_begin.m_length,
                                        m_begin.m_bytesum );
      if( LIKELY(++it != end) )
        if( LIKELY(it->first == FIELD::BodyLength) )
          ++it;
    }
    else
    {
      if( it->first == FIELD::BodyLength )
        ++it;
    }
    for( ; it != end; ++it )
    {
      it->second.addSerializationData( length, bytesum );
    }
  }
  m_inner = Data(length, bytesum);

  FieldMap::g_const_iterator git = fields.g_begin();
  FieldMap::g_const_iterator gend = fields.g_end();
  if (LIKELY(git == gend)) return;
  m_inner += syncGroups(git, gend);
}

inline void HEAVYUSE
Message::FieldCounter::syncHeader( int beginStringField,
                                   int bodyLengthField,
                                   const FieldMap& fields )
{
  int length = 0, bytesum = 0;
  const FieldMap::const_iterator end = fields.end();
  for( FieldMap::const_iterator it = fields.begin(); it != end; ++it )
  {
    int tag = it->first;
    if ( LIKELY(tag != bodyLengthField) )
    {
      if( LIKELY(tag != beginStringField) )
        it->second.addSerializationData( length, bytesum );
      else
        it->second.addSerializationData( m_begin.m_length,
                                          m_begin.m_bytesum );
    }
  }
  m_inner = Data(length, bytesum);

  FieldMap::g_const_iterator git = fields.g_begin();
  FieldMap::g_const_iterator gend = fields.g_end();
  if (LIKELY(git == gend)) return;
  m_inner += syncGroups(git, gend);
}

inline Message::FieldCounter::Data HEAVYUSE
Message::FieldCounter::syncBody(const FieldMap& fields )
{
  int length = 0, bytesum = 0;
  const FieldMap::const_iterator end = fields.end();
  for( FieldMap::const_iterator it = fields.begin();
       LIKELY(it != end); ++it )
  {
    it->second.addSerializationData( length, bytesum );
  }
  return (Data(length, bytesum) += syncGroups(fields.g_begin(), fields.g_end()));
}

inline void HEAVYUSE
Message::FieldCounter::syncNonHeader(const FieldMap& body, const FieldMap& trailer)
{
  Data d = syncBody(body);
  int length = d.m_length, bytesum = d.m_bytesum;

  const FieldMap::const_iterator end = trailer.end();
  for ( FieldMap::const_iterator it = trailer.begin();
        it != end; ++it )
  {
    if ( it->first != checkSumTag )
      it->second.addSerializationData( length, bytesum );
  }
  m_inner += Data(length, bytesum);

  FieldMap::g_const_iterator git = trailer.g_begin();
  FieldMap::g_const_iterator gend = trailer.g_end();
  if (LIKELY(git == gend)) return;
  m_inner += syncGroups(git, gend);
}

inline std::ostream& operator <<
( std::ostream& stream, const Message& message )
{
  std::string str;
  stream << message.toString( str );
  return stream;
}

inline SessionID Message::getSessionID( const std::string& qualifier ) const
THROW_DECL( FieldNotFound )
{
  BeginString beginString;
  SenderCompID senderCompID;
  TargetCompID targetCompID;

  getHeader().getField( beginString );
  getHeader().getField( senderCompID );
  getHeader().getField( targetCompID );

  return SessionID( beginString, senderCompID, targetCompID, qualifier );
}

inline void Message::setSessionID( const SessionID& sessionID )
{
  Sequence::set_in_ordered( getHeader(), sessionID.getBeginString() );
  Sequence::set_in_ordered( getHeader(), sessionID.getSenderCompID() );
  Sequence::set_in_ordered( getHeader(), sessionID.getTargetCompID() );
}

/// Parse the type of a message from a string.
inline MsgType identifyType( const std::string& message ) THROW_DECL( MessageParseError )
{
  MsgType::Pack pack( Message::identifyType( String::data(message), String::size(message) ) );
  return MsgType( pack.m_data, pack.m_length );
}
}

#endif //FIX_MESSAGE
