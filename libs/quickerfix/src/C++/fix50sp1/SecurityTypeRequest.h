#ifndef FIX50SP1_SECURITYTYPEREQUEST_H
#define FIX50SP1_SECURITYTYPEREQUEST_H

#include "Message.h"

namespace FIX50SP1
{

  class SecurityTypeRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("v"); }
  public:
    SecurityTypeRequest() : Message(PackedType()) {}
    SecurityTypeRequest(const FIX::Message& m) : Message(m) {}
    SecurityTypeRequest(const Message& m) : Message(m) {}
    SecurityTypeRequest(const SecurityTypeRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("v"); }

    SecurityTypeRequest(
      const FIX::SecurityReqID& aSecurityReqID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSecurityReqID);
    }

    SecurityTypeRequest(
      const FIX::SecurityReqID::Pack& aSecurityReqID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aSecurityReqID);
    }

    FIELD_SET(*this, FIX::SecurityReqID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
    FIELD_SET(*this, FIX::MarketID);
    FIELD_SET(*this, FIX::MarketSegmentID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::SecuritySubType);
  };

}

#endif
