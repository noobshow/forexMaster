#ifndef FIX50_TRADINGSESSIONLISTREQUEST_H
#define FIX50_TRADINGSESSIONLISTREQUEST_H

#include "Message.h"

namespace FIX50
{

  class TradingSessionListRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("BI"); }
  public:
    TradingSessionListRequest() : Message(PackedType()) {}
    TradingSessionListRequest(const FIX::Message& m) : Message(m) {}
    TradingSessionListRequest(const Message& m) : Message(m) {}
    TradingSessionListRequest(const TradingSessionListRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BI"); }

    TradingSessionListRequest(
      const FIX::TradSesReqID& aTradSesReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSubscriptionRequestType);
      Sequence::push_back_to(*this, aTradSesReqID);
    }

    TradingSessionListRequest(
      const FIX::TradSesReqID::Pack& aTradSesReqID,
      const FIX::SubscriptionRequestType::Pack& aSubscriptionRequestType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSubscriptionRequestType);
      Sequence::push_back_to(*this, aTradSesReqID);
    }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

}

#endif
