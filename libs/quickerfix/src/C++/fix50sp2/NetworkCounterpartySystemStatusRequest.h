#ifndef FIX50SP2_NETWORKCOUNTERPARTYSYSTEMSTATUSREQUEST_H
#define FIX50SP2_NETWORKCOUNTERPARTYSYSTEMSTATUSREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class NetworkCounterpartySystemStatusRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("BC"); }
  public:
    NetworkCounterpartySystemStatusRequest() : Message(PackedType()) {}
    NetworkCounterpartySystemStatusRequest(const FIX::Message& m) : Message(m) {}
    NetworkCounterpartySystemStatusRequest(const Message& m) : Message(m) {}
    NetworkCounterpartySystemStatusRequest(const NetworkCounterpartySystemStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BC"); }

    NetworkCounterpartySystemStatusRequest(
      const FIX::NetworkRequestType& aNetworkRequestType,
      const FIX::NetworkRequestID& aNetworkRequestID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aNetworkRequestID);
      Sequence::push_back_to(*this, aNetworkRequestType);
    }

    NetworkCounterpartySystemStatusRequest(
      const FIX::NetworkRequestType::Pack& aNetworkRequestType,
      const FIX::NetworkRequestID::Pack& aNetworkRequestID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aNetworkRequestID);
      Sequence::push_back_to(*this, aNetworkRequestType);
    }

    FIELD_SET(*this, FIX::NetworkRequestType);
    FIELD_SET(*this, FIX::NetworkRequestID);
    FIELD_SET(*this, FIX::NoCompIDs);
    class NoCompIDs: public FIX::Group
    {
    public:
    NoCompIDs() : FIX::Group(936,930,FIX::message_order(930,931,283,284,0)) {}
      FIELD_SET(*this, FIX::RefCompID);
      FIELD_SET(*this, FIX::RefSubID);
      FIELD_SET(*this, FIX::LocationID);
      FIELD_SET(*this, FIX::DeskID);
    };
  };

}

#endif
