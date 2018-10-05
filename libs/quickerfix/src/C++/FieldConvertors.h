/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#ifndef FIX_FIELDCONVERTORS_H
#define FIX_FIELDCONVERTORS_H

#include "FieldTypes.h"
#include "Exceptions.h"
#include "FixString.h"
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <limits>

#ifdef _MSC_VER
#pragma warning( disable : 4706 ) // DISABLE warning C4706: assignment within conditional expression
#endif

namespace FIX
{

/// Empty converter is a no-op.
struct EmptyConvertor
{
  static const std::string& convert( const std::string& value )
  { return value; }
};

/// String convertor is a no-op.
struct StringConvertor
{
  typedef const char* value_type;

  static std::size_t RequiredSize(value_type v) { return ::strlen(v); }
  static std::size_t RequiredSize(const std::string& v) { return String::size(v); }

  template <typename S> static void set(S& result, const S& value)
  {
    result = value;
  }

  template <typename S> static void set(S& result, const char* value, std::size_t size = 0)
  {
    result.assign( value, size ? size : ::strlen(value) );
  }

  template <typename S> static bool parse(const char* str, const char* end, S& result)
  {
    result.assign(str, end - str);
    return true;
  }

  template <typename S> static bool parse(const std::string& value, S& result)
  {
    result = value;
    return true;
  }

  static const String::value_type& convert( const String::value_type& value )
  { return value; }

  static String::value_type convert( const char* p, std::size_t size )
  { return String::value_type(p, size); }

  template <typename S> static bool NOTHROW validate( const S& value )
  { return true; }
};


/// Converts integer to/from a string
struct IntConvertor
{
  public:

  typedef int value_type;
  typedef unsigned int unsigned_value_type;

  static const std::size_t MaxValueSize = std::numeric_limits<value_type>::digits10 + 2;
  static const std::size_t BufferSize = MaxValueSize >= 16 ? MaxValueSize : 16;
  static std::size_t RequiredSize(value_type v = 0) { return MaxValueSize; }

  class Proxy {
	value_type m_value;

    public:
	Proxy(value_type value) : m_value(value) {}

        // return length, buf has enough space for a longest representation
        inline unsigned operator()(char* buf)
        {
          *buf = '-';
          value_type value = m_value;
          bool neg = value < 0;
	      unsigned_value_type v = neg ? unsigned(~value) + 1 : value;
          std::size_t len = Util::UInt::numDigits(v);
          Util::UInt::generate(buf += neg, v, len);
#ifndef ENABLE_SSO_NOZERO
		  buf[len] = '\0';
#endif
          return (unsigned)len + neg;
        }

	template <typename S> S convert_to() const
	{
          S s;
          assign_to(s);
          return s;
	}
	template <typename S> void assign_to(S& s) const
	{
          value_type value = m_value;
          bool neg = value < 0;
	      unsigned_value_type v = neg ? unsigned(~value) + 1 : value;
          std::size_t len = Util::UInt::numDigits(v);
          s.resize(len + neg);
          char* buf = const_cast<char*>(String::data(s));
          *buf = '-';
          Util::UInt::generate(buf + neg, v, len);
	}
  };

  template <typename S> static void set(S& result, int value)
  {
    Proxy(value).assign_to(result);
  }

  static std::string convert( int value );
  template <typename S> static S convert( int value )
  {
    return Proxy(value).convert_to<S>();
  }

  template <typename T>
  static inline bool parse( const char* str, const char* end, T& result )
  {
    unsigned_value_type c;
    T x = 0;
    int neg = *str == '-';
    switch( end - (str += neg) )
    {
      case 10: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x = c * 1000000000;
      case  9: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000000;
      case  8: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000000;
      case  7: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000000;
      case  6: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000;
      case  5: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000;
      case  4: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000;
      case  3: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100;
      case  2: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10;
      case  1: c = *str - '0';   if ( LIKELY(c < 10) ) { x += c;
               result = LIKELY( !neg ) ? x : -x;
               return true;
               } } } } } } } } } }
    }
    return false;
  }

  template <typename S, typename T>
  static inline bool parse( const S& value, T& result )
  {
    const char* str = String::data(value);
    unsigned_value_type c;
    T x = 0;
    int neg = *str == '-';
    str += neg;
    switch( String::size(value) - neg )
    {
      case 10: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x = c * 1000000000;
      case  9: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000000;
      case  8: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000000;
      case  7: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000000;
      case  6: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000;
      case  5: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000;
      case  4: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000;
      case  3: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100;
      case  2: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10;
      case  1: c = *str - '0';   if ( LIKELY(c < 10) ) { x += c;
               result = LIKELY( !neg ) ? x : -x;
               return true;
               } } } } } } } } } }
    }
    return false;
  }

  static inline int convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    int result = 0;
    if( parse( value, result ) )
      return result;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    const char* s = String::data(value);
    std::size_t l = String::size(value);
    int negative = s[0] == '-';
    return l > 0 && Util::CharBuffer::match(Util::CharBuffer::s_uint_charset, s + negative, l - negative);
  }
};

