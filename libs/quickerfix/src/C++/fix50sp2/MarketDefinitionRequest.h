#ifndef FIX50SP2_MARKETDEFINITIONREQUEST_H
#define FIX50SP2_MARKETDEFINITIONREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class MarketDefinitionRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("BT"); }
  public:
    MarketDefinitionRequest() : Message(PackedType()) {}
    MarketDefinitionRequest(const FIX::Message& m) : Message(m) {}
    MarketDefinitionRequest(const Message& m) : Message(m) {}
    MarketDefinitionRequest(const MarketDefinitionRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BT"); }

    MarketDefinitionRequest(
      const FIX::MarketReqID& aMarketReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSubscriptionRequestType);
      Sequence::push_back_to(*this, aMarketReqID);
    }

    MarketDefinitionRequest(
      const FIX::MarketReqID::Pack& aMarketReqID,
      const FIX::SubscriptionRequestType::Pack& aSubscriptionRequestType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSubscriptionRequestType);
      Sequence::push_back_to(*this, aMarketReqID);
    }

    FIELD_SET(*this, FIX::MarketReqID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::ParentMktSegmID);
  };

}

#endif
