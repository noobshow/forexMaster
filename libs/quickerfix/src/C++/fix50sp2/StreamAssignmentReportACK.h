#ifndef FIX50SP2_STREAMASSIGNMENTREPORTACK_H
#define FIX50SP2_STREAMASSIGNMENTREPORTACK_H

#include "Message.h"

namespace FIX50SP2
{

  class StreamAssignmentReportACK : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("CE"); }
  public:
    StreamAssignmentReportACK() : Message(PackedType()) {}
    StreamAssignmentReportACK(const FIX::Message& m) : Message(m) {}
    StreamAssignmentReportACK(const Message& m) : Message(m) {}
    StreamAssignmentReportACK(const StreamAssignmentReportACK& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("CE"); }

    StreamAssignmentReportACK(
      const FIX::StreamAsgnAckType& aStreamAsgnAckType,
      const FIX::StreamAsgnRptID& aStreamAsgnRptID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aStreamAsgnRptID);
      Sequence::push_back_to(*this, aStreamAsgnAckType);
    }

    StreamAssignmentReportACK(
      const FIX::StreamAsgnAckType::Pack& aStreamAsgnAckType,
      const FIX::StreamAsgnRptID::Pack& aStreamAsgnRptID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aStreamAsgnRptID);
      Sequence::push_back_to(*this, aStreamAsgnAckType);
    }

    FIELD_SET(*this, FIX::StreamAsgnAckType);
    FIELD_SET(*this, FIX::StreamAsgnRptID);
    FIELD_SET(*this, FIX::StreamAsgnRejReason);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
