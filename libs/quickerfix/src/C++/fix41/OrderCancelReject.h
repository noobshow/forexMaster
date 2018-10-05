#ifndef FIX41_ORDERCANCELREJECT_H
#define FIX41_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX41
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
      const FIX::OrdStatus& aOrdStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrderID);
      Sequence::push_back_to(*this, aOrdStatus);
      Sequence::push_back_to(*this, aOrigClOrdID);
    }

    OrderCancelReject(
      const FIX::OrderID::Pack& aOrderID,
      const FIX::ClOrdID::Pack& aClOrdID,
      const FIX::OrigClOrdID::Pack& aOrigClOrdID,
      const FIX::OrdStatus::Pack& aOrdStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrderID);
      Sequence::push_back_to(*this, aOrdStatus);
      Sequence::push_back_to(*this, aOrigClOrdID);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
