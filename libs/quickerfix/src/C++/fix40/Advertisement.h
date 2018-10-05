#ifndef FIX40_ADVERTISEMENT_H
#define FIX40_ADVERTISEMENT_H

#include "Message.h"

namespace FIX40
{

  class Advertisement : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("7"); }
  public:
    Advertisement() : Message(PackedType()) {}
    Advertisement(const FIX::Message& m) : Message(m) {}
    Advertisement(const Message& m) : Message(m) {}
    Advertisement(const Advertisement& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("7"); }

    Advertisement(
      const FIX::AdvId& aAdvId,
      const FIX::AdvTransType& aAdvTransType,
      const FIX::Symbol& aSymbol,
      const FIX::AdvSide& aAdvSide,
      const FIX::Shares& aShares )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aAdvId);
      Sequence::push_back_to(*this, aAdvSide);
      Sequence::push_back_to(*this, aAdvTransType);
      Sequence::push_back_to(*this, aShares);
      Sequence::push_back_to(*this, aSymbol);
    }

    Advertisement(
      const FIX::AdvId::Pack& aAdvId,
      const FIX::AdvTransType::Pack& aAdvTransType,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::AdvSide::Pack& aAdvSide,
      const FIX::Shares::Pack& aShares )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aAdvId);
      Sequence::push_back_to(*this, aAdvSide);
      Sequence::push_back_to(*this, aAdvTransType);
      Sequence::push_back_to(*this, aShares);
      Sequence::push_back_to(*this, aSymbol);
    }

    FIELD_SET(*this, FIX::AdvId);
    FIELD_SET(*this, FIX::AdvTransType);
    FIELD_SET(*this, FIX::AdvRefID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::AdvSide);
    FIELD_SET(*this, FIX::Shares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
