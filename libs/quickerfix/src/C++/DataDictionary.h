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

#ifndef FIX_DATADICTIONARY_H
#define FIX_DATADICTIONARY_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Fields.h"
#include "FieldMap.h"
#include "DOMDocument.h"
#include "Exceptions.h"
#include "ItemAllocator.h"
#include "Container.h"
#include <set>
#include <map>
#include <string.h>

namespace FIX
{
class FieldMap;
class Message;

class DataDictionaryBase {
  protected:

#if defined(HAVE_BOOST)
  template <typename T> struct vector_pool_allocator {
    typedef boost::pool_allocator<T> type;
  };

  template <typename T> struct pool_allocator {
    typedef boost::pool_allocator<T> type;
  };

  template <typename T>
  static typename T::allocator_type get_allocator() {
    return typename T::allocator_type();
  }
#else
  template <typename T> struct vector_pool_allocator {
    typedef std::allocator<T> type;
  };

  template <typename T> struct pool_allocator {
    typedef std::allocator<T> type;
  };

  template <typename T>
  static typename T::allocator_type get_allocator() {
    return typename T::allocator_type();
  }
#endif
};

/**
 * Represents a data dictionary for a version of %FIX.
 *
 * Generally loaded from an XML document.  The DataDictionary is also
 * responsible for validation beyond the basic structure of a message.
 */

class DataDictionary : public DataDictionaryBase
{
  static const int NumFastFields = 8192;

  enum Check { 
    FieldsOutOfOrder,
    FieldsHaveValues,
    UserDefinedFields,
    RequiredFields,
    UnknownFields,
    UnknownMsgType
  };

  static const unsigned AllChecks =
	(1 << FieldsOutOfOrder)  | (1 << FieldsHaveValues) |
	(1 << UserDefinedFields) | (1 << RequiredFields)   |
	(1 << UnknownFields)     | (1 << UnknownMsgType);

  inline void checkFor(Check c, bool value) {
    unsigned mask = 1 << c;
    if (value)
      m_checks |= mask;
    else
      m_checks &= ~mask;
  }

  inline bool isChecked(Check c) const {
    unsigned mask = 1 << c;
    return (m_checks & mask) != 0;
  }

  static inline bool isChecked(Check c, const unsigned checks) {
    unsigned mask = 1 << c;
    return (checks & mask) != 0;
  }

  template <class SetIterator, class SubsetIterator, class Compare>
  SubsetIterator includes(SetIterator first1, SetIterator last1,
                          SubsetIterator first2, SubsetIterator last2, Compare comp) const
  {
    for ( ; first2 != last2 && first1 != last1 && !comp(*first2, *first1) ; ++first1 )
    { if (!comp(*first1, *first2)) ++first2; }
    return first2;
  }

public:

  typedef String::value_type string_type;
  typedef message_order OrderedFieldsArray;

  union FieldProperties
  {
#if 0
  public:
    enum LocationCode {
      Body = 0,
      Header = 1,
      Trailer = 2,
      MaxLocation = 2
    };
    typedef std::size_t location_type;
  private:
    typedef unsigned char stored_type;
    stored_type value;

    struct Prop {
      typedef unsigned offset_type;
      struct Location {
        struct User {
          static const offset_type Offset = 0;
          static const stored_type Mask = 3;
        };
        struct Spec {
          static const offset_type Offset = 2;
          static const stored_type Mask = 3 << Offset;
        };
        static const offset_type Offset = 0;
        static const stored_type Mask = User::Mask | Spec::Mask;

        static const stored_type BodyCode = Body;
        static const stored_type HeaderCode = Header | (Header << Spec::Offset);
        static const stored_type TrailerCode = Trailer | (Trailer << Spec::Offset);
      };
      struct Data {
        static const offset_type Offset = 4;
        static const stored_type Mask = 1 << Offset;
      };
      struct Group {
        static const offset_type Offset = 5;
        static const stored_type Mask = 1 << Offset;
      };
      struct Defined {
        static const offset_type Offset = 6;
        static const stored_type Mask = 1 << Offset;
      };
      struct Invalid {
        static const offset_type Offset = 7;
        static const stored_type Mask = 1 << Offset;
      };
    };
    template <typename P> static void set(stored_type& f, stored_type v)
    { f &= ~P::Mask; f |= (v << P::Offset); }
    template <typename P> static stored_type get(const stored_type& f)
    { return (f & P::Mask) >> P::Offset; }
    template <typename P> static bool test(const stored_type& f, stored_type v = 1)
    { return f & (v << P::Offset); }

  public:
    FieldProperties() { value = 0; }
    FieldProperties( bool valid ) { value = valid << Prop::Invalid::Offset; }

    void userLocation(LocationCode l) { if ((l | specLocation()) <= MaxLocation) set<Prop::Location::User>(value, l); }
    LocationCode userLocation() const { return (LocationCode)get<Prop::Location::User>(value); }