#ifdef ENABLE_SSO
template <> inline std::string IntConvertor::Proxy::convert_to<std::string>() const
{
  char buf[16];
  buf[0] = '-';
  value_type value = m_value;
  bool neg = value < 0;
  unsigned_value_type v = neg ? unsigned(~value) + 1 : value;
  std::size_t len = Util::UInt::numDigits(v);
  Util::UInt::generate(buf + neg, v, len);
  return std::string(buf, buf + neg + len);
}
template <> inline String::short_string_type HEAVYUSE
IntConvertor::convert<String::short_string_type>( int value )
{
  return String::short_string_type(String::short_string_type::TypeHolder<char>(), Proxy(value));
}
template <> inline void HEAVYUSE
IntConvertor::set<String::short_string_type>(String::short_string_type& result, int value)
{
  result.short_assign<char>(Proxy(value));
}
#endif

inline std::string IntConvertor::convert( int value )
{
  return Proxy(value).convert_to<std::string>();
}

/// Converts positive integer
struct PositiveIntConvertor 
{
  public:

  typedef unsigned int value_type;
  typedef unsigned int unsigned_value_type;

  static const std::size_t MaxValueSize = std::numeric_limits<value_type>::digits10 + 2;
  static const std::size_t BufferSize = MaxValueSize >= 16 ? MaxValueSize : 16;
  static std::size_t RequiredSize(value_type v = 0) { return MaxValueSize; }


  class Proxy {
	value_type m_value;

    public:
	Proxy(value_type value) : m_value(value) {}

        unsigned operator()(char* buf)
        {
          value_type value = m_value;
          std::size_t len = Util::UInt::numDigits(value);
          Util::UInt::generate(buf, value, len);
#ifndef ENABLE_SSO_NOZERO
          buf[len] = '\0';
#endif
          return (unsigned)len;
        }

	template <typename S> S convert_to() const
	{
          S s;
          assign_to(s);
          return s;
	}
	template <typename S> void assign_to(S& s) const
	{
          value_type value = m_value;
          std::size_t len = Util::UInt::numDigits(value);
          s.resize(len);
          Util::UInt::generate(const_cast<char*>(String::data(s)), value, len);
	}
  };

  template <typename S> static void set(S& result, int value)
  {
    Proxy(value).assign_to(result);
  }

  static std::string convert( int value )
  {
    return Proxy(value).convert_to<std::string>();
  }

  template <typename S> static S convert( int value )
  {
    return Proxy(value).convert_to<S>();
  }

  template <typename T>
  static bool parse( const char* str, const char* end, T& result )
  {
    unsigned c;
    T x = 0;
    switch( end - str )
    {
      case 10: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x = c * 1000000000;
      case  9: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000000;
      case  8: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000000;
      case  7: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000000;
      case  6: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000;
      case  5: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000;
      case  4: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000;
      case  3: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100;
      case  2: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10;
      case  1: c = *str - '0';   if ( LIKELY(c < 10) ) { x += c;
               result = x;
               return true;
               } } } } } } } } } }
    }
    return false;
  }

  template <typename S, typename T>
  static bool parse( const S& value, T& result )
  {
    const char* str = String::data(value);
    unsigned c;
    T x = 0;
    switch( String::size(value) )
    {
      case 10: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x = c * 1000000000;
      case  9: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000000;
      case  8: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000000;
      case  7: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000000;
      case  6: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100000;
      case  5: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10000;
      case  4: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 1000;
      case  3: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 100;
      case  2: c = *str++ - '0'; if ( LIKELY(c < 10) ) { x += c * 10;
      case  1: c = *str - '0';   if ( LIKELY(c < 10) ) { x += c;
               result = x;
               return true;
               } } } } } } } } } }
    }
    return false;
  }
};

#ifdef ENABLE_SSO
template <> inline String::short_string_type HEAVYUSE
PositiveIntConvertor::convert<String::short_string_type>( int value )
{
  return String::short_string_type(String::short_string_type::TypeHolder<char>(), Proxy(value));
}
template <> inline void HEAVYUSE
PositiveIntConvertor::set<String::short_string_type>(String::short_string_type& result, int value)
{
  result.short_assign<char>(Proxy(value));
}
#endif


/// Converts checksum to/from a string
struct CheckSumConvertor
{
  typedef int value_type;

  static const std::size_t MaxValueSize = 3;
  static std::size_t RequiredSize(value_type v = 0) { return MaxValueSize; }

  class Proxy {
	value_type m_value;
    public:
        Proxy( int value ) : m_value(value) {}

        unsigned operator()(uint32_t* buffer)
        {
          uint32_t b, n, v = (uint32_t)m_value;
          n = v / 10;
#if defined(_MSC_VER) || defined(__x86_64__) || defined(__i386__)
          b = (v -= n * 10) << 16;
          v = n / 10;
          *buffer = b | (0x303030 + v + ((n - v * 10) << 8));
#else
	  char* p = (char*)buffer;
	  b = (v -= n * 10);
	  v = n / 10;
	  p[0] = 0x30 + v;
	  p[1] = 0x30 + n - v * 10;
	  p[2] = 0x30 + b;
	  p[4] = '\0';
	  
#endif
          return 3;
        }
  };

  template <typename S> static void set(S& result, int value)
  {
    unsigned n, v = (unsigned)value;
    result.clear();
    n = v / 100;
    result.push_back('0' + n);
    v -= n * 100;
    n = v / 10;
    result.push_back('0' + n);
    v -= n * 10;
    result.push_back('0' + v);
  }

