#ifndef FIX42_ORDERSTATUSREQUEST_H
#define FIX42_ORDERSTATUSREQUEST_H

#include "Message.h"

namespace FIX42
{

  class OrderStatusRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("H"); }
  public:
    OrderStatusRequest() : Message(PackedType()) {}
    OrderStatusRequest(const FIX::Message& m) : Message(m) {}
    OrderStatusRequest(const Message& m) : Message(m) {}
    OrderStatusRequest(const OrderStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("H"); }

    OrderStatusRequest(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    OrderStatusRequest(
      const FIX::ClOrdID::Pack& aClOrdID,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::Side::Pack& aSide )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::Side);
  };

}

#endif
