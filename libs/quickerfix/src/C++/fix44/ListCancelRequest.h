#ifndef FIX44_LISTCANCELREQUEST_H
#define FIX44_LISTCANCELREQUEST_H

#include "Message.h"

namespace FIX44
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
      const FIX::ListID& aListID,
      const FIX::TransactTime& aTransactTime )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aListID);
    }

    ListCancelRequest(
      const FIX::ListID::Pack& aListID,
      const FIX::TransactTime::Pack& aTransactTime )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aListID);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::TradeOriginationDate);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
