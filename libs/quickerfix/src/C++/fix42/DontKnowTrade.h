#ifndef FIX42_DONTKNOWTRADE_H
#define FIX42_DONTKNOWTRADE_H

#include "Message.h"

namespace FIX42
{

  class DontKnowTrade : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("Q"); }
  public:
    DontKnowTrade() : Message(PackedType()) {}
    DontKnowTrade(const FIX::Message& m) : Message(m) {}
    DontKnowTrade(const Message& m) : Message(m) {}
    DontKnowTrade(const DontKnowTrade& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("Q"); }

    DontKnowTrade(
      const FIX::OrderID& aOrderID,
      const FIX::ExecID& aExecID,
      const FIX::DKReason& aDKReason,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aExecID);
      Sequence::push_back_to(*this, aOrderID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
      Sequence::push_back_to(*this, aDKReason);
    }

    DontKnowTrade(
      const FIX::OrderID::Pack& aOrderID,
      const FIX::ExecID::Pack& aExecID,
      const FIX::DKReason::Pack& aDKReason,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::Side::Pack& aSide )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aExecID);
      Sequence::push_back_to(*this, aOrderID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
      Sequence::push_back_to(*this, aDKReason);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::DKReason);
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
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
