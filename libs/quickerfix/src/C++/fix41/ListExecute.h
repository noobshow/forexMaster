#ifndef FIX41_LISTEXECUTE_H
#define FIX41_LISTEXECUTE_H

#include "Message.h"

namespace FIX41
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
      const FIX::ListID& aListID )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aListID);
    }

    ListExecute(
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
