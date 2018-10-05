#ifndef FIX50SP1_TRADINGSESSIONSTATUSREQUEST_H
#define FIX50SP1_TRADINGSESSIONSTATUSREQUEST_H

#include "Message.h"

namespace FIX50SP1
{

  class TradingSessionStatusRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("g"); }
  public:
    TradingSessionStatusRequest() : Message(PackedType()) {}
    TradingSessionStatusRequest(const FIX::Message& m) : Message(m) {}
    TradingSessionStatusRequest(const Message& m) : Message(m) {}
    TradingSessionStatusRequest(const TradingSessionStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("g"); }

    TradingSessionStatusRequest(
      const FIX::TradSesReqID& aTradSesReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSubscriptionRequestType);
      Sequence::push_back_to(*this, aTradSesReqID);
    }

    TradingSessionStatusRequest(
      const FIX::TradSesReqID::Pack& aTradSesReqID,
      const FIX::SubscriptionRequestType::Pack& aSubscriptionRequestType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSubscriptionRequestType);
      Sequence::push_back_to(*this, aTradSesReqID);
    }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::SecurityExchange);
  };

}

#endif
