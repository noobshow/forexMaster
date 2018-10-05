#ifndef FIX41_ORDERCANCELREQUEST_H
#define FIX41_ORDERCANCELREQUEST_H

#include "Message.h"

namespace FIX41
{

  class OrderCancelRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("F"); }
  public:
    OrderCancelRequest() : Message(PackedType()) {}
    OrderCancelRequest(const FIX::Message& m) : Message(m) {}
    OrderCancelRequest(const Message& m) : Message(m) {}
    OrderCancelRequest(const OrderCancelRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("F"); }

    OrderCancelRequest(
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrigClOrdID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    OrderCancelRequest(
      const FIX::OrigClOrdID::Pack& aOrigClOrdID,
      const FIX::ClOrdID::Pack& aClOrdID,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::Side::Pack& aSide )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aOrigClOrdID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ClientID);
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
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