    void specLocation(LocationCode l) { set<Prop::Location::Spec>(value, l); }
    LocationCode specLocation() const { return (LocationCode)get<Prop::Location::Spec>(value); }

    location_type location() const { return (((value >> Prop::Location::User::Offset) |
                                              (value >> Prop::Location::Spec::Offset)) & Prop::Location::User::Mask); }
    static location_type locationOrder( location_type l ) { return l ^ 1; }
    static location_type locationOrder( LocationCode c ) { return c ^ 1; }

    static bool isHeader(location_type l) { return l & Header; }
    bool isHeader() const { return test<Prop::Location>( value, Prop::Location::HeaderCode ); }
    bool isUserHeader() const { return test<Prop::Location::User>( value, Header); }

    static bool isTrailer(location_type l) { return l & Trailer; }
    bool isTrailer() const { return test<Prop::Location>( value, Prop::Location::TrailerCode ); }
    bool isUserTrailer() const { return test<Prop::Location::User>( value, Trailer); }

    static bool isBody(location_type l) { return l == Body; }
    bool isBody() const { return get<Prop::Location>(value) == Prop::Location::BodyCode; }

    void hasData(bool v) { set<Prop::Data>(value, v); }
    bool hasData() const { return test<Prop::Data>(value); }
    void hasGroup(bool v) { set<Prop::Group>(value, v); }
    bool hasGroup() const { return test<Prop::Group>(value); }

    void defined(bool v) { set<Prop::Defined>(value, v); }
    bool defined() const { return test<Prop::Defined>(value); }
    void invalid(bool v) { set<Prop::Invalid>(value, v); }
    bool invalid() const { return test<Prop::Invalid>(value); }
#else
    enum LocationCode {
      Body = 0,
      Header = 1,
      Trailer = 2,
      MaxLocation = 2
    };
    typedef unsigned location_type;

    unsigned char value;
    struct {
	unsigned char UserLocation	: 2;
        unsigned char SpecLocation	: 2;
	unsigned char isData 		: 1;
	unsigned char isGroup 		: 1;
        unsigned char isDefined         : 1;
	unsigned char isInvalid		: 1;
    };
    FieldProperties() { value = 0; }
    FieldProperties( bool valid ) { value = 0; isInvalid = !valid; }

    void userLocation(LocationCode l) { if ((SpecLocation | UserLocation) <= MaxLocation) UserLocation = l; }
    LocationCode userLocation() const { return (LocationCode)UserLocation; }

    void specLocation(LocationCode l) { SpecLocation = l; }
    LocationCode specLocation() const { return (LocationCode)SpecLocation; }

    location_type location() const { return (location_type)UserLocation | (location_type)SpecLocation; }

    static location_type locationOrder( location_type l ) { return l ^ 1; }
    static location_type locationOrder( LocationCode c ) { return c ^ 1; }

    static bool isHeader(location_type l) { return l & Header; }
    bool isHeader() const { return location() & Header; }
    bool isUserHeader() const { return UserLocation & Header; }
    static bool isTrailer(location_type l) { return (l & Trailer) != 0; }
    bool isTrailer() const { return (location() & Trailer) != 0; }
    bool isUserTrailer() const { return (UserLocation & Trailer) != 0; }
    static bool isBody(location_type l) { return l == Body; }
    bool isBody() const { return location() == Body; }

    void hasData(bool v) { isData = v; }
    bool hasData() const { return isData; }
    void hasGroup(bool v) { isGroup = v; }
    bool hasGroup() const { return isGroup; }

    void defined(bool v) { isDefined = v; }
    bool defined() const { return isDefined; }
    void invalid(bool v) { isInvalid = v; }
    bool invalid() const { return isInvalid; }
#endif
  };

  struct HeaderCompare
  {
    bool operator()(int a, int b) const { return header_order::compare(a, b); };
    bool operator()(const FieldMap::Fields::value_type& f, int v) const { return header_order::compare(f.first, v); }
    bool operator()(int v, const FieldMap::Fields::value_type& f) const { return header_order::compare(v, f.first); }
  };

  struct TrailerCompare
  {
    bool operator()(int a, int b) const { return trailer_order::compare(a, b); };
    bool operator()(const FieldMap::Fields::value_type& f, int v) const { return trailer_order::compare(f.first, v); }
    bool operator()(int v, const FieldMap::Fields::value_type& f) const { return trailer_order::compare(v, f.first); }
  };

