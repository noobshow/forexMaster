#ifndef FIX50SP1_LISTEXECUTE_H
#define FIX50SP1_LISTEXECUTE_H

#include "Message.h"

namespace FIX50SP1
{

  class ListExecute : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("L"); }
  public:
    ListExecute() : Message(PackedType()) {}
    ListExecute(const FIX::Message& m) : Message(m) {}
    ListExecute(const Message& m) : Message(m) {}
    ListExecute(const ListExecute& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("L"); }

    ListExecute(
      const FIX::ListID& aListID,
      const FIX::TransactTime& aTransactTime )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aListID);
    }

    ListExecute(
      const FIX::ListID::Pack& aListID,
      const FIX::TransactTime::Pack& aTransactTime )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aListID);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ClientBidID);
    FIELD_SET(*this, FIX::BidID);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