  static inline void write(char* result, unsigned char v)
  {
    unsigned char n;
    n = v / 100;
    result[0] = ('0' + n);
    v -= n * 100;
    n = v / 10;
    result[1] = ('0' + n);
    v -= n * 10;
    result[2] = ('0' + v);
  }

  static bool parse( const char* str, const char* end, int& result)
  {
    return PositiveIntConvertor::parse( str, end, result );
  }

  template <typename S> static bool parse( const S& value, int& result )
  {
    return PositiveIntConvertor::parse( value, result );
  }

  static std::string convert( int value )
  THROW_DECL( FieldConvertError )
  {
    return convert<std::string>(value);
  }

  template <typename S> static S convert( int value )
  {
    unsigned char n, v = (unsigned char)value;
    if ( (value - v) == 0 )
    {
      char buf[3];
      n = v / 100;
      buf[0] = '0' + n;
      v -= n * 100;
      n = v / 10;
      buf[1] = '0' + n;
      v -= n * 10;
      buf[2] = '0' + v;
      return S(buf, 3);
    }
    throw FieldConvertError();
  }

  static inline int convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    int result = 0;
    if( PositiveIntConvertor::parse( value, result ) )
      return result;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    const char* s = String::data(value);
    std::size_t l = String::size(value);
    return l == 3 && Util::CharBuffer::match(Util::CharBuffer::s_uint_charset, s, 3) && s[0] < '3';
  }
};

#if defined(ENABLE_SSO)
template <> inline String::short_string_type HEAVYUSE
CheckSumConvertor::convert<String::short_string_type>( int value )
{
  return String::short_string_type(String::short_string_type::TypeHolder<uint32_t>(), Proxy(value));
}
template <> inline void HEAVYUSE
CheckSumConvertor::set<String::short_string_type>(String::short_string_type& result, int value)
{
  Util::CharBuffer::Fixed<4> b;
  uint32_t n, v = (uint32_t)value;
  n = v / 10;
  b.value = (v -= n * 10) << 16;
  v = n / 10;
  b.value |= 0x303030 + v + ((n - v * 10) << 8);
  result.assign(b, 3);
}
#endif


/// Converts double to/from a string
struct DoubleConvertor
{
  private:

  ALIGN_DECL_DEFAULT static const double m_mul1[8];
  ALIGN_DECL_DEFAULT static const double m_mul8[8];

  /* Char array must have been verified to consist of digits and at most one dot,
   * pointed to by the pdot argument (equal to e if there is no fraction). */
  static inline double PURE_DECL NOTHROW parse_verified( const char* b, const char* e, const char* pdot )
  {
    double value = 0.0;

    PREFETCH((const char*)m_mul1, 0, 0);

    //significand
/*
    uint64_t c, x = 0;
    switch( (std::size_t)(pdot - b) )
    {
      default:
      case 15: c = *b++ - '0';  x = c * 100000000000000ULL;
      case 14: c = *b++ - '0';  x += c * 10000000000000ULL;
      case 13: c = *b++ - '0';  x += c * 1000000000000ULL;
      case 12: c = *b++ - '0';  x += c * 100000000000ULL;
      case 11: c = *b++ - '0';  x += c * 10000000000ULL;
      case 10: c = *b++ - '0';  x += c * 1000000000;
      case  9: c = *b++ - '0';  x += c * 100000000;
      case  8: c = *b++ - '0';  x += c * 10000000;
      case  7: c = *b++ - '0';  x += c * 1000000;
      case  6: c = *b++ - '0';  x += c * 100000;
      case  5: c = *b++ - '0';  x += c * 10000;
      case  4: c = *b++ - '0';  x += c * 1000;
      case  3: c = *b++ - '0';  x += c * 100;
      case  2: c = *b++ - '0';  x += c * 10;
      case  1: c = *b++ - '0';  x += c;
      case  0: value = x;
    }
*/
    while ( b < pdot ) value = value * 10. + (*b++ - '0');

    //mantissa
    if( ++b < e )
    {
      double scale = 1.0;
      std::size_t exp = e - b;
      if( UNLIKELY(exp > 308) )
      {
        exp = 308;
        e = b + 308;
      }
      do
      {
        value = value * 10. + (*b - '0');
      } while (++b < e);

      if( LIKELY(exp <= 8) )
      {
        scale *= m_mul1[exp - 1];
      }
      else if( exp <= 64 )
      {
        scale *= m_mul8[(exp >> 3) - 1];
        if( (exp &= 7) )
          scale *= m_mul1[exp - 1];
      }
      else
      {
        do { scale *= 1E64; } while( (exp -= 64) > 64 );
        if( exp > 8 )
        {
          scale *= m_mul8[(exp >> 3) - 1];
          exp &= 7;
        }
        if( exp )
          scale *= m_mul1[exp - 1];
      }
      return value / scale;
    }
    return value;
  }

  public:

  typedef double value_type;

  static const std::size_t MaxPrecision = 15;
  static const std::size_t MaxValueSize = /* std::log10((std::numeric_limits<double>::max)()) + MaxPrecision + 3 */ 326;
  static std::size_t RequiredSize(value_type v = 0) { return MaxValueSize; }

  class Proxy {
	char m_space[MaxValueSize + 8], *m_p;
	const std::size_t m_length;

