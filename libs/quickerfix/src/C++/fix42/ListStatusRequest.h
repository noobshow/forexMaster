#ifndef FIX42_LISTSTATUSREQUEST_H
#define FIX42_LISTSTATUSREQUEST_H

#include "Message.h"

namespace FIX42
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
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
