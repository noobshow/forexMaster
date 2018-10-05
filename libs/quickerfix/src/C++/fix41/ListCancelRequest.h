#ifndef FIX41_LISTCANCELREQUEST_H
#define FIX41_LISTCANCELREQUEST_H

#include "Message.h"

namespace FIX41
{

  class ListCancelRequest : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("K"); }
  public:
    ListCancelRequest() : Message(PackedType()) {}
    ListCancelRequest(const FIX::Message& m) : Message(m) {}
    ListCancelRequest(const Message& m) : Message(m) {}
    ListCancelRequest(const ListCancelRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("K"); }

    ListCancelRequest(
      const FIX::ListID& aListID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aListID);
    }

    ListCancelRequest(
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
