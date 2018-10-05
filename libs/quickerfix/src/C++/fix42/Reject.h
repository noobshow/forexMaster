#ifndef FIX42_REJECT_H
#define FIX42_REJECT_H

#include "Message.h"

namespace FIX42
{

  class Reject : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("3"); }
  public:
    Reject() : Message(PackedType()) {}
    Reject(const FIX::Message& m) : Message(m) {}
    Reject(const Message& m) : Message(m) {}
    Reject(const Reject& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("3"); }

    Reject(
      const FIX::RefSeqNum& aRefSeqNum )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aRefSeqNum);
    }

    Reject(
      const FIX::RefSeqNum::Pack& aRefSeqNum )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aRefSeqNum);
    }

    FIELD_SET(*this, FIX::RefSeqNum);
    FIELD_SET(*this, FIX::RefTagID);
    FIELD_SET(*this, FIX::RefMsgType);
    FIELD_SET(*this, FIX::SessionRejectReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
