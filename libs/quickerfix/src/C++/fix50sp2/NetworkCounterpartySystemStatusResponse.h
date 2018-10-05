#ifndef FIX50SP2_NETWORKCOUNTERPARTYSYSTEMSTATUSRESPONSE_H
#define FIX50SP2_NETWORKCOUNTERPARTYSYSTEMSTATUSRESPONSE_H

#include "Message.h"

namespace FIX50SP2
{

  class NetworkCounterpartySystemStatusResponse : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("BD"); }
  public:
    NetworkCounterpartySystemStatusResponse() : Message(PackedType()) {}
    NetworkCounterpartySystemStatusResponse(const FIX::Message& m) : Message(m) {}
    NetworkCounterpartySystemStatusResponse(const Message& m) : Message(m) {}
    NetworkCounterpartySystemStatusResponse(const NetworkCounterpartySystemStatusResponse& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BD"); }

    NetworkCounterpartySystemStatusResponse(
      const FIX::NetworkStatusResponseType& aNetworkStatusResponseType,
      const FIX::NetworkResponseID& aNetworkResponseID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aNetworkResponseID);
      Sequence::push_back_to(*this, aNetworkStatusResponseType);
    }

    NetworkCounterpartySystemStatusResponse(
      const FIX::NetworkStatusResponseType::Pack& aNetworkStatusResponseType,
      const FIX::NetworkResponseID::Pack& aNetworkResponseID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aNetworkResponseID);
      Sequence::push_back_to(*this, aNetworkStatusResponseType);
    }

    FIELD_SET(*this, FIX::NetworkStatusResponseType);
    FIELD_SET(*this, FIX::NetworkRequestID);
    FIELD_SET(*this, FIX::NetworkResponseID);
    FIELD_SET(*this, FIX::LastNetworkResponseID);
    FIELD_SET(*this, FIX::NoCompIDs);
    class NoCompIDs: public FIX::Group
    {
    public:
    NoCompIDs() : FIX::Group(936,930,FIX::message_order(930,931,283,284,928,929,0)) {}
      FIELD_SET(*this, FIX::RefCompID);
      FIELD_SET(*this, FIX::RefSubID);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
      FIELD_SET(*this, FIX::StatusValue);
      FIELD_SET(*this, FIX::StatusText);
    };
  };

}

#endif
