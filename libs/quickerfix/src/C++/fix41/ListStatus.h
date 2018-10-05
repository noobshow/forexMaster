#ifndef FIX41_LISTSTATUS_H
#define FIX41_LISTSTATUS_H

#include "Message.h"

namespace FIX41
{

  class ListStatus : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("N"); }
  public:
    ListStatus() : Message(PackedType()) {}
    ListStatus(const FIX::Message& m) : Message(m) {}
    ListStatus(const Message& m) : Message(m) {}
    ListStatus(const ListStatus& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("N"); }

    ListStatus(
      const FIX::ListID& aListID,
      const FIX::NoRpts& aNoRpts,
      const FIX::RptSeq& aRptSeq )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aListID);
      Sequence::push_back_to(*this, aNoRpts);
      Sequence::push_back_to(*this, aRptSeq);
    }

    ListStatus(
      const FIX::ListID::Pack& aListID,
      const FIX::NoRpts::Pack& aNoRpts,
      const FIX::RptSeq::Pack& aRptSeq )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aListID);
      Sequence::push_back_to(*this, aNoRpts);
      Sequence::push_back_to(*this, aRptSeq);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::NoRpts);
    FIELD_SET(*this, FIX::RptSeq);
    FIELD_SET(*this, FIX::NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,14,151,84,6,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::CumQty);
      FIELD_SET(*this, FIX::LeavesQty);
      FIELD_SET(*this, FIX::CxlQty);
      FIELD_SET(*this, FIX::AvgPx);
    };
  };

}

#endif