  struct FieldCompare
  {
    bool operator()(const FieldMap::Fields::value_type& f, int v) const { return f.first < v; }
    bool operator()(int v, const FieldMap::Fields::value_type& f) const { return v < f.first; }
  };

#if defined(HAVE_BOOST)
  typedef boost::container::flat_set <
    int,
    std::less<int>,
    pool_allocator<int>::type
  > MsgFields;
  typedef boost::container::flat_set <
    int,
    HeaderCompare,
    pool_allocator<int>::type
  > HeaderFields;
  typedef boost::container::flat_set <
    int,
    TrailerCompare,
    pool_allocator<int>::type
  > TrailerFields;
#else
  typedef std::set <
    int,
    std::less<int>,
    pool_allocator<int>::type
  > MsgFields;
  typedef std::set <
    int,
    HeaderCompare,
    pool_allocator<int>::type
  > HeaderFields;
  typedef std::set <
    int,
    TrailerCompare,
    pool_allocator<int>::type
  > TrailerFields;
#endif

typedef Container::DictionarySet <
  string_type, ItemHash, String::equal_to, pool_allocator<string_type>::type
> Values;

typedef Container::DictionarySet <
  int, Util::Tag::Identity, std::equal_to<int>, pool_allocator<int>::type
> Fields;

typedef Container::DictionaryMap <
  int,
  FieldProperties,
  Util::Tag::Identity,
  std::equal_to<int>,
  pool_allocator<
    std::pair< int, FieldProperties >
  >::type
> FieldToProps;

template <unsigned N> class TFieldProperty
{
  FieldProperties m_props[N];
  FieldToProps m_map;

  public:

  TFieldProperty() { ::memset(m_props, 0, sizeof(m_props) ); }
  TFieldProperty& operator=(const TFieldProperty& other)
  {
    ::memcpy(m_props, other.m_props, sizeof(m_props));
    m_map = other.m_map;
    return *this;
  }
  int cached() const { return N; }
  FieldProperties& operator[]( int n ) { return LIKELY((unsigned)n < N) ? m_props[n] : m_map[n]; }
  FieldProperties at( int n ) const
  {
    if ( LIKELY((unsigned)n < N) ) return m_props[n];
    FieldToProps::const_iterator it = m_map.find(n);
    return (it != m_map.end()) ? it->second : FieldProperties( n <= 0 );
  }
};

typedef TFieldProperty<NumFastFields> FieldProps;

typedef std::vector <
  int,
  pool_allocator<int>::type
> OrderedFields;

typedef Container::DictionaryMap <
  int,
  std::pair < int, DataDictionary* >,
  Util::Tag::Identity,
  std::equal_to<int>,
  pool_allocator<
    std::pair< int,
      std::pair<int, DataDictionary*>
    >
  >::type
> FieldToGroup;

typedef std::map <
  string_type,
  FieldToGroup,
  std::less<string_type>,
  pool_allocator< std::pair<const string_type, FieldToGroup> >::type
> MsgTypeGroups;

typedef std::map <
  string_type,
  FieldToProps,
  std::less<string_type>,
  pool_allocator< std::pair<const string_type, FieldToProps> >::type
> MsgTypeFieldProps;

typedef std::map <
  string_type,
  MsgFields,
  std::less<string_type>,
  pool_allocator< std::pair<const string_type, MsgFields> >::type
> MsgTypeRequiredFields;

struct MsgTypeData
{
  struct MessageFieldsOrderHolder
  {
    MessageFieldsOrderHolder()
    {}

    ~MessageFieldsOrderHolder()
    {}

    void push_back(int field)
    {
      m_orderedFlds.push_back(field);
    }

    const message_order & getMessageOrder() const
    {
      if (m_msgOrder)
        return m_msgOrder;

      int * tmp = new int[m_orderedFlds.size() + 1];
      int * i = tmp;

      OrderedFields::const_iterator iter;
      for( iter = m_orderedFlds.begin(); iter != m_orderedFlds.end(); *(i++) = *(iter++) ) {}
      *i = 0;

      m_msgOrder = message_order(tmp);
      delete [] tmp;

      return m_msgOrder;
    }

  private:

    mutable message_order  m_msgOrder;
    OrderedFields m_orderedFlds;
  };

  MsgFields& m_required; 
  FieldToGroup* m_groups;
  FieldToProps& m_defined; // is in message
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  MessageFieldsOrderHolder m_ordered;
#endif

  MsgTypeData(MsgFields& required, FieldToGroup& groups, FieldToProps& props)
  : m_required(required), m_groups(&groups), m_defined(props) {}
  MsgTypeData(MsgFields& required, FieldToProps& props)
  : m_required(required), m_groups(NULL), m_defined(props) {}
  void groups(FieldToGroup& groups) { m_groups = &groups; }
  const FieldToGroup* groups() const { return m_groups; }
};

typedef Container::DictionaryMap <
  string_type,
  MsgTypeData,
  ItemHash,
  String::equal_to,
  vector_pool_allocator<
    std::pair<string_type, MsgTypeData>
  >::type
> MsgTypeToData;

typedef Container::DictionaryMap <
  int,
  TYPE::Type,
  Util::Tag::Identity,
  std::equal_to<int>,
  pool_allocator<
    std::pair<int, TYPE::Type>
  >::type
> FieldTypes;

typedef Container::DictionaryMap <
  int,
  Values,
  Util::Tag::Identity,
  std::equal_to<int>,
  pool_allocator<
    std::pair<int, Values>
  >::type
> FieldToValue;

typedef std::map < int, std::string > FieldToName;
typedef std::map < std::string, int > NameToField;
typedef std::map < std::pair < int, std::string > ,
                   std::string  > ValueToName;

