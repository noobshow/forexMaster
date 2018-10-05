#ifndef FIX50_MARKETDATAREQUESTREJECT_H
#define FIX50_MARKETDATAREQUESTREJECT_H

#include "Message.h"

namespace FIX50
{

  class MarketDataRequestReject : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("Y"); }
  public:
    MarketDataRequestReject() : Message(PackedType()) {}
    MarketDataRequestReject(const FIX::Message& m) : Message(m) {}
    MarketDataRequestReject(const Message& m) : Message(m) {}
    MarketDataRequestReject(const MarketDataRequestReject& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Y"); }

    MarketDataRequestReject(
      const FIX::MDReqID& aMDReqID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aMDReqID);
    }

    MarketDataRequestReject(
      const FIX::MDReqID::Pack& aMDReqID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aMDReqID);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::MDReqRejReason);
    FIELD_SET(*this, FIX::NoAltMDSource);
    class NoAltMDSource: public FIX::Group
    {
    public:
    NoAltMDSource() : FIX::Group(816,817,FIX::message_order(817,0)) {}
      FIELD_SET(*this, FIX::AltMDSourceID);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