	std::size_t generate(char* buffer, double value, std::size_t padded, bool round) const;

    public:
	Proxy(value_type value, std::size_t padded, bool rounded)
	: m_p(m_space + 8), m_length(generate(m_p, value, padded, rounded)) {}

        std::size_t size() const { return m_length; }

	Util::CharBuffer::reverse_iterator begin() const { return m_p + m_length; }
	Util::CharBuffer::reverse_iterator end() const { return m_p; }

        template <typename S> S convert_to() const
	{ return S( begin(), end() ); }
	template <typename S> void assign_to(S& s) const
        { s.assign( begin(), end() ); }

#if defined(_MSC_VER) || (defined(__GNUC__) && (defined(__x86_64__) || defined(__i386__)))
	// buffer must accommodate m_length
        std::size_t operator()(uint64_t* buf)
        {
	  std::size_t i = 0;
	  uint64_t* p = (uint64_t*)(m_space + m_length); 
          do {
#ifdef __GNUC__
		buf[i++] =__builtin_bswap64(*p);
#else
		buf[i++] = _byteswap_uint64(*p);
#endif 
          } while (p-- > (uint64_t*)m_p);
#ifndef ENABLE_SSO_NOZERO
          ((char*)buf)[m_length] = '\0';
#endif
          return m_length;
        }
#endif
  };

  template <typename S> static void set(S& result, double value, std::size_t padded = 0, bool rounded = false)
  {
    Proxy(value, padded, rounded).assign_to(result);
  }

  static bool NOTHROW parse( const char* str, const char* end, double& result)
  {
    const char* p = str;
    if( LIKELY(p < end) )
    {
      bool positive;
      if( (positive = (*p != '-')) || ++p < end)
      {
        const char* pdot = end;
        const char* pv = p;

        do 
        {
          if (LIKELY(Util::Char::isdigit(*p))) continue;
          if (LIKELY(*p == '.' && pdot == end)) pdot = p;
          else return false;
        }
        while( ++p < end);

        if( LIKELY((p - pv) > (int)(pdot != end)) )
        {
          double value = parse_verified( pv, end, pdot );
          result = positive ? value : -value;
          return true;
        }
      }
    }
    return false;
  }

  template <typename S> static bool NOTHROW parse( const S& value, double& result )
  {
    const char* p = String::data(value);
    return parse(p, p + String::size(value), result);
  }

  static std::string convert( double value, std::size_t padded = 0, bool rounded = false )
  {
    return Proxy(value, padded, rounded).convert_to<std::string>();
  }

  template <typename S> static S convert( double value, std::size_t padded = 0, bool rounded = false )
  {
    return Proxy(value, padded, rounded).convert_to<S>();
  }

  static double convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    double result = 0.0;
    if( parse( value, result ) )
      return result;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    static ALIGN_DECL_DEFAULT const Util::CharBuffer::Fixed<16> f =
      { { '0','1','2','3','4','5','6','7','8','9','.','.','.','.','.','.' } };
    const char* s = String::data(value);
    std::size_t l = String::size(value);
    int negative = s[0] == '-';
    return l > 0 && Util::CharBuffer::match(f, s + negative, l - negative);
  }
};


#if defined(ENABLE_SSO) && (defined(_MSC_VER) || (defined(__GNUC__) && (defined(__x86_64__) || defined(__i386__))))
template <> inline String::short_string_type HEAVYUSE
DoubleConvertor::convert<String::short_string_type>( double value, std::size_t padded, bool rounded )
{
  Proxy v( value, padded, rounded );
  return LIKELY(v.size() < String::short_string_type::MaxLocalCapacity)
           ? String::short_string_type(String::short_string_type::RefHolder<uint64_t>(), v)
           : v.convert_to<String::short_string_type>();
}
template <> inline void HEAVYUSE
DoubleConvertor::set<String::short_string_type>( String::short_string_type& result,
                                                 double value, std::size_t padded, bool rounded )
{
  Proxy v( value, padded, rounded );
  if ( LIKELY(v.size() < String::short_string_type::MaxLocalCapacity))
    result.short_assign_r<uint64_t>(v);
  else
    v.assign_to(result);
}
#endif


/// Converts character to/from a string
struct CharConvertor
{
  typedef char value_type;

  static const std::size_t MaxValueSize = 1;
  static std::size_t RequiredSize(value_type v = 0) { return MaxValueSize; }

  class Proxy {
	value_type m_value;
    public:
        Proxy( char value ) : m_value(value) {}

        unsigned operator()(uint16_t* buffer)
        {
#if defined(_MSC_VER) || defined(__x86_64__) || defined(__i386__)
          *buffer = m_value; 
#else
	  char* p = (char*)buffer;
	  p[0] = (char)m_value;
	  p[1] = '\0';
#endif
          return m_value != '\0';;
        }
  };

  template <typename S> static void set(S& result, char value)
  {
    result.clear();
    if (value != '\0' )
      result.push_back(value);
  }

  static bool parse( const char* str, const char* end, char& result )
  {
     if ( end - str == 1 )
     {
       result = *str;
       return true;
     }
     return false;
  }

  template <typename S> static bool parse( const S& value, char& result )
  {
    if( String::size(value) == 1 )
    {
      result = value[0];
      return true;
    }
    return false;
  }

  static std::string convert( char value )
  {
    return value ? std::string(1, value) : std::string();
  }

