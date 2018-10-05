#ifndef FIX40_EMAIL_H
#define FIX40_EMAIL_H

#include "Message.h"

namespace FIX40
{

  class Email : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("C"); }
  public:
    Email() : Message(PackedType()) {}
    Email(const FIX::Message& m) : Message(m) {}
    Email(const Message& m) : Message(m) {}
    Email(const Email& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("C"); }

    Email(
      const FIX::EmailType& aEmailType,
      const FIX::LinesOfText& aLinesOfText,
      const FIX::Text& aText )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aLinesOfText);
      Sequence::push_back_to(*this, aText);
      Sequence::push_back_to(*this, aEmailType);
    }

    Email(
      const FIX::EmailType::Pack& aEmailType,
      const FIX::LinesOfText::Pack& aLinesOfText,
      const FIX::Text::Pack& aText )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aLinesOfText);
      Sequence::push_back_to(*this, aText);
      Sequence::push_back_to(*this, aEmailType);
    }

    FIELD_SET(*this, FIX::EmailType);
    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::RelatdSym);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::LinesOfText);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
  };

}

#endif