  DataDictionary();
  DataDictionary( const DataDictionary& copy );

  DataDictionary( std::istream& stream, bool preserveMsgFieldsOrder = false ) THROW_DECL( ConfigError );
  DataDictionary( const std::string& url, bool preserveMsgFieldsOrder = false ) THROW_DECL( ConfigError );
  virtual ~DataDictionary();

  void LIGHTUSE readFromURL( const std::string& url ) THROW_DECL( ConfigError );
  void LIGHTUSE readFromDocument( const DOMDocumentPtr& pDoc ) THROW_DECL( ConfigError );
  void LIGHTUSE readFromStream( std::istream& stream ) THROW_DECL( ConfigError );

  message_order const& getOrderedFields() const;
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  message_order const& LIGHTUSE getHeaderOrderedFields() const THROW_DECL( ConfigError );
  message_order const& LIGHTUSE getTrailerOrderedFields() const THROW_DECL( ConfigError );
  message_order const& LIGHTUSE getMessageOrderedFields(const string_type& msgType) const
    THROW_DECL( ConfigError )
  {
    MsgTypeToData::const_iterator i = m_messageData.find( msgType );
    if ( LIKELY(i != m_messageData.end()) ) return i->second.m_ordered.getMessageOrder();
    throw ConfigError("<Message> " + std::string(msgType.data(), msgType.size()) + " does not have a stored message order");
  }
#endif
  FieldProperties getProps( int field ) const
  { return m_fieldProps.at( field ); }

  const MsgTypeData* getMessageData( const string_type& msgType ) const
  { 
    MsgTypeToData::const_iterator i = m_messageData.find( msgType );
    return ( LIKELY(i != m_messageData.end()) ) ? &i->second : NULL;
  }

  const MsgTypeData* getMessageData( const StringField& msgType ) const
  { return getMessageData( msgType.forString( String::Rval() ) ); }

  const MsgTypeData* getEmptyMessageData() const
  { return &m_noData; }

  const FieldToGroup& headerGroups() const { return m_headerGroups; }
  const FieldToGroup& trailerGroups() const { return m_trailerGroups; }

  // storage functions
  void setVersion( const std::string& beginString );
  const std::string& getVersion() const
  {
    return m_beginString;
  }

  void LIGHTUSE addField( int field );

  void LIGHTUSE addFieldName( int field, const std::string& name );
  bool getFieldName( int field, std::string& name ) const
  {
    FieldToName::const_iterator i = m_fieldNames.find( field );
    if(i == m_fieldNames.end()) return false;
    name = i->second;
    return true;
  }

  bool getFieldTag( const std::string& name, int& field ) const
  {
    NameToField::const_iterator i = m_names.find( name );
    if(i == m_names.end()) return false;
    field = i->second;
    return true;
  }

  void LIGHTUSE addValueName( int field, const std::string& value, const std::string& name );
  bool getValueName( int field, const std::string& value, std::string& name ) const
  {
    ValueToName::const_iterator i = m_valueNames.find( std::make_pair(field, value) );
    if(i == m_valueNames.end()) return false;
    name = i->second;
    return true;
  }

  bool HEAVYUSE PURE_DECL isField( int field ) const
  { return getProps( field ).defined(); }

  MsgTypeToData::iterator LIGHTUSE addMsgType( const std::string& msgType );
  bool isMsgType( const string_type& msgType ) const
  {
    return m_messageData.find( msgType ) != m_messageData.end();
  }

  void LIGHTUSE addMsgField( const std::string& msgType, int field );
  bool isMsgField( const string_type& msgType, int field ) const
  {
    MsgTypeToData::const_iterator i = m_messageData.find( msgType );
    return ( LIKELY(i != m_messageData.end()) ) 
      ? i->second.m_defined.find( field ) != i->second.m_defined.end()
      : false;
  }

  void LIGHTUSE addSpecHeaderField( int field )
  {
    m_fieldProps[ field ].specLocation( FieldProperties::Header );
    if ( isDataField( field ) ) m_headerData = true;
  }
  void LIGHTUSE addHeaderField( int field, bool required );
  bool HEAVYUSE PURE_DECL isHeaderField( int field ) const
  { return getProps(field).isUserHeader(); }

