#ifndef FIX40_ORDERCANCELREPLACEREQUEST_H
#define FIX40_ORDERCANCELREPLACEREQUEST_H

#include "Message.h"

namespace FIX40
{

  class OrderCancelReplaceRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("G"); }
  public:
    OrderCancelReplaceRequest() : Message(PackedType()) {}
    OrderCancelReplaceRequest(const FIX::Message& m) : Message(m) {}
    OrderCancelReplaceRequest(const Message& m) : Message(m) {}
    OrderCancelReplaceRequest(const OrderCancelReplaceRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("G"); }

    OrderCancelReplaceRequest(
      const FIX::OrigClOrdID& aOrigClOrdID,
      const FIX::ClOrdID& aClOrdID,
      const FIX::HandlInst& aHandlInst,
      const FIX::Symbol& aSymbol,
      const FIX::Side& aSide,
      const FIX::OrderQty& aOrderQty,
      const FIX::OrdType& aOrdType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aHandlInst);
      Sequence::push_back_to(*this, aOrderQty);
      Sequence::push_back_to(*this, aOrdType);
      Sequence::push_back_to(*this, aOrigClOrdID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    OrderCancelReplaceRequest(
      const FIX::OrigClOrdID::Pack& aOrigClOrdID,
      const FIX::ClOrdID::Pack& aClOrdID,
      const FIX::HandlInst::Pack& aHandlInst,
      const FIX::Symbol::Pack& aSymbol,
      const FIX::Side::Pack& aSide,
      const FIX::OrderQty::Pack& aOrderQty,
      const FIX::OrdType::Pack& aOrdType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aClOrdID);
      Sequence::push_back_to(*this, aHandlInst);
      Sequence::push_back_to(*this, aOrderQty);
      Sequence::push_back_to(*this, aOrdType);
      Sequence::push_back_to(*this, aOrigClOrdID);
      Sequence::push_back_to(*this, aSide);
      Sequence::push_back_to(*this, aSymbol);
    }

    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::SettlmntTyp);
    FIELD_SET(*this, FIX::FutSettDate);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::IDSource);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ExpireTime);
    FIELD_SET(*this, FIX::Commission);
    FIELD_SET(*this, FIX::CommType);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::ForexReq);
    FIELD_SET(*this, FIX::SettlCurrency);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
