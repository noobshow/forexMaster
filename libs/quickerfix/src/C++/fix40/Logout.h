#ifndef FIX40_LOGOUT_H
#define FIX40_LOGOUT_H

#include "Message.h"

namespace FIX40
{

  class Logout : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("5"); }
  public:
    Logout() : Message(PackedType()) {}
    Logout(const FIX::Message& m) : Message(m) {}
    Logout(const Message& m) : Message(m) {}
    Logout(const Logout& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("5"); }

    FIELD_SET(*this, FIX::Text);
  };

}

#endif
