#ifndef FIX43_MARKETDATAREQUESTREJECT_H
#define FIX43_MARKETDATAREQUESTREJECT_H

#include "Message.h"

namespace FIX43
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
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
