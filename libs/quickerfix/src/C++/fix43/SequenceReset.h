#ifndef FIX43_SEQUENCERESET_H
#define FIX43_SEQUENCERESET_H

#include "Message.h"

namespace FIX43
{

  class SequenceReset : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("4"); }
  public:
    SequenceReset() : Message(PackedType()) {}
    SequenceReset(const FIX::Message& m) : Message(m) {}
    SequenceReset(const Message& m) : Message(m) {}
    SequenceReset(const SequenceReset& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("4"); }

    SequenceReset(
      const FIX::NewSeqNo& aNewSeqNo )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aNewSeqNo);
    }

    SequenceReset(
      const FIX::NewSeqNo::Pack& aNewSeqNo )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aNewSeqNo);
    }

    FIELD_SET(*this, FIX::GapFillFlag);
    FIELD_SET(*this, FIX::NewSeqNo);
  };

}

#endif
