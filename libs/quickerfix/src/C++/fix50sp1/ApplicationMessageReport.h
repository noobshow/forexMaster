#ifndef FIX50SP1_APPLICATIONMESSAGEREPORT_H
#define FIX50SP1_APPLICATIONMESSAGEREPORT_H

#include "Message.h"

namespace FIX50SP1
{

  class ApplicationMessageReport : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("BY"); }
  public:
    ApplicationMessageReport() : Message(PackedType()) {}
    ApplicationMessageReport(const FIX::Message& m) : Message(m) {}
    ApplicationMessageReport(const Message& m) : Message(m) {}
    ApplicationMessageReport(const ApplicationMessageReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BY"); }

    ApplicationMessageReport(
      const FIX::ApplReportID& aApplReportID,
      const FIX::ApplReportType& aApplReportType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aApplReportID);
      Sequence::push_back_to(*this, aApplReportType);
    }

    ApplicationMessageReport(
      const FIX::ApplReportID::Pack& aApplReportID,
      const FIX::ApplReportType::Pack& aApplReportType )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aApplReportID);
      Sequence::push_back_to(*this, aApplReportType);
    }

    FIELD_SET(*this, FIX::ApplReportID);
    FIELD_SET(*this, FIX::ApplReportType);
    FIELD_SET(*this, FIX::NoApplIDs);
    class NoApplIDs: public FIX::Group
    {
    public:
    NoApplIDs() : FIX::Group(1351,1355,FIX::message_order(1355,1399,1357,0)) {}
      FIELD_SET(*this, FIX::RefApplID);
      FIELD_SET(*this, FIX::ApplNewSeqNum);
      FIELD_SET(*this, FIX::RefApplLastSeqNum);
    };
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