  void LIGHTUSE addSpecTrailerField( int field )
  { m_fieldProps[ field ].specLocation( FieldProperties::Trailer ); }
  void LIGHTUSE addTrailerField( int field, bool required );
  bool HEAVYUSE PURE_DECL isTrailerField( int field ) const
  { return getProps(field).isUserTrailer(); }

  void LIGHTUSE addFieldType( int field, FIX::TYPE::Type type );
  bool getFieldType( int field, FIX::TYPE::Type& type ) const
  {
    FieldTypes::const_iterator i = m_fieldTypes.find( field );
    if ( i == m_fieldTypes.end() ) return false;
    type = i->second;
    return true;
  }

  void LIGHTUSE addRequiredField( const std::string& msgType, int field );
  bool isRequiredField( const string_type& msgType, int field ) const
  {
    MsgTypeToData::const_iterator i = m_messageData.find( msgType );
    return ( LIKELY(i != m_messageData.end()) )
      ? i->second.m_required.find( field ) != i->second.m_required.end()
      : false;
  }

  void LIGHTUSE addFieldValue( int field, const string_type& value );
  bool hasFieldValue( int field ) const
  {
    FieldToValue::const_iterator i = m_fieldValues.find( field );
    return i != m_fieldValues.end();
  }

  bool isFieldValue( int field, const string_type& value) const 
  {
    FieldToValue::const_iterator i = m_fieldValues.find( field );
    return ( LIKELY(i != m_fieldValues.end()) ) ? isFieldValue( i, value ) : false;
  }

  void LIGHTUSE addGroup( const std::string& msg, int field, int delim, const DataDictionary& dataDictionary );
  bool isGroup( const string_type& msg, int field ) const
  {
    if ( LIKELY(!getProps( field ).hasGroup()) ) return false;
    MsgTypeToData::const_iterator i = m_messageData.find( msg );
    return ( i != m_messageData.end() && i->second.m_groups) ? (i->second.m_groups->find(field) != i->second.m_groups->end()) : false ;
  }

  const DataDictionary* HEAVYUSE getGroup( const FieldToGroup& messageGroups, int field, int& delim ) const
  {
    FieldToGroup::const_iterator it = messageGroups.find( field );
    return (it != messageGroups.end()) ? delim = it->second.first, it->second.second : NULL;
  }

  // compatibility with the test suite
  bool getGroup( const string_type& msgType, int field, int& delim, const DataDictionary*& pDD ) const
  { 
    const MsgTypeData* data = getMessageData( msgType );
    return data && data->groups() && (pDD = getGroup( *data->groups(), field, delim)) != NULL;
  }

  const DataDictionary* getNestedGroup( int field, int& delim ) const
  {
    FieldToGroup::const_iterator it;
    const FieldToGroup* pG = m_messageGroups.empty() ? NULL : &m_messageGroups.begin()->second;
    return (pG && (it = pG->find( field )) != pG->end()) ? delim = it->second.first, it->second.second : NULL;
  }

  bool isDataField( int field ) const
  { return getProps( field ).hasData(); }

  bool hasHeaderData() const { return m_headerData; }
  bool hasTrailerData() const { return m_trailerData; }

  bool isMultipleValueField( int field ) const
  {
    FieldTypes::const_iterator i = m_fieldTypes.find( field );
    return i != m_fieldTypes.end() 
      && (i->second == TYPE::MultipleValueString 
          || i->second == TYPE::MultipleCharValue 
          || i->second == TYPE::MultipleStringValue );
  }

  void checkFieldsOutOfOrder( bool value )
  { checkFor(FieldsOutOfOrder, value); }
  void checkFieldsHaveValues( bool value )
  { checkFor(FieldsHaveValues, value); }
  void checkUserDefinedFields( bool value )
  { checkFor(UserDefinedFields, value); }
  void checkRequiredFields( bool value )
  { checkFor(RequiredFields, value); }
  void checkUnknownFields( bool value )
  { checkFor(UnknownFields, value); }
  void checkUnknownMsgType( bool value )
  { checkFor(UnknownMsgType, value); }

#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  void preserveMessageFieldOrder( bool value )
  { m_storeMsgFieldsOrder = value; }
  bool isMessageFieldsOrderPreserved() const
  { return m_storeMsgFieldsOrder; }
#endif

  class MsgInfo
  {
  public:

    struct Admin
    {
      enum Type
      {
        None = 0,
        Heartbeat = '0',
        TestRequest = '1',
        ResendRequest = '2',
        Reject = '3',
        SequenceReset = '4',
        Logout = '5',
        Logon = 'A',
        Unknown = -1
      };

      enum Trait
      {
        trait_none = 0,
        trait_session = 1, // TestRequest, Heartbeat, Reject
        trait_status = 2, // ResendRequest, SequenceReset, Logout
        trait_logon = 4  // Logon
      };
    };

