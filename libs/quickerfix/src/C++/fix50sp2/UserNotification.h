#ifndef FIX50SP2_USERNOTIFICATION_H
#define FIX50SP2_USERNOTIFICATION_H

#include "Message.h"

namespace FIX50SP2
{

  class UserNotification : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("CB"); }
  public:
    UserNotification() : Message(PackedType()) {}
    UserNotification(const FIX::Message& m) : Message(m) {}
    UserNotification(const Message& m) : Message(m) {}
    UserNotification(const UserNotification& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("CB"); }

    UserNotification(
      const FIX::UserStatus& aUserStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aUserStatus);
    }

    UserNotification(
      const FIX::UserStatus::Pack& aUserStatus )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aUserStatus);
    }

    FIELD_SET(*this, FIX::NoUsernames);
    class NoUsernames: public FIX::Group
    {
    public:
    NoUsernames() : FIX::Group(809,553,FIX::message_order(553,0)) {}
      FIELD_SET(*this, FIX::Username);
    };
    FIELD_SET(*this, FIX::UserStatus);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::EncodedTextLen);
    FIELD_SET(*this, FIX::EncodedText);
  };

}

#endif
