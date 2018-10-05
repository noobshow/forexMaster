#ifndef FIX42_ALLOCATIONINSTRUCTIONACK_H
#define FIX42_ALLOCATIONINSTRUCTIONACK_H

#include "Message.h"

namespace FIX42
{

  class AllocationInstructionAck : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("P"); }
  public:
    AllocationInstructionAck() : Message(PackedType()) {}
    AllocationInstructionAck(const FIX::Message& m) : Message(m) {}
    AllocationInstructionAck(const Message& m) : Message(m) {}
    AllocationInstructionAck(const AllocationInstructionAck& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("P"); }

    AllocationInstructionAck(
      const FIX::AllocID& aAllocID,
      const FIX::TradeDate& aTradeDate,
      const FIX::AllocStatus& aAllocStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aAllocID);
      Sequence::push_back_to(*this, aTradeDate);
      Sequence::push_back_to(*this, aAllocStatus);
    }

    AllocationInstructionAck(
      const FIX::AllocID::Pack& aAllocID,
      const FIX::TradeDate::Pack& aTradeDate,
      const FIX::AllocStatus::Pack& aAllocStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aAllocID);
      Sequence::push_back_to(*this, aTradeDate);
      Sequence::push_back_to(*this, aAllocStatus);
    }

    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::AllocStatus);
    FIELD_SET(*this, FIX::AllocRejCode);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
