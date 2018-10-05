#ifndef FIX42_SETTLEMENTINSTRUCTIONS_H
#define FIX42_SETTLEMENTINSTRUCTIONS_H

#include "Message.h"

namespace FIX42
{

  class SettlementInstructions : public Message
  {
    static FIX::MsgType::Pack PackedType() { return FIX::MsgType::Pack("T"); }
  public:
    SettlementInstructions() : Message(PackedType()) {}
    SettlementInstructions(const FIX::Message& m) : Message(m) {}
    SettlementInstructions(const Message& m) : Message(m) {}
    SettlementInstructions(const SettlementInstructions& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("T"); }

    SettlementInstructions(
      const FIX::SettlInstID& aSettlInstID,
      const FIX::SettlInstTransType& aSettlInstTransType,
      const FIX::SettlInstRefID& aSettlInstRefID,
      const FIX::SettlInstMode& aSettlInstMode,
      const FIX::SettlInstSource& aSettlInstSource,
      const FIX::AllocAccount& aAllocAccount,
      const FIX::TransactTime& aTransactTime )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aAllocAccount);
      Sequence::push_back_to(*this, aSettlInstMode);
      Sequence::push_back_to(*this, aSettlInstID);
      Sequence::push_back_to(*this, aSettlInstTransType);
      Sequence::push_back_to(*this, aSettlInstSource);
      Sequence::push_back_to(*this, aSettlInstRefID);
    }

    SettlementInstructions(
      const FIX::SettlInstID::Pack& aSettlInstID,
      const FIX::SettlInstTransType::Pack& aSettlInstTransType,
      const FIX::SettlInstRefID::Pack& aSettlInstRefID,
      const FIX::SettlInstMode::Pack& aSettlInstMode,
      const FIX::SettlInstSource::Pack& aSettlInstSource,
      const FIX::AllocAccount::Pack& aAllocAccount,
      const FIX::TransactTime::Pack& aTransactTime )
    : Message(PackedType())
    {
      // must be in this order
      Sequence::push_back_to(*this, aTransactTime);
      Sequence::push_back_to(*this, aAllocAccount);
      Sequence::push_back_to(*this, aSettlInstMode);
      Sequence::push_back_to(*this, aSettlInstID);
      Sequence::push_back_to(*this, aSettlInstTransType);
      Sequence::push_back_to(*this, aSettlInstSource);
      Sequence::push_back_to(*this, aSettlInstRefID);
    }

    FIELD_SET(*this, FIX::SettlInstID);
    FIELD_SET(*this, FIX::SettlInstTransType);
    FIELD_SET(*this, FIX::SettlInstRefID);
    FIELD_SET(*this, FIX::SettlInstMode);
    FIELD_SET(*this, FIX::SettlInstSource);
    FIELD_SET(*this, FIX::AllocAccount);
    FIELD_SET(*this, FIX::SettlLocation);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::LastMkt);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::EffectiveTime);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::ClientID);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::StandInstDbType);
    FIELD_SET(*this, FIX::StandInstDbName);
    FIELD_SET(*this, FIX::StandInstDbID);
    FIELD_SET(*this, FIX::SettlDeliveryType);
    FIELD_SET(*this, FIX::SettlDepositoryCode);
    FIELD_SET(*this, FIX::SettlBrkrCode);
    FIELD_SET(*this, FIX::SettlInstCode);
    FIELD_SET(*this, FIX::SecuritySettlAgentName);
    FIELD_SET(*this, FIX::SecuritySettlAgentCode);
    FIELD_SET(*this, FIX::SecuritySettlAgentAcctNum);
    FIELD_SET(*this, FIX::SecuritySettlAgentAcctName);
    FIELD_SET(*this, FIX::SecuritySettlAgentContactName);
    FIELD_SET(*this, FIX::SecuritySettlAgentContactPhone);
    FIELD_SET(*this, FIX::CashSettlAgentName);
    FIELD_SET(*this, FIX::CashSettlAgentCode);
    FIELD_SET(*this, FIX::CashSettlAgentAcctNum);
    FIELD_SET(*this, FIX::CashSettlAgentAcctName);
    FIELD_SET(*this, FIX::CashSettlAgentContactName);
    FIELD_SET(*this, FIX::CashSettlAgentContactPhone);
  };

}

#endif