  private:
    const DataDictionary* m_default_application_dictionary;
    mutable const DataDictionary* m_application_dictionary;
    const StringField* m_type;
    mutable const MsgTypeData* m_data;
    mutable Admin::Type m_admin;

    struct AdminSet {
      Util::BitArray<256, uint32_t> _value;
#if !defined(__BYTE_ORDER__)  || (__BYTE_ORDER__ != __ORDER_LITTLE_ENDIAN__)
      AdminSet();
#endif // static initialization otherwise
      bool test(char v) const { return _value.test( (unsigned char)v ); }
    };

    struct TestAdminType
    {
      typedef Admin::Type result_type;
      template <typename S> result_type operator()( const S& v ) const {
        const char* value;
        return String::size(v) == 1 && adminTypeSet.test( *(value = String::data(v)) ) ? (Admin::Type)value[0] : Admin::None;
      }
    };
  
    struct TestAdminMsgType {
      typedef bool result_type;
      template <typename S> result_type operator()( const S& v ) const {
        return String::size(v) == 1 && adminTypeSet.test( String::data(v)[0] );
      }
    };
  
    struct TestAdminTrait
    {
      typedef Admin::Trait result_type;
      template <typename S> result_type operator()( const S& v ) const {
        if ( LIKELY(String::size(v) == 1) ) {
          Admin::Trait traits[8] = { Admin::trait_none, Admin::trait_session,
                                     Admin::trait_session, Admin::trait_session,
                                     Admin::trait_status, Admin::trait_status,
                                     Admin::trait_status, Admin::trait_logon };
          Util::CharBuffer::Fixed<8> b = { { '\0', '0', '1', '3', '2', '4', '5', 'A' } };
          std::size_t pos = Util::CharBuffer::find( String::data(v)[0], b );
          return traits[pos & 7];
        }
        return Admin::trait_none;
      }
    };

    static ALIGN_DECL_DEFAULT const AdminSet adminTypeSet;

  public:

    MsgInfo( const DataDictionary& dictionary )
    : m_default_application_dictionary(&dictionary), m_application_dictionary(&dictionary),
      m_type(NULL), m_data(NULL), m_admin(Admin::None) {}
    MsgInfo( const DataDictionary* defaultDD, 
             const DataDictionary* p = NULL, const StringField* t = NULL,
             const MsgTypeData* d = NULL, Admin::Type a = Admin::None )
    : m_default_application_dictionary(defaultDD), m_application_dictionary(p), m_type(t),
      m_data(d), m_admin(a) {}

    const MsgTypeData* messageData() const
    {
      return LIKELY(m_data != NULL) ? m_data :
            (LIKELY(m_application_dictionary && m_type) ? (m_data =
               m_application_dictionary->getMessageData(*m_type)) : NULL);
    }
    const StringField& messageType() const
    {
      if ( LIKELY(m_type != NULL) ) return *m_type;
      throw FieldNotFound( FIELD::MsgType );
    }

    Admin::Type messageType( const StringField* msgType, bool setAdmin = true )
    {
      m_type = msgType;
      return setAdmin ? (m_admin = msgAdminType( *msgType )) : m_admin;
    }

    Admin::Type messageType( const FieldMap& header )
    {
      return ( LIKELY(m_type != NULL) )
        ? m_admin : (m_admin = msgAdminType( *(m_type = FIELD_GET_PTR(header, MsgType)) ) );
    }

    Admin::Type adminType() const { return m_admin; }

    const DataDictionary* defaultApplicationDictionary() const { return m_default_application_dictionary; }
    const DataDictionary* applicationDictionary() const { return m_application_dictionary; }
    void applicationDictionary(const DataDictionary* p) { m_application_dictionary = p; }

    static inline Admin::Type msgAdminType( const FieldBase& msgType )
    { return msgType.forString( TestAdminType() ); }

    static inline Admin::Trait msgAdminTrait( const FieldBase& msgType )
    { return msgType.forString( TestAdminTrait() ); }

    static inline bool NOTHROW isAdminMsgType( const MsgType& msgType )
    { return msgType.forString( TestAdminMsgType() ); }

    static inline bool NOTHROW isAdminMsgType( const MsgType::Pack& msgType )
    { return msgType.m_length == 1 && adminTypeSet.test(msgType.m_data[0]); }
  };

  /// Validate a message.
  static void HEAVYUSE  validate( const Message& message,
                        const BeginString& beginString,
                        const MsgInfo& msgInfo,
                        const DataDictionary* const pSessionDD) THROW_DECL( FIX::Exception );

  void validate( const Message& message, bool bodyOnly ) const THROW_DECL( FIX::Exception );

  void validate( const Message& message ) const THROW_DECL( FIX::Exception )
  { validate( message, false ); }

  DataDictionary& operator=( const DataDictionary& rhs );

private:

  struct group_key_holder { string_type Header, Trailer; };
  static ALIGN_DECL_DEFAULT const group_key_holder GroupKey;

