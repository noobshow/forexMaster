#ifndef FIX40_DONTKNOWTRADE_H
#define FIX40_DONTKNOWTRADE_H

#include "Message.h"

namespace FIX40
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
      const FIX::DKReason& aDKReason,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty,
      const FIX::LastShares& aLastShares,
      const FIX::LastPx& aLastPx )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aLastPx);
      Sequence::push_back_to(*this, aLastShares);
      Sequence::push_back_to(*this, aOrderQty);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
      Sequence::push_back_to(*this, aDKReason);
    }

    DontKnowTrade(
      const FIX::DKReason::Pack& aDKReason,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::Side::Pack& aSide,
      const FIX::OrderQty::Pack& aOrderQty,
      const FIX::LastShares::Pack& aLastShares,
      const FIX::LastPx::Pack& aLastPx )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aLastPx);
      Sequence::push_back_to(*this, aLastShares);
      Sequence::push_back_to(*this, aOrderQty);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
      Sequence::push_back_to(*this, aDKReason);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::DKReason);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
