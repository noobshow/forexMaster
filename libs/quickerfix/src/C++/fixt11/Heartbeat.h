#ifndef FIXT11_HEARTBEAT_H
#define FIXT11_HEARTBEAT_H

#include "Message.h"

namespace FIXT11
{

  class Heartbeat : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("0"); }
  public:
    Heartbeat() : Message(PackedType()) {}
    Heartbeat(const FIX::Message& m) : Message(m) {}
    Heartbeat(const Message& m) : Message(m) {}
    Heartbeat(const Heartbeat& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("0"); }

    FIELD_SET(*this, FIX::TestReqID);
  };

}

#endif
