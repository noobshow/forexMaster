#ifndef FIX50_CONFIRMATIONACK_H
#define FIX50_CONFIRMATIONACK_H

#include "Message.h"

namespace FIX50
{

  class ConfirmationAck : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("AU"); }
  public:
    ConfirmationAck() : Message(PackedType()) {}
    ConfirmationAck(const FIX::Message& m) : Message(m) {}
    ConfirmationAck(const Message& m) : Message(m) {}
    ConfirmationAck(const ConfirmationAck& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("AU"); }

    ConfirmationAck(
      const FIX::ConfirmID& aConfirmID,
      const FIX::TradeDate& aTradeDate,
      const FIX::TransactTime& aTransactTime,
      const FIX::AffirmStatus& aAffirmStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aTradeDate);
      Sequence::push_back_to(*this, aConfirmID);
      Sequence::push_back_to(*this, aAffirmStatus);
    }

    ConfirmationAck(
      const FIX::ConfirmID::Pack& aConfirmID,
      const FIX::TradeDate::Pack& aTradeDate,
      const FIX::TransactTime::Pack& aTransactTime,
      const FIX::AffirmStatus::Pack& aAffirmStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aTradeDate);
      Sequence::push_back_to(*this, aConfirmID);
      Sequence::push_back_to(*this, aAffirmStatus);
    }

    FIELD_SET(*this, FIX::ConfirmID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AffirmStatus);
    FIELD_SET(*this, FIX::ConfirmRejReason);
    FIELD_SET(*this, FIX::MatchStatus);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
