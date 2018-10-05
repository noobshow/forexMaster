#ifndef FIX50SP1_REGISTRATIONINSTRUCTIONSRESPONSE_H
#define FIX50SP1_REGISTRATIONINSTRUCTIONSRESPONSE_H

#include "Message.h"

namespace FIX50SP1
{

  class RegistrationInstructionsResponse : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("p"); }
  public:
    RegistrationInstructionsResponse() : Message(PackedType()) {}
    RegistrationInstructionsResponse(const FIX::Message& m) : Message(m) {}
    RegistrationInstructionsResponse(const Message& m) : Message(m) {}
    RegistrationInstructionsResponse(const RegistrationInstructionsResponse& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("p"); }

    RegistrationInstructionsResponse(
      const FIX::RegistID& aRegistID,
      const FIX::RegistTransType& aRegistTransType,
      const FIX::RegistRefID& aRegistRefID,
      const FIX::RegistStatus& aRegistStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aRegistStatus);
      Sequence::push_back_to(*this, aRegistRefID);
      Sequence::push_back_to(*this, aRegistID);
      Sequence::push_back_to(*this, aRegistTransType);
    }

    RegistrationInstructionsResponse(
      const FIX::RegistID::Pack& aRegistID,
      const FIX::RegistTransType::Pack& aRegistTransType,
      const FIX::RegistRefID::Pack& aRegistRefID,
      const FIX::RegistStatus::Pack& aRegistStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aRegistStatus);
      Sequence::push_back_to(*this, aRegistRefID);
      Sequence::push_back_to(*this, aRegistID);
      Sequence::push_back_to(*this, aRegistTransType);
    }

    FIELD_SET(*this, FIX::RegistID);
    FIELD_SET(*this, FIX::RegistTransType);
    FIELD_SET(*this, FIX::RegistRefID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AcctIDSource);
    FIELD_SET(*this, FIX::RegistStatus);
    FIELD_SET(*this, FIX::RegistRejReasonCode);
    FIELD_SET(*this, FIX::RegistRejReasonText);
  };

}

#endif
