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

#include <string.h>
#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Parser.h"
#include "Utility.h"
#include "FieldConvertors.h"
#include <algorithm>

namespace FIX
{

std::size_t HEAVYUSE HOTSECTION Parser::extractLength( const char* msg, std::size_t sz )
THROW_DECL( MessageParseError )
{
  if( LIKELY(sz > 3) )
  {
    Util::CharBuffer::Fixed<3> bodyLengthTag = { { '\001', '9', '=' } };
    const char* p = Util::CharBuffer::find( bodyLengthTag, msg, sz);
    if( LIKELY(NULL != p) )
    {
      std::size_t startPos = p - msg + 3;
      p = Util::CharBuffer::find( Util::CharBuffer::Fixed<1>('\001'), p + 3, sz - startPos);
      if( LIKELY(NULL != p) )
      {
        int length = 0;
        std::size_t endPos = p - msg;
    
        if( PositiveIntConvertor::parse(msg + startPos, p, length) )
          return endPos + 1 + length;

        msg += startPos;
        throw MessageParseError( std::string("Invalid BodyLength field ")
                               + std::string(msg, p - msg) );
      }
    }
  }
  return 0;
}

}
