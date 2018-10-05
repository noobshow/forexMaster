#ifndef FIX43_XMLNONFIX_H
#define FIX43_XMLNONFIX_H

#include "Message.h"

namespace FIX43
{

  class XMLnonFIX : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("n"); }
  public:
    XMLnonFIX() : Message(PackedType()) {}
    XMLnonFIX(const FIX::Message& m) : Message(m) {}
    XMLnonFIX(const Message& m) : Message(m) {}
    XMLnonFIX(const XMLnonFIX& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("n"); }

  };

}

#endif