  template <typename S> static S convert( char value )
  {
    return value ? S(1, value) : S();
  }

  static char convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    char result;
    if( parse( value, result ) )
      return result;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    const char* s = String::data(value);
    return String::size(value) == 1 && s[0] > 32 && s[0] < 127; // ::isalnum(s[0]) || ::ispunct(s[0])
  }
};

#if defined(ENABLE_SSO)
template <> inline String::short_string_type HEAVYUSE
CharConvertor::convert<String::short_string_type>( char value )
{
  return String::short_string_type(String::short_string_type::TypeHolder<uint16_t>(), Proxy(value));
}
template <> inline void HEAVYUSE
CharConvertor::set<String::short_string_type>(String::short_string_type& result, char value)
{
  Util::CharBuffer::Fixed<2> b;
  b.value = value;
  result.assign( b, value != '\0' );
}
#endif


/// Converts boolean to/from a string
struct BoolConvertor
{
  typedef bool value_type;

  static const std::size_t MaxValueSize = 1;
  static std::size_t RequiredSize(value_type v = false) { return MaxValueSize; }

  class Proxy {
	value_type m_value;
    public:
        Proxy( bool value ) : m_value(value) {}

        unsigned operator()(uint16_t* buffer)
        {
#if defined(_MSC_VER) || defined(__x86_64__) || defined(__i386__)
          *buffer = m_value ? 'Y' : 'N';
#else
	  char* p = (char*)buffer;
	  p[0] = m_value ? 'Y' : 'N';
	  p[1] = '\0';
#endif
          return 1;
        }
  };


  template <typename S> static void set(S& result, bool value)
  {
    result.clear();
    result.push_back( value ? 'Y' : 'N' );
  }

  static bool parse( const char* str, const char* end, bool& result )
  {
     if ( end - str == 1 )
     {
       char c = *str;
       result = (c == 'Y') && (c != 'N');
       return result || (c == 'N');
     }
     return false;
  }

  template <typename S> static bool parse( const S& value, bool& result )
  {
    if( String::size(value) == 1 )
    {
      char c = value[0];
      result = (c == 'Y') && (c != 'N');
      return result || (c == 'N');
    }
    return false;
  }

  static std::string convert( bool value )
  {
    const char ch = value ? 'Y' : 'N';
    return std::string( 1, ch );
  }

  template <typename S> static S convert( bool value )
  {
    const char ch = value ? 'Y' : 'N';
    return S( 1, ch );
  }

  static bool convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    bool result = false;
    if( parse( value, result ) )
      return result;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    const char* s = String::data(value);
    return String::size(value) == 1 && (s[0] == 'Y' || s[0] == 'N');
  }
};

#if defined(ENABLE_SSO)
template <> inline String::short_string_type HEAVYUSE
BoolConvertor::convert<String::short_string_type>( bool value )
{
  return String::short_string_type(String::short_string_type::TypeHolder<uint16_t>(), Proxy(value));
}
template <> inline void HEAVYUSE
BoolConvertor::set<String::short_string_type>(String::short_string_type& result, bool value)
{
  Util::CharBuffer::Fixed<2> b;
  b.value = value ? 'Y' : 'N';
  result.assign( b, 1 );
}
#endif

struct UtcConvertorBase {

  static inline bool parse_date(const unsigned char*& p, int& year, int& mon, int& mday)
  {
      unsigned char v;
      bool valid;

      v = *p++ - '0';
      valid = v < 10;
      year = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      year = 10 * year + v;
      v = *p++ - '0';
      valid = valid && v < 10;
      year = 10 * year + v;
      v = *p++ - '0';
      valid = valid && v < 10;
      year = 10 * year + v;

      v = *p++ - '0';
      valid = valid && v < 10;
      mon = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      mon = 10 * mon + v;
      valid = valid && ( mon >= 1 && mon <= 12 );

      v = *p++ - '0';
      valid = valid && v < 10;
      mday = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      mday = 10 * mday + v;
      return valid && ( mday >= 1 && mday <= 31 );
  }

  static inline bool parse_time(const unsigned char*& p, int& hour, int& min, int& sec)
  {
      unsigned char v;
      bool valid;

      v = *p++ - '0';
      valid = v < 10;
      hour = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      hour = 10 * hour + v;
      valid = valid && ( hour < 24 );

      valid = valid && ( *p++ == ':' );

      v = *p++ - '0';
      valid = valid && v < 10;
      min = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      min = 10 * min + v;
      valid = valid && ( min < 60 );

      valid = valid && ( *p++ == ':' );

      v = *p++ - '0';
      valid = valid && v < 10;
      sec = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      sec = 10 * sec + v;
      return valid && ( sec < 60 );
  }

