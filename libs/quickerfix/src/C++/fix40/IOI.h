#ifndef FIX40_IOI_H
#define FIX40_IOI_H

#include "Message.h"

namespace FIX40
{

  class IOI : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("6"); }
  public:
    IOI() : Message(PackedType()) {}
    IOI(const FIX::Message& m) : Message(m) {}
    IOI(const Message& m) : Message(m) {}
    IOI(const IOI& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("6"); }

    IOI(
      const FIX::IOIid& aIOIid,
      const FIX::IOITransType& aIOITransType,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::IOIShares& aIOIShares )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aIOIid);
      Sequence::push_back_to(*this, aIOIShares);
      Sequence::push_back_to(*this, aIOITransType);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    IOI(
      const FIX::IOIid::Pack& aIOIid,
      const FIX::IOITransType::Pack& aIOITransType,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::Side::Pack& aSide,
      const FIX::IOIShares::Pack& aIOIShares )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aIOIid);
      Sequence::push_back_to(*this, aIOIShares);
      Sequence::push_back_to(*this, aIOITransType);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    FIELD_SET(*this, FIX::IOIid);
    FIELD_SET(*this, FIX::IOITransType);
    FIELD_SET(*this, FIX::IOIRefID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::IOIShares);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::ValidUntilTime);
    FIELD_SET(*this, FIX::IOIQltyInd);
    FIELD_SET(*this, FIX::IOIOthSvc);
    FIELD_SET(*this, FIX::IOINaturalFlag);
    FIELD_SET(*this, FIX::IOIQualifier);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
