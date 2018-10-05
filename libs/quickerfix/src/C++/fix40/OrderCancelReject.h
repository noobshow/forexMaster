#ifndef FIX40_ORDERCANCELREJECT_H
#define FIX40_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX40
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
      const FIX::ClOrdID& aClOrdID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrderID);
    }

    OrderCancelReject(
      const FIX::OrderID::Pack& aOrderID,
      const FIX::ClOrdID::Pack& aClOrdID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrderID);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CxlRejReason);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
