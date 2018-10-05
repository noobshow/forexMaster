#ifndef FIX41_RESENDREQUEST_H
#define FIX41_RESENDREQUEST_H

#include "Message.h"

namespace FIX41
{

  class ResendRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("2"); }
  public:
    ResendRequest() : Message(PackedType()) {}
    ResendRequest(const FIX::Message& m) : Message(m) {}
    ResendRequest(const Message& m) : Message(m) {}
    ResendRequest(const ResendRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("2"); }

    ResendRequest(
      const FIX::BeginSeqNo& aBeginSeqNo,
      const FIX::EndSeqNo& aEndSeqNo )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aBeginSeqNo);
      Sequence::push_back_to(*this, aEndSeqNo);
    }

    ResendRequest(
      const FIX::BeginSeqNo::Pack& aBeginSeqNo,
      const FIX::EndSeqNo::Pack& aEndSeqNo )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aBeginSeqNo);
      Sequence::push_back_to(*this, aEndSeqNo);
    }

    FIELD_SET(*this, FIX::BeginSeqNo);
    FIELD_SET(*this, FIX::EndSeqNo);
  };

}

#endif