  // precision here is in multiples of 3, valid values currently are 0, 3, 6 or 9
  static inline bool parse_fraction(const unsigned char*& p, int& fraction, std::size_t precision)
  {
    unsigned char v;
    bool valid = ( *p++ == '.' );

    if (LIKELY(precision > 0))
    {
      v = *p++ - '0';
      valid = valid && v < 10;
      fraction = v;
      v = *p++ - '0';
      valid = valid && v < 10;
      fraction = 10 * fraction + v;
      v = *p++ - '0';
      valid = valid && v < 10;
      fraction = 10 * fraction + v;
      if (precision > 3)
      {
        v = *p++ - '0';
        valid = valid && v < 10;
        fraction = 10 * fraction + v;
        v = *p++ - '0';
        valid = valid && v < 10;
        fraction = 10 * fraction + v;
        v = *p++ - '0';
        valid = valid && v < 10;
        fraction = 10 * fraction + v;
        if (precision > 6)
        {
          v = *p++ - '0';
          valid = valid && v < 10;
          fraction = 10 * fraction + v;
          v = *p++ - '0';
          valid = valid && v < 10;
          fraction = 10 * fraction + v;
          v = *p++ - '0';
          valid = valid && v < 10 && precision == 9;
          fraction = 10 * fraction + v;
        }
      }
    }
    return valid;
  }
};


/// Converts a UtcTimeStamp to/from a string
struct UtcTimeStampConvertor : public UtcConvertorBase
{
  typedef const UtcTimeStamp& value_type;

  static const std::size_t MaxValueSize = 28;
  static std::size_t RequiredSize(value_type) { return MaxValueSize; }

  static inline unsigned write(char* buffer, const UtcTimeStamp& value, int precision = 0 )
  {
    union {
      char*     pc;
      uint16_t* pu;
    } b = { buffer };
    int year, month, day, hour, minute, second, fraction;

    value.getYMD( year, month, day );
    value.getHMS( hour, minute, second, fraction, precision );

    if ( (unsigned)year < 10000 )
    {
      *b.pu++ = Util::NumData::m_pairs[(unsigned)year / 100].u;
      *b.pu++ = Util::NumData::m_pairs[(unsigned)year % 100].u;
      *b.pu++ = Util::NumData::m_pairs[(unsigned)month].u;
      *b.pu++ = Util::NumData::m_pairs[(unsigned)day].u;
      *b.pc++ = '-';
      *b.pu++ = Util::NumData::m_pairs[(unsigned)hour].u;
      *b.pc++ = ':';
      *b.pu++ = Util::NumData::m_pairs[(unsigned)minute].u;
      *b.pc++ = ':';
      *b.pu++ = Util::NumData::m_pairs[(unsigned)second].u;

      if (precision)
      {
	*b.pc++ = '.';
        Util::UInt::generate( b.pc, (unsigned)fraction, precision++ );
      }
      return 17 + precision;
    }
    return 0;
  }

  class Proxy {
	value_type m_value;
        int m_precision;
    public:
        Proxy(value_type value, int precision = 0)
        : m_value(value), m_precision(precision) {}

        unsigned operator()(char* buf)
        {
          unsigned l = write(buf, m_value, m_precision);
#ifndef ENABLE_SSO_NOZERO
          buf[l] = '\0';
#endif
          return l;
        }
  };

  template <typename S> static void set(S& result, const UtcTimeStamp& value, int precision = 0)
  {
    result.resize(17 + precision + (precision > 0));
    if ( !write((char*)String::data(result), value, precision) )
      throw FieldConvertError();
  }

  static inline bool parse( const char* str, const char* end, UtcTimeStamp& utc )
  {
    std::size_t sz = end - str;
    std::size_t precision = 0;
    bool haveFraction = sz > 17;
    if (LIKELY(haveFraction && (precision = (sz - 18)) % 3 == 0) || sz == 17)
    {
      const unsigned char* p = (const unsigned char*)str;
      int year, mon, mday, hour = 0, min = 0, sec = 0, fraction = 0;
      bool valid = parse_date(p, year, mon, mday);

      valid = valid && (*p++ == '-');

      valid = valid && parse_time(p, hour, min, sec);

      if ( haveFraction )
        valid = valid && parse_fraction(p, fraction, precision);

      utc = UtcTimeStamp (hour, min, sec, fraction,
                          mday, mon, year, (int)precision );
      return valid;
    }
    return false;
  }

  template <typename S> static bool parse( const S& value, UtcTimeStamp& utc )
  {
    const char* str = String::data(value);
    return parse(str, str + String::size(value), utc);
  }

  static std::string convert( const UtcTimeStamp& value, int precision = 0 )
  THROW_DECL( FieldConvertError )
  {
    std::string result;
    set(result, value, precision);
    return result;
  }

  template <typename S> static S convert( const UtcTimeStamp& value, int precision = 0 )
  {
    S result;
    set(result, value, precision);
    return result;
  }

  static UtcTimeStamp convert( const String::value_type& value,
                               bool calculateDays = false )
  THROW_DECL( FieldConvertError )
  {
    UtcTimeStamp utc( DateTime(0, 0) );
    if (parse(value, utc))
      return utc;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    std::size_t sz = String::size(value);
    bool haveFraction = sz > 17;
    std::size_t precision = 0;
    if (LIKELY(haveFraction && (precision = (sz - 18)) % 3 == 0) || sz == 17)
    {
      const unsigned char* p = (const unsigned char*)String::data(value);
      int year, mon, mday, hour, min, sec, fraction;
      bool valid = parse_date(p, year, mon, mday);

      valid = valid && (*p++ == '-');

      valid = valid && parse_time(p, hour, min, sec);

      return valid && (!haveFraction || parse_fraction(p, fraction, precision));
    }
    return false;
  }
};

