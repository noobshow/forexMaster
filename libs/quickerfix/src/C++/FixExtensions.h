#ifndef FIX_EXTENSIONS_H
#define FIX_EXTENSIONS_H

#include "Field.h"

namespace FIX
{
#ifdef HAVE_EMX
  namespace FIELD
  {
    namespace EMX
    {
      const int MsgType = 9426;
    }
  } 

  namespace EMX
  {
    DEFINE_STRING(MsgType);
  }
#endif // EMX
}
#endif
