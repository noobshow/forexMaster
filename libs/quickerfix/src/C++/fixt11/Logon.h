#ifndef FIXT11_LOGON_H
#define FIXT11_LOGON_H

#include "Message.h"

namespace FIXT11
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
      const FIX::HeartBtInt& aHeartBtInt,
      const FIX::DefaultApplVerID& aDefaultApplVerID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aEncryptMethod);
      Sequence::push_back_to(*this, aHeartBtInt);
      Sequence::push_back_to(*this, aDefaultApplVerID);
    }

    Logon(
      const FIX::EncryptMethod::Pack& aEncryptMethod,
      const FIX::HeartBtInt::Pack& aHeartBtInt,
      const FIX::DefaultApplVerID::Pack& aDefaultApplVerID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aEncryptMethod);
      Sequence::push_back_to(*this, aHeartBtInt);
      Sequence::push_back_to(*this, aDefaultApplVerID);
    }

    FIELD_SET(*this, FIX::EncryptMethod);
    FIELD_SET(*this, FIX::HeartBtInt);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::ResetSeqNumFlag);
    FIELD_SET(*this, FIX::NextExpectedMsgSeqNum);
    FIELD_SET(*this, FIX::MaxMessageSize);
    FIELD_SET(*this, FIX::TestMessageIndicator);
    FIELD_SET(*this, FIX::Username);
    FIELD_SET(*this, FIX::Password);
    FIELD_SET(*this, FIX::DefaultApplVerID);
    FIELD_SET(*this, FIX::NoMsgTypes);
    class NoMsgTypes: public FIX::Group
    {
    public:
    NoMsgTypes() : FIX::Group(384,372,FIX::message_order(372,385,1130,1131,0)) {}
      FIELD_SET(*this, FIX::RefMsgType);
      FIELD_SET(*this, FIX::MsgDirection);
      FIELD_SET(*this, FIX::RefApplVerID);
      FIELD_SET(*this, FIX::RefCstmApplVerID);
    };
  };

}

#endif
