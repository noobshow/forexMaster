#ifndef FIX44_USERRESPONSE_H
#define FIX44_USERRESPONSE_H

#include "Message.h"

namespace FIX44
{

  class UserResponse : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("BF"); }
  public:
    UserResponse() : Message(PackedType()) {}
    UserResponse(const FIX::Message& m) : Message(m) {}
    UserResponse(const Message& m) : Message(m) {}
    UserResponse(const UserResponse& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("BF"); }

    UserResponse(
      const FIX::UserRequestID& aUserRequestID,
      const FIX::Username& aUsername )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aUsername);
      Sequence::push_back_to(*this, aUserRequestID);
    }

    UserResponse(
      const FIX::UserRequestID::Pack& aUserRequestID,
      const FIX::Username::Pack& aUsername )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aUsername);
      Sequence::push_back_to(*this, aUserRequestID);
    }

    FIELD_SET(*this, FIX::UserRequestID);
    FIELD_SET(*this, FIX::Username);
    FIELD_SET(*this, FIX::UserStatus);
    FIELD_SET(*this, FIX::UserStatusText);
  };

}

#endif
