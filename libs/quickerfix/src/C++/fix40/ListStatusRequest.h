#ifndef FIX40_LISTSTATUSREQUEST_H
#define FIX40_LISTSTATUSREQUEST_H

#include "Message.h"

namespace FIX40
{

  class ListStatusRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("M"); }
  public:
    ListStatusRequest() : Message(PackedType()) {}
    ListStatusRequest(const FIX::Message& m) : Message(m) {}
    ListStatusRequest(const Message& m) : Message(m) {}
    ListStatusRequest(const ListStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("M"); }

    ListStatusRequest(
      const FIX::ListID& aListID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aListID);
    }

    ListStatusRequest(
      const FIX::ListID::Pack& aListID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aListID);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
