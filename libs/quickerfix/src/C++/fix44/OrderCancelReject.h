#ifndef FIX44_ORDERCANCELREJECT_H
#define FIX44_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX44
{

  class OrderCancelReject : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("9"); }
  public:
    OrderCancelReject() : Message(PackedType()) {}
    OrderCancelReject(const FIX::Message& m) : Message(m) {}
    OrderCancelReject(const Message& m) : Message(m) {}
    OrderCancelReject(const OrderCancelReject& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("9"); }

    OrderCancelReject(
      const FIX::OrderID& aOrderID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::OrdStatus& aOrdStatus,
      const FIX::CxlRejResponseTo& aCxlRejResponseTo )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrderID);
      Sequence::push_back_to(*this, aOrdStatus);
      Sequence::push_back_to(*this, aOrigClOrdID);
      Sequence::push_back_to(*this, aCxlRejResponseTo);
    }

    OrderCancelReject(
      const FIX::OrderID::Pack& aOrderID,
      const FIX::ClOrdID::Pack& aClOrdID,
      const FIX::OrigClOrdID::Pack& aOrigClOrdID,
      const FIX::OrdStatus::Pack& aOrdStatus,
      const FIX::CxlRejResponseTo::Pack& aCxlRejResponseTo )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrderID);
      Sequence::push_back_to(*this, aOrdStatus);
      Sequence::push_back_to(*this, aOrigClOrdID);
      Sequence::push_back_to(*this, aCxlRejResponseTo);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::SecondaryClOrdID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClOrdLinkID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::WorkingIndicator);
    FIELD_SET(*this, FIX::OrigOrdModTime);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AcctIDSource);
    FIELD_SET(*this, FIX::AccountType);
    FIELD_SET(*this, FIX::TradeOriginationDate);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::CxlRejResponseTo);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
