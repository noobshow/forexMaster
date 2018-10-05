#ifndef FIX42_TRADINGSESSIONSTATUS_H
#define FIX42_TRADINGSESSIONSTATUS_H

#include "Message.h"

namespace FIX42
{

  class TradingSessionStatus : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("h"); }
  public:
    TradingSessionStatus() : Message(PackedType()) {}
    TradingSessionStatus(const FIX::Message& m) : Message(m) {}
    TradingSessionStatus(const Message& m) : Message(m) {}
    TradingSessionStatus(const TradingSessionStatus& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("h"); }

    TradingSessionStatus(
      const FIX::TradingSessionID& aTradingSessionID,
      const FIX::TradSesStatus& aTradSesStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTradingSessionID);
      Sequence::push_back_to(*this, aTradSesStatus);
    }

    TradingSessionStatus(
      const FIX::TradingSessionID::Pack& aTradingSessionID,
      const FIX::TradSesStatus::Pack& aTradSesStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTradingSessionID);
      Sequence::push_back_to(*this, aTradSesStatus);
    }

    FIELD_SET(*this, FIX::TradSesReqID);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradSesMethod);
    FIELD_SET(*this, FIX::TradSesMode);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::TradSesStatus);
    FIELD_SET(*this, FIX::TradSesStartTime);
    FIELD_SET(*this, FIX::TradSesOpenTime);
    FIELD_SET(*this, FIX::TradSesPreCloseTime);
    FIELD_SET(*this, FIX::TradSesCloseTime);
    FIELD_SET(*this, FIX::TradSesEndTime);
    FIELD_SET(*this, FIX::TotalVolumeTraded);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
