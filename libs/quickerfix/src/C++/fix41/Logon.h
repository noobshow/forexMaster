#ifndef FIX41_LOGON_H
#define FIX41_LOGON_H

#include "Message.h"

namespace FIX41
{

  class Logon : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("A"); }
  public:
    Logon() : Message(PackedType()) {}
    Logon(const FIX::Message& m) : Message(m) {}
    Logon(const Message& m) : Message(m) {}
    Logon(const Logon& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("A"); }

    Logon(
      const FIX::EncryptMethod& aEncryptMethod,
      const FIX::HeartBtInt& aHeartBtInt )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aEncryptMethod);
      Sequence::push_back_to(*this, aHeartBtInt);
    }

    Logon(
      const FIX::EncryptMethod::Pack& aEncryptMethod,
      const FIX::HeartBtInt::Pack& aHeartBtInt )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aEncryptMethod);
      Sequence::push_back_to(*this, aHeartBtInt);
    }

    FIELD_SET(*this, FIX::EncryptMethod);
    FIELD_SET(*this, FIX::HeartBtInt);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::ResetSeqNumFlag);
  };

}

#endif