  /// Retrieve body fields from the group dictionary nested within FieldToGroup
  const MsgFields& getNestedBodyFields() const
  { return m_requiredFields.size() > 0 ? m_requiredFields.begin()->second : m_noFields; }

  /// Iterate through field map doing basic checks.
  void iterate( const FieldMap& map ) const;

  /// Iterate through non-body fields while applying checks.
  void iterate( const FieldMap& map, bool hasVersion, bool hasBegin ) const;
  void iterate( const FieldMap& first, const FieldMap& second, bool hasVersion, bool hasBegin ) const
  { iterate( first, hasVersion, hasBegin ); iterate( second, hasVersion, hasBegin ); }

  /// Iterate through body fields while applying checks.
  void iterate( const FieldMap& map, const MsgTypeData& msgData, bool hasVersion, bool hasBegin ) const;


  /// Check if message type is defined in spec.
  void checkMsgType( const MsgType& msgType ) const
  {
    if ( LIKELY(isMsgType( msgType.forString( String::Rval() ) )) )
      return;
    throw InvalidMessageType();
  }

  /// If we need to check for the tag in the dictionary
  bool shouldCheckTag( const FieldBase& field ) const
  {
    return ( !isChecked(UserDefinedFields) && field.getTag() >= FIELD::UserMin )
           ? false : isChecked(UnknownFields);
  }

  /// Check if field tag number is defined in spec.
  void checkValidTagNumber( const FieldBase& field ) const
    THROW_DECL( InvalidTagNumber )
  {
    if( LIKELY(isField( field.getTag()) ) ) return;
    throw InvalidTagNumber( field.getTag() );
  }

  void checkValidFormat( const FieldBase& field ) const
    THROW_DECL( IncorrectDataFormat )
  {
    TYPE::Type type = TYPE::Unknown;
    getFieldType( field.getTag(), type );
    if( LIKELY(field.isValidType( type )) )
      return;
    throw IncorrectDataFormat( field.getTag(), field.getString() );
  }

  bool isFieldValue( const FieldToValue::const_iterator& i,
                     const string_type& v ) const
  {
    if( !isMultipleValueField( i->first ) )
      return i->second.find( v ) != i->second.end();

    // MultipleValue
    std::string::size_type startPos = 0;
    std::string::size_type endPos = 0;
    do
    {
      endPos = v.find_first_of(' ', startPos);
      string_type singleValue =
        v.substr( startPos, endPos - startPos );
      if( i->second.find( singleValue ) == i->second.end() )
        return false;
      startPos = endPos + 1;
    } while( endPos != std::string::npos );
    return true;
  }

  void checkValue( const FieldBase& field ) const
    THROW_DECL( IncorrectTagValue )
  {
    int f = field.getTag();
    FieldToValue::const_iterator i = m_fieldValues.find( f );
    if ( LIKELY(i != m_fieldValues.end()) )
    {
      if ( LIKELY(isFieldValue( i, field.forString( String::Rval() ) )) )
        return;
      throw IncorrectTagValue( f );
    }
  }

  /// Check if a field has a value.
  void checkHasValue( const FieldBase& field ) const
    THROW_DECL( NoTagValue )
  {
    if ( LIKELY(!isChecked(FieldsHaveValues) ||
		         field.forString( String::Size() )) )
      return;
    throw NoTagValue( field.getTag() );
  }

  /// Check if a field is in this message type.
  void checkIsInMessage
  ( const FieldBase& field, const MsgType& msgType ) const
    THROW_DECL( TagNotDefinedForMessage )
  {
    if ( LIKELY(isMsgField( msgType.forString( String::Rval() ), field.getTag() )) )
      return;
    throw TagNotDefinedForMessage( field.getTag() );
  }

  void checkIsInMessage
  ( const FieldBase& field, const MsgTypeData& msgData ) const
    THROW_DECL( TagNotDefinedForMessage )
  {
    if ( LIKELY(msgData.m_defined.find( field.getTag() ) != msgData.m_defined.end()) )
      return;
    throw TagNotDefinedForMessage( field.getTag() );
  }

  /// Check if group count matches number of groups in
  void checkGroupCount
  ( const FieldBase& field, const FieldMap& fieldMap, const MsgType& msgType ) const
    THROW_DECL( RepeatingGroupCountMismatch )
  {
    int fieldNum = field.getTag();
    if( isGroup(msgType.forString( String::Rval() ), fieldNum) )
    {
      if( LIKELY((int)fieldMap.groupCount(fieldNum)
                 == IntConvertor::convert( field.forString( String::Rval() ) )) )
        return;
      throw RepeatingGroupCountMismatch(fieldNum);
    }
  }
  void checkGroupCount
  ( const FieldBase& field, const FieldMap& fieldMap, const MsgTypeData& msgData ) const
  {
    int fieldNum = field.getTag();
    const FieldToGroup* groups = msgData.groups();
    if( UNLIKELY(groups != NULL) && groups->find( fieldNum ) != groups->end() )
    {
      if( LIKELY((int)fieldMap.groupCount(fieldNum)
                 == IntConvertor::convert( field.forString( String::Rval() ) )) )
        return;
      throw RepeatingGroupCountMismatch(fieldNum);
    }
  }