#if defined(ENABLE_SSO) && (ENABLE_SSO > 2) && (defined(_MSC_VER) || defined(__x86_64__) || defined(__i386__))
template <> inline String::short_string_type HEAVYUSE
UtcTimeStampConvertor::convert<String::short_string_type>( const UtcTimeStamp& value, int precision )
{
  return String::short_string_type(String::short_string_type::TypeHolder<char>(), Proxy(value, precision));
}
template <> inline void HEAVYUSE
UtcTimeStampConvertor::set<String::short_string_type>(String::short_string_type& result, const UtcTimeStamp& value, int precision)
{
  if ( LIKELY(0 != result.short_assign<char>(Proxy(value, precision))) )
    return;
  throw FieldConvertError();
}
#endif


/// Converts a UtcTimeOnly to/from a string
struct UtcTimeOnlyConvertor : public UtcConvertorBase
{
  typedef const UtcTimeOnly& value_type;

  static const std::size_t MaxValueSize = 19;
  static std::size_t RequiredSize(value_type) { return MaxValueSize; }

  static inline unsigned write(char* buffer, const UtcTimeOnly& value, int precision = 0)
  {
    union {
      char*     pc;
      uint16_t* pu;
    } b = { buffer };
    int hour, minute, second, fraction;

    value.getHMS( hour, minute, second, fraction, precision );

    *b.pu++ = Util::NumData::m_pairs[(unsigned)hour].u;
    *b.pc++ = ':';
    *b.pu++ = Util::NumData::m_pairs[(unsigned)minute].u;
    *b.pc++ = ':';
    *b.pu++ = Util::NumData::m_pairs[(unsigned)second].u;

    if (precision)
    {
      *b.pc++ = '.';
      Util::UInt::generate( b.pc, (unsigned)fraction, precision++ );
    }
    return 8 + precision;
  }

  class Proxy {
	value_type m_value;
        int m_precision;
    public:
        Proxy(value_type value, int precision = 0)
        : m_value(value), m_precision(precision) {}

        unsigned operator()(char* buf)
        {
          unsigned l = write(buf, m_value, m_precision);
#ifndef ENABLE_SSO_NOZERO
          buf[l] = '\0';
#endif
          return l;
        }
  };

  template <typename S> static void set(S& result, const UtcTimeOnly& value, int precision = 0)
  {
    result.resize(8 + precision + (precision > 0));
    write((char*)String::data(result), value, precision);
  }

  static bool parse( const char* str, const char* end, UtcTimeOnly& utc )
  {
    std::size_t sz = end - str;
    bool haveFraction = sz > 8;
    std::size_t precision = 0;
    if ((haveFraction && (precision = (sz - 9)) % 3 == 0) || sz == 8)
    {
      const unsigned char* p = (const unsigned char*)str;
      int hour, min, sec, fraction = 0;
      bool valid = parse_time(p, hour, min, sec);

      if ( haveFraction )
        valid = valid && parse_fraction(p, fraction, precision);

      utc = UtcTimeOnly( hour, min, sec, fraction, (int)precision );
      return valid;
    }
    return false;
  }

  template <typename S> static bool parse( const S& value, UtcTimeOnly& utc )
  {
    const char* str = String::data(value);
    return parse(str, str + String::size(value), utc);
  }

  static std::string convert( const UtcTimeOnly& value, int precision = 0 )
  THROW_DECL( FieldConvertError )
  {
    std::string result;
    set(result, value, precision);
    return result;
  }

  template <typename S> static S convert( const UtcTimeOnly& value,
                                          int precision = 0 )
  {
    S result;
    set(result, value, precision);
    return result;
  }

  static UtcTimeOnly convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    UtcTimeOnly utc;
    if (parse(value, utc))
      return utc;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    std::size_t sz = String::size(value);
    bool haveFraction = sz > 8;
    std::size_t precision = 0;
    if ((haveFraction && (precision = (sz - 9)) % 3 == 0) || sz == 8)
    {
      const unsigned char* p = (const unsigned char*)String::data(value);
      int hour, min, sec, fraction;
      bool valid = parse_time(p, hour, min, sec);

      return valid && (!haveFraction || parse_fraction(p, fraction, precision));
    }
    return false;
  }
};

#if defined(ENABLE_SSO) && (defined(_MSC_VER) || defined(__x86_64__) || defined(__i386__))
template <> inline String::short_string_type HEAVYUSE
UtcTimeOnlyConvertor::convert<String::short_string_type>( const UtcTimeOnly& value, int precision )
{
  return String::short_string_type(String::short_string_type::TypeHolder<char>(), Proxy(value, precision));
}
template <> inline void HEAVYUSE
UtcTimeOnlyConvertor::set<String::short_string_type>(String::short_string_type& result, const UtcTimeOnly& value, int precision)
{
  if ( LIKELY(0 != result.short_assign<char>(Proxy(value, precision))) )
    return;
  throw FieldConvertError();
}
#endif


/// Converts a UtcDate to/from a string
struct UtcDateConvertor : public UtcConvertorBase
{
  typedef const UtcDate& value_type;

  static const std::size_t MaxValueSize = 9;
  static std::size_t RequiredSize(value_type) { return MaxValueSize; }

