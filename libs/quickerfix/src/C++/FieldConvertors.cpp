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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FieldConvertors.h"
#include <math.h>

namespace FIX {

ALIGN_DECL_DEFAULT HOTDATA const double DoubleConvertor::m_mul1[8] = { 1E1, 1E2, 1E3, 1E4, 1E5, 1E6, 1E7, 1E8 };
ALIGN_DECL_DEFAULT HOTDATA const double DoubleConvertor::m_mul8[8] = { 1E8, 1E16, 1E24, 1E32, 1E40, 1E48, 1E56, 1E64 };

ALIGN_DECL_DEFAULT HOTDATA static const double pwr10[] =
{
  1, 10, 100, 1000, 10000, 100000, 1000000,
  10000000, 100000000, 1000000000, 10000000000LL,
  100000000000LL, 1000000000000LL, 10000000000000LL,
  100000000000000LL, 1000000000000000LL, 10000000000000000LL
};

#define NUMOF(a) (sizeof(a) / sizeof(a[0]))

// 0 < v < 100, returns 0 if divisible by 10, otherwise 1
static inline std::size_t HEAVYUSE test10(uint32_t v)
{
  std::size_t r;
#if defined(__GNUC__) && defined(__x86_64__) 
  uint64_t bits = 1162219258676256ULL;
  __asm__ (
     "shr %0;                \n\t"
     "mov %0, %k1;           \n\t"
     "setnc %b0;             \n\t"
     "shl %b1, %q0;          \n\t"
     "test %q0, %2;          \n\t"
     "setz %b1;              \n\t"
     : "+r"(v), "=&c"(r)
     : "r"(bits)
     : "cc"
  );
#else
  r = (v % 10) != 0;
#endif
  return r;
}

// 0 < v < 10^16
static inline std::size_t HEAVYUSE numFractionDigits( uint64_t v )
{
  uint32_t h = (uint32_t)(v / 100000000); 
  uint32_t r = (uint32_t)(v - h * 100000000);
  std::size_t n;
  h = ((r == 0) ? (n = 1, r = h) : (n = 9, r)) / 10000;
  r -= h * 10000;
  h = ((r == 0) ? r = h : (n += 4, r)) / 100;
  r -= h * 100;
  n += test10( (r == 0) ? (v = 0, h) : (v = 2, r) );
  return n + v;
}

std::size_t HEAVYUSE HOTSECTION DoubleConvertor::Proxy::generate(char* buf, double value, std::size_t padded, bool rounded) const
{
 /* 
  * Fixed format encoding only. Based in part on modp_dtoa():
  *
  * Copyright &copy; 2007, Nick Galbreath -- nickg [at] modp [dot] com
  * All rights reserved.
  * http://code.google.com/p/stringencoders/
  * Released under the bsd license.
  */

  static const double threshold = 1000000000000000LL; // 10^(MaxPrecision)
  PREFETCH((const char*)pwr10, 0, 0);

  char* wstr = buf;

  /* Hacky test for NaN
   * under -fast-math this won't work, but then you also won't
   * have correct nan values anyways.  The alternative is
   * to link with libmath (bad) or hack IEEE double bits (bad)
   */
  if ( LIKELY(value == value))
  {
    int64_t whole;
    uint64_t frac;
    double tmp, diff = 0.0;
    std::size_t count, not_negative = 1;
    std::size_t precision = padded;

    /* we'll work in positive values and deal with the
       negative sign issue later */
    if (value < 0) {
      not_negative = 0;
      value = -value;
    }

    if (LIKELY(value < threshold)) {

      /* may have fractional part */
      whole = (int64_t) value;
      count = Util::ULong::numDigits(whole) - (whole == 0);

      if (precision) {
        if (!rounded && value != 0)
        {
          frac = static_cast<uint64_t>((value - whole) * pwr10[MaxPrecision + 1 - count]);
          if (frac) {
            int64_t rem = frac % 10;
            precision = numFractionDigits( frac + (rem >= 5) * 10 - rem ) - count;
          }
        }
      } else {
        precision = MaxPrecision - count;
      }

      tmp = (value - whole) * pwr10[precision];
      frac = (uint64_t)(tmp);
      diff = tmp - frac;

      if (diff > 0.5) {
        ++frac;
        /* handle rollover, e.g.  case 0.99 with prec 1 is 1.0  */
        if (frac >= pwr10[precision]) {
            frac = 0;
            ++whole;
        }
      } else if (diff == 0.5 && ((frac == 0) || (frac & 1))) {
        /* if halfway, round up if odd, OR
           if last digit is 0.  That last part is strange */
        ++frac;
      }
      if (UNLIKELY(precision == 0)) {
        diff = value - whole;
        if (diff > 0.5) {
          /* greater than 0.5, round up, e.g. 1.6 -> 2 */
          ++whole;
        } else if (diff == 0.5 && (whole & 1)) {
          /* exactly 0.5 and ODD, then round up */
          /* 1.5 -> 2, but 2.5 -> 2 */
          ++whole;
        }

        if (padded) {
          precision = padded;
          do {
            *wstr++ = '0';
          } while (--precision);
          *wstr++ = '.';
        }
      } else if (LIKELY(frac || padded)) {
        count = precision;
        // now do fractional part, as an unsigned number
        // we know it is not 0 but we can have trailing zeros, these
        if (!padded) {
          // should be removed
          while (!(frac % 10)) {
            --count;
            frac /= 10;
          }
        } else {
          // or added
          for (precision = padded; precision > count; precision--)
            *wstr++ = '0';
        }

        // now do fractional part, as an unsigned number
#if defined(__GNUC__) && defined(__x86_64__)
        uint64_t r100, u = frac;
        std::size_t odd = count & 1; 
        std::size_t c = count - odd;
        switch(count >> 1) {
	  default: r100 = 184467440737095517ULL; __asm__ ( "mulq %q2" : "=&d"(u), "+a"(r100) : "r"(frac) : "cc" );
			*(uint16_t*)(wstr + c - 14) =  ntohs(Util::NumData::m_pairs[frac - 100 * u].u); 
	  case  6: r100 = 184467440737095517ULL; __asm__ ( "mulq %q2" : "=&d"(frac), "+a"(r100) : "r"(u) : "cc" ); 
			*(uint16_t*)(wstr + c - 12) =  ntohs(Util::NumData::m_pairs[u - 100 * frac].u);
          case  5: r100 = 184467440737095517ULL; __asm__ ( "mulq %q2" : "=&d"(u), "+a"(r100) : "r"(frac) : "cc" ); 
			*(uint16_t*)(wstr + c - 10) =  ntohs(Util::NumData::m_pairs[frac - 100 * u].u);
          case  4: frac = (u * 1374389535ULL) >> 37; *(uint16_t*)(wstr + c - 8) =  ntohs(Util::NumData::m_pairs[u - 100 * frac].u);
          case  3: u = (frac * 1374389535ULL) >> 37; *(uint16_t*)(wstr + c - 6) =  ntohs(Util::NumData::m_pairs[frac - 100 * u].u);
          case  2: frac = (u * 1374389535ULL) >> 37; *(uint16_t*)(wstr + c - 4) =  ntohs(Util::NumData::m_pairs[u - 100 * frac].u);
          case  1: u = (frac * 656) >> 16; *(uint16_t*)(wstr + c - 2) =  ntohs(Util::NumData::m_pairs[frac - 100 * u].u);
          case  0: wstr[c]  = u + 0x30; wstr += count;
        }
#else
        do {
          --count;
          *wstr++ = (char)(48 + (frac % 10));
        } while (frac /= 10);
        // add extra 0s
        while (count-- > 0) *wstr++ = '0';
#endif
        // add decimal
        *wstr++ = '.';
      }
    }
    else // above threshold for fractional processing
    { 
      const double ceiling = threshold * 10;
      if (value > ceiling) {
        int level = 0;
        count = NUMOF(pwr10) - 1;
        tmp = value;
        do
        {
          diff = tmp;
          tmp = diff / pwr10[count];
          level++;
        }
        while (tmp > ceiling);
  
        count = 0;
        do
        {
          tmp = diff / pwr10[++count];
        }
        while (tmp > ceiling);
  
        count += (level - 1) * (NUMOF(pwr10) - 1);
        whole = (int64_t)tmp;
      } else {
        count = 0;
        whole = (int64_t)value;
      }

      if (precision) {
        do {
          *wstr++ = '0';
        } while (--precision);
        *wstr++ = '.';
      }

      while (count-- > 0) *wstr++ = '0';
    }
    // do whole part
    // Take care of sign
    // Conversion. Number is reversed.
    do *wstr++ = (char)(48 + (whole % 10)); while (whole /= 10);
    *wstr = '-';
    wstr += (1 - not_negative);
  }
  else
  {
    *wstr++ = 'n';
    *wstr++ = 'a';
    *wstr++ = 'n';
  }
  return wstr - buf;
}

}