  /// Check if a message has all required fields.
  void checkHasRequired
  ( const FieldMap& header, const FieldMap& body, const FieldMap& trailer,
    const MsgType& msgType ) const
    THROW_DECL( RequiredTagMissing )
  {
    MsgTypeToData::const_iterator iM
      = m_messageData.find( msgType.forString( String::Rval() ) );
    return checkHasRequired( ( iM != m_messageData.end() ) ? &iM->second : NULL,
                             header, body, trailer );
  }
  void checkHasRequired
  ( const MsgTypeData* messageData,
    const FieldMap& header, const FieldMap& body, const FieldMap& trailer ) const
    THROW_DECL( RequiredTagMissing )
  {
    HeaderFields::const_iterator h = includes(header.begin(), header.end(),
                 m_requiredHeaderFields.begin(), m_requiredHeaderFields.end(), HeaderCompare() );
    if ( h != m_requiredHeaderFields.end() ) throw RequiredTagMissing( *h );
    TrailerFields::const_iterator r = includes(trailer.begin(), trailer.end(),
                 m_requiredTrailerFields.begin(), m_requiredTrailerFields.end(), TrailerCompare() );
    if ( r != m_requiredTrailerFields.end() ) throw RequiredTagMissing( *r );
    if ( messageData )
#if defined(ENABLE_RELAXED_ORDERING)
      checkHasRequiredUnordered( messageData->m_required, messageData->m_groups, body );
#else
      checkHasRequired( messageData->m_required, messageData->m_groups, body );
#endif
  } 

  void checkHasRequiredInGroups( const FieldToGroup& groupFields, const FieldMap& body ) const;

  void checkHasRequiredUnordered
  ( const MsgFields& fields, const FieldToGroup* groupFields, const FieldMap& body ) const
  {
    for ( MsgFields::const_iterator r = fields.begin(); r != fields.end(); ++r )
    {
      if ( LIKELY(body.isSetField( *r )) ) continue;
      throw RequiredTagMissing( *r );
    }
    if ( groupFields ) checkHasRequiredInGroups( *groupFields, body );
  }

  void checkHasRequired
  ( const MsgFields& fields, const FieldToGroup* groupFields, const FieldMap& body ) const
  {
    MsgFields::const_iterator r = includes(body.begin(), body.end(),
                 fields.begin(), fields.end(), FieldCompare() );
    if ( r != fields.end() ) throw RequiredTagMissing( *r );
    
    if ( groupFields ) checkHasRequiredInGroups( *groupFields, body );
  }

  int lookupXMLFieldNumber( DOMDocument*, DOMNode* ) const;
  int lookupXMLFieldNumber( DOMDocument*, const std::string& name ) const;
  int LIGHTUSE addXMLComponentFields( DOMDocument*, DOMNode*, const std::string& msgtype, DataDictionary&, bool );
  void LIGHTUSE addXMLGroup( DOMDocument*, DOMNode*, const std::string& msgtype, DataDictionary&, bool );
  TYPE::Type XMLTypeToType( const std::string& xmlType ) const;

  bool m_hasVersion;
  unsigned m_checks;
  std::string m_beginString;
  string_type m_applVerID;
  bool m_headerData, m_trailerData;

  FieldProps m_fieldProps;
  FieldToGroup m_headerGroups, m_trailerGroups;

  MsgTypeGroups m_messageGroups;
  MsgTypeFieldProps m_messageFields;
  MsgTypeRequiredFields m_requiredFields;
  MsgTypeToData m_messageData;
  OrderedFields m_orderedFields;
  mutable OrderedFieldsArray m_orderedFieldsArray;
  HeaderFields m_requiredHeaderFields;
  TrailerFields m_requiredTrailerFields;
#ifdef ENABLE_DICTIONARY_FIELD_ORDER
  bool m_storeMsgFieldsOrder;
  OrderedFields m_headerOrderedFields;
  mutable OrderedFieldsArray m_headerOrderArray;
  OrderedFields m_trailerOrderedFields;
  mutable OrderedFieldsArray m_trailerOrderArray;
#endif
  FieldTypes m_fieldTypes;
  FieldToValue m_fieldValues;
  FieldToName m_fieldNames;
  NameToField m_names;
  ValueToName m_valueNames;

  static FieldToProps m_noProps;
  static FieldToGroup m_noGroups;
  static MsgFields m_noFields;
  static MsgTypeData m_noData;
};
}


#endif //FIX_DATADICTIONARY_H