  static inline unsigned write(char* buffer, const UtcDate& value)
  {
    union {
	char*     pc;
	uint16_t* pu;
    } b = { buffer };
    int year, month, day;

    value.getYMD( year, month, day );

    if ( (unsigned)year < 10000 )
    {
      *b.pu++ = Util::NumData::m_pairs[(unsigned)year / 100].u;
      *b.pu++ = Util::NumData::m_pairs[(unsigned)year % 100].u;
      *b.pu++ = Util::NumData::m_pairs[(unsigned)month].u;
      *b.pu++ = Util::NumData::m_pairs[(unsigned)day].u;
      return 8;
    }
    return 0;
  }

  class Proxy {
	value_type m_value;
    public:
        Proxy(value_type value)
        : m_value(value) {}

        unsigned operator()(char* buf)
        {
          unsigned l = write(buf, m_value);
#ifndef ENABLE_SSO_NOZERO
          buf[l] = '\0';
#endif
          return l;
        }
  };

  template <typename S> static void set(S& result, const UtcDate& value)
  {
    result.resize(8);
    if ( !write((char*)String::data(result), value) )
      throw FieldConvertError();
  }

  static bool parse( const char* str, const char* end, UtcDate& utc )
  {
    std::size_t sz = end - str;
    if (sz == 8)
    {
      const unsigned char* p = (const unsigned char*)str;
      int year, mon, mday;
      bool valid = parse_date(p, year, mon, mday);
      utc = UtcDateOnly( mday, mon, year );
      return valid;
    }
    return false;
  }
  template <typename S> static bool parse( const S& value, UtcDate& utc )
  {
    const char* str = String::data(value);
    return parse(str, str + String::size(value), utc);
  }

  static std::string convert( const UtcDate& value )
  THROW_DECL( FieldConvertError )
  {
    std::string result;
    set(result, value);
    return result;
  }

  template <typename S> static S convert( const UtcDate& value )
  {
    S result;
    set(result, value);
    return result;
  }

  static UtcDate convert( const String::value_type& value )
  THROW_DECL( FieldConvertError )
  {
    UtcDate utc;
    if (parse(value, utc))
      return utc;
    throw FieldConvertError();
  }

  template <typename S> static bool NOTHROW validate( const S& value )
  {
    int year, mon, mday;
    std::size_t sz = String::size(value);
    const unsigned char* p = (const unsigned char*)String::data(value);
    return (sz == 8) && parse_date(p, year, mon, mday );
  }
};

typedef UtcDateConvertor UtcDateOnlyConvertor;

#if defined(ENABLE_SSO) && (defined(_MSC_VER) || defined(__x86_64__) || defined(__i386__))
template <> inline String::short_string_type HEAVYUSE
UtcDateConvertor::convert<String::short_string_type>( const UtcDate& value)
{
  return String::short_string_type(String::short_string_type::TypeHolder<char>(), Proxy(value));
}
template <> inline void HEAVYUSE
UtcDateConvertor::set<String::short_string_type>(String::short_string_type& result, const UtcDate& value)
{
  if ( LIKELY(0 != result.short_assign<char>(Proxy(value))) )
    return;
  throw FieldConvertError();
}
#endif

typedef StringConvertor STRING_CONVERTOR;
typedef CharConvertor CHAR_CONVERTOR;
typedef DoubleConvertor PRICE_CONVERTOR;
typedef IntConvertor INT_CONVERTOR;
typedef DoubleConvertor AMT_CONVERTOR;
typedef DoubleConvertor QTY_CONVERTOR;
typedef StringConvertor CURRENCY_CONVERTOR;
typedef StringConvertor MULTIPLEVALUESTRING_CONVERTOR;
typedef StringConvertor MULTIPLESTRINGVALUE_CONVERTOR;
typedef StringConvertor MULTIPLECHARVALUE_CONVERTOR;
typedef StringConvertor EXCHANGE_CONVERTOR;
typedef UtcTimeStampConvertor UTCTIMESTAMP_CONVERTOR;
typedef BoolConvertor BOOLEAN_CONVERTOR;
typedef StringConvertor LOCALMKTDATE_CONVERTOR;
typedef StringConvertor DATA_CONVERTOR;
typedef DoubleConvertor FLOAT_CONVERTOR;
typedef DoubleConvertor PRICEOFFSET_CONVERTOR;
typedef StringConvertor MONTHYEAR_CONVERTOR;
typedef StringConvertor DAYOFMONTH_CONVERTOR;
typedef UtcDateConvertor UTCDATE_CONVERTOR;
typedef UtcTimeOnlyConvertor UTCTIMEONLY_CONVERTOR;
typedef IntConvertor NUMINGROUP_CONVERTOR;
typedef DoubleConvertor PERCENTAGE_CONVERTOR;
typedef IntConvertor SEQNUM_CONVERTOR;
typedef IntConvertor LENGTH_CONVERTOR;
typedef StringConvertor COUNTRY_CONVERTOR;
typedef StringConvertor TZTIMEONLY_CONVERTOR;
typedef StringConvertor TZTIMESTAMP_CONVERTOR;
typedef StringConvertor XMLDATA_CONVERTOR;
typedef StringConvertor LANGUAGE_CONVERTOR;
typedef CheckSumConvertor CHECKSUM_CONVERTOR;
}

#ifdef _MSC_VER
#pragma warning( default : 4706 ) // RE_ENABLE warning C4706: assignment within conditional expression
#endif

#endif //FIX_FIELDCONVERTORS_H
