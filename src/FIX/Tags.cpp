
// This file has been automatically generated via fixGen/dic2Code.py
// On base of fixGen/fixDictionary1.0.txt fix dictionary
#include "Tags.hpp"
#include <cstring>
#include <cstdio>

namespace FIX
{
  writeableTagVal<String> Account::tagVal(const char* data)
  {
    return writeableTagVal<String>("1", 1, data);
  }

  writeableTagVal<String> AdvId::tagVal(const char* data)
  {
    return writeableTagVal<String>("2", 1, data);
  }

  writeableTagVal<String> AdvRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("3", 1, data);
  }

  writeableTagVal<Char> AdvSide::tagVal(char data)
  {
    return writeableTagVal<Char>("4", 1, data);
  }

  writeableTagVal<String> AdvTransType::tagVal(const char* data)
  {
    return writeableTagVal<String>("5", 1, data);
  }

  writeableTagVal<Float> AvgPx::tagVal(float data)
  {
    return writeableTagVal<Float>("6", 1, data);
  }

  writeableTagVal<Int> BeginSeqNo::tagVal(int data)
  {
    return writeableTagVal<Int>("7", 1, data);
  }

  writeableTagVal<String> BeginString::tagVal(const char* data)
  {
    return writeableTagVal<String>("8", 1, data);
  }

  writeableTagVal<Int> BodyLength::tagVal(int data)
  {
    return writeableTagVal<Int>("9", 1, data);
  }

  writeableTagVal<Int> CheckSum::tagVal(int data)
  {
    return writeableTagVal<Int>("10", 2, data);
  }

  writeableTagVal<String> ClOrdID::tagVal(const char* data)
  {
    return writeableTagVal<String>("11", 2, data);
  }

  writeableTagVal<Float> Commission::tagVal(float data)
  {
    return writeableTagVal<Float>("12", 2, data);
  }

  writeableTagVal<Char> CommType::tagVal(char data)
  {
    return writeableTagVal<Char>("13", 2, data);
  }

  writeableTagVal<Float> CumQty::tagVal(float data)
  {
    return writeableTagVal<Float>("14", 2, data);
  }

  writeableTagVal<String> Currency::tagVal(const char* data)
  {
    return writeableTagVal<String>("15", 2, data);
  }

  writeableTagVal<Int> EndSeqNo::tagVal(int data)
  {
    return writeableTagVal<Int>("16", 2, data);
  }

  writeableTagVal<String> ExecID::tagVal(const char* data)
  {
    return writeableTagVal<String>("17", 2, data);
  }

  writeableTagVal<MulValString> ExecInst::tagVal()
  {
  }

  writeableTagVal<String> ExecRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("19", 2, data);
  }

  writeableTagVal<Char> ExecTransType::tagVal(char data)
  {
    return writeableTagVal<Char>("20", 2, data);
  }

  writeableTagVal<Char> HandlInst::tagVal(char data)
  {
    return writeableTagVal<Char>("21", 2, data);
  }

  writeableTagVal<String> SecurityIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("22", 2, data);
  }

  writeableTagVal<String> IOIID::tagVal(const char* data)
  {
    return writeableTagVal<String>("23", 2, data);
  }

  writeableTagVal<Char> IOIOthSv::tagVal(char data)
  {
    return writeableTagVal<Char>("24", 2, data);
  }

  writeableTagVal<Char> IOIQltyInd::tagVal(char data)
  {
    return writeableTagVal<Char>("25", 2, data);
  }

  writeableTagVal<String> IOIRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("26", 2, data);
  }

  writeableTagVal<String> IOIQty::tagVal(const char* data)
  {
    return writeableTagVal<String>("27", 2, data);
  }

  writeableTagVal<Char> IOITransType::tagVal(char data)
  {
    return writeableTagVal<Char>("28", 2, data);
  }

  writeableTagVal<Char> LastCapacity::tagVal(char data)
  {
    return writeableTagVal<Char>("29", 2, data);
  }

  writeableTagVal<String> LastMkt::tagVal(const char* data)
  {
    return writeableTagVal<String>("30", 2, data);
  }

  writeableTagVal<Float> LastPx::tagVal(float data)
  {
    return writeableTagVal<Float>("31", 2, data);
  }

  writeableTagVal<Float> LastQty::tagVal(float data)
  {
    return writeableTagVal<Float>("32", 2, data);
  }

  writeableTagVal<Int> NoLinesOfText::tagVal(int data)
  {
    return writeableTagVal<Int>("33", 2, data);
  }

  writeableTagVal<Int> MsgSeqNum::tagVal(int data)
  {
    return writeableTagVal<Int>("34", 2, data);
  }

  writeableTagVal<String> MsgType::tagVal(const char* data)
  {
    return writeableTagVal<String>("35", 2, data);
  }

  writeableTagVal<Int> NewSeqNo::tagVal(int data)
  {
    return writeableTagVal<Int>("36", 2, data);
  }

  writeableTagVal<String> OrderID::tagVal(const char* data)
  {
    return writeableTagVal<String>("37", 2, data);
  }

  writeableTagVal<Float> OrderQty::tagVal(float data)
  {
    return writeableTagVal<Float>("38", 2, data);
  }

  writeableTagVal<Char> OrdStatus::tagVal(char data)
  {
    return writeableTagVal<Char>("39", 2, data);
  }

  writeableTagVal<Char> OrdType::tagVal(char data)
  {
    return writeableTagVal<Char>("40", 2, data);
  }

  writeableTagVal<String> OrigClOrdID::tagVal(const char* data)
  {
    return writeableTagVal<String>("41", 2, data);
  }

  writeableTagVal<DateAndTime> OrigTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("42", 2, data);
  }

  writeableTagVal<Boolean> PossDupFlag::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("43", 2, data);
  }

  writeableTagVal<Float> Price::tagVal(float data)
  {
    return writeableTagVal<Float>("44", 2, data);
  }

  writeableTagVal<Int> RefSeqNum::tagVal(int data)
  {
    return writeableTagVal<Int>("45", 2, data);
  }

  writeableTagVal<String> RelatdSy::tagVal(const char* data)
  {
    return writeableTagVal<String>("46", 2, data);
  }

  writeableTagVal<Char> Rule80A::tagVal(char data)
  {
    return writeableTagVal<Char>("47", 2, data);
  }

  writeableTagVal<String> SecurityID::tagVal(const char* data)
  {
    return writeableTagVal<String>("48", 2, data);
  }

  writeableTagVal<String> SenderCompID::tagVal(const char* data)
  {
    return writeableTagVal<String>("49", 2, data);
  }

  writeableTagVal<String> SenderSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("50", 2, data);
  }

  writeableTagVal<Date> SendingDat::tagVal(Date data)
  {
    return writeableTagVal<Date>("51", 2, data);
  }

  writeableTagVal<DateAndTime> SendingTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("52", 2, data);
  }

  writeableTagVal<Float> Quantity::tagVal(float data)
  {
    return writeableTagVal<Float>("53", 2, data);
  }

  writeableTagVal<Char> Side::tagVal(char data)
  {
    return writeableTagVal<Char>("54", 2, data);
  }

  writeableTagVal<String> Symbol::tagVal(const char* data)
  {
    return writeableTagVal<String>("55", 2, data);
  }

  writeableTagVal<String> TargetCompID::tagVal(const char* data)
  {
    return writeableTagVal<String>("56", 2, data);
  }

  writeableTagVal<String> TargetSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("57", 2, data);
  }

  writeableTagVal<String> Text::tagVal(const char* data)
  {
    return writeableTagVal<String>("58", 2, data);
  }

  writeableTagVal<Char> TimeInForce::tagVal(char data)
  {
    return writeableTagVal<Char>("59", 2, data);
  }

  writeableTagVal<DateAndTime> TransactTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("60", 2, data);
  }

  writeableTagVal<Char> Urgency::tagVal(char data)
  {
    return writeableTagVal<Char>("61", 2, data);
  }

  writeableTagVal<DateAndTime> ValidUntilTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("62", 2, data);
  }

  writeableTagVal<Char> SettlType::tagVal(char data)
  {
    return writeableTagVal<Char>("63", 2, data);
  }

  writeableTagVal<Date> SettlDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("64", 2, data);
  }

  writeableTagVal<String> SymbolSfx::tagVal(const char* data)
  {
    return writeableTagVal<String>("65", 2, data);
  }

  writeableTagVal<String> ListID::tagVal(const char* data)
  {
    return writeableTagVal<String>("66", 2, data);
  }

  writeableTagVal<Int> ListSeqNo::tagVal(int data)
  {
    return writeableTagVal<Int>("67", 2, data);
  }

  writeableTagVal<Int> TotNoOrders::tagVal(int data)
  {
    return writeableTagVal<Int>("68", 2, data);
  }

  writeableTagVal<String> ListExecInst::tagVal(const char* data)
  {
    return writeableTagVal<String>("69", 2, data);
  }

  writeableTagVal<String> AllocID::tagVal(const char* data)
  {
    return writeableTagVal<String>("70", 2, data);
  }

  writeableTagVal<Char> AllocTransType::tagVal(char data)
  {
    return writeableTagVal<Char>("71", 2, data);
  }

  writeableTagVal<String> RefAllocID::tagVal(const char* data)
  {
    return writeableTagVal<String>("72", 2, data);
  }

  writeableTagVal<Int> NoOrders::tagVal(int data)
  {
    return writeableTagVal<Int>("73", 2, data);
  }

  writeableTagVal<Int> AvgPxPrecision::tagVal(int data)
  {
    return writeableTagVal<Int>("74", 2, data);
  }

  writeableTagVal<Date> TradeDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("75", 2, data);
  }

  writeableTagVal<String> ExecBroker::tagVal(const char* data)
  {
    return writeableTagVal<String>("76", 2, data);
  }

  writeableTagVal<Char> PositionEffect::tagVal(char data)
  {
    return writeableTagVal<Char>("77", 2, data);
  }

  writeableTagVal<Int> NoAllocs::tagVal(int data)
  {
    return writeableTagVal<Int>("78", 2, data);
  }

  writeableTagVal<String> AllocAccount::tagVal(const char* data)
  {
    return writeableTagVal<String>("79", 2, data);
  }

  writeableTagVal<Float> AllocQty::tagVal(float data)
  {
    return writeableTagVal<Float>("80", 2, data);
  }

  writeableTagVal<Char> ProcessCode::tagVal(char data)
  {
    return writeableTagVal<Char>("81", 2, data);
  }

  writeableTagVal<Int> NoRpts::tagVal(int data)
  {
    return writeableTagVal<Int>("82", 2, data);
  }

  writeableTagVal<Int> RptSeq::tagVal(int data)
  {
    return writeableTagVal<Int>("83", 2, data);
  }

  writeableTagVal<Float> CxlQty::tagVal(float data)
  {
    return writeableTagVal<Float>("84", 2, data);
  }

  writeableTagVal<Int> NoDlvyInst::tagVal(int data)
  {
    return writeableTagVal<Int>("85", 2, data);
  }

  writeableTagVal<String> DlvyInst::tagVal(const char* data)
  {
    return writeableTagVal<String>("86", 2, data);
  }

  writeableTagVal<Int> AllocStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("87", 2, data);
  }

  writeableTagVal<Int> AllocRejCode::tagVal(int data)
  {
    return writeableTagVal<Int>("88", 2, data);
  }

  writeableTagVal<Data> Signature::tagVal(Data data)
  {
    return writeableTagVal<Data>("89", 2, data);
  }

  writeableTagVal<Int> SecureDataLen::tagVal(int data)
  {
    return writeableTagVal<Int>("90", 2, data);
  }

  writeableTagVal<Data> SecureData::tagVal(Data data)
  {
    return writeableTagVal<Data>("91", 2, data);
  }

  writeableTagVal<String> BrokerOfCredit::tagVal(const char* data)
  {
    return writeableTagVal<String>("92", 2, data);
  }

  writeableTagVal<Int> SignatureLength::tagVal(int data)
  {
    return writeableTagVal<Int>("93", 2, data);
  }

  writeableTagVal<Char> EmailType::tagVal(char data)
  {
    return writeableTagVal<Char>("94", 2, data);
  }

  writeableTagVal<Int> RawDataLength::tagVal(int data)
  {
    return writeableTagVal<Int>("95", 2, data);
  }

  writeableTagVal<Data> RawData::tagVal(Data data)
  {
    return writeableTagVal<Data>("96", 2, data);
  }

  writeableTagVal<Boolean> PossResend::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("97", 2, data);
  }

  writeableTagVal<Int> EncryptMethod::tagVal(int data)
  {
    return writeableTagVal<Int>("98", 2, data);
  }

  writeableTagVal<Float> StopPx::tagVal(float data)
  {
    return writeableTagVal<Float>("99", 2, data);
  }

  writeableTagVal<String> ExDestination::tagVal(const char* data)
  {
    return writeableTagVal<String>("100", 3, data);
  }

  writeableTagVal<Int> CxlRejReason::tagVal(int data)
  {
    return writeableTagVal<Int>("102", 3, data);
  }

  writeableTagVal<Int> OrdRejReason::tagVal(int data)
  {
    return writeableTagVal<Int>("103", 3, data);
  }

  writeableTagVal<Char> IOIQualifier::tagVal(char data)
  {
    return writeableTagVal<Char>("104", 3, data);
  }

  writeableTagVal<String> WaveNo::tagVal(const char* data)
  {
    return writeableTagVal<String>("105", 3, data);
  }

  writeableTagVal<String> Issuer::tagVal(const char* data)
  {
    return writeableTagVal<String>("106", 3, data);
  }

  writeableTagVal<String> SecurityDesc::tagVal(const char* data)
  {
    return writeableTagVal<String>("107", 3, data);
  }

  writeableTagVal<Int> HeartBtInt::tagVal(int data)
  {
    return writeableTagVal<Int>("108", 3, data);
  }

  writeableTagVal<String> ClientID::tagVal(const char* data)
  {
    return writeableTagVal<String>("109", 3, data);
  }

  writeableTagVal<Float> MinQty::tagVal(float data)
  {
    return writeableTagVal<Float>("110", 3, data);
  }

  writeableTagVal<Float> MaxFloor::tagVal(float data)
  {
    return writeableTagVal<Float>("111", 3, data);
  }

  writeableTagVal<String> TestReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("112", 3, data);
  }

  writeableTagVal<Boolean> ReportToExch::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("113", 3, data);
  }

  writeableTagVal<Boolean> LocateReqd::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("114", 3, data);
  }

  writeableTagVal<String> OnBehalfOfCompID::tagVal(const char* data)
  {
    return writeableTagVal<String>("115", 3, data);
  }

  writeableTagVal<String> OnBehalfOfSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("116", 3, data);
  }

  writeableTagVal<String> QuoteID::tagVal(const char* data)
  {
    return writeableTagVal<String>("117", 3, data);
  }

  writeableTagVal<Float> NetMoney::tagVal(float data)
  {
    return writeableTagVal<Float>("118", 3, data);
  }

  writeableTagVal<Float> SettlCurrAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("119", 3, data);
  }

  writeableTagVal<String> SettlCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("120", 3, data);
  }

  writeableTagVal<Boolean> ForexReq::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("121", 3, data);
  }

  writeableTagVal<DateAndTime> OrigSendingTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("122", 3, data);
  }

  writeableTagVal<Boolean> GapFillFlag::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("123", 3, data);
  }

  writeableTagVal<Int> NoExecs::tagVal(int data)
  {
    return writeableTagVal<Int>("124", 3, data);
  }

  writeableTagVal<Char> CxlTyp::tagVal(char data)
  {
    return writeableTagVal<Char>("125", 3, data);
  }

  writeableTagVal<DateAndTime> ExpireTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("126", 3, data);
  }

  writeableTagVal<Char> DKReason::tagVal(char data)
  {
    return writeableTagVal<Char>("127", 3, data);
  }

  writeableTagVal<String> DeliverToCompID::tagVal(const char* data)
  {
    return writeableTagVal<String>("128", 3, data);
  }

  writeableTagVal<String> DeliverToSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("129", 3, data);
  }

  writeableTagVal<Boolean> IOINaturalFlag::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("130", 3, data);
  }

  writeableTagVal<String> QuoteReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("131", 3, data);
  }

  writeableTagVal<Float> BidPx::tagVal(float data)
  {
    return writeableTagVal<Float>("132", 3, data);
  }

  writeableTagVal<Float> OfferPx::tagVal(float data)
  {
    return writeableTagVal<Float>("133", 3, data);
  }

  writeableTagVal<Float> BidSize::tagVal(float data)
  {
    return writeableTagVal<Float>("134", 3, data);
  }

  writeableTagVal<Float> OfferSize::tagVal(float data)
  {
    return writeableTagVal<Float>("135", 3, data);
  }

  writeableTagVal<Int> NoMiscFees::tagVal(int data)
  {
    return writeableTagVal<Int>("136", 3, data);
  }

  writeableTagVal<Float> MiscFeeAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("137", 3, data);
  }

  writeableTagVal<String> MiscFeeCurr::tagVal(const char* data)
  {
    return writeableTagVal<String>("138", 3, data);
  }

  writeableTagVal<Char> MiscFeeType::tagVal(char data)
  {
    return writeableTagVal<Char>("139", 3, data);
  }

  writeableTagVal<Float> PrevClosePx::tagVal(float data)
  {
    return writeableTagVal<Float>("140", 3, data);
  }

  writeableTagVal<Boolean> ResetSeqNumFlag::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("141", 3, data);
  }

  writeableTagVal<String> SenderLocationID::tagVal(const char* data)
  {
    return writeableTagVal<String>("142", 3, data);
  }

  writeableTagVal<String> TargetLocationID::tagVal(const char* data)
  {
    return writeableTagVal<String>("143", 3, data);
  }

  writeableTagVal<String> OnBehalfOfLocationID::tagVal(const char* data)
  {
    return writeableTagVal<String>("144", 3, data);
  }

  writeableTagVal<String> DeliverToLocationID::tagVal(const char* data)
  {
    return writeableTagVal<String>("145", 3, data);
  }

  writeableTagVal<Int> NoRelatedSym::tagVal(int data)
  {
    return writeableTagVal<Int>("146", 3, data);
  }

  writeableTagVal<String> Subject::tagVal(const char* data)
  {
    return writeableTagVal<String>("147", 3, data);
  }

  writeableTagVal<String> Headline::tagVal(const char* data)
  {
    return writeableTagVal<String>("148", 3, data);
  }

  writeableTagVal<String> URLLink::tagVal(const char* data)
  {
    return writeableTagVal<String>("149", 3, data);
  }

  writeableTagVal<Char> ExecType::tagVal(char data)
  {
    return writeableTagVal<Char>("150", 3, data);
  }

  writeableTagVal<Float> LeavesQty::tagVal(float data)
  {
    return writeableTagVal<Float>("151", 3, data);
  }

  writeableTagVal<Float> CashOrderQty::tagVal(float data)
  {
    return writeableTagVal<Float>("152", 3, data);
  }

  writeableTagVal<Float> AllocAvgPx::tagVal(float data)
  {
    return writeableTagVal<Float>("153", 3, data);
  }

  writeableTagVal<Float> AllocNetMoney::tagVal(float data)
  {
    return writeableTagVal<Float>("154", 3, data);
  }

  writeableTagVal<Float> SettlCurrFxRate::tagVal(float data)
  {
    return writeableTagVal<Float>("155", 3, data);
  }

  writeableTagVal<Char> SettlCurrFxRateCalc::tagVal(char data)
  {
    return writeableTagVal<Char>("156", 3, data);
  }

  writeableTagVal<Int> NumDaysInterest::tagVal(int data)
  {
    return writeableTagVal<Int>("157", 3, data);
  }

  writeableTagVal<Float> AccruedInterestRate::tagVal(float data)
  {
    return writeableTagVal<Float>("158", 3, data);
  }

  writeableTagVal<Float> AccruedInterestAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("159", 3, data);
  }

  writeableTagVal<Char> SettlInstMode::tagVal(char data)
  {
    return writeableTagVal<Char>("160", 3, data);
  }

  writeableTagVal<String> AllocText::tagVal(const char* data)
  {
    return writeableTagVal<String>("161", 3, data);
  }

  writeableTagVal<String> SettlInstID::tagVal(const char* data)
  {
    return writeableTagVal<String>("162", 3, data);
  }

  writeableTagVal<Char> SettlInstTransType::tagVal(char data)
  {
    return writeableTagVal<Char>("163", 3, data);
  }

  writeableTagVal<String> EmailThreadID::tagVal(const char* data)
  {
    return writeableTagVal<String>("164", 3, data);
  }

  writeableTagVal<Char> SettlInstSource::tagVal(char data)
  {
    return writeableTagVal<Char>("165", 3, data);
  }

  writeableTagVal<String> SettlLocation::tagVal(const char* data)
  {
    return writeableTagVal<String>("166", 3, data);
  }

  writeableTagVal<String> SecurityType::tagVal(const char* data)
  {
    return writeableTagVal<String>("167", 3, data);
  }

  writeableTagVal<DateAndTime> EffectiveTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("168", 3, data);
  }

  writeableTagVal<Int> StandInstDbType::tagVal(int data)
  {
    return writeableTagVal<Int>("169", 3, data);
  }

  writeableTagVal<String> StandInstDbName::tagVal(const char* data)
  {
    return writeableTagVal<String>("170", 3, data);
  }

  writeableTagVal<String> StandInstDbID::tagVal(const char* data)
  {
    return writeableTagVal<String>("171", 3, data);
  }

  writeableTagVal<Int> SettlDeliveryType::tagVal(int data)
  {
    return writeableTagVal<Int>("172", 3, data);
  }

  writeableTagVal<String> SettlDepositoryCode::tagVal(const char* data)
  {
    return writeableTagVal<String>("173", 3, data);
  }

  writeableTagVal<String> SettlBrkrCode::tagVal(const char* data)
  {
    return writeableTagVal<String>("174", 3, data);
  }

  writeableTagVal<String> SettlInstCode::tagVal(const char* data)
  {
    return writeableTagVal<String>("175", 3, data);
  }

  writeableTagVal<String> SecuritySettlAgentName::tagVal(const char* data)
  {
    return writeableTagVal<String>("176", 3, data);
  }

  writeableTagVal<String> SecuritySettlAgentCode::tagVal(const char* data)
  {
    return writeableTagVal<String>("177", 3, data);
  }

  writeableTagVal<String> SecuritySettlAgentAcctNum::tagVal(const char* data)
  {
    return writeableTagVal<String>("178", 3, data);
  }

  writeableTagVal<String> SecuritySettlAgentAcctName::tagVal(const char* data)
  {
    return writeableTagVal<String>("179", 3, data);
  }

  writeableTagVal<String> SecuritySettlAgentContactName::tagVal(const char* data)
  {
    return writeableTagVal<String>("180", 3, data);
  }

  writeableTagVal<String> SecuritySettlAgentContactPhone::tagVal(const char* data)
  {
    return writeableTagVal<String>("181", 3, data);
  }

  writeableTagVal<String> CashSettlAgentName::tagVal(const char* data)
  {
    return writeableTagVal<String>("182", 3, data);
  }

  writeableTagVal<String> CashSettlAgentCode::tagVal(const char* data)
  {
    return writeableTagVal<String>("183", 3, data);
  }

  writeableTagVal<String> CashSettlAgentAcctNum::tagVal(const char* data)
  {
    return writeableTagVal<String>("184", 3, data);
  }

  writeableTagVal<String> CashSettlAgentAcctName::tagVal(const char* data)
  {
    return writeableTagVal<String>("185", 3, data);
  }

  writeableTagVal<String> CashSettlAgentContactName::tagVal(const char* data)
  {
    return writeableTagVal<String>("186", 3, data);
  }

  writeableTagVal<String> CashSettlAgentContactPhone::tagVal(const char* data)
  {
    return writeableTagVal<String>("187", 3, data);
  }

  writeableTagVal<Float> BidSpotRate::tagVal(float data)
  {
    return writeableTagVal<Float>("188", 3, data);
  }

  writeableTagVal<Float> BidForwardPoints::tagVal(float data)
  {
    return writeableTagVal<Float>("189", 3, data);
  }

  writeableTagVal<Float> OfferSpotRate::tagVal(float data)
  {
    return writeableTagVal<Float>("190", 3, data);
  }

  writeableTagVal<Float> OfferForwardPoints::tagVal(float data)
  {
    return writeableTagVal<Float>("191", 3, data);
  }

  writeableTagVal<Float> OrderQty2::tagVal(float data)
  {
    return writeableTagVal<Float>("192", 3, data);
  }

  writeableTagVal<Date> SettlDate2::tagVal(Date data)
  {
    return writeableTagVal<Date>("193", 3, data);
  }

  writeableTagVal<Float> LastSpotRate::tagVal(float data)
  {
    return writeableTagVal<Float>("194", 3, data);
  }

  writeableTagVal<Float> LastForwardPoints::tagVal(float data)
  {
    return writeableTagVal<Float>("195", 3, data);
  }

  writeableTagVal<String> AllocLinkID::tagVal(const char* data)
  {
    return writeableTagVal<String>("196", 3, data);
  }

  writeableTagVal<Int> AllocLinkType::tagVal(int data)
  {
    return writeableTagVal<Int>("197", 3, data);
  }

  writeableTagVal<String> SecondaryOrderID::tagVal(const char* data)
  {
    return writeableTagVal<String>("198", 3, data);
  }

  writeableTagVal<Int> NoIOIQualifiers::tagVal(int data)
  {
    return writeableTagVal<Int>("199", 3, data);
  }

  writeableTagVal<MonthYear> MaturityMonthYear::tagVal(MonthYear data)
  {
    return writeableTagVal<MonthYear>("200", 3, data);
  }

  writeableTagVal<Int> PutOrCall::tagVal(int data)
  {
    return writeableTagVal<Int>("201", 3, data);
  }

  writeableTagVal<Float> StrikePrice::tagVal(float data)
  {
    return writeableTagVal<Float>("202", 3, data);
  }

  writeableTagVal<Int> CoveredOrUncovered::tagVal(int data)
  {
    return writeableTagVal<Int>("203", 3, data);
  }

  writeableTagVal<Int> CustomerOrFirm::tagVal(int data)
  {
    return writeableTagVal<Int>("204", 3, data);
  }

  writeableTagVal<Int> MaturityDay::tagVal(int data)
  {
    return writeableTagVal<Int>("205", 3, data);
  }

  writeableTagVal<Char> OptAttribute::tagVal(char data)
  {
    return writeableTagVal<Char>("206", 3, data);
  }

  writeableTagVal<String> SecurityExchange::tagVal(const char* data)
  {
    return writeableTagVal<String>("207", 3, data);
  }

  writeableTagVal<Boolean> NotifyBrokerOfCredit::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("208", 3, data);
  }

  writeableTagVal<Int> AllocHandlInst::tagVal(int data)
  {
    return writeableTagVal<Int>("209", 3, data);
  }

  writeableTagVal<Float> MaxShow::tagVal(float data)
  {
    return writeableTagVal<Float>("210", 3, data);
  }

  writeableTagVal<Float> PegOffsetValue::tagVal(float data)
  {
    return writeableTagVal<Float>("211", 3, data);
  }

  writeableTagVal<Int> XmlDataLen::tagVal(int data)
  {
    return writeableTagVal<Int>("212", 3, data);
  }

  writeableTagVal<Data> XmlData::tagVal(Data data)
  {
    return writeableTagVal<Data>("213", 3, data);
  }

  writeableTagVal<String> SettlInstRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("214", 3, data);
  }

  writeableTagVal<Int> NoRoutingIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("215", 3, data);
  }

  writeableTagVal<Int> RoutingType::tagVal(int data)
  {
    return writeableTagVal<Int>("216", 3, data);
  }

  writeableTagVal<String> RoutingID::tagVal(const char* data)
  {
    return writeableTagVal<String>("217", 3, data);
  }

  writeableTagVal<Float> Spread::tagVal(float data)
  {
    return writeableTagVal<Float>("218", 3, data);
  }

  writeableTagVal<Char> Benchmark::tagVal(char data)
  {
    return writeableTagVal<Char>("219", 3, data);
  }

  writeableTagVal<String> BenchmarkCurveCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("220", 3, data);
  }

  writeableTagVal<String> BenchmarkCurveName::tagVal(const char* data)
  {
    return writeableTagVal<String>("221", 3, data);
  }

  writeableTagVal<String> BenchmarkCurvePoint::tagVal(const char* data)
  {
    return writeableTagVal<String>("222", 3, data);
  }

  writeableTagVal<Float> CouponRate::tagVal(float data)
  {
    return writeableTagVal<Float>("223", 3, data);
  }

  writeableTagVal<Date> CouponPaymentDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("224", 3, data);
  }

  writeableTagVal<Date> IssueDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("225", 3, data);
  }

  writeableTagVal<Int> RepurchaseTerm::tagVal(int data)
  {
    return writeableTagVal<Int>("226", 3, data);
  }

  writeableTagVal<Float> RepurchaseRate::tagVal(float data)
  {
    return writeableTagVal<Float>("227", 3, data);
  }

  writeableTagVal<Float> Factor::tagVal(float data)
  {
    return writeableTagVal<Float>("228", 3, data);
  }

  writeableTagVal<Date> TradeOriginationDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("229", 3, data);
  }

  writeableTagVal<Date> ExDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("230", 3, data);
  }

  writeableTagVal<Float> ContractMultiplier::tagVal(float data)
  {
    return writeableTagVal<Float>("231", 3, data);
  }

  writeableTagVal<Int> NoStipulations::tagVal(int data)
  {
    return writeableTagVal<Int>("232", 3, data);
  }

  writeableTagVal<String> StipulationType::tagVal(const char* data)
  {
    return writeableTagVal<String>("233", 3, data);
  }

  writeableTagVal<String> StipulationValue::tagVal(const char* data)
  {
    return writeableTagVal<String>("234", 3, data);
  }

  writeableTagVal<String> YieldType::tagVal(const char* data)
  {
    return writeableTagVal<String>("235", 3, data);
  }

  writeableTagVal<Float> Yield::tagVal(float data)
  {
    return writeableTagVal<Float>("236", 3, data);
  }

  writeableTagVal<Float> TotalTakedown::tagVal(float data)
  {
    return writeableTagVal<Float>("237", 3, data);
  }

  writeableTagVal<Float> Concession::tagVal(float data)
  {
    return writeableTagVal<Float>("238", 3, data);
  }

  writeableTagVal<Int> RepoCollateralSecurityType::tagVal(int data)
  {
    return writeableTagVal<Int>("239", 3, data);
  }

  writeableTagVal<Date> RedemptionDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("240", 3, data);
  }

  writeableTagVal<Date> UnderlyingCouponPaymentDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("241", 3, data);
  }

  writeableTagVal<Date> UnderlyingIssueDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("242", 3, data);
  }

  writeableTagVal<Int> UnderlyingRepoCollateralSecurityType::tagVal(int data)
  {
    return writeableTagVal<Int>("243", 3, data);
  }

  writeableTagVal<Int> UnderlyingRepurchaseTerm::tagVal(int data)
  {
    return writeableTagVal<Int>("244", 3, data);
  }

  writeableTagVal<Float> UnderlyingRepurchaseRate::tagVal(float data)
  {
    return writeableTagVal<Float>("245", 3, data);
  }

  writeableTagVal<Float> UnderlyingFactor::tagVal(float data)
  {
    return writeableTagVal<Float>("246", 3, data);
  }

  writeableTagVal<Date> UnderlyingRedemptionDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("247", 3, data);
  }

  writeableTagVal<Date> LegCouponPaymentDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("248", 3, data);
  }

  writeableTagVal<Date> LegIssueDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("249", 3, data);
  }

  writeableTagVal<Int> LegRepoCollateralSecurityType::tagVal(int data)
  {
    return writeableTagVal<Int>("250", 3, data);
  }

  writeableTagVal<Int> LegRepurchaseTerm::tagVal(int data)
  {
    return writeableTagVal<Int>("251", 3, data);
  }

  writeableTagVal<Float> LegRepurchaseRate::tagVal(float data)
  {
    return writeableTagVal<Float>("252", 3, data);
  }

  writeableTagVal<Float> LegFactor::tagVal(float data)
  {
    return writeableTagVal<Float>("253", 3, data);
  }

  writeableTagVal<Date> LegRedemptionDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("254", 3, data);
  }

  writeableTagVal<String> CreditRating::tagVal(const char* data)
  {
    return writeableTagVal<String>("255", 3, data);
  }

  writeableTagVal<String> UnderlyingCreditRating::tagVal(const char* data)
  {
    return writeableTagVal<String>("256", 3, data);
  }

  writeableTagVal<String> LegCreditRating::tagVal(const char* data)
  {
    return writeableTagVal<String>("257", 3, data);
  }

  writeableTagVal<Boolean> TradedFlatSwitch::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("258", 3, data);
  }

  writeableTagVal<Date> BasisFeatureDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("259", 3, data);
  }

  writeableTagVal<Float> BasisFeaturePrice::tagVal(float data)
  {
    return writeableTagVal<Float>("260", 3, data);
  }

  writeableTagVal<String> MDReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("262", 3, data);
  }

  writeableTagVal<Char> SubscriptionRequestType::tagVal(char data)
  {
    return writeableTagVal<Char>("263", 3, data);
  }

  writeableTagVal<Int> MarketDepth::tagVal(int data)
  {
    return writeableTagVal<Int>("264", 3, data);
  }

  writeableTagVal<Int> MDUpdateType::tagVal(int data)
  {
    return writeableTagVal<Int>("265", 3, data);
  }

  writeableTagVal<Boolean> AggregatedBook::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("266", 3, data);
  }

  writeableTagVal<Int> NoMDEntryTypes::tagVal(int data)
  {
    return writeableTagVal<Int>("267", 3, data);
  }

  writeableTagVal<Int> NoMDEntries::tagVal(int data)
  {
    return writeableTagVal<Int>("268", 3, data);
  }

  writeableTagVal<Char> MDEntryType::tagVal(char data)
  {
    return writeableTagVal<Char>("269", 3, data);
  }

  writeableTagVal<Float> MDEntryPx::tagVal(float data)
  {
    return writeableTagVal<Float>("270", 3, data);
  }

  writeableTagVal<Float> MDEntrySize::tagVal(float data)
  {
    return writeableTagVal<Float>("271", 3, data);
  }

  writeableTagVal<Date> MDEntryDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("272", 3, data);
  }

  writeableTagVal<Time> MDEntryTime::tagVal(Time data)
  {
    return writeableTagVal<Time>("273", 3, data);
  }

  writeableTagVal<Char> TickDirection::tagVal(char data)
  {
    return writeableTagVal<Char>("274", 3, data);
  }

  writeableTagVal<String> MDMkt::tagVal(const char* data)
  {
    return writeableTagVal<String>("275", 3, data);
  }

  writeableTagVal<MulValString> QuoteCondition::tagVal()
  {
  }

  writeableTagVal<MulValString> TradeCondition::tagVal()
  {
  }

  writeableTagVal<String> MDEntryID::tagVal(const char* data)
  {
    return writeableTagVal<String>("278", 3, data);
  }

  writeableTagVal<Char> MDUpdateAction::tagVal(char data)
  {
    return writeableTagVal<Char>("279", 3, data);
  }

  writeableTagVal<String> MDEntryRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("280", 3, data);
  }

  writeableTagVal<Char> MDReqRejReason::tagVal(char data)
  {
    return writeableTagVal<Char>("281", 3, data);
  }

  writeableTagVal<String> MDEntryOriginator::tagVal(const char* data)
  {
    return writeableTagVal<String>("282", 3, data);
  }

  writeableTagVal<String> LocationID::tagVal(const char* data)
  {
    return writeableTagVal<String>("283", 3, data);
  }

  writeableTagVal<String> DeskID::tagVal(const char* data)
  {
    return writeableTagVal<String>("284", 3, data);
  }

  writeableTagVal<Char> DeleteReason::tagVal(char data)
  {
    return writeableTagVal<Char>("285", 3, data);
  }

  writeableTagVal<MulValString> OpenCloseSettlFlag::tagVal()
  {
  }

  writeableTagVal<Int> SellerDays::tagVal(int data)
  {
    return writeableTagVal<Int>("287", 3, data);
  }

  writeableTagVal<String> MDEntryBuyer::tagVal(const char* data)
  {
    return writeableTagVal<String>("288", 3, data);
  }

  writeableTagVal<String> MDEntrySeller::tagVal(const char* data)
  {
    return writeableTagVal<String>("289", 3, data);
  }

  writeableTagVal<Int> MDEntryPositionNo::tagVal(int data)
  {
    return writeableTagVal<Int>("290", 3, data);
  }

  writeableTagVal<MulValString> FinancialStatus::tagVal()
  {
  }

  writeableTagVal<MulValString> CorporateAction::tagVal()
  {
  }

  writeableTagVal<Float> DefBidSize::tagVal(float data)
  {
    return writeableTagVal<Float>("293", 3, data);
  }

  writeableTagVal<Float> DefOfferSize::tagVal(float data)
  {
    return writeableTagVal<Float>("294", 3, data);
  }

  writeableTagVal<Int> NoQuoteEntries::tagVal(int data)
  {
    return writeableTagVal<Int>("295", 3, data);
  }

  writeableTagVal<Int> NoQuoteSets::tagVal(int data)
  {
    return writeableTagVal<Int>("296", 3, data);
  }

  writeableTagVal<Int> QuoteStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("297", 3, data);
  }

  writeableTagVal<Int> QuoteCancelType::tagVal(int data)
  {
    return writeableTagVal<Int>("298", 3, data);
  }

  writeableTagVal<String> QuoteEntryID::tagVal(const char* data)
  {
    return writeableTagVal<String>("299", 3, data);
  }

  writeableTagVal<Int> QuoteRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("300", 3, data);
  }

  writeableTagVal<Int> QuoteResponseLevel::tagVal(int data)
  {
    return writeableTagVal<Int>("301", 3, data);
  }

  writeableTagVal<String> QuoteSetID::tagVal(const char* data)
  {
    return writeableTagVal<String>("302", 3, data);
  }

  writeableTagVal<Int> QuoteRequestType::tagVal(int data)
  {
    return writeableTagVal<Int>("303", 3, data);
  }

  writeableTagVal<Int> TotNoQuoteEntries::tagVal(int data)
  {
    return writeableTagVal<Int>("304", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("305", 3, data);
  }

  writeableTagVal<String> UnderlyingIssuer::tagVal(const char* data)
  {
    return writeableTagVal<String>("306", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityDesc::tagVal(const char* data)
  {
    return writeableTagVal<String>("307", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityExchange::tagVal(const char* data)
  {
    return writeableTagVal<String>("308", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityID::tagVal(const char* data)
  {
    return writeableTagVal<String>("309", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityType::tagVal(const char* data)
  {
    return writeableTagVal<String>("310", 3, data);
  }

  writeableTagVal<String> UnderlyingSymbol::tagVal(const char* data)
  {
    return writeableTagVal<String>("311", 3, data);
  }

  writeableTagVal<String> UnderlyingSymbolSfx::tagVal(const char* data)
  {
    return writeableTagVal<String>("312", 3, data);
  }

  writeableTagVal<MonthYear> UnderlyingMaturityMonthYear::tagVal(MonthYear data)
  {
    return writeableTagVal<MonthYear>("313", 3, data);
  }

  writeableTagVal<Int> UnderlyingMaturityDay::tagVal(int data)
  {
    return writeableTagVal<Int>("314", 3, data);
  }

  writeableTagVal<Int> UnderlyingPutOrCall::tagVal(int data)
  {
    return writeableTagVal<Int>("315", 3, data);
  }

  writeableTagVal<Float> UnderlyingStrikePrice::tagVal(float data)
  {
    return writeableTagVal<Float>("316", 3, data);
  }

  writeableTagVal<Char> UnderlyingOptAttribute::tagVal(char data)
  {
    return writeableTagVal<Char>("317", 3, data);
  }

  writeableTagVal<String> UnderlyingCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("318", 3, data);
  }

  writeableTagVal<Float> RatioQty::tagVal(float data)
  {
    return writeableTagVal<Float>("319", 3, data);
  }

  writeableTagVal<String> SecurityReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("320", 3, data);
  }

  writeableTagVal<Int> SecurityRequestType::tagVal(int data)
  {
    return writeableTagVal<Int>("321", 3, data);
  }

  writeableTagVal<String> SecurityResponseID::tagVal(const char* data)
  {
    return writeableTagVal<String>("322", 3, data);
  }

  writeableTagVal<Int> SecurityResponseType::tagVal(int data)
  {
    return writeableTagVal<Int>("323", 3, data);
  }

  writeableTagVal<String> SecurityStatusReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("324", 3, data);
  }

  writeableTagVal<Boolean> UnsolicitedIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("325", 3, data);
  }

  writeableTagVal<Int> SecurityTradingStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("326", 3, data);
  }

  writeableTagVal<Char> HaltReason::tagVal(char data)
  {
    return writeableTagVal<Char>("327", 3, data);
  }

  writeableTagVal<Boolean> InViewOfCommon::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("328", 3, data);
  }

  writeableTagVal<Boolean> DueToRelated::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("329", 3, data);
  }

  writeableTagVal<Float> BuyVolume::tagVal(float data)
  {
    return writeableTagVal<Float>("330", 3, data);
  }

  writeableTagVal<Float> SellVolume::tagVal(float data)
  {
    return writeableTagVal<Float>("331", 3, data);
  }

  writeableTagVal<Float> HighPx::tagVal(float data)
  {
    return writeableTagVal<Float>("332", 3, data);
  }

  writeableTagVal<Float> LowPx::tagVal(float data)
  {
    return writeableTagVal<Float>("333", 3, data);
  }

  writeableTagVal<Int> Adjustment::tagVal(int data)
  {
    return writeableTagVal<Int>("334", 3, data);
  }

  writeableTagVal<String> TradSesReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("335", 3, data);
  }

  writeableTagVal<String> TradingSessionID::tagVal(const char* data)
  {
    return writeableTagVal<String>("336", 3, data);
  }

  writeableTagVal<String> ContraTrader::tagVal(const char* data)
  {
    return writeableTagVal<String>("337", 3, data);
  }

  writeableTagVal<Int> TradSesMethod::tagVal(int data)
  {
    return writeableTagVal<Int>("338", 3, data);
  }

  writeableTagVal<Int> TradSesMode::tagVal(int data)
  {
    return writeableTagVal<Int>("339", 3, data);
  }

  writeableTagVal<Int> TradSesStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("340", 3, data);
  }

  writeableTagVal<DateAndTime> TradSesStartTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("341", 3, data);
  }

  writeableTagVal<DateAndTime> TradSesOpenTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("342", 3, data);
  }

  writeableTagVal<DateAndTime> TradSesPreCloseTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("343", 3, data);
  }

  writeableTagVal<DateAndTime> TradSesCloseTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("344", 3, data);
  }

  writeableTagVal<DateAndTime> TradSesEndTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("345", 3, data);
  }

  writeableTagVal<Int> NumberOfOrders::tagVal(int data)
  {
    return writeableTagVal<Int>("346", 3, data);
  }

  writeableTagVal<String> MessageEncoding::tagVal(const char* data)
  {
    return writeableTagVal<String>("347", 3, data);
  }

  writeableTagVal<Int> EncodedIssuerLen::tagVal(int data)
  {
    return writeableTagVal<Int>("348", 3, data);
  }

  writeableTagVal<Data> EncodedIssuer::tagVal(Data data)
  {
    return writeableTagVal<Data>("349", 3, data);
  }

  writeableTagVal<Int> EncodedSecurityDescLen::tagVal(int data)
  {
    return writeableTagVal<Int>("350", 3, data);
  }

  writeableTagVal<Data> EncodedSecurityDesc::tagVal(Data data)
  {
    return writeableTagVal<Data>("351", 3, data);
  }

  writeableTagVal<Int> EncodedListExecInstLen::tagVal(int data)
  {
    return writeableTagVal<Int>("352", 3, data);
  }

  writeableTagVal<Data> EncodedListExecInst::tagVal(Data data)
  {
    return writeableTagVal<Data>("353", 3, data);
  }

  writeableTagVal<Int> EncodedTextLen::tagVal(int data)
  {
    return writeableTagVal<Int>("354", 3, data);
  }

  writeableTagVal<Data> EncodedText::tagVal(Data data)
  {
    return writeableTagVal<Data>("355", 3, data);
  }

  writeableTagVal<Int> EncodedSubjectLen::tagVal(int data)
  {
    return writeableTagVal<Int>("356", 3, data);
  }

  writeableTagVal<Data> EncodedSubject::tagVal(Data data)
  {
    return writeableTagVal<Data>("357", 3, data);
  }

  writeableTagVal<Int> EncodedHeadlineLen::tagVal(int data)
  {
    return writeableTagVal<Int>("358", 3, data);
  }

  writeableTagVal<Data> EncodedHeadline::tagVal(Data data)
  {
    return writeableTagVal<Data>("359", 3, data);
  }

  writeableTagVal<Int> EncodedAllocTextLen::tagVal(int data)
  {
    return writeableTagVal<Int>("360", 3, data);
  }

  writeableTagVal<Data> EncodedAllocText::tagVal(Data data)
  {
    return writeableTagVal<Data>("361", 3, data);
  }

  writeableTagVal<Int> EncodedUnderlyingIssuerLen::tagVal(int data)
  {
    return writeableTagVal<Int>("362", 3, data);
  }

  writeableTagVal<Data> EncodedUnderlyingIssuer::tagVal(Data data)
  {
    return writeableTagVal<Data>("363", 3, data);
  }

  writeableTagVal<Int> EncodedUnderlyingSecurityDescLen::tagVal(int data)
  {
    return writeableTagVal<Int>("364", 3, data);
  }

  writeableTagVal<Data> EncodedUnderlyingSecurityDesc::tagVal(Data data)
  {
    return writeableTagVal<Data>("365", 3, data);
  }

  writeableTagVal<Float> AllocPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("366", 3, data);
  }

  writeableTagVal<DateAndTime> QuoteSetValidUntilTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("367", 3, data);
  }

  writeableTagVal<Int> QuoteEntryRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("368", 3, data);
  }

  writeableTagVal<Int> LastMsgSeqNumProcessed::tagVal(int data)
  {
    return writeableTagVal<Int>("369", 3, data);
  }

  writeableTagVal<DateAndTime> OnBehalfOfSendingTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("370", 3, data);
  }

  writeableTagVal<Int> RefTagID::tagVal(int data)
  {
    return writeableTagVal<Int>("371", 3, data);
  }

  writeableTagVal<String> RefMsgType::tagVal(const char* data)
  {
    return writeableTagVal<String>("372", 3, data);
  }

  writeableTagVal<Int> SessionRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("373", 3, data);
  }

  writeableTagVal<Char> BidRequestTransType::tagVal(char data)
  {
    return writeableTagVal<Char>("374", 3, data);
  }

  writeableTagVal<String> ContraBroker::tagVal(const char* data)
  {
    return writeableTagVal<String>("375", 3, data);
  }

  writeableTagVal<String> ComplianceID::tagVal(const char* data)
  {
    return writeableTagVal<String>("376", 3, data);
  }

  writeableTagVal<Boolean> SolicitedFlag::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("377", 3, data);
  }

  writeableTagVal<Int> ExecRestatementReason::tagVal(int data)
  {
    return writeableTagVal<Int>("378", 3, data);
  }

  writeableTagVal<String> BusinessRejectRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("379", 3, data);
  }

  writeableTagVal<Int> BusinessRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("380", 3, data);
  }

  writeableTagVal<Float> GrossTradeAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("381", 3, data);
  }

  writeableTagVal<Int> NoContraBrokers::tagVal(int data)
  {
    return writeableTagVal<Int>("382", 3, data);
  }

  writeableTagVal<Int> MaxMessageSize::tagVal(int data)
  {
    return writeableTagVal<Int>("383", 3, data);
  }

  writeableTagVal<Int> NoMsgTypes::tagVal(int data)
  {
    return writeableTagVal<Int>("384", 3, data);
  }

  writeableTagVal<Char> MsgDirection::tagVal(char data)
  {
    return writeableTagVal<Char>("385", 3, data);
  }

  writeableTagVal<Int> NoTradingSessions::tagVal(int data)
  {
    return writeableTagVal<Int>("386", 3, data);
  }

  writeableTagVal<Float> TotalVolumeTraded::tagVal(float data)
  {
    return writeableTagVal<Float>("387", 3, data);
  }

  writeableTagVal<Char> DiscretionInst::tagVal(char data)
  {
    return writeableTagVal<Char>("388", 3, data);
  }

  writeableTagVal<Float> DiscretionOffsetValue::tagVal(float data)
  {
    return writeableTagVal<Float>("389", 3, data);
  }

  writeableTagVal<String> BidID::tagVal(const char* data)
  {
    return writeableTagVal<String>("390", 3, data);
  }

  writeableTagVal<String> ClientBidID::tagVal(const char* data)
  {
    return writeableTagVal<String>("391", 3, data);
  }

  writeableTagVal<String> ListName::tagVal(const char* data)
  {
    return writeableTagVal<String>("392", 3, data);
  }

  writeableTagVal<Int> TotNoRelatedSym::tagVal(int data)
  {
    return writeableTagVal<Int>("393", 3, data);
  }

  writeableTagVal<Int> BidType::tagVal(int data)
  {
    return writeableTagVal<Int>("394", 3, data);
  }

  writeableTagVal<Int> NumTickets::tagVal(int data)
  {
    return writeableTagVal<Int>("395", 3, data);
  }

  writeableTagVal<Float> SideValue1::tagVal(float data)
  {
    return writeableTagVal<Float>("396", 3, data);
  }

  writeableTagVal<Float> SideValue2::tagVal(float data)
  {
    return writeableTagVal<Float>("397", 3, data);
  }

  writeableTagVal<Int> NoBidDescriptors::tagVal(int data)
  {
    return writeableTagVal<Int>("398", 3, data);
  }

  writeableTagVal<Int> BidDescriptorType::tagVal(int data)
  {
    return writeableTagVal<Int>("399", 3, data);
  }

  writeableTagVal<String> BidDescriptor::tagVal(const char* data)
  {
    return writeableTagVal<String>("400", 3, data);
  }

  writeableTagVal<Int> SideValueInd::tagVal(int data)
  {
    return writeableTagVal<Int>("401", 3, data);
  }

  writeableTagVal<Float> LiquidityPctLow::tagVal(float data)
  {
    return writeableTagVal<Float>("402", 3, data);
  }

  writeableTagVal<Float> LiquidityPctHigh::tagVal(float data)
  {
    return writeableTagVal<Float>("403", 3, data);
  }

  writeableTagVal<Float> LiquidityValue::tagVal(float data)
  {
    return writeableTagVal<Float>("404", 3, data);
  }

  writeableTagVal<Float> EFPTrackingError::tagVal(float data)
  {
    return writeableTagVal<Float>("405", 3, data);
  }

  writeableTagVal<Float> FairValue::tagVal(float data)
  {
    return writeableTagVal<Float>("406", 3, data);
  }

  writeableTagVal<Float> OutsideIndexPct::tagVal(float data)
  {
    return writeableTagVal<Float>("407", 3, data);
  }

  writeableTagVal<Float> ValueOfFutures::tagVal(float data)
  {
    return writeableTagVal<Float>("408", 3, data);
  }

  writeableTagVal<Int> LiquidityIndType::tagVal(int data)
  {
    return writeableTagVal<Int>("409", 3, data);
  }

  writeableTagVal<Float> WtAverageLiquidity::tagVal(float data)
  {
    return writeableTagVal<Float>("410", 3, data);
  }

  writeableTagVal<Boolean> ExchangeForPhysical::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("411", 3, data);
  }

  writeableTagVal<Float> OutMainCntryUIndex::tagVal(float data)
  {
    return writeableTagVal<Float>("412", 3, data);
  }

  writeableTagVal<Float> CrossPercent::tagVal(float data)
  {
    return writeableTagVal<Float>("413", 3, data);
  }

  writeableTagVal<Int> ProgRptReqs::tagVal(int data)
  {
    return writeableTagVal<Int>("414", 3, data);
  }

  writeableTagVal<Int> ProgPeriodInterval::tagVal(int data)
  {
    return writeableTagVal<Int>("415", 3, data);
  }

  writeableTagVal<Int> IncTaxInd::tagVal(int data)
  {
    return writeableTagVal<Int>("416", 3, data);
  }

  writeableTagVal<Int> NumBidders::tagVal(int data)
  {
    return writeableTagVal<Int>("417", 3, data);
  }

  writeableTagVal<Char> BidTradeType::tagVal(char data)
  {
    return writeableTagVal<Char>("418", 3, data);
  }

  writeableTagVal<Char> BasisPxType::tagVal(char data)
  {
    return writeableTagVal<Char>("419", 3, data);
  }

  writeableTagVal<Int> NoBidComponents::tagVal(int data)
  {
    return writeableTagVal<Int>("420", 3, data);
  }

  writeableTagVal<String> Country::tagVal(const char* data)
  {
    return writeableTagVal<String>("421", 3, data);
  }

  writeableTagVal<Int> TotNoStrikes::tagVal(int data)
  {
    return writeableTagVal<Int>("422", 3, data);
  }

  writeableTagVal<Int> PriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("423", 3, data);
  }

  writeableTagVal<Float> DayOrderQty::tagVal(float data)
  {
    return writeableTagVal<Float>("424", 3, data);
  }

  writeableTagVal<Float> DayCumQty::tagVal(float data)
  {
    return writeableTagVal<Float>("425", 3, data);
  }

  writeableTagVal<Float> DayAvgPx::tagVal(float data)
  {
    return writeableTagVal<Float>("426", 3, data);
  }

  writeableTagVal<Int> GTBookingInst::tagVal(int data)
  {
    return writeableTagVal<Int>("427", 3, data);
  }

  writeableTagVal<Int> NoStrikes::tagVal(int data)
  {
    return writeableTagVal<Int>("428", 3, data);
  }

  writeableTagVal<Int> ListStatusType::tagVal(int data)
  {
    return writeableTagVal<Int>("429", 3, data);
  }

  writeableTagVal<Int> NetGrossInd::tagVal(int data)
  {
    return writeableTagVal<Int>("430", 3, data);
  }

  writeableTagVal<Int> ListOrderStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("431", 3, data);
  }

  writeableTagVal<Date> ExpireDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("432", 3, data);
  }

  writeableTagVal<Char> ListExecInstType::tagVal(char data)
  {
    return writeableTagVal<Char>("433", 3, data);
  }

  writeableTagVal<Char> CxlRejResponseTo::tagVal(char data)
  {
    return writeableTagVal<Char>("434", 3, data);
  }

  writeableTagVal<Float> UnderlyingCouponRate::tagVal(float data)
  {
    return writeableTagVal<Float>("435", 3, data);
  }

  writeableTagVal<Float> UnderlyingContractMultiplier::tagVal(float data)
  {
    return writeableTagVal<Float>("436", 3, data);
  }

  writeableTagVal<Float> ContraTradeQty::tagVal(float data)
  {
    return writeableTagVal<Float>("437", 3, data);
  }

  writeableTagVal<DateAndTime> ContraTradeTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("438", 3, data);
  }

  writeableTagVal<String> ClearingFirm::tagVal(const char* data)
  {
    return writeableTagVal<String>("439", 3, data);
  }

  writeableTagVal<String> ClearingAccount::tagVal(const char* data)
  {
    return writeableTagVal<String>("440", 3, data);
  }

  writeableTagVal<Int> LiquidityNumSecurities::tagVal(int data)
  {
    return writeableTagVal<Int>("441", 3, data);
  }

  writeableTagVal<Char> MultiLegReportingType::tagVal(char data)
  {
    return writeableTagVal<Char>("442", 3, data);
  }

  writeableTagVal<DateAndTime> StrikeTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("443", 3, data);
  }

  writeableTagVal<String> ListStatusText::tagVal(const char* data)
  {
    return writeableTagVal<String>("444", 3, data);
  }

  writeableTagVal<Int> EncodedListStatusTextLen::tagVal(int data)
  {
    return writeableTagVal<Int>("445", 3, data);
  }

  writeableTagVal<Data> EncodedListStatusText::tagVal(Data data)
  {
    return writeableTagVal<Data>("446", 3, data);
  }

  writeableTagVal<Char> PartyIDSource::tagVal(char data)
  {
    return writeableTagVal<Char>("447", 3, data);
  }

  writeableTagVal<String> PartyID::tagVal(const char* data)
  {
    return writeableTagVal<String>("448", 3, data);
  }

  writeableTagVal<Date> TotalVolumeTradedDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("449", 3, data);
  }

  writeableTagVal<Time> TotalVolumeTrade::tagVal(Time data)
  {
    return writeableTagVal<Time>("450", 3, data);
  }

  writeableTagVal<Float> NetChgPrevDay::tagVal(float data)
  {
    return writeableTagVal<Float>("451", 3, data);
  }

  writeableTagVal<Int> PartyRole::tagVal(int data)
  {
    return writeableTagVal<Int>("452", 3, data);
  }

  writeableTagVal<Int> NoPartyIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("453", 3, data);
  }

  writeableTagVal<Int> NoSecurityAltID::tagVal(int data)
  {
    return writeableTagVal<Int>("454", 3, data);
  }

  writeableTagVal<String> SecurityAltID::tagVal(const char* data)
  {
    return writeableTagVal<String>("455", 3, data);
  }

  writeableTagVal<String> SecurityAltIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("456", 3, data);
  }

  writeableTagVal<Int> NoUnderlyingSecurityAltID::tagVal(int data)
  {
    return writeableTagVal<Int>("457", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityAltID::tagVal(const char* data)
  {
    return writeableTagVal<String>("458", 3, data);
  }

  writeableTagVal<String> UnderlyingSecurityAltIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("459", 3, data);
  }

  writeableTagVal<Int> Product::tagVal(int data)
  {
    return writeableTagVal<Int>("460", 3, data);
  }

  writeableTagVal<String> CFICode::tagVal(const char* data)
  {
    return writeableTagVal<String>("461", 3, data);
  }

  writeableTagVal<Int> UnderlyingProduct::tagVal(int data)
  {
    return writeableTagVal<Int>("462", 3, data);
  }

  writeableTagVal<String> UnderlyingCFICode::tagVal(const char* data)
  {
    return writeableTagVal<String>("463", 3, data);
  }

  writeableTagVal<Boolean> TestMessageIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("464", 3, data);
  }

  writeableTagVal<Int> QuantityType::tagVal(int data)
  {
    return writeableTagVal<Int>("465", 3, data);
  }

  writeableTagVal<String> BookingRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("466", 3, data);
  }

  writeableTagVal<String> IndividualAllocID::tagVal(const char* data)
  {
    return writeableTagVal<String>("467", 3, data);
  }

  writeableTagVal<Char> RoundingDirection::tagVal(char data)
  {
    return writeableTagVal<Char>("468", 3, data);
  }

  writeableTagVal<Float> RoundingModulus::tagVal(float data)
  {
    return writeableTagVal<Float>("469", 3, data);
  }

  writeableTagVal<String> CountryOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("470", 3, data);
  }

  writeableTagVal<String> StateOrProvinceOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("471", 3, data);
  }

  writeableTagVal<String> LocaleOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("472", 3, data);
  }

  writeableTagVal<Int> NoRegistDtls::tagVal(int data)
  {
    return writeableTagVal<Int>("473", 3, data);
  }

  writeableTagVal<String> MailingDtls::tagVal(const char* data)
  {
    return writeableTagVal<String>("474", 3, data);
  }

  writeableTagVal<String> InvestorCountryOfResidence::tagVal(const char* data)
  {
    return writeableTagVal<String>("475", 3, data);
  }

  writeableTagVal<String> PaymentRef::tagVal(const char* data)
  {
    return writeableTagVal<String>("476", 3, data);
  }

  writeableTagVal<Int> DistribPaymentMethod::tagVal(int data)
  {
    return writeableTagVal<Int>("477", 3, data);
  }

  writeableTagVal<String> CashDistribCurr::tagVal(const char* data)
  {
    return writeableTagVal<String>("478", 3, data);
  }

  writeableTagVal<String> CommCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("479", 3, data);
  }

  writeableTagVal<Char> CancellationRights::tagVal(char data)
  {
    return writeableTagVal<Char>("480", 3, data);
  }

  writeableTagVal<Char> MoneyLaunderingStatus::tagVal(char data)
  {
    return writeableTagVal<Char>("481", 3, data);
  }

  writeableTagVal<String> MailingInst::tagVal(const char* data)
  {
    return writeableTagVal<String>("482", 3, data);
  }

  writeableTagVal<DateAndTime> TransBkdTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("483", 3, data);
  }

  writeableTagVal<Char> ExecPriceType::tagVal(char data)
  {
    return writeableTagVal<Char>("484", 3, data);
  }

  writeableTagVal<Float> ExecPriceAdjustment::tagVal(float data)
  {
    return writeableTagVal<Float>("485", 3, data);
  }

  writeableTagVal<Date> DateOfBirth::tagVal(Date data)
  {
    return writeableTagVal<Date>("486", 3, data);
  }

  writeableTagVal<Int> TradeReportTransType::tagVal(int data)
  {
    return writeableTagVal<Int>("487", 3, data);
  }

  writeableTagVal<String> CardHolderName::tagVal(const char* data)
  {
    return writeableTagVal<String>("488", 3, data);
  }

  writeableTagVal<String> CardNumber::tagVal(const char* data)
  {
    return writeableTagVal<String>("489", 3, data);
  }

  writeableTagVal<Date> CardExpDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("490", 3, data);
  }

  writeableTagVal<String> CardIssNum::tagVal(const char* data)
  {
    return writeableTagVal<String>("491", 3, data);
  }

  writeableTagVal<Int> PaymentMethod::tagVal(int data)
  {
    return writeableTagVal<Int>("492", 3, data);
  }

  writeableTagVal<String> RegistAcctType::tagVal(const char* data)
  {
    return writeableTagVal<String>("493", 3, data);
  }

  writeableTagVal<String> Designation::tagVal(const char* data)
  {
    return writeableTagVal<String>("494", 3, data);
  }

  writeableTagVal<Int> TaxAdvantageType::tagVal(int data)
  {
    return writeableTagVal<Int>("495", 3, data);
  }

  writeableTagVal<String> RegistRejReasonText::tagVal(const char* data)
  {
    return writeableTagVal<String>("496", 3, data);
  }

  writeableTagVal<Char> FundRenewWaiv::tagVal(char data)
  {
    return writeableTagVal<Char>("497", 3, data);
  }

  writeableTagVal<String> CashDistribAgentName::tagVal(const char* data)
  {
    return writeableTagVal<String>("498", 3, data);
  }

  writeableTagVal<String> CashDistribAgentCode::tagVal(const char* data)
  {
    return writeableTagVal<String>("499", 3, data);
  }

  writeableTagVal<String> CashDistribAgentAcctNumber::tagVal(const char* data)
  {
    return writeableTagVal<String>("500", 3, data);
  }

  writeableTagVal<String> CashDistribPayRef::tagVal(const char* data)
  {
    return writeableTagVal<String>("501", 3, data);
  }

  writeableTagVal<String> CashDistribAgentAcctName::tagVal(const char* data)
  {
    return writeableTagVal<String>("502", 3, data);
  }

  writeableTagVal<Date> CardStartDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("503", 3, data);
  }

  writeableTagVal<Date> PaymentDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("504", 3, data);
  }

  writeableTagVal<String> PaymentRemitterID::tagVal(const char* data)
  {
    return writeableTagVal<String>("505", 3, data);
  }

  writeableTagVal<Char> RegistStatus::tagVal(char data)
  {
    return writeableTagVal<Char>("506", 3, data);
  }

  writeableTagVal<Int> RegistRejReasonCode::tagVal(int data)
  {
    return writeableTagVal<Int>("507", 3, data);
  }

  writeableTagVal<String> RegistRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("508", 3, data);
  }

  writeableTagVal<String> RegistDtls::tagVal(const char* data)
  {
    return writeableTagVal<String>("509", 3, data);
  }

  writeableTagVal<Int> NoDistribInsts::tagVal(int data)
  {
    return writeableTagVal<Int>("510", 3, data);
  }

  writeableTagVal<String> RegistEmail::tagVal(const char* data)
  {
    return writeableTagVal<String>("511", 3, data);
  }

  writeableTagVal<Float> DistribPercentage::tagVal(float data)
  {
    return writeableTagVal<Float>("512", 3, data);
  }

  writeableTagVal<String> RegistID::tagVal(const char* data)
  {
    return writeableTagVal<String>("513", 3, data);
  }

  writeableTagVal<Char> RegistTransType::tagVal(char data)
  {
    return writeableTagVal<Char>("514", 3, data);
  }

  writeableTagVal<DateAndTime> ExecValuationPoint::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("515", 3, data);
  }

  writeableTagVal<Float> OrderPercent::tagVal(float data)
  {
    return writeableTagVal<Float>("516", 3, data);
  }

  writeableTagVal<Char> OwnershipType::tagVal(char data)
  {
    return writeableTagVal<Char>("517", 3, data);
  }

  writeableTagVal<Int> NoContAmts::tagVal(int data)
  {
    return writeableTagVal<Int>("518", 3, data);
  }

  writeableTagVal<Int> ContAmtType::tagVal(int data)
  {
    return writeableTagVal<Int>("519", 3, data);
  }

  writeableTagVal<Float> ContAmtValue::tagVal(float data)
  {
    return writeableTagVal<Float>("520", 3, data);
  }

  writeableTagVal<String> ContAmtCurr::tagVal(const char* data)
  {
    return writeableTagVal<String>("521", 3, data);
  }

  writeableTagVal<Int> OwnerType::tagVal(int data)
  {
    return writeableTagVal<Int>("522", 3, data);
  }

  writeableTagVal<String> PartySubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("523", 3, data);
  }

  writeableTagVal<String> NestedPartyID::tagVal(const char* data)
  {
    return writeableTagVal<String>("524", 3, data);
  }

  writeableTagVal<Char> NestedPartyIDSource::tagVal(char data)
  {
    return writeableTagVal<Char>("525", 3, data);
  }

  writeableTagVal<String> SecondaryClOrdID::tagVal(const char* data)
  {
    return writeableTagVal<String>("526", 3, data);
  }

  writeableTagVal<String> SecondaryExecID::tagVal(const char* data)
  {
    return writeableTagVal<String>("527", 3, data);
  }

  writeableTagVal<Char> OrderCapacity::tagVal(char data)
  {
    return writeableTagVal<Char>("528", 3, data);
  }

  writeableTagVal<MulValString> OrderRestrictions::tagVal()
  {
  }

  writeableTagVal<Char> MassCancelRequestType::tagVal(char data)
  {
    return writeableTagVal<Char>("530", 3, data);
  }

  writeableTagVal<Char> MassCancelResponse::tagVal(char data)
  {
    return writeableTagVal<Char>("531", 3, data);
  }

  writeableTagVal<Char> MassCancelRejectReason::tagVal(char data)
  {
    return writeableTagVal<Char>("532", 3, data);
  }

  writeableTagVal<Int> TotalAffectedOrders::tagVal(int data)
  {
    return writeableTagVal<Int>("533", 3, data);
  }

  writeableTagVal<Int> NoAffectedOrders::tagVal(int data)
  {
    return writeableTagVal<Int>("534", 3, data);
  }

  writeableTagVal<String> AffectedOrderID::tagVal(const char* data)
  {
    return writeableTagVal<String>("535", 3, data);
  }

  writeableTagVal<String> AffectedSecondaryOrderID::tagVal(const char* data)
  {
    return writeableTagVal<String>("536", 3, data);
  }

  writeableTagVal<Int> QuoteType::tagVal(int data)
  {
    return writeableTagVal<Int>("537", 3, data);
  }

  writeableTagVal<Int> NestedPartyRole::tagVal(int data)
  {
    return writeableTagVal<Int>("538", 3, data);
  }

  writeableTagVal<Int> NoNestedPartyIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("539", 3, data);
  }

  writeableTagVal<Float> TotalAccruedInterestAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("540", 3, data);
  }

  writeableTagVal<Date> MaturityDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("541", 3, data);
  }

  writeableTagVal<Date> UnderlyingMaturityDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("542", 3, data);
  }

  writeableTagVal<String> InstrRegistry::tagVal(const char* data)
  {
    return writeableTagVal<String>("543", 3, data);
  }

  writeableTagVal<Char> CashMargin::tagVal(char data)
  {
    return writeableTagVal<Char>("544", 3, data);
  }

  writeableTagVal<String> NestedPartySubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("545", 3, data);
  }

  writeableTagVal<MulValString> Scope::tagVal()
  {
  }

  writeableTagVal<Boolean> MDImplicitDelete::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("547", 3, data);
  }

  writeableTagVal<String> CrossID::tagVal(const char* data)
  {
    return writeableTagVal<String>("548", 3, data);
  }

  writeableTagVal<Int> CrossType::tagVal(int data)
  {
    return writeableTagVal<Int>("549", 3, data);
  }

  writeableTagVal<Int> CrossPrioritization::tagVal(int data)
  {
    return writeableTagVal<Int>("550", 3, data);
  }

  writeableTagVal<String> OrigCrossID::tagVal(const char* data)
  {
    return writeableTagVal<String>("551", 3, data);
  }

  writeableTagVal<Int> NoSides::tagVal(int data)
  {
    return writeableTagVal<Int>("552", 3, data);
  }

  writeableTagVal<String> Username::tagVal(const char* data)
  {
    return writeableTagVal<String>("553", 3, data);
  }

  writeableTagVal<String> Password::tagVal(const char* data)
  {
    return writeableTagVal<String>("554", 3, data);
  }

  writeableTagVal<Int> NoLegs::tagVal(int data)
  {
    return writeableTagVal<Int>("555", 3, data);
  }

  writeableTagVal<String> LegCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("556", 3, data);
  }

  writeableTagVal<Int> TotNoSecurityTypes::tagVal(int data)
  {
    return writeableTagVal<Int>("557", 3, data);
  }

  writeableTagVal<Int> NoSecurityTypes::tagVal(int data)
  {
    return writeableTagVal<Int>("558", 3, data);
  }

  writeableTagVal<Int> SecurityListRequestType::tagVal(int data)
  {
    return writeableTagVal<Int>("559", 3, data);
  }

  writeableTagVal<Int> SecurityRequestResult::tagVal(int data)
  {
    return writeableTagVal<Int>("560", 3, data);
  }

  writeableTagVal<Float> RoundLot::tagVal(float data)
  {
    return writeableTagVal<Float>("561", 3, data);
  }

  writeableTagVal<Float> MinTradeVol::tagVal(float data)
  {
    return writeableTagVal<Float>("562", 3, data);
  }

  writeableTagVal<Int> MultiLegRptTypeReq::tagVal(int data)
  {
    return writeableTagVal<Int>("563", 3, data);
  }

  writeableTagVal<Char> LegPositionEffect::tagVal(char data)
  {
    return writeableTagVal<Char>("564", 3, data);
  }

  writeableTagVal<Int> LegCoveredOrUncovered::tagVal(int data)
  {
    return writeableTagVal<Int>("565", 3, data);
  }

  writeableTagVal<Float> LegPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("566", 3, data);
  }

  writeableTagVal<Int> TradSesStatusRejReason::tagVal(int data)
  {
    return writeableTagVal<Int>("567", 3, data);
  }

  writeableTagVal<String> TradeRequestID::tagVal(const char* data)
  {
    return writeableTagVal<String>("568", 3, data);
  }

  writeableTagVal<Int> TradeRequestType::tagVal(int data)
  {
    return writeableTagVal<Int>("569", 3, data);
  }

  writeableTagVal<Boolean> PreviouslyReported::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("570", 3, data);
  }

  writeableTagVal<String> TradeReportID::tagVal(const char* data)
  {
    return writeableTagVal<String>("571", 3, data);
  }

  writeableTagVal<String> TradeReportRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("572", 3, data);
  }

  writeableTagVal<Char> MatchStatus::tagVal(char data)
  {
    return writeableTagVal<Char>("573", 3, data);
  }

  writeableTagVal<String> MatchType::tagVal(const char* data)
  {
    return writeableTagVal<String>("574", 3, data);
  }

  writeableTagVal<Boolean> OddLot::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("575", 3, data);
  }

  writeableTagVal<Int> NoClearingInstructions::tagVal(int data)
  {
    return writeableTagVal<Int>("576", 3, data);
  }

  writeableTagVal<Int> ClearingInstruction::tagVal(int data)
  {
    return writeableTagVal<Int>("577", 3, data);
  }

  writeableTagVal<String> TradeInputSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("578", 3, data);
  }

  writeableTagVal<String> TradeInputDevice::tagVal(const char* data)
  {
    return writeableTagVal<String>("579", 3, data);
  }

  writeableTagVal<Int> NoDates::tagVal(int data)
  {
    return writeableTagVal<Int>("580", 3, data);
  }

  writeableTagVal<Int> AccountType::tagVal(int data)
  {
    return writeableTagVal<Int>("581", 3, data);
  }

  writeableTagVal<Int> CustOrderCapacity::tagVal(int data)
  {
    return writeableTagVal<Int>("582", 3, data);
  }

  writeableTagVal<String> ClOrdLinkID::tagVal(const char* data)
  {
    return writeableTagVal<String>("583", 3, data);
  }

  writeableTagVal<String> MassStatusReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("584", 3, data);
  }

  writeableTagVal<Int> MassStatusReqType::tagVal(int data)
  {
    return writeableTagVal<Int>("585", 3, data);
  }

  writeableTagVal<DateAndTime> OrigOrdModTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("586", 3, data);
  }

  writeableTagVal<Char> LegSettlType::tagVal(char data)
  {
    return writeableTagVal<Char>("587", 3, data);
  }

  writeableTagVal<Date> LegSettlDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("588", 3, data);
  }

  writeableTagVal<Char> DayBookingInst::tagVal(char data)
  {
    return writeableTagVal<Char>("589", 3, data);
  }

  writeableTagVal<Char> BookingUnit::tagVal(char data)
  {
    return writeableTagVal<Char>("590", 3, data);
  }

  writeableTagVal<Char> PreallocMethod::tagVal(char data)
  {
    return writeableTagVal<Char>("591", 3, data);
  }

  writeableTagVal<String> UnderlyingCountryOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("592", 3, data);
  }

  writeableTagVal<String> UnderlyingStateOrProvinceOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("593", 3, data);
  }

  writeableTagVal<String> UnderlyingLocaleOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("594", 3, data);
  }

  writeableTagVal<String> UnderlyingInstrRegistry::tagVal(const char* data)
  {
    return writeableTagVal<String>("595", 3, data);
  }

  writeableTagVal<String> LegCountryOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("596", 3, data);
  }

  writeableTagVal<String> LegStateOrProvinceOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("597", 3, data);
  }

  writeableTagVal<String> LegLocaleOfIssue::tagVal(const char* data)
  {
    return writeableTagVal<String>("598", 3, data);
  }

  writeableTagVal<String> LegInstrRegistry::tagVal(const char* data)
  {
    return writeableTagVal<String>("599", 3, data);
  }

  writeableTagVal<String> LegSymbol::tagVal(const char* data)
  {
    return writeableTagVal<String>("600", 3, data);
  }

  writeableTagVal<String> LegSymbolSfx::tagVal(const char* data)
  {
    return writeableTagVal<String>("601", 3, data);
  }

  writeableTagVal<String> LegSecurityID::tagVal(const char* data)
  {
    return writeableTagVal<String>("602", 3, data);
  }

  writeableTagVal<String> LegSecurityIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("603", 3, data);
  }

  writeableTagVal<String> NoLegSecurityAltID::tagVal(const char* data)
  {
    return writeableTagVal<String>("604", 3, data);
  }

  writeableTagVal<String> LegSecurityAltID::tagVal(const char* data)
  {
    return writeableTagVal<String>("605", 3, data);
  }

  writeableTagVal<String> LegSecurityAltIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("606", 3, data);
  }

  writeableTagVal<Int> LegProduct::tagVal(int data)
  {
    return writeableTagVal<Int>("607", 3, data);
  }

  writeableTagVal<String> LegCFICode::tagVal(const char* data)
  {
    return writeableTagVal<String>("608", 3, data);
  }

  writeableTagVal<String> LegSecurityType::tagVal(const char* data)
  {
    return writeableTagVal<String>("609", 3, data);
  }

  writeableTagVal<MonthYear> LegMaturityMonthYear::tagVal(MonthYear data)
  {
    return writeableTagVal<MonthYear>("610", 3, data);
  }

  writeableTagVal<Date> LegMaturityDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("611", 3, data);
  }

  writeableTagVal<Float> LegStrikePrice::tagVal(float data)
  {
    return writeableTagVal<Float>("612", 3, data);
  }

  writeableTagVal<Char> LegOptAttribute::tagVal(char data)
  {
    return writeableTagVal<Char>("613", 3, data);
  }

  writeableTagVal<Float> LegContractMultiplier::tagVal(float data)
  {
    return writeableTagVal<Float>("614", 3, data);
  }

  writeableTagVal<Float> LegCouponRate::tagVal(float data)
  {
    return writeableTagVal<Float>("615", 3, data);
  }

  writeableTagVal<String> LegSecurityExchange::tagVal(const char* data)
  {
    return writeableTagVal<String>("616", 3, data);
  }

  writeableTagVal<String> LegIssuer::tagVal(const char* data)
  {
    return writeableTagVal<String>("617", 3, data);
  }

  writeableTagVal<Int> EncodedLegIssuerLen::tagVal(int data)
  {
    return writeableTagVal<Int>("618", 3, data);
  }

  writeableTagVal<Data> EncodedLegIssuer::tagVal(Data data)
  {
    return writeableTagVal<Data>("619", 3, data);
  }

  writeableTagVal<String> LegSecurityDesc::tagVal(const char* data)
  {
    return writeableTagVal<String>("620", 3, data);
  }

  writeableTagVal<Int> EncodedLegSecurityDescLen::tagVal(int data)
  {
    return writeableTagVal<Int>("621", 3, data);
  }

  writeableTagVal<Data> EncodedLegSecurityDesc::tagVal(Data data)
  {
    return writeableTagVal<Data>("622", 3, data);
  }

  writeableTagVal<Float> LegRatioQty::tagVal(float data)
  {
    return writeableTagVal<Float>("623", 3, data);
  }

  writeableTagVal<Char> LegSide::tagVal(char data)
  {
    return writeableTagVal<Char>("624", 3, data);
  }

  writeableTagVal<String> TradingSessionSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("625", 3, data);
  }

  writeableTagVal<Int> AllocType::tagVal(int data)
  {
    return writeableTagVal<Int>("626", 3, data);
  }

  writeableTagVal<Int> NoHops::tagVal(int data)
  {
    return writeableTagVal<Int>("627", 3, data);
  }

  writeableTagVal<String> HopCompID::tagVal(const char* data)
  {
    return writeableTagVal<String>("628", 3, data);
  }

  writeableTagVal<DateAndTime> HopSendingTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("629", 3, data);
  }

  writeableTagVal<Int> HopRefID::tagVal(int data)
  {
    return writeableTagVal<Int>("630", 3, data);
  }

  writeableTagVal<Float> MidPx::tagVal(float data)
  {
    return writeableTagVal<Float>("631", 3, data);
  }

  writeableTagVal<Float> BidYield::tagVal(float data)
  {
    return writeableTagVal<Float>("632", 3, data);
  }

  writeableTagVal<Float> MidYield::tagVal(float data)
  {
    return writeableTagVal<Float>("633", 3, data);
  }

  writeableTagVal<Float> OfferYield::tagVal(float data)
  {
    return writeableTagVal<Float>("634", 3, data);
  }

  writeableTagVal<String> ClearingFeeIndicator::tagVal(const char* data)
  {
    return writeableTagVal<String>("635", 3, data);
  }

  writeableTagVal<Boolean> WorkingIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("636", 3, data);
  }

  writeableTagVal<Float> LegLastPx::tagVal(float data)
  {
    return writeableTagVal<Float>("637", 3, data);
  }

  writeableTagVal<Int> PriorityIndicator::tagVal(int data)
  {
    return writeableTagVal<Int>("638", 3, data);
  }

  writeableTagVal<Float> PriceImprovement::tagVal(float data)
  {
    return writeableTagVal<Float>("639", 3, data);
  }

  writeableTagVal<Float> Price2::tagVal(float data)
  {
    return writeableTagVal<Float>("640", 3, data);
  }

  writeableTagVal<Float> LastForwardPoints2::tagVal(float data)
  {
    return writeableTagVal<Float>("641", 3, data);
  }

  writeableTagVal<Float> BidForwardPoints2::tagVal(float data)
  {
    return writeableTagVal<Float>("642", 3, data);
  }

  writeableTagVal<Float> OfferForwardPoints2::tagVal(float data)
  {
    return writeableTagVal<Float>("643", 3, data);
  }

  writeableTagVal<String> RFQReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("644", 3, data);
  }

  writeableTagVal<Float> MktBidPx::tagVal(float data)
  {
    return writeableTagVal<Float>("645", 3, data);
  }

  writeableTagVal<Float> MktOfferPx::tagVal(float data)
  {
    return writeableTagVal<Float>("646", 3, data);
  }

  writeableTagVal<Float> MinBidSize::tagVal(float data)
  {
    return writeableTagVal<Float>("647", 3, data);
  }

  writeableTagVal<Float> MinOfferSize::tagVal(float data)
  {
    return writeableTagVal<Float>("648", 3, data);
  }

  writeableTagVal<String> QuoteStatusReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("649", 3, data);
  }

  writeableTagVal<Boolean> LegalConfirm::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("650", 3, data);
  }

  writeableTagVal<Float> UnderlyingLastPx::tagVal(float data)
  {
    return writeableTagVal<Float>("651", 3, data);
  }

  writeableTagVal<Float> UnderlyingLastQty::tagVal(float data)
  {
    return writeableTagVal<Float>("652", 3, data);
  }

  writeableTagVal<Int> SecDefStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("653", 3, data);
  }

  writeableTagVal<String> LegRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("654", 3, data);
  }

  writeableTagVal<String> ContraLegRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("655", 3, data);
  }

  writeableTagVal<Float> SettlCurrBidFxRate::tagVal(float data)
  {
    return writeableTagVal<Float>("656", 3, data);
  }

  writeableTagVal<Float> SettlCurrOfferFxRate::tagVal(float data)
  {
    return writeableTagVal<Float>("657", 3, data);
  }

  writeableTagVal<Int> QuoteRequestRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("658", 3, data);
  }

  writeableTagVal<String> SideComplianceID::tagVal(const char* data)
  {
    return writeableTagVal<String>("659", 3, data);
  }

  writeableTagVal<Int> AcctIDSource::tagVal(int data)
  {
    return writeableTagVal<Int>("660", 3, data);
  }

  writeableTagVal<Int> AllocAcctIDSource::tagVal(int data)
  {
    return writeableTagVal<Int>("661", 3, data);
  }

  writeableTagVal<Float> BenchmarkPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("662", 3, data);
  }

  writeableTagVal<Int> BenchmarkPriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("663", 3, data);
  }

  writeableTagVal<String> ConfirmID::tagVal(const char* data)
  {
    return writeableTagVal<String>("664", 3, data);
  }

  writeableTagVal<Int> ConfirmStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("665", 3, data);
  }

  writeableTagVal<Int> ConfirmTransType::tagVal(int data)
  {
    return writeableTagVal<Int>("666", 3, data);
  }

  writeableTagVal<MonthYear> ContractSettlMonth::tagVal(MonthYear data)
  {
    return writeableTagVal<MonthYear>("667", 3, data);
  }

  writeableTagVal<Int> DeliveryForm::tagVal(int data)
  {
    return writeableTagVal<Int>("668", 3, data);
  }

  writeableTagVal<Float> LastParPx::tagVal(float data)
  {
    return writeableTagVal<Float>("669", 3, data);
  }

  writeableTagVal<Int> NoLegAllocs::tagVal(int data)
  {
    return writeableTagVal<Int>("670", 3, data);
  }

  writeableTagVal<String> LegAllocAccount::tagVal(const char* data)
  {
    return writeableTagVal<String>("671", 3, data);
  }

  writeableTagVal<String> LegIndividualAllocID::tagVal(const char* data)
  {
    return writeableTagVal<String>("672", 3, data);
  }

  writeableTagVal<Float> LegAllocQty::tagVal(float data)
  {
    return writeableTagVal<Float>("673", 3, data);
  }

  writeableTagVal<String> LegAllocAcctIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("674", 3, data);
  }

  writeableTagVal<String> LegSettlCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("675", 3, data);
  }

  writeableTagVal<String> LegBenchmarkCurveCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("676", 3, data);
  }

  writeableTagVal<String> LegBenchmarkCurveName::tagVal(const char* data)
  {
    return writeableTagVal<String>("677", 3, data);
  }

  writeableTagVal<String> LegBenchmarkCurvePoint::tagVal(const char* data)
  {
    return writeableTagVal<String>("678", 3, data);
  }

  writeableTagVal<Float> LegBenchmarkPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("679", 3, data);
  }

  writeableTagVal<Int> LegBenchmarkPriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("680", 3, data);
  }

  writeableTagVal<Float> LegBidPx::tagVal(float data)
  {
    return writeableTagVal<Float>("681", 3, data);
  }

  writeableTagVal<String> LegIOIQty::tagVal(const char* data)
  {
    return writeableTagVal<String>("682", 3, data);
  }

  writeableTagVal<Int> NoLegStipulations::tagVal(int data)
  {
    return writeableTagVal<Int>("683", 3, data);
  }

  writeableTagVal<Float> LegOfferPx::tagVal(float data)
  {
    return writeableTagVal<Float>("684", 3, data);
  }

  writeableTagVal<Float> LegOrderQty::tagVal(float data)
  {
    return writeableTagVal<Float>("685", 3, data);
  }

  writeableTagVal<Int> LegPriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("686", 3, data);
  }

  writeableTagVal<Float> LegQty::tagVal(float data)
  {
    return writeableTagVal<Float>("687", 3, data);
  }

  writeableTagVal<String> LegStipulationType::tagVal(const char* data)
  {
    return writeableTagVal<String>("688", 3, data);
  }

  writeableTagVal<String> LegStipulationValue::tagVal(const char* data)
  {
    return writeableTagVal<String>("689", 3, data);
  }

  writeableTagVal<Int> LegSwapType::tagVal(int data)
  {
    return writeableTagVal<Int>("690", 3, data);
  }

  writeableTagVal<String> Pool::tagVal(const char* data)
  {
    return writeableTagVal<String>("691", 3, data);
  }

  writeableTagVal<Int> QuotePriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("692", 3, data);
  }

  writeableTagVal<String> QuoteRespID::tagVal(const char* data)
  {
    return writeableTagVal<String>("693", 3, data);
  }

  writeableTagVal<Int> QuoteRespType::tagVal(int data)
  {
    return writeableTagVal<Int>("694", 3, data);
  }

  writeableTagVal<Char> QuoteQualifier::tagVal(char data)
  {
    return writeableTagVal<Char>("695", 3, data);
  }

  writeableTagVal<Date> YieldRedemptionDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("696", 3, data);
  }

  writeableTagVal<Float> YieldRedemptionPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("697", 3, data);
  }

  writeableTagVal<Int> YieldRedemptionPriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("698", 3, data);
  }

  writeableTagVal<String> BenchmarkSecurityID::tagVal(const char* data)
  {
    return writeableTagVal<String>("699", 3, data);
  }

  writeableTagVal<Boolean> ReversalIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("700", 3, data);
  }

  writeableTagVal<Date> YieldCalcDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("701", 3, data);
  }

  writeableTagVal<Int> NoPositions::tagVal(int data)
  {
    return writeableTagVal<Int>("702", 3, data);
  }

  writeableTagVal<String> PosType::tagVal(const char* data)
  {
    return writeableTagVal<String>("703", 3, data);
  }

  writeableTagVal<Float> LongQty::tagVal(float data)
  {
    return writeableTagVal<Float>("704", 3, data);
  }

  writeableTagVal<Float> ShortQty::tagVal(float data)
  {
    return writeableTagVal<Float>("705", 3, data);
  }

  writeableTagVal<Int> PosQtyStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("706", 3, data);
  }

  writeableTagVal<String> PosAmtType::tagVal(const char* data)
  {
    return writeableTagVal<String>("707", 3, data);
  }

  writeableTagVal<Float> PosAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("708", 3, data);
  }

  writeableTagVal<Int> PosTransType::tagVal(int data)
  {
    return writeableTagVal<Int>("709", 3, data);
  }

  writeableTagVal<String> PosReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("710", 3, data);
  }

  writeableTagVal<Int> NoUnderlyings::tagVal(int data)
  {
    return writeableTagVal<Int>("711", 3, data);
  }

  writeableTagVal<Int> PosMaintAction::tagVal(int data)
  {
    return writeableTagVal<Int>("712", 3, data);
  }

  writeableTagVal<String> OrigPosReqRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("713", 3, data);
  }

  writeableTagVal<String> PosMaintRptRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("714", 3, data);
  }

  writeableTagVal<Date> ClearingBusinessDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("715", 3, data);
  }

  writeableTagVal<String> SettlSessID::tagVal(const char* data)
  {
    return writeableTagVal<String>("716", 3, data);
  }

  writeableTagVal<String> SettlSessSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("717", 3, data);
  }

  writeableTagVal<Int> AdjustmentType::tagVal(int data)
  {
    return writeableTagVal<Int>("718", 3, data);
  }

  writeableTagVal<Boolean> ContraryInstructionIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("719", 3, data);
  }

  writeableTagVal<Boolean> PriorSpreadIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("720", 3, data);
  }

  writeableTagVal<String> PosMaintRptID::tagVal(const char* data)
  {
    return writeableTagVal<String>("721", 3, data);
  }

  writeableTagVal<Int> PosMaintStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("722", 3, data);
  }

  writeableTagVal<Int> PosMaintResult::tagVal(int data)
  {
    return writeableTagVal<Int>("723", 3, data);
  }

  writeableTagVal<Int> PosReqType::tagVal(int data)
  {
    return writeableTagVal<Int>("724", 3, data);
  }

  writeableTagVal<Int> ResponseTransportType::tagVal(int data)
  {
    return writeableTagVal<Int>("725", 3, data);
  }

  writeableTagVal<String> ResponseDestination::tagVal(const char* data)
  {
    return writeableTagVal<String>("726", 3, data);
  }

  writeableTagVal<Int> TotalNumPosReports::tagVal(int data)
  {
    return writeableTagVal<Int>("727", 3, data);
  }

  writeableTagVal<Int> PosReqResult::tagVal(int data)
  {
    return writeableTagVal<Int>("728", 3, data);
  }

  writeableTagVal<Int> PosReqStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("729", 3, data);
  }

  writeableTagVal<Float> SettlPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("730", 3, data);
  }

  writeableTagVal<Int> SettlPriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("731", 3, data);
  }

  writeableTagVal<Float> UnderlyingSettlPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("732", 3, data);
  }

  writeableTagVal<Int> UnderlyingSettlPriceType::tagVal(int data)
  {
    return writeableTagVal<Int>("733", 3, data);
  }

  writeableTagVal<Float> PriorSettlPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("734", 3, data);
  }

  writeableTagVal<Int> NoQuoteQualifiers::tagVal(int data)
  {
    return writeableTagVal<Int>("735", 3, data);
  }

  writeableTagVal<String> AllocSettlCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("736", 3, data);
  }

  writeableTagVal<Float> AllocSettlCurrAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("737", 3, data);
  }

  writeableTagVal<Float> InterestAtMaturity::tagVal(float data)
  {
    return writeableTagVal<Float>("738", 3, data);
  }

  writeableTagVal<Date> LegDatedDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("739", 3, data);
  }

  writeableTagVal<String> LegPool::tagVal(const char* data)
  {
    return writeableTagVal<String>("740", 3, data);
  }

  writeableTagVal<Float> AllocInterestAtMaturity::tagVal(float data)
  {
    return writeableTagVal<Float>("741", 3, data);
  }

  writeableTagVal<Float> AllocAccruedInterestAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("742", 3, data);
  }

  writeableTagVal<Date> DeliveryDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("743", 3, data);
  }

  writeableTagVal<Char> AssignmentMethod::tagVal(char data)
  {
    return writeableTagVal<Char>("744", 3, data);
  }

  writeableTagVal<Float> AssignmentUnit::tagVal(float data)
  {
    return writeableTagVal<Float>("745", 3, data);
  }

  writeableTagVal<Float> OpenInterest::tagVal(float data)
  {
    return writeableTagVal<Float>("746", 3, data);
  }

  writeableTagVal<Char> ExerciseMethod::tagVal(char data)
  {
    return writeableTagVal<Char>("747", 3, data);
  }

  writeableTagVal<Int> TotNumTradeReports::tagVal(int data)
  {
    return writeableTagVal<Int>("748", 3, data);
  }

  writeableTagVal<Int> TradeRequestResult::tagVal(int data)
  {
    return writeableTagVal<Int>("749", 3, data);
  }

  writeableTagVal<Int> TradeRequestStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("750", 3, data);
  }

  writeableTagVal<Int> TradeReportRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("751", 3, data);
  }

  writeableTagVal<Int> SideMultiLegReportingType::tagVal(int data)
  {
    return writeableTagVal<Int>("752", 3, data);
  }

  writeableTagVal<Int> NoPosAmt::tagVal(int data)
  {
    return writeableTagVal<Int>("753", 3, data);
  }

  writeableTagVal<Boolean> AutoAcceptIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("754", 3, data);
  }

  writeableTagVal<String> AllocReportID::tagVal(const char* data)
  {
    return writeableTagVal<String>("755", 3, data);
  }

  writeableTagVal<Int> NoNested2PartyIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("756", 3, data);
  }

  writeableTagVal<String> Nested2PartyID::tagVal(const char* data)
  {
    return writeableTagVal<String>("757", 3, data);
  }

  writeableTagVal<Char> Nested2PartyIDSource::tagVal(char data)
  {
    return writeableTagVal<Char>("758", 3, data);
  }

  writeableTagVal<Int> Nested2PartyRole::tagVal(int data)
  {
    return writeableTagVal<Int>("759", 3, data);
  }

  writeableTagVal<String> Nested2PartySubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("760", 3, data);
  }

  writeableTagVal<String> BenchmarkSecurityIDSource::tagVal(const char* data)
  {
    return writeableTagVal<String>("761", 3, data);
  }

  writeableTagVal<String> SecuritySubType::tagVal(const char* data)
  {
    return writeableTagVal<String>("762", 3, data);
  }

  writeableTagVal<String> UnderlyingSecuritySubType::tagVal(const char* data)
  {
    return writeableTagVal<String>("763", 3, data);
  }

  writeableTagVal<String> LegSecuritySubType::tagVal(const char* data)
  {
    return writeableTagVal<String>("764", 3, data);
  }

  writeableTagVal<Float> AllowableOneSidednessPct::tagVal(float data)
  {
    return writeableTagVal<Float>("765", 3, data);
  }

  writeableTagVal<Float> AllowableOneSidednessValue::tagVal(float data)
  {
    return writeableTagVal<Float>("766", 3, data);
  }

  writeableTagVal<String> AllowableOneSidednessCurr::tagVal(const char* data)
  {
    return writeableTagVal<String>("767", 3, data);
  }

  writeableTagVal<Int> NoTrdRegTimestamps::tagVal(int data)
  {
    return writeableTagVal<Int>("768", 3, data);
  }

  writeableTagVal<DateAndTime> TrdRegTimestamp::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("769", 3, data);
  }

  writeableTagVal<Int> TrdRegTimestampType::tagVal(int data)
  {
    return writeableTagVal<Int>("770", 3, data);
  }

  writeableTagVal<String> TrdRegTimestampOrigin::tagVal(const char* data)
  {
    return writeableTagVal<String>("771", 3, data);
  }

  writeableTagVal<String> ConfirmRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("772", 3, data);
  }

  writeableTagVal<Int> ConfirmType::tagVal(int data)
  {
    return writeableTagVal<Int>("773", 3, data);
  }

  writeableTagVal<Int> ConfirmRejReason::tagVal(int data)
  {
    return writeableTagVal<Int>("774", 3, data);
  }

  writeableTagVal<Int> BookingType::tagVal(int data)
  {
    return writeableTagVal<Int>("775", 3, data);
  }

  writeableTagVal<Int> IndividualAllocRejCode::tagVal(int data)
  {
    return writeableTagVal<Int>("776", 3, data);
  }

  writeableTagVal<String> SettlInstMsgID::tagVal(const char* data)
  {
    return writeableTagVal<String>("777", 3, data);
  }

  writeableTagVal<Int> NoSettlInst::tagVal(int data)
  {
    return writeableTagVal<Int>("778", 3, data);
  }

  writeableTagVal<DateAndTime> LastUpdateTime::tagVal(DateAndTime data)
  {
    return writeableTagVal<DateAndTime>("779", 3, data);
  }

  writeableTagVal<Int> AllocSettlInstType::tagVal(int data)
  {
    return writeableTagVal<Int>("780", 3, data);
  }

  writeableTagVal<Int> NoSettlPartyIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("781", 3, data);
  }

  writeableTagVal<String> SettlPartyID::tagVal(const char* data)
  {
    return writeableTagVal<String>("782", 3, data);
  }

  writeableTagVal<Char> SettlPartyIDSource::tagVal(char data)
  {
    return writeableTagVal<Char>("783", 3, data);
  }

  writeableTagVal<Int> SettlPartyRole::tagVal(int data)
  {
    return writeableTagVal<Int>("784", 3, data);
  }

  writeableTagVal<String> SettlPartySubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("785", 3, data);
  }

  writeableTagVal<Int> SettlPartySubIDType::tagVal(int data)
  {
    return writeableTagVal<Int>("786", 3, data);
  }

  writeableTagVal<Char> DlvyInstType::tagVal(char data)
  {
    return writeableTagVal<Char>("787", 3, data);
  }

  writeableTagVal<Int> TerminationType::tagVal(int data)
  {
    return writeableTagVal<Int>("788", 3, data);
  }

  writeableTagVal<Int> NextExpectedMsgSeqNum::tagVal(int data)
  {
    return writeableTagVal<Int>("789", 3, data);
  }

  writeableTagVal<String> OrdStatusReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("790", 3, data);
  }

  writeableTagVal<String> SettlInstReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("791", 3, data);
  }

  writeableTagVal<Int> SettlInstReqRejCode::tagVal(int data)
  {
    return writeableTagVal<Int>("792", 3, data);
  }

  writeableTagVal<String> SecondaryAllocID::tagVal(const char* data)
  {
    return writeableTagVal<String>("793", 3, data);
  }

  writeableTagVal<Int> AllocReportType::tagVal(int data)
  {
    return writeableTagVal<Int>("794", 3, data);
  }

  writeableTagVal<String> AllocReportRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("795", 3, data);
  }

  writeableTagVal<Int> AllocCancReplaceReason::tagVal(int data)
  {
    return writeableTagVal<Int>("796", 3, data);
  }

  writeableTagVal<Boolean> CopyMsgIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("797", 3, data);
  }

  writeableTagVal<Int> AllocAccountType::tagVal(int data)
  {
    return writeableTagVal<Int>("798", 3, data);
  }

  writeableTagVal<Float> OrderAvgPx::tagVal(float data)
  {
    return writeableTagVal<Float>("799", 3, data);
  }

  writeableTagVal<Float> OrderBookingQty::tagVal(float data)
  {
    return writeableTagVal<Float>("800", 3, data);
  }

  writeableTagVal<Int> NoSettlPartySubIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("801", 3, data);
  }

  writeableTagVal<Int> NoPartySubIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("802", 3, data);
  }

  writeableTagVal<Int> PartySubIDType::tagVal(int data)
  {
    return writeableTagVal<Int>("803", 3, data);
  }

  writeableTagVal<Int> NoNestedPartySubIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("804", 3, data);
  }

  writeableTagVal<Int> NestedPartySubIDType::tagVal(int data)
  {
    return writeableTagVal<Int>("805", 3, data);
  }

  writeableTagVal<Int> NoNested2PartySubIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("806", 3, data);
  }

  writeableTagVal<Int> Nested2PartySubIDType::tagVal(int data)
  {
    return writeableTagVal<Int>("807", 3, data);
  }

  writeableTagVal<Int> AllocIntermedReqType::tagVal(int data)
  {
    return writeableTagVal<Int>("808", 3, data);
  }

  writeableTagVal<Float> UnderlyingPx::tagVal(float data)
  {
    return writeableTagVal<Float>("810", 3, data);
  }

  writeableTagVal<Float> PriceDelta::tagVal(float data)
  {
    return writeableTagVal<Float>("811", 3, data);
  }

  writeableTagVal<Int> ApplQueueMax::tagVal(int data)
  {
    return writeableTagVal<Int>("812", 3, data);
  }

  writeableTagVal<Int> ApplQueueDepth::tagVal(int data)
  {
    return writeableTagVal<Int>("813", 3, data);
  }

  writeableTagVal<Int> ApplQueueResolution::tagVal(int data)
  {
    return writeableTagVal<Int>("814", 3, data);
  }

  writeableTagVal<Int> ApplQueueAction::tagVal(int data)
  {
    return writeableTagVal<Int>("815", 3, data);
  }

  writeableTagVal<Int> NoAltMDSource::tagVal(int data)
  {
    return writeableTagVal<Int>("816", 3, data);
  }

  writeableTagVal<String> AltMDSourceID::tagVal(const char* data)
  {
    return writeableTagVal<String>("817", 3, data);
  }

  writeableTagVal<String> SecondaryTradeReportID::tagVal(const char* data)
  {
    return writeableTagVal<String>("818", 3, data);
  }

  writeableTagVal<Int> AvgPxIndicator::tagVal(int data)
  {
    return writeableTagVal<Int>("819", 3, data);
  }

  writeableTagVal<String> TradeLinkID::tagVal(const char* data)
  {
    return writeableTagVal<String>("820", 3, data);
  }

  writeableTagVal<String> OrderInputDevice::tagVal(const char* data)
  {
    return writeableTagVal<String>("821", 3, data);
  }

  writeableTagVal<String> UnderlyingTradingSessionID::tagVal(const char* data)
  {
    return writeableTagVal<String>("822", 3, data);
  }

  writeableTagVal<String> UnderlyingTradingSessionSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("823", 3, data);
  }

  writeableTagVal<String> TradeLegRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("824", 3, data);
  }

  writeableTagVal<String> ExchangeRule::tagVal(const char* data)
  {
    return writeableTagVal<String>("825", 3, data);
  }

  writeableTagVal<Int> TradeAllocIndicator::tagVal(int data)
  {
    return writeableTagVal<Int>("826", 3, data);
  }

  writeableTagVal<Int> ExpirationCycle::tagVal(int data)
  {
    return writeableTagVal<Int>("827", 3, data);
  }

  writeableTagVal<Int> TrdType::tagVal(int data)
  {
    return writeableTagVal<Int>("828", 3, data);
  }

  writeableTagVal<Int> TrdSubType::tagVal(int data)
  {
    return writeableTagVal<Int>("829", 3, data);
  }

  writeableTagVal<String> TransferReason::tagVal(const char* data)
  {
    return writeableTagVal<String>("830", 3, data);
  }

  writeableTagVal<String> AsgnReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("831", 3, data);
  }

  writeableTagVal<Int> TotNumAssignmentReports::tagVal(int data)
  {
    return writeableTagVal<Int>("832", 3, data);
  }

  writeableTagVal<String> AsgnRptID::tagVal(const char* data)
  {
    return writeableTagVal<String>("833", 3, data);
  }

  writeableTagVal<Float> ThresholdAmount::tagVal(float data)
  {
    return writeableTagVal<Float>("834", 3, data);
  }

  writeableTagVal<Int> PegMoveType::tagVal(int data)
  {
    return writeableTagVal<Int>("835", 3, data);
  }

  writeableTagVal<Int> PegOffsetType::tagVal(int data)
  {
    return writeableTagVal<Int>("836", 3, data);
  }

  writeableTagVal<Int> PegLimitType::tagVal(int data)
  {
    return writeableTagVal<Int>("837", 3, data);
  }

  writeableTagVal<Int> PegRoundDirection::tagVal(int data)
  {
    return writeableTagVal<Int>("838", 3, data);
  }

  writeableTagVal<Float> PeggedPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("839", 3, data);
  }

  writeableTagVal<Int> PegScope::tagVal(int data)
  {
    return writeableTagVal<Int>("840", 3, data);
  }

  writeableTagVal<Int> DiscretionMoveType::tagVal(int data)
  {
    return writeableTagVal<Int>("841", 3, data);
  }

  writeableTagVal<Int> DiscretionOffsetType::tagVal(int data)
  {
    return writeableTagVal<Int>("842", 3, data);
  }

  writeableTagVal<Int> DiscretionLimitType::tagVal(int data)
  {
    return writeableTagVal<Int>("843", 3, data);
  }

  writeableTagVal<Int> DiscretionRoundDirection::tagVal(int data)
  {
    return writeableTagVal<Int>("844", 3, data);
  }

  writeableTagVal<Float> DiscretionPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("845", 3, data);
  }

  writeableTagVal<Int> DiscretionScope::tagVal(int data)
  {
    return writeableTagVal<Int>("846", 3, data);
  }

  writeableTagVal<Int> TargetStrategy::tagVal(int data)
  {
    return writeableTagVal<Int>("847", 3, data);
  }

  writeableTagVal<String> TargetStrategyParameters::tagVal(const char* data)
  {
    return writeableTagVal<String>("848", 3, data);
  }

  writeableTagVal<Float> ParticipationRate::tagVal(float data)
  {
    return writeableTagVal<Float>("849", 3, data);
  }

  writeableTagVal<Float> TargetStrategyPerformance::tagVal(float data)
  {
    return writeableTagVal<Float>("850", 3, data);
  }

  writeableTagVal<Int> LastLiquidityInd::tagVal(int data)
  {
    return writeableTagVal<Int>("851", 3, data);
  }

  writeableTagVal<Boolean> PublishTrdIndicator::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("852", 3, data);
  }

  writeableTagVal<Int> ShortSaleReason::tagVal(int data)
  {
    return writeableTagVal<Int>("853", 3, data);
  }

  writeableTagVal<Int> QtyType::tagVal(int data)
  {
    return writeableTagVal<Int>("854", 3, data);
  }

  writeableTagVal<Int> SecondaryTrdType::tagVal(int data)
  {
    return writeableTagVal<Int>("855", 3, data);
  }

  writeableTagVal<Int> TradeReportType::tagVal(int data)
  {
    return writeableTagVal<Int>("856", 3, data);
  }

  writeableTagVal<Int> AllocNoOrdersType::tagVal(int data)
  {
    return writeableTagVal<Int>("857", 3, data);
  }

  writeableTagVal<Float> SharedCommission::tagVal(float data)
  {
    return writeableTagVal<Float>("858", 3, data);
  }

  writeableTagVal<String> ConfirmReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("859", 3, data);
  }

  writeableTagVal<Float> AvgParPx::tagVal(float data)
  {
    return writeableTagVal<Float>("860", 3, data);
  }

  writeableTagVal<Float> ReportedPx::tagVal(float data)
  {
    return writeableTagVal<Float>("861", 3, data);
  }

  writeableTagVal<Int> NoCapacities::tagVal(int data)
  {
    return writeableTagVal<Int>("862", 3, data);
  }

  writeableTagVal<Float> OrderCapacityQty::tagVal(float data)
  {
    return writeableTagVal<Float>("863", 3, data);
  }

  writeableTagVal<Int> NoEvents::tagVal(int data)
  {
    return writeableTagVal<Int>("864", 3, data);
  }

  writeableTagVal<Int> EventType::tagVal(int data)
  {
    return writeableTagVal<Int>("865", 3, data);
  }

  writeableTagVal<Date> EventDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("866", 3, data);
  }

  writeableTagVal<Float> EventPx::tagVal(float data)
  {
    return writeableTagVal<Float>("867", 3, data);
  }

  writeableTagVal<String> EventText::tagVal(const char* data)
  {
    return writeableTagVal<String>("868", 3, data);
  }

  writeableTagVal<Float> PctAtRisk::tagVal(float data)
  {
    return writeableTagVal<Float>("869", 3, data);
  }

  writeableTagVal<Int> NoInstrAttrib::tagVal(int data)
  {
    return writeableTagVal<Int>("870", 3, data);
  }

  writeableTagVal<Int> InstrAttribType::tagVal(int data)
  {
    return writeableTagVal<Int>("871", 3, data);
  }

  writeableTagVal<String> InstrAttribValue::tagVal(const char* data)
  {
    return writeableTagVal<String>("872", 3, data);
  }

  writeableTagVal<Date> DatedDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("873", 3, data);
  }

  writeableTagVal<Date> InterestAccrualDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("874", 3, data);
  }

  writeableTagVal<Int> CPProgram::tagVal(int data)
  {
    return writeableTagVal<Int>("875", 3, data);
  }

  writeableTagVal<String> CPRegType::tagVal(const char* data)
  {
    return writeableTagVal<String>("876", 3, data);
  }

  writeableTagVal<String> UnderlyingCPProgram::tagVal(const char* data)
  {
    return writeableTagVal<String>("877", 3, data);
  }

  writeableTagVal<String> UnderlyingCPRegType::tagVal(const char* data)
  {
    return writeableTagVal<String>("878", 3, data);
  }

  writeableTagVal<Float> UnderlyingQty::tagVal(float data)
  {
    return writeableTagVal<Float>("879", 3, data);
  }

  writeableTagVal<String> TrdMatchID::tagVal(const char* data)
  {
    return writeableTagVal<String>("880", 3, data);
  }

  writeableTagVal<String> SecondaryTradeReportRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("881", 3, data);
  }

  writeableTagVal<Float> UnderlyingDirtyPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("882", 3, data);
  }

  writeableTagVal<Float> UnderlyingEndPrice::tagVal(float data)
  {
    return writeableTagVal<Float>("883", 3, data);
  }

  writeableTagVal<Float> UnderlyingStartValue::tagVal(float data)
  {
    return writeableTagVal<Float>("884", 3, data);
  }

  writeableTagVal<Float> UnderlyingCurrentValue::tagVal(float data)
  {
    return writeableTagVal<Float>("885", 3, data);
  }

  writeableTagVal<Float> UnderlyingEndValue::tagVal(float data)
  {
    return writeableTagVal<Float>("886", 3, data);
  }

  writeableTagVal<Int> NoUnderlyingStips::tagVal(int data)
  {
    return writeableTagVal<Int>("887", 3, data);
  }

  writeableTagVal<String> UnderlyingStipType::tagVal(const char* data)
  {
    return writeableTagVal<String>("888", 3, data);
  }

  writeableTagVal<String> UnderlyingStipValue::tagVal(const char* data)
  {
    return writeableTagVal<String>("889", 3, data);
  }

  writeableTagVal<Float> MaturityNetMoney::tagVal(float data)
  {
    return writeableTagVal<Float>("890", 3, data);
  }

  writeableTagVal<Int> MiscFeeBasis::tagVal(int data)
  {
    return writeableTagVal<Int>("891", 3, data);
  }

  writeableTagVal<Int> TotNoAllocs::tagVal(int data)
  {
    return writeableTagVal<Int>("892", 3, data);
  }

  writeableTagVal<Boolean> LastFragment::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("893", 3, data);
  }

  writeableTagVal<String> CollReqID::tagVal(const char* data)
  {
    return writeableTagVal<String>("894", 3, data);
  }

  writeableTagVal<Int> CollAsgnReason::tagVal(int data)
  {
    return writeableTagVal<Int>("895", 3, data);
  }

  writeableTagVal<Int> CollInquiryQualifier::tagVal(int data)
  {
    return writeableTagVal<Int>("896", 3, data);
  }

  writeableTagVal<Int> NoTrades::tagVal(int data)
  {
    return writeableTagVal<Int>("897", 3, data);
  }

  writeableTagVal<Float> MarginRatio::tagVal(float data)
  {
    return writeableTagVal<Float>("898", 3, data);
  }

  writeableTagVal<Float> MarginExcess::tagVal(float data)
  {
    return writeableTagVal<Float>("899", 3, data);
  }

  writeableTagVal<Float> TotalNetValue::tagVal(float data)
  {
    return writeableTagVal<Float>("900", 3, data);
  }

  writeableTagVal<Float> CashOutstanding::tagVal(float data)
  {
    return writeableTagVal<Float>("901", 3, data);
  }

  writeableTagVal<String> CollAsgnID::tagVal(const char* data)
  {
    return writeableTagVal<String>("902", 3, data);
  }

  writeableTagVal<Int> CollAsgnTransType::tagVal(int data)
  {
    return writeableTagVal<Int>("903", 3, data);
  }

  writeableTagVal<String> CollRespID::tagVal(const char* data)
  {
    return writeableTagVal<String>("904", 3, data);
  }

  writeableTagVal<Int> CollAsgnRespType::tagVal(int data)
  {
    return writeableTagVal<Int>("905", 3, data);
  }

  writeableTagVal<Int> CollAsgnRejectReason::tagVal(int data)
  {
    return writeableTagVal<Int>("906", 3, data);
  }

  writeableTagVal<String> CollAsgnRefID::tagVal(const char* data)
  {
    return writeableTagVal<String>("907", 3, data);
  }

  writeableTagVal<String> CollRptID::tagVal(const char* data)
  {
    return writeableTagVal<String>("908", 3, data);
  }

  writeableTagVal<String> CollInquiryID::tagVal(const char* data)
  {
    return writeableTagVal<String>("909", 3, data);
  }

  writeableTagVal<Int> CollStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("910", 3, data);
  }

  writeableTagVal<Int> TotNumReports::tagVal(int data)
  {
    return writeableTagVal<Int>("911", 3, data);
  }

  writeableTagVal<Boolean> LastRptRequested::tagVal(bool data)
  {
    return writeableTagVal<Boolean>("912", 3, data);
  }

  writeableTagVal<String> AgreementDesc::tagVal(const char* data)
  {
    return writeableTagVal<String>("913", 3, data);
  }

  writeableTagVal<String> AgreementID::tagVal(const char* data)
  {
    return writeableTagVal<String>("914", 3, data);
  }

  writeableTagVal<Date> AgreementDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("915", 3, data);
  }

  writeableTagVal<Date> StartDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("916", 3, data);
  }

  writeableTagVal<Date> EndDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("917", 3, data);
  }

  writeableTagVal<String> AgreementCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("918", 3, data);
  }

  writeableTagVal<Int> DeliveryType::tagVal(int data)
  {
    return writeableTagVal<Int>("919", 3, data);
  }

  writeableTagVal<Float> EndAccruedInterestAmt::tagVal(float data)
  {
    return writeableTagVal<Float>("920", 3, data);
  }

  writeableTagVal<Float> StartCash::tagVal(float data)
  {
    return writeableTagVal<Float>("921", 3, data);
  }

  writeableTagVal<Float> EndCash::tagVal(float data)
  {
    return writeableTagVal<Float>("922", 3, data);
  }

  writeableTagVal<String> UserRequestID::tagVal(const char* data)
  {
    return writeableTagVal<String>("923", 3, data);
  }

  writeableTagVal<Int> UserRequestType::tagVal(int data)
  {
    return writeableTagVal<Int>("924", 3, data);
  }

  writeableTagVal<String> NewPassword::tagVal(const char* data)
  {
    return writeableTagVal<String>("925", 3, data);
  }

  writeableTagVal<Int> UserStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("926", 3, data);
  }

  writeableTagVal<String> UserStatusText::tagVal(const char* data)
  {
    return writeableTagVal<String>("927", 3, data);
  }

  writeableTagVal<Int> StatusValue::tagVal(int data)
  {
    return writeableTagVal<Int>("928", 3, data);
  }

  writeableTagVal<String> StatusText::tagVal(const char* data)
  {
    return writeableTagVal<String>("929", 3, data);
  }

  writeableTagVal<String> RefCompID::tagVal(const char* data)
  {
    return writeableTagVal<String>("930", 3, data);
  }

  writeableTagVal<String> RefSubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("931", 3, data);
  }

  writeableTagVal<String> NetworkResponseID::tagVal(const char* data)
  {
    return writeableTagVal<String>("932", 3, data);
  }

  writeableTagVal<String> NetworkRequestID::tagVal(const char* data)
  {
    return writeableTagVal<String>("933", 3, data);
  }

  writeableTagVal<String> LastNetworkResponseID::tagVal(const char* data)
  {
    return writeableTagVal<String>("934", 3, data);
  }

  writeableTagVal<Int> NetworkRequestType::tagVal(int data)
  {
    return writeableTagVal<Int>("935", 3, data);
  }

  writeableTagVal<Int> NoCompIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("936", 3, data);
  }

  writeableTagVal<Int> NetworkStatusResponseType::tagVal(int data)
  {
    return writeableTagVal<Int>("937", 3, data);
  }

  writeableTagVal<Int> NoCollInquiryQualifier::tagVal(int data)
  {
    return writeableTagVal<Int>("938", 3, data);
  }

  writeableTagVal<Int> TrdRptStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("939", 3, data);
  }

  writeableTagVal<Int> AffirmStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("940", 3, data);
  }

  writeableTagVal<String> UnderlyingStrikeCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("941", 3, data);
  }

  writeableTagVal<String> LegStrikeCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("942", 3, data);
  }

  writeableTagVal<String> TimeBracket::tagVal(const char* data)
  {
    return writeableTagVal<String>("943", 3, data);
  }

  writeableTagVal<Int> CollAction::tagVal(int data)
  {
    return writeableTagVal<Int>("944", 3, data);
  }

  writeableTagVal<Int> CollInquiryStatus::tagVal(int data)
  {
    return writeableTagVal<Int>("945", 3, data);
  }

  writeableTagVal<Int> CollInquiryResult::tagVal(int data)
  {
    return writeableTagVal<Int>("946", 3, data);
  }

  writeableTagVal<String> StrikeCurrency::tagVal(const char* data)
  {
    return writeableTagVal<String>("947", 3, data);
  }

  writeableTagVal<Int> NoNested3PartyIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("948", 3, data);
  }

  writeableTagVal<String> Nested3PartyID::tagVal(const char* data)
  {
    return writeableTagVal<String>("949", 3, data);
  }

  writeableTagVal<Char> Nested3PartyIDSource::tagVal(char data)
  {
    return writeableTagVal<Char>("950", 3, data);
  }

  writeableTagVal<Int> Nested3PartyRole::tagVal(int data)
  {
    return writeableTagVal<Int>("951", 3, data);
  }

  writeableTagVal<Int> NoNested3PartySubIDs::tagVal(int data)
  {
    return writeableTagVal<Int>("952", 3, data);
  }

  writeableTagVal<String> Nested3PartySubID::tagVal(const char* data)
  {
    return writeableTagVal<String>("953", 3, data);
  }

  writeableTagVal<Int> Nested3PartySubIDType::tagVal(int data)
  {
    return writeableTagVal<Int>("954", 3, data);
  }

  writeableTagVal<MonthYear> LegContractSettlMonth::tagVal(MonthYear data)
  {
    return writeableTagVal<MonthYear>("955", 3, data);
  }

  writeableTagVal<Date> LegInterestAccrualDate::tagVal(Date data)
  {
    return writeableTagVal<Date>("956", 3, data);
  }

std::string toHuman(int tag, const char* val)
{
  std::string res;
  bool foundValue = false;
  switch(tag)
  {
  case FIX::Account::tag: {
    res = "Account = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvId::tag: {
    res = "AdvId = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvRefID::tag: {
    res = "AdvRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvSide::tag: {
    FIX::Char value = charOfStr(val);
    res = "AdvSide = ";
    if(value == FIX::AdvSide::valBuy)
    {
      foundValue = true;
      res += "Buy";
    }
    if(value == FIX::AdvSide::valSell)
    {
      foundValue = true;
      res += "Sell";
    }
    if(value == FIX::AdvSide::valCross)
    {
      foundValue = true;
      res += "Cross";
    }
    if(value == FIX::AdvSide::valTrade)
    {
      foundValue = true;
      res += "Trade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvTransType::tag: {
    FIX::String value = stringOfStr(val);
    res = "AdvTransType = ";
    if(!strcmp(value, FIX::AdvTransType::valNew))
    {
      foundValue = true;
      res += "New";
    }
    if(!strcmp(value, FIX::AdvTransType::valCancel))
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!strcmp(value, FIX::AdvTransType::valReplace))
    {
      foundValue = true;
      res += "Replace";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgPx::tag: {
    res = "AvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BeginSeqNo::tag: {
    res = "BeginSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BeginString::tag: {
    FIX::String value = stringOfStr(val);
    res = "BeginString = ";
    if(!strcmp(value, FIX::BeginString::valFIX44))
    {
      foundValue = true;
      res += "FIX44";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BodyLength::tag: {
    res = "BodyLength = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CheckSum::tag: {
    res = "CheckSum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClOrdID::tag: {
    res = "ClOrdID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Commission::tag: {
    res = "Commission = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CommType::tag: {
    FIX::Char value = charOfStr(val);
    res = "CommType = ";
    if(value == FIX::CommType::valPerUnit)
    {
      foundValue = true;
      res += "PerUnit";
    }
    if(value == FIX::CommType::valPercentage)
    {
      foundValue = true;
      res += "Percentage";
    }
    if(value == FIX::CommType::valAbsolute)
    {
      foundValue = true;
      res += "Absolute";
    }
    if(value == FIX::CommType::valPercentageWaivedCashDiscount)
    {
      foundValue = true;
      res += "PercentageWaivedCashDiscount";
    }
    if(value == FIX::CommType::valPercentageWaivedEnhancedUnits)
    {
      foundValue = true;
      res += "PercentageWaivedEnhancedUnits";
    }
    if(value == FIX::CommType::valPointsPerBondOrOrContractSupplyContractMultiplier)
    {
      foundValue = true;
      res += "PointsPerBondOrOrContractSupplyContractMultiplier";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CumQty::tag: {
    res = "CumQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Currency::tag: {
    res = "Currency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndSeqNo::tag: {
    res = "EndSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecID::tag: {
    res = "ExecID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecInst::tag: {
    res = "ExecInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecRefID::tag: {
    res = "ExecRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecTransType::tag: {
    FIX::Char value = charOfStr(val);
    res = "ExecTransType = ";
    if(value == FIX::ExecTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::ExecTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value == FIX::ExecTransType::valCorrect)
    {
      foundValue = true;
      res += "Correct";
    }
    if(value == FIX::ExecTransType::valStatus)
    {
      foundValue = true;
      res += "Status";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::HandlInst::tag: {
    FIX::Char value = charOfStr(val);
    res = "HandlInst = ";
    if(value == FIX::HandlInst::valAutomatedExecutionOrderPrivateNoBrokerIntervention)
    {
      foundValue = true;
      res += "AutomatedExecutionOrderPrivateNoBrokerIntervention";
    }
    if(value == FIX::HandlInst::valAutomatedExecutionOrderPublicBrokerInterventionOK)
    {
      foundValue = true;
      res += "AutomatedExecutionOrderPublicBrokerInterventionOK";
    }
    if(value == FIX::HandlInst::valManualOrderBestExecution)
    {
      foundValue = true;
      res += "ManualOrderBestExecution";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityIDSource::tag: {
    FIX::String value = stringOfStr(val);
    res = "SecurityIDSource = ";
    if(!strcmp(value, FIX::SecurityIDSource::valCUSIP))
    {
      foundValue = true;
      res += "CUSIP";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valSEDOL))
    {
      foundValue = true;
      res += "SEDOL";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valQUIK))
    {
      foundValue = true;
      res += "QUIK";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valISINNumber))
    {
      foundValue = true;
      res += "ISINNumber";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valRICCode))
    {
      foundValue = true;
      res += "RICCode";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valISOCurrencyCode))
    {
      foundValue = true;
      res += "ISOCurrencyCode";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valISOCountryCode))
    {
      foundValue = true;
      res += "ISOCountryCode";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valExchangeSymbol))
    {
      foundValue = true;
      res += "ExchangeSymbol";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valConsolidatedTapeAssociationCTASymbol))
    {
      foundValue = true;
      res += "ConsolidatedTapeAssociationCTASymbol";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valBloombergSymbol))
    {
      foundValue = true;
      res += "BloombergSymbol";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valWertpapier))
    {
      foundValue = true;
      res += "Wertpapier";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valDutch))
    {
      foundValue = true;
      res += "Dutch";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valValoren))
    {
      foundValue = true;
      res += "Valoren";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valSicovam))
    {
      foundValue = true;
      res += "Sicovam";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valBelgian))
    {
      foundValue = true;
      res += "Belgian";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valCommon))
    {
      foundValue = true;
      res += "Common";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valClearingHouseOrClearingOrganization))
    {
      foundValue = true;
      res += "ClearingHouseOrClearingOrganization";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valISDAOrFpMLProductSpecification))
    {
      foundValue = true;
      res += "ISDAOrFpMLProductSpecification";
    }
    if(!strcmp(value, FIX::SecurityIDSource::valOptionsPriceReportingAuthority))
    {
      foundValue = true;
      res += "OptionsPriceReportingAuthority";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIID::tag: {
    res = "IOIID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIOthSv::tag: {
    res = "IOIOthSv = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIQltyInd::tag: {
    FIX::Char value = charOfStr(val);
    res = "IOIQltyInd = ";
    if(value == FIX::IOIQltyInd::valLow)
    {
      foundValue = true;
      res += "Low";
    }
    if(value == FIX::IOIQltyInd::valMedium)
    {
      foundValue = true;
      res += "Medium";
    }
    if(value == FIX::IOIQltyInd::valHigh)
    {
      foundValue = true;
      res += "High";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIRefID::tag: {
    res = "IOIRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIQty::tag: {
    FIX::String value = stringOfStr(val);
    res = "IOIQty = ";
    if(!strcmp(value, FIX::IOIQty::valZero))
    {
      foundValue = true;
      res += "Zero";
    }
    if(!strcmp(value, FIX::IOIQty::valSmall))
    {
      foundValue = true;
      res += "Small";
    }
    if(!strcmp(value, FIX::IOIQty::valMedium))
    {
      foundValue = true;
      res += "Medium";
    }
    if(!strcmp(value, FIX::IOIQty::valLarge))
    {
      foundValue = true;
      res += "Large";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOITransType::tag: {
    FIX::Char value = charOfStr(val);
    res = "IOITransType = ";
    if(value == FIX::IOITransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::IOITransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value == FIX::IOITransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastCapacity::tag: {
    FIX::Char value = charOfStr(val);
    res = "LastCapacity = ";
    if(value == FIX::LastCapacity::valAgent)
    {
      foundValue = true;
      res += "Agent";
    }
    if(value == FIX::LastCapacity::valCrossAsAgent)
    {
      foundValue = true;
      res += "CrossAsAgent";
    }
    if(value == FIX::LastCapacity::valCrossAsPrincipal)
    {
      foundValue = true;
      res += "CrossAsPrincipal";
    }
    if(value == FIX::LastCapacity::valPrincipal)
    {
      foundValue = true;
      res += "Principal";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastMkt::tag: {
    res = "LastMkt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastPx::tag: {
    res = "LastPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastQty::tag: {
    res = "LastQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLinesOfText::tag: {
    res = "NoLinesOfText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MsgSeqNum::tag: {
    res = "MsgSeqNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MsgType::tag: {
    FIX::String value = stringOfStr(val);
    res = "MsgType = ";
    if(!strcmp(value, FIX::MsgType::valHeartbeat))
    {
      foundValue = true;
      res += "Heartbeat";
    }
    if(!strcmp(value, FIX::MsgType::valTestRequest))
    {
      foundValue = true;
      res += "TestRequest";
    }
    if(!strcmp(value, FIX::MsgType::valResendRequest))
    {
      foundValue = true;
      res += "ResendRequest";
    }
    if(!strcmp(value, FIX::MsgType::valReject))
    {
      foundValue = true;
      res += "Reject";
    }
    if(!strcmp(value, FIX::MsgType::valSequenceReset))
    {
      foundValue = true;
      res += "SequenceReset";
    }
    if(!strcmp(value, FIX::MsgType::valLogout))
    {
      foundValue = true;
      res += "Logout";
    }
    if(!strcmp(value, FIX::MsgType::valIndicationOfInterest))
    {
      foundValue = true;
      res += "IndicationOfInterest";
    }
    if(!strcmp(value, FIX::MsgType::valAdvertisement))
    {
      foundValue = true;
      res += "Advertisement";
    }
    if(!strcmp(value, FIX::MsgType::valExecutionReport))
    {
      foundValue = true;
      res += "ExecutionReport";
    }
    if(!strcmp(value, FIX::MsgType::valOrderCancelReject))
    {
      foundValue = true;
      res += "OrderCancelReject";
    }
    if(!strcmp(value, FIX::MsgType::valLogon))
    {
      foundValue = true;
      res += "Logon";
    }
    if(!strcmp(value, FIX::MsgType::valNews))
    {
      foundValue = true;
      res += "News";
    }
    if(!strcmp(value, FIX::MsgType::valEmail))
    {
      foundValue = true;
      res += "Email";
    }
    if(!strcmp(value, FIX::MsgType::valOrderSingle))
    {
      foundValue = true;
      res += "OrderSingle";
    }
    if(!strcmp(value, FIX::MsgType::valOrderList))
    {
      foundValue = true;
      res += "OrderList";
    }
    if(!strcmp(value, FIX::MsgType::valOrderCancelRequest))
    {
      foundValue = true;
      res += "OrderCancelRequest";
    }
    if(!strcmp(value, FIX::MsgType::valOrderCancelOrReplaceRequest))
    {
      foundValue = true;
      res += "OrderCancelOrReplaceRequest";
    }
    if(!strcmp(value, FIX::MsgType::valOrderStatusRequest))
    {
      foundValue = true;
      res += "OrderStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valAllocationInstruction))
    {
      foundValue = true;
      res += "AllocationInstruction";
    }
    if(!strcmp(value, FIX::MsgType::valListCancelRequest))
    {
      foundValue = true;
      res += "ListCancelRequest";
    }
    if(!strcmp(value, FIX::MsgType::valListExecute))
    {
      foundValue = true;
      res += "ListExecute";
    }
    if(!strcmp(value, FIX::MsgType::valListStatusRequest))
    {
      foundValue = true;
      res += "ListStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valListStatus))
    {
      foundValue = true;
      res += "ListStatus";
    }
    if(!strcmp(value, FIX::MsgType::valAllocationInstructionAck))
    {
      foundValue = true;
      res += "AllocationInstructionAck";
    }
    if(!strcmp(value, FIX::MsgType::valDontKnowTrade))
    {
      foundValue = true;
      res += "DontKnowTrade";
    }
    if(!strcmp(value, FIX::MsgType::valQuoteRequest))
    {
      foundValue = true;
      res += "QuoteRequest";
    }
    if(!strcmp(value, FIX::MsgType::valQuote))
    {
      foundValue = true;
      res += "Quote";
    }
    if(!strcmp(value, FIX::MsgType::valSettlementInstructions))
    {
      foundValue = true;
      res += "SettlementInstructions";
    }
    if(!strcmp(value, FIX::MsgType::valMarketDataRequest))
    {
      foundValue = true;
      res += "MarketDataRequest";
    }
    if(!strcmp(value, FIX::MsgType::valMarketDataSnapshotOrFullRefresh))
    {
      foundValue = true;
      res += "MarketDataSnapshotOrFullRefresh";
    }
    if(!strcmp(value, FIX::MsgType::valMarketDataIncrementalRefresh))
    {
      foundValue = true;
      res += "MarketDataIncrementalRefresh";
    }
    if(!strcmp(value, FIX::MsgType::valMarketDataRequestReject))
    {
      foundValue = true;
      res += "MarketDataRequestReject";
    }
    if(!strcmp(value, FIX::MsgType::valQuoteCancel))
    {
      foundValue = true;
      res += "QuoteCancel";
    }
    if(!strcmp(value, FIX::MsgType::valQuoteStatusRequest))
    {
      foundValue = true;
      res += "QuoteStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valMassQuoteAcknowledgement))
    {
      foundValue = true;
      res += "MassQuoteAcknowledgement";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityDefinitionRequest))
    {
      foundValue = true;
      res += "SecurityDefinitionRequest";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityDefinition))
    {
      foundValue = true;
      res += "SecurityDefinition";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityStatusRequest))
    {
      foundValue = true;
      res += "SecurityStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityStatus))
    {
      foundValue = true;
      res += "SecurityStatus";
    }
    if(!strcmp(value, FIX::MsgType::valTradingSessionStatusRequest))
    {
      foundValue = true;
      res += "TradingSessionStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valTradingSessionStatus))
    {
      foundValue = true;
      res += "TradingSessionStatus";
    }
    if(!strcmp(value, FIX::MsgType::valMassQuote))
    {
      foundValue = true;
      res += "MassQuote";
    }
    if(!strcmp(value, FIX::MsgType::valBusinessMessageReject))
    {
      foundValue = true;
      res += "BusinessMessageReject";
    }
    if(!strcmp(value, FIX::MsgType::valBidRequest))
    {
      foundValue = true;
      res += "BidRequest";
    }
    if(!strcmp(value, FIX::MsgType::valBidResponse))
    {
      foundValue = true;
      res += "BidResponse";
    }
    if(!strcmp(value, FIX::MsgType::valListStrikePrice))
    {
      foundValue = true;
      res += "ListStrikePrice";
    }
    if(!strcmp(value, FIX::MsgType::valXMLMessage))
    {
      foundValue = true;
      res += "XMLMessage";
    }
    if(!strcmp(value, FIX::MsgType::valRegistrationInstructions))
    {
      foundValue = true;
      res += "RegistrationInstructions";
    }
    if(!strcmp(value, FIX::MsgType::valRegistrationInstructionsResponse))
    {
      foundValue = true;
      res += "RegistrationInstructionsResponse";
    }
    if(!strcmp(value, FIX::MsgType::valOrderMassCancelRequest))
    {
      foundValue = true;
      res += "OrderMassCancelRequest";
    }
    if(!strcmp(value, FIX::MsgType::valOrderMassCancelReport))
    {
      foundValue = true;
      res += "OrderMassCancelReport";
    }
    if(!strcmp(value, FIX::MsgType::valNewOrderCross))
    {
      foundValue = true;
      res += "NewOrderCross";
    }
    if(!strcmp(value, FIX::MsgType::valCrossOrderCancelOrReplaceRequest))
    {
      foundValue = true;
      res += "CrossOrderCancelOrReplaceRequest";
    }
    if(!strcmp(value, FIX::MsgType::valCrossOrderCancelRequest))
    {
      foundValue = true;
      res += "CrossOrderCancelRequest";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityTypeRequest))
    {
      foundValue = true;
      res += "SecurityTypeRequest";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityTypes))
    {
      foundValue = true;
      res += "SecurityTypes";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityListRequest))
    {
      foundValue = true;
      res += "SecurityListRequest";
    }
    if(!strcmp(value, FIX::MsgType::valSecurityList))
    {
      foundValue = true;
      res += "SecurityList";
    }
    if(!strcmp(value, FIX::MsgType::valDerivativeSecurityListRequest))
    {
      foundValue = true;
      res += "DerivativeSecurityListRequest";
    }
    if(!strcmp(value, FIX::MsgType::valDerivativeSecurityList))
    {
      foundValue = true;
      res += "DerivativeSecurityList";
    }
    if(!strcmp(value, FIX::MsgType::valNewOrderMultileg))
    {
      foundValue = true;
      res += "NewOrderMultileg";
    }
    if(!strcmp(value, FIX::MsgType::valMultilegOrderCancelOrReplace))
    {
      foundValue = true;
      res += "MultilegOrderCancelOrReplace";
    }
    if(!strcmp(value, FIX::MsgType::valTradeCaptureReportRequest))
    {
      foundValue = true;
      res += "TradeCaptureReportRequest";
    }
    if(!strcmp(value, FIX::MsgType::valTradeCaptureReport))
    {
      foundValue = true;
      res += "TradeCaptureReport";
    }
    if(!strcmp(value, FIX::MsgType::valOrderMassStatusRequest))
    {
      foundValue = true;
      res += "OrderMassStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valQuoteRequestReject))
    {
      foundValue = true;
      res += "QuoteRequestReject";
    }
    if(!strcmp(value, FIX::MsgType::valRFQRequest))
    {
      foundValue = true;
      res += "RFQRequest";
    }
    if(!strcmp(value, FIX::MsgType::valQuoteStatusReport))
    {
      foundValue = true;
      res += "QuoteStatusReport";
    }
    if(!strcmp(value, FIX::MsgType::valQuoteResponse))
    {
      foundValue = true;
      res += "QuoteResponse";
    }
    if(!strcmp(value, FIX::MsgType::valConfirmation))
    {
      foundValue = true;
      res += "Confirmation";
    }
    if(!strcmp(value, FIX::MsgType::valPositionMaintenanceRequest))
    {
      foundValue = true;
      res += "PositionMaintenanceRequest";
    }
    if(!strcmp(value, FIX::MsgType::valPositionMaintenanceReport))
    {
      foundValue = true;
      res += "PositionMaintenanceReport";
    }
    if(!strcmp(value, FIX::MsgType::valRequestForPositions))
    {
      foundValue = true;
      res += "RequestForPositions";
    }
    if(!strcmp(value, FIX::MsgType::valRequestForPositionsAck))
    {
      foundValue = true;
      res += "RequestForPositionsAck";
    }
    if(!strcmp(value, FIX::MsgType::valPositionReport))
    {
      foundValue = true;
      res += "PositionReport";
    }
    if(!strcmp(value, FIX::MsgType::valTradeCaptureReportRequestAck))
    {
      foundValue = true;
      res += "TradeCaptureReportRequestAck";
    }
    if(!strcmp(value, FIX::MsgType::valTradeCaptureReportAck))
    {
      foundValue = true;
      res += "TradeCaptureReportAck";
    }
    if(!strcmp(value, FIX::MsgType::valAllocationReport))
    {
      foundValue = true;
      res += "AllocationReport";
    }
    if(!strcmp(value, FIX::MsgType::valAllocationReportAck))
    {
      foundValue = true;
      res += "AllocationReportAck";
    }
    if(!strcmp(value, FIX::MsgType::valConfirmationAck))
    {
      foundValue = true;
      res += "ConfirmationAck";
    }
    if(!strcmp(value, FIX::MsgType::valSettlementInstructionRequest))
    {
      foundValue = true;
      res += "SettlementInstructionRequest";
    }
    if(!strcmp(value, FIX::MsgType::valAssignmentReport))
    {
      foundValue = true;
      res += "AssignmentReport";
    }
    if(!strcmp(value, FIX::MsgType::valCollateralRequest))
    {
      foundValue = true;
      res += "CollateralRequest";
    }
    if(!strcmp(value, FIX::MsgType::valCollateralAssignment))
    {
      foundValue = true;
      res += "CollateralAssignment";
    }
    if(!strcmp(value, FIX::MsgType::valCollateralResponse))
    {
      foundValue = true;
      res += "CollateralResponse";
    }
    if(!strcmp(value, FIX::MsgType::valCollateralReport))
    {
      foundValue = true;
      res += "CollateralReport";
    }
    if(!strcmp(value, FIX::MsgType::valCollateralInquiry))
    {
      foundValue = true;
      res += "CollateralInquiry";
    }
    if(!strcmp(value, FIX::MsgType::valNetworkCounterpartySystemStatusRequest))
    {
      foundValue = true;
      res += "NetworkCounterpartySystemStatusRequest";
    }
    if(!strcmp(value, FIX::MsgType::valNetworkCounterpartySystemStatusResponse))
    {
      foundValue = true;
      res += "NetworkCounterpartySystemStatusResponse";
    }
    if(!strcmp(value, FIX::MsgType::valUserRequest))
    {
      foundValue = true;
      res += "UserRequest";
    }
    if(!strcmp(value, FIX::MsgType::valUserResponse))
    {
      foundValue = true;
      res += "UserResponse";
    }
    if(!strcmp(value, FIX::MsgType::valCollateralInquiryAck))
    {
      foundValue = true;
      res += "CollateralInquiryAck";
    }
    if(!strcmp(value, FIX::MsgType::valConfirmationRequest))
    {
      foundValue = true;
      res += "ConfirmationRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NewSeqNo::tag: {
    res = "NewSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderID::tag: {
    res = "OrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderQty::tag: {
    res = "OrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdStatus::tag: {
    FIX::Char value = charOfStr(val);
    res = "OrdStatus = ";
    if(value == FIX::OrdStatus::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::OrdStatus::valPartiallyFilled)
    {
      foundValue = true;
      res += "PartiallyFilled";
    }
    if(value == FIX::OrdStatus::valFilled)
    {
      foundValue = true;
      res += "Filled";
    }
    if(value == FIX::OrdStatus::valDoneForDay)
    {
      foundValue = true;
      res += "DoneForDay";
    }
    if(value == FIX::OrdStatus::valCanceled)
    {
      foundValue = true;
      res += "Canceled";
    }
    if(value == FIX::OrdStatus::valReplaced)
    {
      foundValue = true;
      res += "Replaced";
    }
    if(value == FIX::OrdStatus::valPendingCancel)
    {
      foundValue = true;
      res += "PendingCancel";
    }
    if(value == FIX::OrdStatus::valStopped)
    {
      foundValue = true;
      res += "Stopped";
    }
    if(value == FIX::OrdStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value == FIX::OrdStatus::valSuspended)
    {
      foundValue = true;
      res += "Suspended";
    }
    if(value == FIX::OrdStatus::valPendingNew)
    {
      foundValue = true;
      res += "PendingNew";
    }
    if(value == FIX::OrdStatus::valCalculated)
    {
      foundValue = true;
      res += "Calculated";
    }
    if(value == FIX::OrdStatus::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value == FIX::OrdStatus::valAcceptedForBidding)
    {
      foundValue = true;
      res += "AcceptedForBidding";
    }
    if(value == FIX::OrdStatus::valPendingReplace)
    {
      foundValue = true;
      res += "PendingReplace";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdType::tag: {
    FIX::Char value = charOfStr(val);
    res = "OrdType = ";
    if(value == FIX::OrdType::valMarket)
    {
      foundValue = true;
      res += "Market";
    }
    if(value == FIX::OrdType::valLimit)
    {
      foundValue = true;
      res += "Limit";
    }
    if(value == FIX::OrdType::valStop)
    {
      foundValue = true;
      res += "Stop";
    }
    if(value == FIX::OrdType::valStopLimit)
    {
      foundValue = true;
      res += "StopLimit";
    }
    if(value == FIX::OrdType::valMarketOnClose)
    {
      foundValue = true;
      res += "MarketOnClose";
    }
    if(value == FIX::OrdType::valWithOrWithout)
    {
      foundValue = true;
      res += "WithOrWithout";
    }
    if(value == FIX::OrdType::valLimitOrBetter)
    {
      foundValue = true;
      res += "LimitOrBetter";
    }
    if(value == FIX::OrdType::valLimitWithOrWithout)
    {
      foundValue = true;
      res += "LimitWithOrWithout";
    }
    if(value == FIX::OrdType::valOnBasis)
    {
      foundValue = true;
      res += "OnBasis";
    }
    if(value == FIX::OrdType::valOnClose)
    {
      foundValue = true;
      res += "OnClose";
    }
    if(value == FIX::OrdType::valLimitOnClose)
    {
      foundValue = true;
      res += "LimitOnClose";
    }
    if(value == FIX::OrdType::valForexMarket)
    {
      foundValue = true;
      res += "ForexMarket";
    }
    if(value == FIX::OrdType::valPreviouslyQuoted)
    {
      foundValue = true;
      res += "PreviouslyQuoted";
    }
    if(value == FIX::OrdType::valPreviouslyIndicated)
    {
      foundValue = true;
      res += "PreviouslyIndicated";
    }
    if(value == FIX::OrdType::valForexLimit)
    {
      foundValue = true;
      res += "ForexLimit";
    }
    if(value == FIX::OrdType::valForexSwap)
    {
      foundValue = true;
      res += "ForexSwap";
    }
    if(value == FIX::OrdType::valForexPreviouslyQuoted)
    {
      foundValue = true;
      res += "ForexPreviouslyQuoted";
    }
    if(value == FIX::OrdType::valFunari)
    {
      foundValue = true;
      res += "Funari";
    }
    if(value == FIX::OrdType::valMarketIfTouched)
    {
      foundValue = true;
      res += "MarketIfTouched";
    }
    if(value == FIX::OrdType::valMarketWithLeftoverAsLimit)
    {
      foundValue = true;
      res += "MarketWithLeftoverAsLimit";
    }
    if(value == FIX::OrdType::valPreviousFundValuationPointHistoricPricing)
    {
      foundValue = true;
      res += "PreviousFundValuationPointHistoricPricing";
    }
    if(value == FIX::OrdType::valNextFundValuationPointForwardPricing)
    {
      foundValue = true;
      res += "NextFundValuationPointForwardPricing";
    }
    if(value == FIX::OrdType::valPegged)
    {
      foundValue = true;
      res += "Pegged";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigClOrdID::tag: {
    res = "OrigClOrdID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigTime::tag: {
    res = "OrigTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PossDupFlag::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "PossDupFlag = ";
    if(value == FIX::PossDupFlag::valPossibleDuplicate)
    {
      foundValue = true;
      res += "PossibleDuplicate";
    }
    if(value == FIX::PossDupFlag::valOriginalTransmission)
    {
      foundValue = true;
      res += "OriginalTransmission";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Price::tag: {
    res = "Price = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefSeqNum::tag: {
    res = "RefSeqNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RelatdSy::tag: {
    res = "RelatdSy = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Rule80A::tag: {
    FIX::Char value = charOfStr(val);
    res = "Rule80A = ";
    if(value == FIX::Rule80A::valAgencySingleOrder)
    {
      foundValue = true;
      res += "AgencySingleOrder";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionAType)
    {
      foundValue = true;
      res += "ShortExemptTransactionAType";
    }
    if(value == FIX::Rule80A::valProgramOrderNonIndexArbForMemberFirmOrorg)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForMemberFirmOrorg";
    }
    if(value == FIX::Rule80A::valProgramOrderIndexArbForMemberFirmOrorg)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForMemberFirmOrorg";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionForPrincipal)
    {
      foundValue = true;
      res += "ShortExemptTransactionForPrincipal";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionWType)
    {
      foundValue = true;
      res += "ShortExemptTransactionWType";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionIType)
    {
      foundValue = true;
      res += "ShortExemptTransactionIType";
    }
    if(value == FIX::Rule80A::valIndividualInvestorSingleOrder)
    {
      foundValue = true;
      res += "IndividualInvestorSingleOrder";
    }
    if(value == FIX::Rule80A::valProgramOrderIndexArbForIndividualCustomer)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForIndividualCustomer";
    }
    if(value == FIX::Rule80A::valProgramOrderNonIndexArbForIndividualCustomer)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForIndividualCustomer";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade)
    {
      foundValue = true;
      res += "ShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade";
    }
    if(value == FIX::Rule80A::valProgramOrderIndexArbForOtherMember)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForOtherMember";
    }
    if(value == FIX::Rule80A::valProgramOrderNonIndexArbForOtherMember)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForOtherMember";
    }
    if(value == FIX::Rule80A::valProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember)
    {
      foundValue = true;
      res += "ProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember";
    }
    if(value == FIX::Rule80A::valPrincipal)
    {
      foundValue = true;
      res += "Principal";
    }
    if(value == FIX::Rule80A::valTransactionsForTheAccountOfANonMembercompetingMarketMaker)
    {
      foundValue = true;
      res += "TransactionsForTheAccountOfANonMembercompetingMarketMaker";
    }
    if(value == FIX::Rule80A::valSpecialistTrades)
    {
      foundValue = true;
      res += "SpecialistTrades";
    }
    if(value == FIX::Rule80A::valTransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker)
    {
      foundValue = true;
      res += "TransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker";
    }
    if(value == FIX::Rule80A::valProgramOrderIndexArbForOtherAgency)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForOtherAgency";
    }
    if(value == FIX::Rule80A::valAllOtherOrdersAsAgentForOtherMember)
    {
      foundValue = true;
      res += "AllOtherOrdersAsAgentForOtherMember";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade)
    {
      foundValue = true;
      res += "ShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade";
    }
    if(value == FIX::Rule80A::valProgramOrderNonIndexArbForOtherAgency)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForOtherAgency";
    }
    if(value == FIX::Rule80A::valShortExemptTransactionForNonMemberCompetingMarketMaker)
    {
      foundValue = true;
      res += "ShortExemptTransactionForNonMemberCompetingMarketMaker";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityID::tag: {
    res = "SecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SenderCompID::tag: {
    res = "SenderCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SenderSubID::tag: {
    res = "SenderSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SendingDat::tag: {
    res = "SendingDat = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SendingTime::tag: {
    res = "SendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Quantity::tag: {
    res = "Quantity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Side::tag: {
    FIX::Char value = charOfStr(val);
    res = "Side = ";
    if(value == FIX::Side::valBuy)
    {
      foundValue = true;
      res += "Buy";
    }
    if(value == FIX::Side::valSell)
    {
      foundValue = true;
      res += "Sell";
    }
    if(value == FIX::Side::valBuyMinus)
    {
      foundValue = true;
      res += "BuyMinus";
    }
    if(value == FIX::Side::valSellPlus)
    {
      foundValue = true;
      res += "SellPlus";
    }
    if(value == FIX::Side::valSellShort)
    {
      foundValue = true;
      res += "SellShort";
    }
    if(value == FIX::Side::valSellShortExempt)
    {
      foundValue = true;
      res += "SellShortExempt";
    }
    if(value == FIX::Side::valUndisclosed)
    {
      foundValue = true;
      res += "Undisclosed";
    }
    if(value == FIX::Side::valCross)
    {
      foundValue = true;
      res += "Cross";
    }
    if(value == FIX::Side::valCrossShort)
    {
      foundValue = true;
      res += "CrossShort";
    }
    if(value == FIX::Side::valCrossShortExempt)
    {
      foundValue = true;
      res += "CrossShortExempt";
    }
    if(value == FIX::Side::valAsDefined)
    {
      foundValue = true;
      res += "AsDefined";
    }
    if(value == FIX::Side::valOpposite)
    {
      foundValue = true;
      res += "Opposite";
    }
    if(value == FIX::Side::valSubscribe)
    {
      foundValue = true;
      res += "Subscribe";
    }
    if(value == FIX::Side::valRedeem)
    {
      foundValue = true;
      res += "Redeem";
    }
    if(value == FIX::Side::valLend)
    {
      foundValue = true;
      res += "Lend";
    }
    if(value == FIX::Side::valBorrow)
    {
      foundValue = true;
      res += "Borrow";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Symbol::tag: {
    res = "Symbol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetCompID::tag: {
    res = "TargetCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetSubID::tag: {
    res = "TargetSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Text::tag: {
    res = "Text = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TimeInForce::tag: {
    FIX::Char value = charOfStr(val);
    res = "TimeInForce = ";
    if(value == FIX::TimeInForce::valDay)
    {
      foundValue = true;
      res += "Day";
    }
    if(value == FIX::TimeInForce::valGoodTillCancel)
    {
      foundValue = true;
      res += "GoodTillCancel";
    }
    if(value == FIX::TimeInForce::valAtTheOpening)
    {
      foundValue = true;
      res += "AtTheOpening";
    }
    if(value == FIX::TimeInForce::valImmediateOrCancel)
    {
      foundValue = true;
      res += "ImmediateOrCancel";
    }
    if(value == FIX::TimeInForce::valFillOrKill)
    {
      foundValue = true;
      res += "FillOrKill";
    }
    if(value == FIX::TimeInForce::valGoodTillCrossing)
    {
      foundValue = true;
      res += "GoodTillCrossing";
    }
    if(value == FIX::TimeInForce::valGoodTillDate)
    {
      foundValue = true;
      res += "GoodTillDate";
    }
    if(value == FIX::TimeInForce::valAtTheClose)
    {
      foundValue = true;
      res += "AtTheClose";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TransactTime::tag: {
    res = "TransactTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Urgency::tag: {
    FIX::Char value = charOfStr(val);
    res = "Urgency = ";
    if(value == FIX::Urgency::valNormal)
    {
      foundValue = true;
      res += "Normal";
    }
    if(value == FIX::Urgency::valFlash)
    {
      foundValue = true;
      res += "Flash";
    }
    if(value == FIX::Urgency::valBackground)
    {
      foundValue = true;
      res += "Background";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ValidUntilTime::tag: {
    res = "ValidUntilTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlType::tag: {
    FIX::Char value = charOfStr(val);
    res = "SettlType = ";
    if(value == FIX::SettlType::valRegular)
    {
      foundValue = true;
      res += "Regular";
    }
    if(value == FIX::SettlType::valCash)
    {
      foundValue = true;
      res += "Cash";
    }
    if(value == FIX::SettlType::valNextDay)
    {
      foundValue = true;
      res += "NextDay";
    }
    if(value == FIX::SettlType::valTplus2)
    {
      foundValue = true;
      res += "Tplus2";
    }
    if(value == FIX::SettlType::valTplus3)
    {
      foundValue = true;
      res += "Tplus3";
    }
    if(value == FIX::SettlType::valTplus4)
    {
      foundValue = true;
      res += "Tplus4";
    }
    if(value == FIX::SettlType::valFuture)
    {
      foundValue = true;
      res += "Future";
    }
    if(value == FIX::SettlType::valWhenAndIfIssued)
    {
      foundValue = true;
      res += "WhenAndIfIssued";
    }
    if(value == FIX::SettlType::valSellersOption)
    {
      foundValue = true;
      res += "SellersOption";
    }
    if(value == FIX::SettlType::valTplus5)
    {
      foundValue = true;
      res += "Tplus5";
    }
    if(value == FIX::SettlType::valTplusRemovedInFIX44Use2NextDay)
    {
      foundValue = true;
      res += "TplusRemovedInFIX44Use2NextDay";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDate::tag: {
    res = "SettlDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SymbolSfx::tag: {
    FIX::String value = stringOfStr(val);
    res = "SymbolSfx = ";
    if(!strcmp(value, FIX::SymbolSfx::valWhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN))
    {
      foundValue = true;
      res += "WhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN";
    }
    if(!strcmp(value, FIX::SymbolSfx::valAEUCPWithLumpSumInterestRatherThanDiscountPrice))
    {
      foundValue = true;
      res += "AEUCPWithLumpSumInterestRatherThanDiscountPrice";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListID::tag: {
    res = "ListID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListSeqNo::tag: {
    res = "ListSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoOrders::tag: {
    res = "TotNoOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListExecInst::tag: {
    res = "ListExecInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocID::tag: {
    res = "AllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocTransType::tag: {
    FIX::Char value = charOfStr(val);
    res = "AllocTransType = ";
    if(value == FIX::AllocTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::AllocTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value == FIX::AllocTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value == FIX::AllocTransType::valPreliminarywithoutMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "PreliminarywithoutMiscFeesAndNetMoney";
    }
    if(value == FIX::AllocTransType::valCalculatedIncludesMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "CalculatedIncludesMiscFeesAndNetMoney";
    }
    if(value == FIX::AllocTransType::valCalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "CalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefAllocID::tag: {
    res = "RefAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoOrders::tag: {
    res = "NoOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgPxPrecision::tag: {
    res = "AvgPxPrecision = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeDate::tag: {
    res = "TradeDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecBroker::tag: {
    res = "ExecBroker = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PositionEffect::tag: {
    FIX::Char value = charOfStr(val);
    res = "PositionEffect = ";
    if(value == FIX::PositionEffect::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(value == FIX::PositionEffect::valClose)
    {
      foundValue = true;
      res += "Close";
    }
    if(value == FIX::PositionEffect::valRolled)
    {
      foundValue = true;
      res += "Rolled";
    }
    if(value == FIX::PositionEffect::valFIFO)
    {
      foundValue = true;
      res += "FIFO";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoAllocs::tag: {
    res = "NoAllocs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAccount::tag: {
    res = "AllocAccount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocQty::tag: {
    res = "AllocQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ProcessCode::tag: {
    FIX::Char value = charOfStr(val);
    res = "ProcessCode = ";
    if(value == FIX::ProcessCode::valRegular)
    {
      foundValue = true;
      res += "Regular";
    }
    if(value == FIX::ProcessCode::valSoftDollar)
    {
      foundValue = true;
      res += "SoftDollar";
    }
    if(value == FIX::ProcessCode::valStepIn)
    {
      foundValue = true;
      res += "StepIn";
    }
    if(value == FIX::ProcessCode::valStepOut)
    {
      foundValue = true;
      res += "StepOut";
    }
    if(value == FIX::ProcessCode::valSoftDollarStepIn)
    {
      foundValue = true;
      res += "SoftDollarStepIn";
    }
    if(value == FIX::ProcessCode::valSoftDollarStepOut)
    {
      foundValue = true;
      res += "SoftDollarStepOut";
    }
    if(value == FIX::ProcessCode::valPlanSponsor)
    {
      foundValue = true;
      res += "PlanSponsor";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRpts::tag: {
    res = "NoRpts = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RptSeq::tag: {
    res = "RptSeq = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlQty::tag: {
    res = "CxlQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoDlvyInst::tag: {
    res = "NoDlvyInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DlvyInst::tag: {
    res = "DlvyInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocStatus = ";
    if(value == FIX::AllocStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::AllocStatus::valBlockLevelReject)
    {
      foundValue = true;
      res += "BlockLevelReject";
    }
    if(value == FIX::AllocStatus::valAccountLevelReject)
    {
      foundValue = true;
      res += "AccountLevelReject";
    }
    if(value == FIX::AllocStatus::valReceived)
    {
      foundValue = true;
      res += "Received";
    }
    if(value == FIX::AllocStatus::valIncomplete)
    {
      foundValue = true;
      res += "Incomplete";
    }
    if(value == FIX::AllocStatus::valRejectedByIntermediary)
    {
      foundValue = true;
      res += "RejectedByIntermediary";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocRejCode::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocRejCode = ";
    if(value == FIX::AllocRejCode::valUnknownAccount)
    {
      foundValue = true;
      res += "UnknownAccount";
    }
    if(value == FIX::AllocRejCode::valIncorrectQuantity)
    {
      foundValue = true;
      res += "IncorrectQuantity";
    }
    if(value == FIX::AllocRejCode::valIncorrectAveragePrice)
    {
      foundValue = true;
      res += "IncorrectAveragePrice";
    }
    if(value == FIX::AllocRejCode::valUnknownExecutingBrokerMnemonic)
    {
      foundValue = true;
      res += "UnknownExecutingBrokerMnemonic";
    }
    if(value == FIX::AllocRejCode::valCommissionDifference)
    {
      foundValue = true;
      res += "CommissionDifference";
    }
    if(value == FIX::AllocRejCode::valUnknownOrderID)
    {
      foundValue = true;
      res += "UnknownOrderID";
    }
    if(value == FIX::AllocRejCode::valUnknownListID)
    {
      foundValue = true;
      res += "UnknownListID";
    }
    if(value == FIX::AllocRejCode::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value == FIX::AllocRejCode::valIncorrectAllocatedQuantity)
    {
      foundValue = true;
      res += "IncorrectAllocatedQuantity";
    }
    if(value == FIX::AllocRejCode::valCalculationDifference)
    {
      foundValue = true;
      res += "CalculationDifference";
    }
    if(value == FIX::AllocRejCode::valUnknownOrStaleExecID)
    {
      foundValue = true;
      res += "UnknownOrStaleExecID";
    }
    if(value == FIX::AllocRejCode::valMismatchedDataValue)
    {
      foundValue = true;
      res += "MismatchedDataValue";
    }
    if(value == FIX::AllocRejCode::valUnknownClOrdID)
    {
      foundValue = true;
      res += "UnknownClOrdID";
    }
    if(value == FIX::AllocRejCode::valWarehouseRequestRejected)
    {
      foundValue = true;
      res += "WarehouseRequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Signature::tag: {
    res = "Signature = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecureDataLen::tag: {
    res = "SecureDataLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecureData::tag: {
    res = "SecureData = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BrokerOfCredit::tag: {
    res = "BrokerOfCredit = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SignatureLength::tag: {
    res = "SignatureLength = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EmailType::tag: {
    FIX::Char value = charOfStr(val);
    res = "EmailType = ";
    if(value == FIX::EmailType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::EmailType::valReply)
    {
      foundValue = true;
      res += "Reply";
    }
    if(value == FIX::EmailType::valAdminReply)
    {
      foundValue = true;
      res += "AdminReply";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RawDataLength::tag: {
    res = "RawDataLength = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RawData::tag: {
    res = "RawData = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PossResend::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "PossResend = ";
    if(value == FIX::PossResend::valPossibleResend)
    {
      foundValue = true;
      res += "PossibleResend";
    }
    if(value == FIX::PossResend::valOriginalTransmission)
    {
      foundValue = true;
      res += "OriginalTransmission";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncryptMethod::tag: {
    FIX::Int value = intOfStr(val);
    res = "EncryptMethod = ";
    if(value == FIX::EncryptMethod::valNoneOrOther)
    {
      foundValue = true;
      res += "NoneOrOther";
    }
    if(value == FIX::EncryptMethod::valPKCS)
    {
      foundValue = true;
      res += "PKCS";
    }
    if(value == FIX::EncryptMethod::valDES)
    {
      foundValue = true;
      res += "DES";
    }
    if(value == FIX::EncryptMethod::valPKCSOrDES)
    {
      foundValue = true;
      res += "PKCSOrDES";
    }
    if(value == FIX::EncryptMethod::valPGPOrDES)
    {
      foundValue = true;
      res += "PGPOrDES";
    }
    if(value == FIX::EncryptMethod::valPGPOrDESMD5)
    {
      foundValue = true;
      res += "PGPOrDESMD5";
    }
    if(value == FIX::EncryptMethod::valPEMOrDESMD5)
    {
      foundValue = true;
      res += "PEMOrDESMD5";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StopPx::tag: {
    res = "StopPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExDestination::tag: {
    res = "ExDestination = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlRejReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "CxlRejReason = ";
    if(value == FIX::CxlRejReason::valTooLateToCancel)
    {
      foundValue = true;
      res += "TooLateToCancel";
    }
    if(value == FIX::CxlRejReason::valUnknownOrder)
    {
      foundValue = true;
      res += "UnknownOrder";
    }
    if(value == FIX::CxlRejReason::valBrokerOrExchangeOption)
    {
      foundValue = true;
      res += "BrokerOrExchangeOption";
    }
    if(value == FIX::CxlRejReason::valOrderAlreadyInPendingCancelOrPendingReplaceStatus)
    {
      foundValue = true;
      res += "OrderAlreadyInPendingCancelOrPendingReplaceStatus";
    }
    if(value == FIX::CxlRejReason::valUnableToProcessOrderMassCancelRequest)
    {
      foundValue = true;
      res += "UnableToProcessOrderMassCancelRequest";
    }
    if(value == FIX::CxlRejReason::valOrigOrdModTime586DidNotMatchLastTransactTime60OfOrder)
    {
      foundValue = true;
      res += "OrigOrdModTime586DidNotMatchLastTransactTime60OfOrder";
    }
    if(value == FIX::CxlRejReason::valDuplicateClOrdIDReceived)
    {
      foundValue = true;
      res += "DuplicateClOrdIDReceived";
    }
    if(value == FIX::CxlRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdRejReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "OrdRejReason = ";
    if(value == FIX::OrdRejReason::valBrokerOrExchangeOption)
    {
      foundValue = true;
      res += "BrokerOrExchangeOption";
    }
    if(value == FIX::OrdRejReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value == FIX::OrdRejReason::valExchangeClosed)
    {
      foundValue = true;
      res += "ExchangeClosed";
    }
    if(value == FIX::OrdRejReason::valOrderExceedsLimit)
    {
      foundValue = true;
      res += "OrderExceedsLimit";
    }
    if(value == FIX::OrdRejReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value == FIX::OrdRejReason::valUnknownOrder)
    {
      foundValue = true;
      res += "UnknownOrder";
    }
    if(value == FIX::OrdRejReason::valDuplicateOrderegDupeClOrdID)
    {
      foundValue = true;
      res += "DuplicateOrderegDupeClOrdID";
    }
    if(value == FIX::OrdRejReason::valDuplicateOfAVerballyCommunicatedOrder)
    {
      foundValue = true;
      res += "DuplicateOfAVerballyCommunicatedOrder";
    }
    if(value == FIX::OrdRejReason::valStaleOrder)
    {
      foundValue = true;
      res += "StaleOrder";
    }
    if(value == FIX::OrdRejReason::valTradeAlongRequired)
    {
      foundValue = true;
      res += "TradeAlongRequired";
    }
    if(value == FIX::OrdRejReason::valInvalidInvestorID)
    {
      foundValue = true;
      res += "InvalidInvestorID";
    }
    if(value == FIX::OrdRejReason::valUnsupportedOrderCharacteristic2SurveillenceOption)
    {
      foundValue = true;
      res += "UnsupportedOrderCharacteristic2SurveillenceOption";
    }
    if(value == FIX::OrdRejReason::valIncorrectQuantity)
    {
      foundValue = true;
      res += "IncorrectQuantity";
    }
    if(value == FIX::OrdRejReason::valIncorrectAllocatedQuantity)
    {
      foundValue = true;
      res += "IncorrectAllocatedQuantity";
    }
    if(value == FIX::OrdRejReason::valUnknownAccount)
    {
      foundValue = true;
      res += "UnknownAccount";
    }
    if(value == FIX::OrdRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIQualifier::tag: {
    FIX::Char value = charOfStr(val);
    res = "IOIQualifier = ";
    if(value == FIX::IOIQualifier::valAllOrNone)
    {
      foundValue = true;
      res += "AllOrNone";
    }
    if(value == FIX::IOIQualifier::valMarketOnCloseMOC)
    {
      foundValue = true;
      res += "MarketOnCloseMOC";
    }
    if(value == FIX::IOIQualifier::valAtTheClose)
    {
      foundValue = true;
      res += "AtTheClose";
    }
    if(value == FIX::IOIQualifier::valVWAP)
    {
      foundValue = true;
      res += "VWAP";
    }
    if(value == FIX::IOIQualifier::valInTouchWith)
    {
      foundValue = true;
      res += "InTouchWith";
    }
    if(value == FIX::IOIQualifier::valLimit)
    {
      foundValue = true;
      res += "Limit";
    }
    if(value == FIX::IOIQualifier::valMoreBehind)
    {
      foundValue = true;
      res += "MoreBehind";
    }
    if(value == FIX::IOIQualifier::valAtTheOpen)
    {
      foundValue = true;
      res += "AtTheOpen";
    }
    if(value == FIX::IOIQualifier::valTakingAPosition)
    {
      foundValue = true;
      res += "TakingAPosition";
    }
    if(value == FIX::IOIQualifier::valAtTheMarket)
    {
      foundValue = true;
      res += "AtTheMarket";
    }
    if(value == FIX::IOIQualifier::valReadyToTrade)
    {
      foundValue = true;
      res += "ReadyToTrade";
    }
    if(value == FIX::IOIQualifier::valPortfolioShown)
    {
      foundValue = true;
      res += "PortfolioShown";
    }
    if(value == FIX::IOIQualifier::valThroughTheDay)
    {
      foundValue = true;
      res += "ThroughTheDay";
    }
    if(value == FIX::IOIQualifier::valVersus)
    {
      foundValue = true;
      res += "Versus";
    }
    if(value == FIX::IOIQualifier::valIndicationWorkingAway)
    {
      foundValue = true;
      res += "IndicationWorkingAway";
    }
    if(value == FIX::IOIQualifier::valCrossingOpportunity)
    {
      foundValue = true;
      res += "CrossingOpportunity";
    }
    if(value == FIX::IOIQualifier::valAtTheMidpoint)
    {
      foundValue = true;
      res += "AtTheMidpoint";
    }
    if(value == FIX::IOIQualifier::valPreOpen)
    {
      foundValue = true;
      res += "PreOpen";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::WaveNo::tag: {
    res = "WaveNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Issuer::tag: {
    res = "Issuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityDesc::tag: {
    res = "SecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HeartBtInt::tag: {
    res = "HeartBtInt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClientID::tag: {
    res = "ClientID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinQty::tag: {
    res = "MinQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaxFloor::tag: {
    res = "MaxFloor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TestReqID::tag: {
    res = "TestReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ReportToExch::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "ReportToExch = ";
    if(value == FIX::ReportToExch::valIndicatesThatPartyReceivingMessageMustReportTrade)
    {
      foundValue = true;
      res += "IndicatesThatPartyReceivingMessageMustReportTrade";
    }
    if(value == FIX::ReportToExch::valIndicatesThatPartySendingMessageWillReportTrade)
    {
      foundValue = true;
      res += "IndicatesThatPartySendingMessageWillReportTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LocateReqd::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "LocateReqd = ";
    if(value == FIX::LocateReqd::valIndicatesTheBrokerIsResponsibleForLocatingTheStock)
    {
      foundValue = true;
      res += "IndicatesTheBrokerIsResponsibleForLocatingTheStock";
    }
    if(value == FIX::LocateReqd::valIndicatesTheBrokerIsNotRequiredToLocate)
    {
      foundValue = true;
      res += "IndicatesTheBrokerIsNotRequiredToLocate";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfCompID::tag: {
    res = "OnBehalfOfCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfSubID::tag: {
    res = "OnBehalfOfSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteID::tag: {
    res = "QuoteID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetMoney::tag: {
    res = "NetMoney = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrAmt::tag: {
    res = "SettlCurrAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrency::tag: {
    res = "SettlCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ForexReq::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "ForexReq = ";
    if(value == FIX::ForexReq::valExecuteForexAfterSecurityTrade)
    {
      foundValue = true;
      res += "ExecuteForexAfterSecurityTrade";
    }
    if(value == FIX::ForexReq::valDoNotExecuteForexAfterSecurityTrade)
    {
      foundValue = true;
      res += "DoNotExecuteForexAfterSecurityTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigSendingTime::tag: {
    res = "OrigSendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::GapFillFlag::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "GapFillFlag = ";
    if(value == FIX::GapFillFlag::valGapFillMessageMsgSeqNumFieldValid)
    {
      foundValue = true;
      res += "GapFillMessageMsgSeqNumFieldValid";
    }
    if(value == FIX::GapFillFlag::valSequenceResetIgnoreMsgSeqNum)
    {
      foundValue = true;
      res += "SequenceResetIgnoreMsgSeqNum";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoExecs::tag: {
    res = "NoExecs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlTyp::tag: {
    res = "CxlTyp = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExpireTime::tag: {
    res = "ExpireTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DKReason::tag: {
    FIX::Char value = charOfStr(val);
    res = "DKReason = ";
    if(value == FIX::DKReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value == FIX::DKReason::valWrongSide)
    {
      foundValue = true;
      res += "WrongSide";
    }
    if(value == FIX::DKReason::valQuantityExceedsOrder)
    {
      foundValue = true;
      res += "QuantityExceedsOrder";
    }
    if(value == FIX::DKReason::valNoMatchingOrder)
    {
      foundValue = true;
      res += "NoMatchingOrder";
    }
    if(value == FIX::DKReason::valPriceExceedsLimit)
    {
      foundValue = true;
      res += "PriceExceedsLimit";
    }
    if(value == FIX::DKReason::valCalculationDifference)
    {
      foundValue = true;
      res += "CalculationDifference";
    }
    if(value == FIX::DKReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliverToCompID::tag: {
    res = "DeliverToCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliverToSubID::tag: {
    res = "DeliverToSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOINaturalFlag::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "IOINaturalFlag = ";
    if(value == FIX::IOINaturalFlag::valNatural)
    {
      foundValue = true;
      res += "Natural";
    }
    if(value == FIX::IOINaturalFlag::valNotNatural)
    {
      foundValue = true;
      res += "NotNatural";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteReqID::tag: {
    res = "QuoteReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidPx::tag: {
    res = "BidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferPx::tag: {
    res = "OfferPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidSize::tag: {
    res = "BidSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferSize::tag: {
    res = "OfferSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMiscFees::tag: {
    res = "NoMiscFees = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeAmt::tag: {
    res = "MiscFeeAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeCurr::tag: {
    res = "MiscFeeCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeType::tag: {
    FIX::Char value = charOfStr(val);
    res = "MiscFeeType = ";
    if(value == FIX::MiscFeeType::valRegulatory)
    {
      foundValue = true;
      res += "Regulatory";
    }
    if(value == FIX::MiscFeeType::valTax)
    {
      foundValue = true;
      res += "Tax";
    }
    if(value == FIX::MiscFeeType::valLocalCommission)
    {
      foundValue = true;
      res += "LocalCommission";
    }
    if(value == FIX::MiscFeeType::valExchangeFees)
    {
      foundValue = true;
      res += "ExchangeFees";
    }
    if(value == FIX::MiscFeeType::valStamp)
    {
      foundValue = true;
      res += "Stamp";
    }
    if(value == FIX::MiscFeeType::valLevy)
    {
      foundValue = true;
      res += "Levy";
    }
    if(value == FIX::MiscFeeType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value == FIX::MiscFeeType::valMarkup)
    {
      foundValue = true;
      res += "Markup";
    }
    if(value == FIX::MiscFeeType::valConsumptionTax)
    {
      foundValue = true;
      res += "ConsumptionTax";
    }
    if(value == FIX::MiscFeeType::valPerTransaction)
    {
      foundValue = true;
      res += "PerTransaction";
    }
    if(value == FIX::MiscFeeType::valConversion)
    {
      foundValue = true;
      res += "Conversion";
    }
    if(value == FIX::MiscFeeType::valAgent)
    {
      foundValue = true;
      res += "Agent";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PrevClosePx::tag: {
    res = "PrevClosePx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ResetSeqNumFlag::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "ResetSeqNumFlag = ";
    if(value == FIX::ResetSeqNumFlag::valYesResetSequenceNumbers)
    {
      foundValue = true;
      res += "YesResetSequenceNumbers";
    }
    if(value == FIX::ResetSeqNumFlag::valNo)
    {
      foundValue = true;
      res += "No";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SenderLocationID::tag: {
    res = "SenderLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetLocationID::tag: {
    res = "TargetLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfLocationID::tag: {
    res = "OnBehalfOfLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliverToLocationID::tag: {
    res = "DeliverToLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRelatedSym::tag: {
    res = "NoRelatedSym = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Subject::tag: {
    res = "Subject = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Headline::tag: {
    res = "Headline = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::URLLink::tag: {
    res = "URLLink = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecType::tag: {
    FIX::Char value = charOfStr(val);
    res = "ExecType = ";
    if(value == FIX::ExecType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::ExecType::valPartialFill)
    {
      foundValue = true;
      res += "PartialFill";
    }
    if(value == FIX::ExecType::valFill)
    {
      foundValue = true;
      res += "Fill";
    }
    if(value == FIX::ExecType::valDoneForDay)
    {
      foundValue = true;
      res += "DoneForDay";
    }
    if(value == FIX::ExecType::valCanceled)
    {
      foundValue = true;
      res += "Canceled";
    }
    if(value == FIX::ExecType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value == FIX::ExecType::valPendingCancel)
    {
      foundValue = true;
      res += "PendingCancel";
    }
    if(value == FIX::ExecType::valStopped)
    {
      foundValue = true;
      res += "Stopped";
    }
    if(value == FIX::ExecType::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value == FIX::ExecType::valSuspended)
    {
      foundValue = true;
      res += "Suspended";
    }
    if(value == FIX::ExecType::valPendingNew)
    {
      foundValue = true;
      res += "PendingNew";
    }
    if(value == FIX::ExecType::valCalculated)
    {
      foundValue = true;
      res += "Calculated";
    }
    if(value == FIX::ExecType::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value == FIX::ExecType::valRestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason)
    {
      foundValue = true;
      res += "RestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason";
    }
    if(value == FIX::ExecType::valPendingReplace)
    {
      foundValue = true;
      res += "PendingReplace";
    }
    if(value == FIX::ExecType::valTrade)
    {
      foundValue = true;
      res += "Trade";
    }
    if(value == FIX::ExecType::valTradeCorrectformerlyAnExecTransType)
    {
      foundValue = true;
      res += "TradeCorrectformerlyAnExecTransType";
    }
    if(value == FIX::ExecType::valTradeCancel)
    {
      foundValue = true;
      res += "TradeCancel";
    }
    if(value == FIX::ExecType::valOrderStatus)
    {
      foundValue = true;
      res += "OrderStatus";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LeavesQty::tag: {
    res = "LeavesQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashOrderQty::tag: {
    res = "CashOrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAvgPx::tag: {
    res = "AllocAvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocNetMoney::tag: {
    res = "AllocNetMoney = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrFxRate::tag: {
    res = "SettlCurrFxRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrFxRateCalc::tag: {
    FIX::Char value = charOfStr(val);
    res = "SettlCurrFxRateCalc = ";
    if(value == FIX::SettlCurrFxRateCalc::valMultiply)
    {
      foundValue = true;
      res += "Multiply";
    }
    if(value == FIX::SettlCurrFxRateCalc::valDivide)
    {
      foundValue = true;
      res += "Divide";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumDaysInterest::tag: {
    res = "NumDaysInterest = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AccruedInterestRate::tag: {
    res = "AccruedInterestRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AccruedInterestAmt::tag: {
    res = "AccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstMode::tag: {
    FIX::Char value = charOfStr(val);
    res = "SettlInstMode = ";
    if(value == FIX::SettlInstMode::valDefault)
    {
      foundValue = true;
      res += "Default";
    }
    if(value == FIX::SettlInstMode::valStandingInstructionsProvided)
    {
      foundValue = true;
      res += "StandingInstructionsProvided";
    }
    if(value == FIX::SettlInstMode::valSpecificAllocationAccountOverriding)
    {
      foundValue = true;
      res += "SpecificAllocationAccountOverriding";
    }
    if(value == FIX::SettlInstMode::valSpecificAllocationAccountStanding)
    {
      foundValue = true;
      res += "SpecificAllocationAccountStanding";
    }
    if(value == FIX::SettlInstMode::valSpecificOrderForASingleAccount)
    {
      foundValue = true;
      res += "SpecificOrderForASingleAccount";
    }
    if(value == FIX::SettlInstMode::valRequestReject)
    {
      foundValue = true;
      res += "RequestReject";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocText::tag: {
    res = "AllocText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstID::tag: {
    res = "SettlInstID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstTransType::tag: {
    FIX::Char value = charOfStr(val);
    res = "SettlInstTransType = ";
    if(value == FIX::SettlInstTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::SettlInstTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value == FIX::SettlInstTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value == FIX::SettlInstTransType::valRestate)
    {
      foundValue = true;
      res += "Restate";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EmailThreadID::tag: {
    res = "EmailThreadID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstSource::tag: {
    FIX::Char value = charOfStr(val);
    res = "SettlInstSource = ";
    if(value == FIX::SettlInstSource::valBrokersInstructions)
    {
      foundValue = true;
      res += "BrokersInstructions";
    }
    if(value == FIX::SettlInstSource::valInstitutionsInstructions)
    {
      foundValue = true;
      res += "InstitutionsInstructions";
    }
    if(value == FIX::SettlInstSource::valInvestor)
    {
      foundValue = true;
      res += "Investor";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlLocation::tag: {
    FIX::String value = stringOfStr(val);
    res = "SettlLocation = ";
    if(!strcmp(value, FIX::SettlLocation::valCEDEL))
    {
      foundValue = true;
      res += "CEDEL";
    }
    if(!strcmp(value, FIX::SettlLocation::valDepositoryTrustCompany))
    {
      foundValue = true;
      res += "DepositoryTrustCompany";
    }
    if(!strcmp(value, FIX::SettlLocation::valEuroclear))
    {
      foundValue = true;
      res += "Euroclear";
    }
    if(!strcmp(value, FIX::SettlLocation::valFederalBookEntry))
    {
      foundValue = true;
      res += "FederalBookEntry";
    }
    if(!strcmp(value, FIX::SettlLocation::valPhysical))
    {
      foundValue = true;
      res += "Physical";
    }
    if(!strcmp(value, FIX::SettlLocation::valParticipantTrustCompany))
    {
      foundValue = true;
      res += "ParticipantTrustCompany";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityType::tag: {
    res = "SecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EffectiveTime::tag: {
    res = "EffectiveTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StandInstDbType::tag: {
    FIX::Int value = intOfStr(val);
    res = "StandInstDbType = ";
    if(value == FIX::StandInstDbType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value == FIX::StandInstDbType::valDTCSID)
    {
      foundValue = true;
      res += "DTCSID";
    }
    if(value == FIX::StandInstDbType::valThomsonALERT)
    {
      foundValue = true;
      res += "ThomsonALERT";
    }
    if(value == FIX::StandInstDbType::valAGlobalCustodianStandInstDbName)
    {
      foundValue = true;
      res += "AGlobalCustodianStandInstDbName";
    }
    if(value == FIX::StandInstDbType::valAccountNet)
    {
      foundValue = true;
      res += "AccountNet";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StandInstDbName::tag: {
    res = "StandInstDbName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StandInstDbID::tag: {
    res = "StandInstDbID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDeliveryType::tag: {
    res = "SettlDeliveryType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDepositoryCode::tag: {
    res = "SettlDepositoryCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlBrkrCode::tag: {
    res = "SettlBrkrCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstCode::tag: {
    res = "SettlInstCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentName::tag: {
    res = "SecuritySettlAgentName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentCode::tag: {
    res = "SecuritySettlAgentCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentAcctNum::tag: {
    res = "SecuritySettlAgentAcctNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentAcctName::tag: {
    res = "SecuritySettlAgentAcctName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentContactName::tag: {
    res = "SecuritySettlAgentContactName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentContactPhone::tag: {
    res = "SecuritySettlAgentContactPhone = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentName::tag: {
    res = "CashSettlAgentName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentCode::tag: {
    res = "CashSettlAgentCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentAcctNum::tag: {
    res = "CashSettlAgentAcctNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentAcctName::tag: {
    res = "CashSettlAgentAcctName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentContactName::tag: {
    res = "CashSettlAgentContactName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentContactPhone::tag: {
    res = "CashSettlAgentContactPhone = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidSpotRate::tag: {
    res = "BidSpotRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidForwardPoints::tag: {
    res = "BidForwardPoints = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferSpotRate::tag: {
    res = "OfferSpotRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferForwardPoints::tag: {
    res = "OfferForwardPoints = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderQty2::tag: {
    res = "OrderQty2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDate2::tag: {
    res = "SettlDate2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastSpotRate::tag: {
    res = "LastSpotRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastForwardPoints::tag: {
    res = "LastForwardPoints = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocLinkID::tag: {
    res = "AllocLinkID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocLinkType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocLinkType = ";
    if(value == FIX::AllocLinkType::valFOrXNetting)
    {
      foundValue = true;
      res += "FOrXNetting";
    }
    if(value == FIX::AllocLinkType::valFOrXSwap)
    {
      foundValue = true;
      res += "FOrXSwap";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryOrderID::tag: {
    res = "SecondaryOrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoIOIQualifiers::tag: {
    res = "NoIOIQualifiers = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityMonthYear::tag: {
    res = "MaturityMonthYear = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PutOrCall::tag: {
    FIX::Int value = intOfStr(val);
    res = "PutOrCall = ";
    if(value == FIX::PutOrCall::valPut)
    {
      foundValue = true;
      res += "Put";
    }
    if(value == FIX::PutOrCall::valCall)
    {
      foundValue = true;
      res += "Call";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StrikePrice::tag: {
    res = "StrikePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CoveredOrUncovered::tag: {
    FIX::Int value = intOfStr(val);
    res = "CoveredOrUncovered = ";
    if(value == FIX::CoveredOrUncovered::valCovered)
    {
      foundValue = true;
      res += "Covered";
    }
    if(value == FIX::CoveredOrUncovered::valUncovered)
    {
      foundValue = true;
      res += "Uncovered";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CustomerOrFirm::tag: {
    FIX::Int value = intOfStr(val);
    res = "CustomerOrFirm = ";
    if(value == FIX::CustomerOrFirm::valCustomer)
    {
      foundValue = true;
      res += "Customer";
    }
    if(value == FIX::CustomerOrFirm::valFirm)
    {
      foundValue = true;
      res += "Firm";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityDay::tag: {
    res = "MaturityDay = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OptAttribute::tag: {
    FIX::Char value = charOfStr(val);
    res = "OptAttribute = ";
    if(value == FIX::OptAttribute::valLong)
    {
      foundValue = true;
      res += "Long";
    }
    if(value == FIX::OptAttribute::valShort)
    {
      foundValue = true;
      res += "Short";
    }
    if(value == FIX::OptAttribute::valZero)
    {
      foundValue = true;
      res += "Zero";
    }
    if(value == FIX::OptAttribute::valOne)
    {
      foundValue = true;
      res += "One";
    }
    if(value == FIX::OptAttribute::valTwo)
    {
      foundValue = true;
      res += "Two";
    }
    if(value == FIX::OptAttribute::valThree)
    {
      foundValue = true;
      res += "Three";
    }
    if(value == FIX::OptAttribute::valFour)
    {
      foundValue = true;
      res += "Four";
    }
    if(value == FIX::OptAttribute::valFive)
    {
      foundValue = true;
      res += "Five";
    }
    if(value == FIX::OptAttribute::valSix)
    {
      foundValue = true;
      res += "Six";
    }
    if(value == FIX::OptAttribute::valSeven)
    {
      foundValue = true;
      res += "Seven";
    }
    if(value == FIX::OptAttribute::valEight)
    {
      foundValue = true;
      res += "Eight";
    }
    if(value == FIX::OptAttribute::valNine)
    {
      foundValue = true;
      res += "Nine";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityExchange::tag: {
    res = "SecurityExchange = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NotifyBrokerOfCredit::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "NotifyBrokerOfCredit = ";
    if(value == FIX::NotifyBrokerOfCredit::valDetailsShouldBeCommunicated)
    {
      foundValue = true;
      res += "DetailsShouldBeCommunicated";
    }
    if(value == FIX::NotifyBrokerOfCredit::valDetailsShouldNotBeCommunicated)
    {
      foundValue = true;
      res += "DetailsShouldNotBeCommunicated";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocHandlInst::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocHandlInst = ";
    if(value == FIX::AllocHandlInst::valMatch)
    {
      foundValue = true;
      res += "Match";
    }
    if(value == FIX::AllocHandlInst::valForward)
    {
      foundValue = true;
      res += "Forward";
    }
    if(value == FIX::AllocHandlInst::valForwardAndMatch)
    {
      foundValue = true;
      res += "ForwardAndMatch";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaxShow::tag: {
    res = "MaxShow = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegOffsetValue::tag: {
    res = "PegOffsetValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::XmlDataLen::tag: {
    res = "XmlDataLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::XmlData::tag: {
    res = "XmlData = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstRefID::tag: {
    res = "SettlInstRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRoutingIDs::tag: {
    res = "NoRoutingIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoutingType::tag: {
    FIX::Int value = intOfStr(val);
    res = "RoutingType = ";
    if(value == FIX::RoutingType::valTargetFirm)
    {
      foundValue = true;
      res += "TargetFirm";
    }
    if(value == FIX::RoutingType::valTargetList)
    {
      foundValue = true;
      res += "TargetList";
    }
    if(value == FIX::RoutingType::valBlockFirm)
    {
      foundValue = true;
      res += "BlockFirm";
    }
    if(value == FIX::RoutingType::valBlockList)
    {
      foundValue = true;
      res += "BlockList";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoutingID::tag: {
    res = "RoutingID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Spread::tag: {
    res = "Spread = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Benchmark::tag: {
    FIX::Char value = charOfStr(val);
    res = "Benchmark = ";
    if(value == FIX::Benchmark::valCURVE)
    {
      foundValue = true;
      res += "CURVE";
    }
    if(value == FIX::Benchmark::val5YR)
    {
      foundValue = true;
      res += "5YR";
    }
    if(value == FIX::Benchmark::valOLD5)
    {
      foundValue = true;
      res += "OLD5";
    }
    if(value == FIX::Benchmark::val0YR)
    {
      foundValue = true;
      res += "0YR";
    }
    if(value == FIX::Benchmark::valOLD0)
    {
      foundValue = true;
      res += "OLD0";
    }
    if(value == FIX::Benchmark::val30YR)
    {
      foundValue = true;
      res += "30YR";
    }
    if(value == FIX::Benchmark::valOLD30)
    {
      foundValue = true;
      res += "OLD30";
    }
    if(value == FIX::Benchmark::val3MOLIBOR)
    {
      foundValue = true;
      res += "3MOLIBOR";
    }
    if(value == FIX::Benchmark::val6MOLIBOR)
    {
      foundValue = true;
      res += "6MOLIBOR";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkCurveCurrency::tag: {
    res = "BenchmarkCurveCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkCurveName::tag: {
    FIX::String value = stringOfStr(val);
    res = "BenchmarkCurveName = ";
    if(!strcmp(value, FIX::BenchmarkCurveName::valLondonInterBankOffers))
    {
      foundValue = true;
      res += "LondonInterBankOffers";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkCurvePoint::tag: {
    res = "BenchmarkCurvePoint = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CouponRate::tag: {
    res = "CouponRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CouponPaymentDate::tag: {
    res = "CouponPaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IssueDate::tag: {
    res = "IssueDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RepurchaseTerm::tag: {
    res = "RepurchaseTerm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RepurchaseRate::tag: {
    res = "RepurchaseRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Factor::tag: {
    res = "Factor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeOriginationDate::tag: {
    res = "TradeOriginationDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExDate::tag: {
    res = "ExDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContractMultiplier::tag: {
    res = "ContractMultiplier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoStipulations::tag: {
    res = "NoStipulations = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StipulationType::tag: {
    res = "StipulationType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StipulationValue::tag: {
    res = "StipulationValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldType::tag: {
    FIX::String value = stringOfStr(val);
    res = "YieldType = ";
    if(!strcmp(value, FIX::YieldType::valAfterTaxYield))
    {
      foundValue = true;
      res += "AfterTaxYield";
    }
    if(!strcmp(value, FIX::YieldType::valAnnualYield))
    {
      foundValue = true;
      res += "AnnualYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldAtIssue))
    {
      foundValue = true;
      res += "YieldAtIssue";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToAverageMaturity))
    {
      foundValue = true;
      res += "YieldToAverageMaturity";
    }
    if(!strcmp(value, FIX::YieldType::valBookYield))
    {
      foundValue = true;
      res += "BookYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToNextCall))
    {
      foundValue = true;
      res += "YieldToNextCall";
    }
    if(!strcmp(value, FIX::YieldType::valYieldChangeSinceClose))
    {
      foundValue = true;
      res += "YieldChangeSinceClose";
    }
    if(!strcmp(value, FIX::YieldType::valClosingYield))
    {
      foundValue = true;
      res += "ClosingYield";
    }
    if(!strcmp(value, FIX::YieldType::valCompoundYield))
    {
      foundValue = true;
      res += "CompoundYield";
    }
    if(!strcmp(value, FIX::YieldType::valCurrentYield))
    {
      foundValue = true;
      res += "CurrentYield";
    }
    if(!strcmp(value, FIX::YieldType::valTrueGrossYield))
    {
      foundValue = true;
      res += "TrueGrossYield";
    }
    if(!strcmp(value, FIX::YieldType::valGovernmentEquivalentYield))
    {
      foundValue = true;
      res += "GovernmentEquivalentYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldWithInflationAssumption))
    {
      foundValue = true;
      res += "YieldWithInflationAssumption";
    }
    if(!strcmp(value, FIX::YieldType::valInverseFloaterBondYield))
    {
      foundValue = true;
      res += "InverseFloaterBondYield";
    }
    if(!strcmp(value, FIX::YieldType::valMostRecentClosingYield))
    {
      foundValue = true;
      res += "MostRecentClosingYield";
    }
    if(!strcmp(value, FIX::YieldType::valClosingYieldMostRecentMonth))
    {
      foundValue = true;
      res += "ClosingYieldMostRecentMonth";
    }
    if(!strcmp(value, FIX::YieldType::valClosingYieldMostRecentQuarter))
    {
      foundValue = true;
      res += "ClosingYieldMostRecentQuarter";
    }
    if(!strcmp(value, FIX::YieldType::valClosingYieldMostRecentYear))
    {
      foundValue = true;
      res += "ClosingYieldMostRecentYear";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToLongestAverageLife))
    {
      foundValue = true;
      res += "YieldToLongestAverageLife";
    }
    if(!strcmp(value, FIX::YieldType::valMarkToMarketYield))
    {
      foundValue = true;
      res += "MarkToMarketYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToMaturity))
    {
      foundValue = true;
      res += "YieldToMaturity";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToNextRefund))
    {
      foundValue = true;
      res += "YieldToNextRefund";
    }
    if(!strcmp(value, FIX::YieldType::valOpenAverageYield))
    {
      foundValue = true;
      res += "OpenAverageYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToNextPut))
    {
      foundValue = true;
      res += "YieldToNextPut";
    }
    if(!strcmp(value, FIX::YieldType::valPreviousCloseYield))
    {
      foundValue = true;
      res += "PreviousCloseYield";
    }
    if(!strcmp(value, FIX::YieldType::valProceedsYield))
    {
      foundValue = true;
      res += "ProceedsYield";
    }
    if(!strcmp(value, FIX::YieldType::valSemiAnnualYield))
    {
      foundValue = true;
      res += "SemiAnnualYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToShortestAverageLife))
    {
      foundValue = true;
      res += "YieldToShortestAverageLife";
    }
    if(!strcmp(value, FIX::YieldType::valSimpleYield))
    {
      foundValue = true;
      res += "SimpleYield";
    }
    if(!strcmp(value, FIX::YieldType::valTaxEquivalentYield))
    {
      foundValue = true;
      res += "TaxEquivalentYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToTenderDate))
    {
      foundValue = true;
      res += "YieldToTenderDate";
    }
    if(!strcmp(value, FIX::YieldType::valTrueYield))
    {
      foundValue = true;
      res += "TrueYield";
    }
    if(!strcmp(value, FIX::YieldType::valYieldValueOfOr32))
    {
      foundValue = true;
      res += "YieldValueOfOr32";
    }
    if(!strcmp(value, FIX::YieldType::valYieldToWorst))
    {
      foundValue = true;
      res += "YieldToWorst";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Yield::tag: {
    res = "Yield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalTakedown::tag: {
    res = "TotalTakedown = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Concession::tag: {
    res = "Concession = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RepoCollateralSecurityType::tag: {
    res = "RepoCollateralSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RedemptionDate::tag: {
    res = "RedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCouponPaymentDate::tag: {
    res = "UnderlyingCouponPaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingIssueDate::tag: {
    res = "UnderlyingIssueDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRepoCollateralSecurityType::tag: {
    res = "UnderlyingRepoCollateralSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRepurchaseTerm::tag: {
    res = "UnderlyingRepurchaseTerm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRepurchaseRate::tag: {
    res = "UnderlyingRepurchaseRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingFactor::tag: {
    res = "UnderlyingFactor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRedemptionDate::tag: {
    res = "UnderlyingRedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCouponPaymentDate::tag: {
    res = "LegCouponPaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIssueDate::tag: {
    res = "LegIssueDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRepoCollateralSecurityType::tag: {
    res = "LegRepoCollateralSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRepurchaseTerm::tag: {
    res = "LegRepurchaseTerm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRepurchaseRate::tag: {
    res = "LegRepurchaseRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegFactor::tag: {
    res = "LegFactor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRedemptionDate::tag: {
    res = "LegRedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CreditRating::tag: {
    res = "CreditRating = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCreditRating::tag: {
    res = "UnderlyingCreditRating = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCreditRating::tag: {
    res = "LegCreditRating = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradedFlatSwitch::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "TradedFlatSwitch = ";
    if(value == FIX::TradedFlatSwitch::valTradedFlat)
    {
      foundValue = true;
      res += "TradedFlat";
    }
    if(value == FIX::TradedFlatSwitch::valNotTradedFlat)
    {
      foundValue = true;
      res += "NotTradedFlat";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BasisFeatureDate::tag: {
    res = "BasisFeatureDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BasisFeaturePrice::tag: {
    res = "BasisFeaturePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDReqID::tag: {
    res = "MDReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SubscriptionRequestType::tag: {
    FIX::Char value = charOfStr(val);
    res = "SubscriptionRequestType = ";
    if(value == FIX::SubscriptionRequestType::valSnapshot)
    {
      foundValue = true;
      res += "Snapshot";
    }
    if(value == FIX::SubscriptionRequestType::valSnapshotplusUpdates)
    {
      foundValue = true;
      res += "SnapshotplusUpdates";
    }
    if(value == FIX::SubscriptionRequestType::valDisablePreviousSnapshotplusUpdateRequest)
    {
      foundValue = true;
      res += "DisablePreviousSnapshotplusUpdateRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MarketDepth::tag: {
    FIX::Int value = intOfStr(val);
    res = "MarketDepth = ";
    if(value == FIX::MarketDepth::valFullBook)
    {
      foundValue = true;
      res += "FullBook";
    }
    if(value == FIX::MarketDepth::valTopOfBook)
    {
      foundValue = true;
      res += "TopOfBook";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDUpdateType::tag: {
    FIX::Int value = intOfStr(val);
    res = "MDUpdateType = ";
    if(value == FIX::MDUpdateType::valFullRefresh)
    {
      foundValue = true;
      res += "FullRefresh";
    }
    if(value == FIX::MDUpdateType::valIncrementalRefresh)
    {
      foundValue = true;
      res += "IncrementalRefresh";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AggregatedBook::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "AggregatedBook = ";
    if(value == FIX::AggregatedBook::valOneBookEntryPerSidePerPrice)
    {
      foundValue = true;
      res += "OneBookEntryPerSidePerPrice";
    }
    if(value == FIX::AggregatedBook::valMultipleEntriesPerSidePerPriceAllowed)
    {
      foundValue = true;
      res += "MultipleEntriesPerSidePerPriceAllowed";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMDEntryTypes::tag: {
    res = "NoMDEntryTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMDEntries::tag: {
    res = "NoMDEntries = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryType::tag: {
    FIX::Char value = charOfStr(val);
    res = "MDEntryType = ";
    if(value == FIX::MDEntryType::valBid)
    {
      foundValue = true;
      res += "Bid";
    }
    if(value == FIX::MDEntryType::valOffer)
    {
      foundValue = true;
      res += "Offer";
    }
    if(value == FIX::MDEntryType::valTrade)
    {
      foundValue = true;
      res += "Trade";
    }
    if(value == FIX::MDEntryType::valIndexValue)
    {
      foundValue = true;
      res += "IndexValue";
    }
    if(value == FIX::MDEntryType::valOpeningPrice)
    {
      foundValue = true;
      res += "OpeningPrice";
    }
    if(value == FIX::MDEntryType::valClosingPrice)
    {
      foundValue = true;
      res += "ClosingPrice";
    }
    if(value == FIX::MDEntryType::valSettlementPrice)
    {
      foundValue = true;
      res += "SettlementPrice";
    }
    if(value == FIX::MDEntryType::valTradingSessionHighPrice)
    {
      foundValue = true;
      res += "TradingSessionHighPrice";
    }
    if(value == FIX::MDEntryType::valTradingSessionLowPrice)
    {
      foundValue = true;
      res += "TradingSessionLowPrice";
    }
    if(value == FIX::MDEntryType::valTradingSessionVWAPPrice)
    {
      foundValue = true;
      res += "TradingSessionVWAPPrice";
    }
    if(value == FIX::MDEntryType::valImbalance)
    {
      foundValue = true;
      res += "Imbalance";
    }
    if(value == FIX::MDEntryType::valTradeVolume)
    {
      foundValue = true;
      res += "TradeVolume";
    }
    if(value == FIX::MDEntryType::valOpenInterest)
    {
      foundValue = true;
      res += "OpenInterest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryPx::tag: {
    res = "MDEntryPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntrySize::tag: {
    res = "MDEntrySize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryDate::tag: {
    res = "MDEntryDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryTime::tag: {
    res = "MDEntryTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TickDirection::tag: {
    FIX::Char value = charOfStr(val);
    res = "TickDirection = ";
    if(value == FIX::TickDirection::valPlusTick)
    {
      foundValue = true;
      res += "PlusTick";
    }
    if(value == FIX::TickDirection::valZeroPlusTick)
    {
      foundValue = true;
      res += "ZeroPlusTick";
    }
    if(value == FIX::TickDirection::valMinusTick)
    {
      foundValue = true;
      res += "MinusTick";
    }
    if(value == FIX::TickDirection::valZeroMinusTick)
    {
      foundValue = true;
      res += "ZeroMinusTick";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDMkt::tag: {
    res = "MDMkt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteCondition::tag: {
    res = "QuoteCondition = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeCondition::tag: {
    res = "TradeCondition = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryID::tag: {
    res = "MDEntryID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDUpdateAction::tag: {
    FIX::Char value = charOfStr(val);
    res = "MDUpdateAction = ";
    if(value == FIX::MDUpdateAction::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::MDUpdateAction::valChange)
    {
      foundValue = true;
      res += "Change";
    }
    if(value == FIX::MDUpdateAction::valDelete)
    {
      foundValue = true;
      res += "Delete";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryRefID::tag: {
    res = "MDEntryRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDReqRejReason::tag: {
    FIX::Char value = charOfStr(val);
    res = "MDReqRejReason = ";
    if(value == FIX::MDReqRejReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value == FIX::MDReqRejReason::valDuplicateMDReqID)
    {
      foundValue = true;
      res += "DuplicateMDReqID";
    }
    if(value == FIX::MDReqRejReason::valInsufficientBandwidth)
    {
      foundValue = true;
      res += "InsufficientBandwidth";
    }
    if(value == FIX::MDReqRejReason::valInsufficientPermissions)
    {
      foundValue = true;
      res += "InsufficientPermissions";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedSubscriptionRequestType)
    {
      foundValue = true;
      res += "UnsupportedSubscriptionRequestType";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedMarketDepth)
    {
      foundValue = true;
      res += "UnsupportedMarketDepth";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedMDUpdateType)
    {
      foundValue = true;
      res += "UnsupportedMDUpdateType";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedAggregatedBook)
    {
      foundValue = true;
      res += "UnsupportedAggregatedBook";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedMDEntryType)
    {
      foundValue = true;
      res += "UnsupportedMDEntryType";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedTradingSessionID)
    {
      foundValue = true;
      res += "UnsupportedTradingSessionID";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedScope)
    {
      foundValue = true;
      res += "UnsupportedScope";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedOpenCloseSettleFlag)
    {
      foundValue = true;
      res += "UnsupportedOpenCloseSettleFlag";
    }
    if(value == FIX::MDReqRejReason::valUnsupportedMDImplicitDelete)
    {
      foundValue = true;
      res += "UnsupportedMDImplicitDelete";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryOriginator::tag: {
    res = "MDEntryOriginator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LocationID::tag: {
    res = "LocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeskID::tag: {
    res = "DeskID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeleteReason::tag: {
    FIX::Char value = charOfStr(val);
    res = "DeleteReason = ";
    if(value == FIX::DeleteReason::valCancelationOrTradeBust)
    {
      foundValue = true;
      res += "CancelationOrTradeBust";
    }
    if(value == FIX::DeleteReason::valError)
    {
      foundValue = true;
      res += "Error";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OpenCloseSettlFlag::tag: {
    res = "OpenCloseSettlFlag = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SellerDays::tag: {
    res = "SellerDays = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryBuyer::tag: {
    res = "MDEntryBuyer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntrySeller::tag: {
    res = "MDEntrySeller = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryPositionNo::tag: {
    res = "MDEntryPositionNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::FinancialStatus::tag: {
    res = "FinancialStatus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CorporateAction::tag: {
    res = "CorporateAction = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DefBidSize::tag: {
    res = "DefBidSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DefOfferSize::tag: {
    res = "DefOfferSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoQuoteEntries::tag: {
    res = "NoQuoteEntries = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoQuoteSets::tag: {
    res = "NoQuoteSets = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteStatus = ";
    if(value == FIX::QuoteStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::QuoteStatus::valCanceledForSymbol)
    {
      foundValue = true;
      res += "CanceledForSymbol";
    }
    if(value == FIX::QuoteStatus::valCanceledForSecurityType)
    {
      foundValue = true;
      res += "CanceledForSecurityType";
    }
    if(value == FIX::QuoteStatus::valCanceledForUnderlying)
    {
      foundValue = true;
      res += "CanceledForUnderlying";
    }
    if(value == FIX::QuoteStatus::valCanceledAll)
    {
      foundValue = true;
      res += "CanceledAll";
    }
    if(value == FIX::QuoteStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value == FIX::QuoteStatus::valRemovedFromMarket)
    {
      foundValue = true;
      res += "RemovedFromMarket";
    }
    if(value == FIX::QuoteStatus::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value == FIX::QuoteStatus::valQuery)
    {
      foundValue = true;
      res += "Query";
    }
    if(value == FIX::QuoteStatus::valQuoteNotFound)
    {
      foundValue = true;
      res += "QuoteNotFound";
    }
    if(value == FIX::QuoteStatus::valPending)
    {
      foundValue = true;
      res += "Pending";
    }
    if(value == FIX::QuoteStatus::valPass)
    {
      foundValue = true;
      res += "Pass";
    }
    if(value == FIX::QuoteStatus::valLockedMarketWarning)
    {
      foundValue = true;
      res += "LockedMarketWarning";
    }
    if(value == FIX::QuoteStatus::valCrossMarketWarning)
    {
      foundValue = true;
      res += "CrossMarketWarning";
    }
    if(value == FIX::QuoteStatus::valCanceledDueToLockMarket)
    {
      foundValue = true;
      res += "CanceledDueToLockMarket";
    }
    if(value == FIX::QuoteStatus::valCanceledDueToCrossMarket)
    {
      foundValue = true;
      res += "CanceledDueToCrossMarket";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteCancelType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteCancelType = ";
    if(value == FIX::QuoteCancelType::valCancelForSymbol)
    {
      foundValue = true;
      res += "CancelForSymbol";
    }
    if(value == FIX::QuoteCancelType::valCancelForSecurityType)
    {
      foundValue = true;
      res += "CancelForSecurityType";
    }
    if(value == FIX::QuoteCancelType::valCancelForUnderlyingSymbol)
    {
      foundValue = true;
      res += "CancelForUnderlyingSymbol";
    }
    if(value == FIX::QuoteCancelType::valCancelAllQuotes)
    {
      foundValue = true;
      res += "CancelAllQuotes";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteEntryID::tag: {
    res = "QuoteEntryID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRejectReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteRejectReason = ";
    if(value == FIX::QuoteRejectReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value == FIX::QuoteRejectReason::valExchangeSecurityClosed)
    {
      foundValue = true;
      res += "ExchangeSecurityClosed";
    }
    if(value == FIX::QuoteRejectReason::valQuoteRequestExceedsLimit)
    {
      foundValue = true;
      res += "QuoteRequestExceedsLimit";
    }
    if(value == FIX::QuoteRejectReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value == FIX::QuoteRejectReason::valUnknownQuote)
    {
      foundValue = true;
      res += "UnknownQuote";
    }
    if(value == FIX::QuoteRejectReason::valDuplicateQuote)
    {
      foundValue = true;
      res += "DuplicateQuote";
    }
    if(value == FIX::QuoteRejectReason::valInvalidBidOraskSpread)
    {
      foundValue = true;
      res += "InvalidBidOraskSpread";
    }
    if(value == FIX::QuoteRejectReason::valInvalidPrice)
    {
      foundValue = true;
      res += "InvalidPrice";
    }
    if(value == FIX::QuoteRejectReason::valNotAuthorizedToQuoteSecurity)
    {
      foundValue = true;
      res += "NotAuthorizedToQuoteSecurity";
    }
    if(value == FIX::QuoteRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteResponseLevel::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteResponseLevel = ";
    if(value == FIX::QuoteResponseLevel::valNoAcknowledgement)
    {
      foundValue = true;
      res += "NoAcknowledgement";
    }
    if(value == FIX::QuoteResponseLevel::valAcknowledgeOnlyNegativeOrErroneousQuotes)
    {
      foundValue = true;
      res += "AcknowledgeOnlyNegativeOrErroneousQuotes";
    }
    if(value == FIX::QuoteResponseLevel::valAcknowledgeEachQuoteMessages)
    {
      foundValue = true;
      res += "AcknowledgeEachQuoteMessages";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteSetID::tag: {
    res = "QuoteSetID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRequestType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteRequestType = ";
    if(value == FIX::QuoteRequestType::valManual)
    {
      foundValue = true;
      res += "Manual";
    }
    if(value == FIX::QuoteRequestType::valAutomatic)
    {
      foundValue = true;
      res += "Automatic";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoQuoteEntries::tag: {
    res = "TotNoQuoteEntries = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityIDSource::tag: {
    res = "UnderlyingSecurityIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingIssuer::tag: {
    res = "UnderlyingIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityDesc::tag: {
    res = "UnderlyingSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityExchange::tag: {
    res = "UnderlyingSecurityExchange = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityID::tag: {
    res = "UnderlyingSecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityType::tag: {
    FIX::String value = stringOfStr(val);
    res = "UnderlyingSecurityType = ";
    if(!strcmp(value, FIX::UnderlyingSecurityType::valFederalGovernmentOrTreasury))
    {
      foundValue = true;
      res += "FederalGovernmentOrTreasury";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valStateProvinceRegionEtc))
    {
      foundValue = true;
      res += "StateProvinceRegionEtc";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valFederalAgency))
    {
      foundValue = true;
      res += "FederalAgency";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valMortgagePassthrough))
    {
      foundValue = true;
      res += "MortgagePassthrough";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valCommercialPaper))
    {
      foundValue = true;
      res += "CommercialPaper";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valCorporate))
    {
      foundValue = true;
      res += "Corporate";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valEquity))
    {
      foundValue = true;
      res += "Equity";
    }
    if(!strcmp(value, FIX::UnderlyingSecurityType::valSupraNationalAgency))
    {
      foundValue = true;
      res += "SupraNationalAgency";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSymbol::tag: {
    res = "UnderlyingSymbol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSymbolSfx::tag: {
    res = "UnderlyingSymbolSfx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingMaturityMonthYear::tag: {
    res = "UnderlyingMaturityMonthYear = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingMaturityDay::tag: {
    res = "UnderlyingMaturityDay = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingPutOrCall::tag: {
    res = "UnderlyingPutOrCall = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStrikePrice::tag: {
    res = "UnderlyingStrikePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingOptAttribute::tag: {
    res = "UnderlyingOptAttribute = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCurrency::tag: {
    res = "UnderlyingCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RatioQty::tag: {
    res = "RatioQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityReqID::tag: {
    res = "SecurityReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityRequestType::tag: {
    FIX::Int value = intOfStr(val);
    res = "SecurityRequestType = ";
    if(value == FIX::SecurityRequestType::valRequestSecurityIdentityAndSpecifications)
    {
      foundValue = true;
      res += "RequestSecurityIdentityAndSpecifications";
    }
    if(value == FIX::SecurityRequestType::valRequestSecurityIdentityForTheSpecificationsProvided)
    {
      foundValue = true;
      res += "RequestSecurityIdentityForTheSpecificationsProvided";
    }
    if(value == FIX::SecurityRequestType::valRequestListSecurityTypes)
    {
      foundValue = true;
      res += "RequestListSecurityTypes";
    }
    if(value == FIX::SecurityRequestType::valRequestListSecurities)
    {
      foundValue = true;
      res += "RequestListSecurities";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityResponseID::tag: {
    res = "SecurityResponseID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityResponseType::tag: {
    FIX::Int value = intOfStr(val);
    res = "SecurityResponseType = ";
    if(value == FIX::SecurityResponseType::valAcceptSecurityProposalAsIs)
    {
      foundValue = true;
      res += "AcceptSecurityProposalAsIs";
    }
    if(value == FIX::SecurityResponseType::valAcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage)
    {
      foundValue = true;
      res += "AcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage";
    }
    if(value == FIX::SecurityResponseType::valListOfSecurityTypesReturnedPerRequest)
    {
      foundValue = true;
      res += "ListOfSecurityTypesReturnedPerRequest";
    }
    if(value == FIX::SecurityResponseType::valListOfSecuritiesReturnedPerRequest)
    {
      foundValue = true;
      res += "ListOfSecuritiesReturnedPerRequest";
    }
    if(value == FIX::SecurityResponseType::valRejectSecurityProposal)
    {
      foundValue = true;
      res += "RejectSecurityProposal";
    }
    if(value == FIX::SecurityResponseType::valCanNotMatchSelectionCriteria)
    {
      foundValue = true;
      res += "CanNotMatchSelectionCriteria";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityStatusReqID::tag: {
    res = "SecurityStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnsolicitedIndicator::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "UnsolicitedIndicator = ";
    if(value == FIX::UnsolicitedIndicator::valMessageIsBeingSentUnsolicited)
    {
      foundValue = true;
      res += "MessageIsBeingSentUnsolicited";
    }
    if(value == FIX::UnsolicitedIndicator::valMessageIsBeingSentAsAResultOfAPriorRequest)
    {
      foundValue = true;
      res += "MessageIsBeingSentAsAResultOfAPriorRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityTradingStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "SecurityTradingStatus = ";
    if(value == FIX::SecurityTradingStatus::valOpeningDelay)
    {
      foundValue = true;
      res += "OpeningDelay";
    }
    if(value == FIX::SecurityTradingStatus::valTradingHalt)
    {
      foundValue = true;
      res += "TradingHalt";
    }
    if(value == FIX::SecurityTradingStatus::valResume)
    {
      foundValue = true;
      res += "Resume";
    }
    if(value == FIX::SecurityTradingStatus::valNoOpenOrNoResume)
    {
      foundValue = true;
      res += "NoOpenOrNoResume";
    }
    if(value == FIX::SecurityTradingStatus::valPriceIndication)
    {
      foundValue = true;
      res += "PriceIndication";
    }
    if(value == FIX::SecurityTradingStatus::valTradingRangeIndication)
    {
      foundValue = true;
      res += "TradingRangeIndication";
    }
    if(value == FIX::SecurityTradingStatus::valMarketImbalanceBuy)
    {
      foundValue = true;
      res += "MarketImbalanceBuy";
    }
    if(value == FIX::SecurityTradingStatus::valMarketImbalanceSell)
    {
      foundValue = true;
      res += "MarketImbalanceSell";
    }
    if(value == FIX::SecurityTradingStatus::valMarketOnCloseImbalanceBuy)
    {
      foundValue = true;
      res += "MarketOnCloseImbalanceBuy";
    }
    if(value == FIX::SecurityTradingStatus::valMarketOnCloseImbalanceSell)
    {
      foundValue = true;
      res += "MarketOnCloseImbalanceSell";
    }
    if(value == FIX::SecurityTradingStatus::valNoMarketImbalance)
    {
      foundValue = true;
      res += "NoMarketImbalance";
    }
    if(value == FIX::SecurityTradingStatus::valNoMarketOnCloseImbalance)
    {
      foundValue = true;
      res += "NoMarketOnCloseImbalance";
    }
    if(value == FIX::SecurityTradingStatus::valITSPreOpening)
    {
      foundValue = true;
      res += "ITSPreOpening";
    }
    if(value == FIX::SecurityTradingStatus::valNewPriceIndication)
    {
      foundValue = true;
      res += "NewPriceIndication";
    }
    if(value == FIX::SecurityTradingStatus::valTradeDisseminationTime)
    {
      foundValue = true;
      res += "TradeDisseminationTime";
    }
    if(value == FIX::SecurityTradingStatus::valReadyToTrade)
    {
      foundValue = true;
      res += "ReadyToTrade";
    }
    if(value == FIX::SecurityTradingStatus::valNotAvailableForTrading)
    {
      foundValue = true;
      res += "NotAvailableForTrading";
    }
    if(value == FIX::SecurityTradingStatus::valNotTradedOnThisMarket)
    {
      foundValue = true;
      res += "NotTradedOnThisMarket";
    }
    if(value == FIX::SecurityTradingStatus::valUnknownOrInvalid)
    {
      foundValue = true;
      res += "UnknownOrInvalid";
    }
    if(value == FIX::SecurityTradingStatus::valPreOpen)
    {
      foundValue = true;
      res += "PreOpen";
    }
    if(value == FIX::SecurityTradingStatus::valOpeningRotation)
    {
      foundValue = true;
      res += "OpeningRotation";
    }
    if(value == FIX::SecurityTradingStatus::valFastMarket)
    {
      foundValue = true;
      res += "FastMarket";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::HaltReason::tag: {
    FIX::Char value = charOfStr(val);
    res = "HaltReason = ";
    if(value == FIX::HaltReason::valOrderImbalance)
    {
      foundValue = true;
      res += "OrderImbalance";
    }
    if(value == FIX::HaltReason::valEquipmentChangeover)
    {
      foundValue = true;
      res += "EquipmentChangeover";
    }
    if(value == FIX::HaltReason::valNewsPending)
    {
      foundValue = true;
      res += "NewsPending";
    }
    if(value == FIX::HaltReason::valNewsDissemination)
    {
      foundValue = true;
      res += "NewsDissemination";
    }
    if(value == FIX::HaltReason::valOrderInflux)
    {
      foundValue = true;
      res += "OrderInflux";
    }
    if(value == FIX::HaltReason::valAdditionalInformation)
    {
      foundValue = true;
      res += "AdditionalInformation";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::InViewOfCommon::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "InViewOfCommon = ";
    if(value == FIX::InViewOfCommon::valHaltWasDueToCommonStockBeingHalted)
    {
      foundValue = true;
      res += "HaltWasDueToCommonStockBeingHalted";
    }
    if(value == FIX::InViewOfCommon::valHaltWasNotRelatedToAHaltOfTheCommonStock)
    {
      foundValue = true;
      res += "HaltWasNotRelatedToAHaltOfTheCommonStock";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DueToRelated::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "DueToRelated = ";
    if(value == FIX::DueToRelated::valHaltWasDueToRelatedSecurityBeingHalted)
    {
      foundValue = true;
      res += "HaltWasDueToRelatedSecurityBeingHalted";
    }
    if(value == FIX::DueToRelated::valHaltWasNotRelatedToAHaltOfTheRelatedSecurity)
    {
      foundValue = true;
      res += "HaltWasNotRelatedToAHaltOfTheRelatedSecurity";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BuyVolume::tag: {
    res = "BuyVolume = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SellVolume::tag: {
    res = "SellVolume = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HighPx::tag: {
    res = "HighPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LowPx::tag: {
    res = "LowPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Adjustment::tag: {
    FIX::Int value = intOfStr(val);
    res = "Adjustment = ";
    if(value == FIX::Adjustment::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value == FIX::Adjustment::valError)
    {
      foundValue = true;
      res += "Error";
    }
    if(value == FIX::Adjustment::valCorrection)
    {
      foundValue = true;
      res += "Correction";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesReqID::tag: {
    res = "TradSesReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradingSessionID::tag: {
    res = "TradingSessionID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraTrader::tag: {
    res = "ContraTrader = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesMethod::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradSesMethod = ";
    if(value == FIX::TradSesMethod::valElectronic)
    {
      foundValue = true;
      res += "Electronic";
    }
    if(value == FIX::TradSesMethod::valOpenOutcry)
    {
      foundValue = true;
      res += "OpenOutcry";
    }
    if(value == FIX::TradSesMethod::valTwoParty)
    {
      foundValue = true;
      res += "TwoParty";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesMode::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradSesMode = ";
    if(value == FIX::TradSesMode::valTesting)
    {
      foundValue = true;
      res += "Testing";
    }
    if(value == FIX::TradSesMode::valSimulated)
    {
      foundValue = true;
      res += "Simulated";
    }
    if(value == FIX::TradSesMode::valProduction)
    {
      foundValue = true;
      res += "Production";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradSesStatus = ";
    if(value == FIX::TradSesStatus::valUnknown)
    {
      foundValue = true;
      res += "Unknown";
    }
    if(value == FIX::TradSesStatus::valHalted)
    {
      foundValue = true;
      res += "Halted";
    }
    if(value == FIX::TradSesStatus::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(value == FIX::TradSesStatus::valClosed)
    {
      foundValue = true;
      res += "Closed";
    }
    if(value == FIX::TradSesStatus::valPreOpen)
    {
      foundValue = true;
      res += "PreOpen";
    }
    if(value == FIX::TradSesStatus::valPreClose)
    {
      foundValue = true;
      res += "PreClose";
    }
    if(value == FIX::TradSesStatus::valRequestRejected)
    {
      foundValue = true;
      res += "RequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesStartTime::tag: {
    res = "TradSesStartTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesOpenTime::tag: {
    res = "TradSesOpenTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesPreCloseTime::tag: {
    res = "TradSesPreCloseTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesCloseTime::tag: {
    res = "TradSesCloseTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesEndTime::tag: {
    res = "TradSesEndTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumberOfOrders::tag: {
    res = "NumberOfOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MessageEncoding::tag: {
    FIX::String value = stringOfStr(val);
    res = "MessageEncoding = ";
    if(!strcmp(value, FIX::MessageEncoding::val2022JP))
    {
      foundValue = true;
      res += "2022JP";
    }
    if(!strcmp(value, FIX::MessageEncoding::valJP))
    {
      foundValue = true;
      res += "JP";
    }
    if(!strcmp(value, FIX::MessageEncoding::valUTF8))
    {
      foundValue = true;
      res += "UTF8";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedIssuerLen::tag: {
    res = "EncodedIssuerLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedIssuer::tag: {
    res = "EncodedIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSecurityDescLen::tag: {
    res = "EncodedSecurityDescLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSecurityDesc::tag: {
    res = "EncodedSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListExecInstLen::tag: {
    res = "EncodedListExecInstLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListExecInst::tag: {
    res = "EncodedListExecInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedTextLen::tag: {
    res = "EncodedTextLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedText::tag: {
    res = "EncodedText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSubjectLen::tag: {
    res = "EncodedSubjectLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSubject::tag: {
    res = "EncodedSubject = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedHeadlineLen::tag: {
    res = "EncodedHeadlineLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedHeadline::tag: {
    res = "EncodedHeadline = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedAllocTextLen::tag: {
    res = "EncodedAllocTextLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedAllocText::tag: {
    res = "EncodedAllocText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingIssuerLen::tag: {
    res = "EncodedUnderlyingIssuerLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingIssuer::tag: {
    res = "EncodedUnderlyingIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingSecurityDescLen::tag: {
    res = "EncodedUnderlyingSecurityDescLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingSecurityDesc::tag: {
    res = "EncodedUnderlyingSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocPrice::tag: {
    res = "AllocPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteSetValidUntilTime::tag: {
    res = "QuoteSetValidUntilTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteEntryRejectReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteEntryRejectReason = ";
    if(value == FIX::QuoteEntryRejectReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value == FIX::QuoteEntryRejectReason::valExchangeSecurityClosed)
    {
      foundValue = true;
      res += "ExchangeSecurityClosed";
    }
    if(value == FIX::QuoteEntryRejectReason::valQuoteExceedsLimit)
    {
      foundValue = true;
      res += "QuoteExceedsLimit";
    }
    if(value == FIX::QuoteEntryRejectReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value == FIX::QuoteEntryRejectReason::valUnknownQuote)
    {
      foundValue = true;
      res += "UnknownQuote";
    }
    if(value == FIX::QuoteEntryRejectReason::valDuplicateQuote)
    {
      foundValue = true;
      res += "DuplicateQuote";
    }
    if(value == FIX::QuoteEntryRejectReason::valInvalidBidOraskSpread)
    {
      foundValue = true;
      res += "InvalidBidOraskSpread";
    }
    if(value == FIX::QuoteEntryRejectReason::valInvalidPrice)
    {
      foundValue = true;
      res += "InvalidPrice";
    }
    if(value == FIX::QuoteEntryRejectReason::valNotAuthorizedToQuoteSecurity)
    {
      foundValue = true;
      res += "NotAuthorizedToQuoteSecurity";
    }
    if(value == FIX::QuoteEntryRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastMsgSeqNumProcessed::tag: {
    res = "LastMsgSeqNumProcessed = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfSendingTime::tag: {
    res = "OnBehalfOfSendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefTagID::tag: {
    res = "RefTagID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefMsgType::tag: {
    res = "RefMsgType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SessionRejectReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "SessionRejectReason = ";
    if(value == FIX::SessionRejectReason::valInvalidTagNumber)
    {
      foundValue = true;
      res += "InvalidTagNumber";
    }
    if(value == FIX::SessionRejectReason::valRequiredTagMissing)
    {
      foundValue = true;
      res += "RequiredTagMissing";
    }
    if(value == FIX::SessionRejectReason::valTagNotDefinedForThisMessageType)
    {
      foundValue = true;
      res += "TagNotDefinedForThisMessageType";
    }
    if(value == FIX::SessionRejectReason::valUndefinedTag)
    {
      foundValue = true;
      res += "UndefinedTag";
    }
    if(value == FIX::SessionRejectReason::valTagSpecifiedWithoutAValue)
    {
      foundValue = true;
      res += "TagSpecifiedWithoutAValue";
    }
    if(value == FIX::SessionRejectReason::valValueIsIncorrectoutOfRangeForThisTag)
    {
      foundValue = true;
      res += "ValueIsIncorrectoutOfRangeForThisTag";
    }
    if(value == FIX::SessionRejectReason::valIncorrectDataFormatForValue)
    {
      foundValue = true;
      res += "IncorrectDataFormatForValue";
    }
    if(value == FIX::SessionRejectReason::valDecryptionProblem)
    {
      foundValue = true;
      res += "DecryptionProblem";
    }
    if(value == FIX::SessionRejectReason::valSignatureProblem)
    {
      foundValue = true;
      res += "SignatureProblem";
    }
    if(value == FIX::SessionRejectReason::valCompIDProblem)
    {
      foundValue = true;
      res += "CompIDProblem";
    }
    if(value == FIX::SessionRejectReason::valSendingTimeAccuracyProblem)
    {
      foundValue = true;
      res += "SendingTimeAccuracyProblem";
    }
    if(value == FIX::SessionRejectReason::valInvalidMsgType)
    {
      foundValue = true;
      res += "InvalidMsgType";
    }
    if(value == FIX::SessionRejectReason::valXMLValidationError)
    {
      foundValue = true;
      res += "XMLValidationError";
    }
    if(value == FIX::SessionRejectReason::valTagAppearsMoreThanOnce)
    {
      foundValue = true;
      res += "TagAppearsMoreThanOnce";
    }
    if(value == FIX::SessionRejectReason::valTagSpecifiedOutOfRequiredOrder)
    {
      foundValue = true;
      res += "TagSpecifiedOutOfRequiredOrder";
    }
    if(value == FIX::SessionRejectReason::valRepeatingGroupFieldsOutOfOrder)
    {
      foundValue = true;
      res += "RepeatingGroupFieldsOutOfOrder";
    }
    if(value == FIX::SessionRejectReason::valIncorrectNumInGroupCountForRepeatingGroup)
    {
      foundValue = true;
      res += "IncorrectNumInGroupCountForRepeatingGroup";
    }
    if(value == FIX::SessionRejectReason::valNondataValueIncludesFieldDelimiter)
    {
      foundValue = true;
      res += "NondataValueIncludesFieldDelimiter";
    }
    if(value == FIX::SessionRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidRequestTransType::tag: {
    FIX::Char value = charOfStr(val);
    res = "BidRequestTransType = ";
    if(value == FIX::BidRequestTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::BidRequestTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraBroker::tag: {
    res = "ContraBroker = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ComplianceID::tag: {
    res = "ComplianceID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SolicitedFlag::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "SolicitedFlag = ";
    if(value == FIX::SolicitedFlag::valWasSolcitied)
    {
      foundValue = true;
      res += "WasSolcitied";
    }
    if(value == FIX::SolicitedFlag::valWasNotSolicited)
    {
      foundValue = true;
      res += "WasNotSolicited";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecRestatementReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "ExecRestatementReason = ";
    if(value == FIX::ExecRestatementReason::valGTCorporateAction)
    {
      foundValue = true;
      res += "GTCorporateAction";
    }
    if(value == FIX::ExecRestatementReason::valGTRenewalOrRestatement)
    {
      foundValue = true;
      res += "GTRenewalOrRestatement";
    }
    if(value == FIX::ExecRestatementReason::valVerbalChange)
    {
      foundValue = true;
      res += "VerbalChange";
    }
    if(value == FIX::ExecRestatementReason::valRepricingOfOrder)
    {
      foundValue = true;
      res += "RepricingOfOrder";
    }
    if(value == FIX::ExecRestatementReason::valBrokerOption)
    {
      foundValue = true;
      res += "BrokerOption";
    }
    if(value == FIX::ExecRestatementReason::valPartialDeclineOfOrderQty)
    {
      foundValue = true;
      res += "PartialDeclineOfOrderQty";
    }
    if(value == FIX::ExecRestatementReason::valCancelOnTradingHalt)
    {
      foundValue = true;
      res += "CancelOnTradingHalt";
    }
    if(value == FIX::ExecRestatementReason::valCancelOnSystemFailure)
    {
      foundValue = true;
      res += "CancelOnSystemFailure";
    }
    if(value == FIX::ExecRestatementReason::valMarketExchangeOption)
    {
      foundValue = true;
      res += "MarketExchangeOption";
    }
    if(value == FIX::ExecRestatementReason::valCanceledNotBest)
    {
      foundValue = true;
      res += "CanceledNotBest";
    }
    if(value == FIX::ExecRestatementReason::valWarehouseRecap)
    {
      foundValue = true;
      res += "WarehouseRecap";
    }
    if(value == FIX::ExecRestatementReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BusinessRejectRefID::tag: {
    res = "BusinessRejectRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BusinessRejectReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "BusinessRejectReason = ";
    if(value == FIX::BusinessRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value == FIX::BusinessRejectReason::valUnkownID)
    {
      foundValue = true;
      res += "UnkownID";
    }
    if(value == FIX::BusinessRejectReason::valUnknownSecurity)
    {
      foundValue = true;
      res += "UnknownSecurity";
    }
    if(value == FIX::BusinessRejectReason::valUnsupportedMessageType)
    {
      foundValue = true;
      res += "UnsupportedMessageType";
    }
    if(value == FIX::BusinessRejectReason::valApplicationNotAvailable)
    {
      foundValue = true;
      res += "ApplicationNotAvailable";
    }
    if(value == FIX::BusinessRejectReason::valConditionallyRequiredFieldMissing)
    {
      foundValue = true;
      res += "ConditionallyRequiredFieldMissing";
    }
    if(value == FIX::BusinessRejectReason::valNotAuthorized)
    {
      foundValue = true;
      res += "NotAuthorized";
    }
    if(value == FIX::BusinessRejectReason::valDeliverToFirmNotAvailableAtThisTime)
    {
      foundValue = true;
      res += "DeliverToFirmNotAvailableAtThisTime";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::GrossTradeAmt::tag: {
    res = "GrossTradeAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoContraBrokers::tag: {
    res = "NoContraBrokers = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaxMessageSize::tag: {
    res = "MaxMessageSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMsgTypes::tag: {
    res = "NoMsgTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MsgDirection::tag: {
    FIX::Char value = charOfStr(val);
    res = "MsgDirection = ";
    if(value == FIX::MsgDirection::valSend)
    {
      foundValue = true;
      res += "Send";
    }
    if(value == FIX::MsgDirection::valReceive)
    {
      foundValue = true;
      res += "Receive";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoTradingSessions::tag: {
    res = "NoTradingSessions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalVolumeTraded::tag: {
    res = "TotalVolumeTraded = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionInst::tag: {
    FIX::Char value = charOfStr(val);
    res = "DiscretionInst = ";
    if(value == FIX::DiscretionInst::valRelatedToDisplayedPrice)
    {
      foundValue = true;
      res += "RelatedToDisplayedPrice";
    }
    if(value == FIX::DiscretionInst::valRelatedToMarketPrice)
    {
      foundValue = true;
      res += "RelatedToMarketPrice";
    }
    if(value == FIX::DiscretionInst::valRelatedToPrimaryPrice)
    {
      foundValue = true;
      res += "RelatedToPrimaryPrice";
    }
    if(value == FIX::DiscretionInst::valRelatedToLocalPrimaryPrice)
    {
      foundValue = true;
      res += "RelatedToLocalPrimaryPrice";
    }
    if(value == FIX::DiscretionInst::valRelatedToMidpointPrice)
    {
      foundValue = true;
      res += "RelatedToMidpointPrice";
    }
    if(value == FIX::DiscretionInst::valRelatedToLastTradePrice)
    {
      foundValue = true;
      res += "RelatedToLastTradePrice";
    }
    if(value == FIX::DiscretionInst::valRelatedToVWAP)
    {
      foundValue = true;
      res += "RelatedToVWAP";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionOffsetValue::tag: {
    res = "DiscretionOffsetValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidID::tag: {
    res = "BidID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClientBidID::tag: {
    res = "ClientBidID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListName::tag: {
    res = "ListName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoRelatedSym::tag: {
    res = "TotNoRelatedSym = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidType::tag: {
    FIX::Int value = intOfStr(val);
    res = "BidType = ";
    if(value == FIX::BidType::valNonDisclosedStyle)
    {
      foundValue = true;
      res += "NonDisclosedStyle";
    }
    if(value == FIX::BidType::valDisclosedStyle)
    {
      foundValue = true;
      res += "DisclosedStyle";
    }
    if(value == FIX::BidType::valNoBiddingProcess)
    {
      foundValue = true;
      res += "NoBiddingProcess";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumTickets::tag: {
    res = "NumTickets = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideValue1::tag: {
    res = "SideValue1 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideValue2::tag: {
    res = "SideValue2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoBidDescriptors::tag: {
    res = "NoBidDescriptors = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidDescriptorType::tag: {
    FIX::Int value = intOfStr(val);
    res = "BidDescriptorType = ";
    if(value == FIX::BidDescriptorType::valSector)
    {
      foundValue = true;
      res += "Sector";
    }
    if(value == FIX::BidDescriptorType::valCountry)
    {
      foundValue = true;
      res += "Country";
    }
    if(value == FIX::BidDescriptorType::valIndex)
    {
      foundValue = true;
      res += "Index";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidDescriptor::tag: {
    res = "BidDescriptor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideValueInd::tag: {
    FIX::Int value = intOfStr(val);
    res = "SideValueInd = ";
    if(value == FIX::SideValueInd::valSideValue)
    {
      foundValue = true;
      res += "SideValue";
    }
    if(value == FIX::SideValueInd::valSideValue2)
    {
      foundValue = true;
      res += "SideValue2";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityPctLow::tag: {
    res = "LiquidityPctLow = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityPctHigh::tag: {
    res = "LiquidityPctHigh = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityValue::tag: {
    res = "LiquidityValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EFPTrackingError::tag: {
    res = "EFPTrackingError = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::FairValue::tag: {
    res = "FairValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OutsideIndexPct::tag: {
    res = "OutsideIndexPct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ValueOfFutures::tag: {
    res = "ValueOfFutures = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityIndType::tag: {
    FIX::Int value = intOfStr(val);
    res = "LiquidityIndType = ";
    if(value == FIX::LiquidityIndType::val5dayMovingAverage)
    {
      foundValue = true;
      res += "5dayMovingAverage";
    }
    if(value == FIX::LiquidityIndType::val20DayMovingAverage)
    {
      foundValue = true;
      res += "20DayMovingAverage";
    }
    if(value == FIX::LiquidityIndType::valNormalMarketSize)
    {
      foundValue = true;
      res += "NormalMarketSize";
    }
    if(value == FIX::LiquidityIndType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::WtAverageLiquidity::tag: {
    res = "WtAverageLiquidity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExchangeForPhysical::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "ExchangeForPhysical = ";
    if(value == FIX::ExchangeForPhysical::valTrue)
    {
      foundValue = true;
      res += "True";
    }
    if(value == FIX::ExchangeForPhysical::valFalse)
    {
      foundValue = true;
      res += "False";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OutMainCntryUIndex::tag: {
    res = "OutMainCntryUIndex = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossPercent::tag: {
    res = "CrossPercent = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ProgRptReqs::tag: {
    FIX::Int value = intOfStr(val);
    res = "ProgRptReqs = ";
    if(value == FIX::ProgRptReqs::valBuySideExplicitlyRequestsStatus)
    {
      foundValue = true;
      res += "BuySideExplicitlyRequestsStatus";
    }
    if(value == FIX::ProgRptReqs::valSellSidePeriodicallySendsStatus)
    {
      foundValue = true;
      res += "SellSidePeriodicallySendsStatus";
    }
    if(value == FIX::ProgRptReqs::valRealTimeExecutionReports)
    {
      foundValue = true;
      res += "RealTimeExecutionReports";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ProgPeriodInterval::tag: {
    res = "ProgPeriodInterval = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IncTaxInd::tag: {
    FIX::Int value = intOfStr(val);
    res = "IncTaxInd = ";
    if(value == FIX::IncTaxInd::valNet)
    {
      foundValue = true;
      res += "Net";
    }
    if(value == FIX::IncTaxInd::valGross)
    {
      foundValue = true;
      res += "Gross";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumBidders::tag: {
    res = "NumBidders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidTradeType::tag: {
    FIX::Char value = charOfStr(val);
    res = "BidTradeType = ";
    if(value == FIX::BidTradeType::valRiskTrade)
    {
      foundValue = true;
      res += "RiskTrade";
    }
    if(value == FIX::BidTradeType::valVWAPGuarantee)
    {
      foundValue = true;
      res += "VWAPGuarantee";
    }
    if(value == FIX::BidTradeType::valAgency)
    {
      foundValue = true;
      res += "Agency";
    }
    if(value == FIX::BidTradeType::valGuaranteedClose)
    {
      foundValue = true;
      res += "GuaranteedClose";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BasisPxType::tag: {
    FIX::Char value = charOfStr(val);
    res = "BasisPxType = ";
    if(value == FIX::BasisPxType::valClosingPriceAtMorningSession)
    {
      foundValue = true;
      res += "ClosingPriceAtMorningSession";
    }
    if(value == FIX::BasisPxType::valClosingPrice)
    {
      foundValue = true;
      res += "ClosingPrice";
    }
    if(value == FIX::BasisPxType::valCurrentPrice)
    {
      foundValue = true;
      res += "CurrentPrice";
    }
    if(value == FIX::BasisPxType::valSQ)
    {
      foundValue = true;
      res += "SQ";
    }
    if(value == FIX::BasisPxType::valVWAPThroughADay)
    {
      foundValue = true;
      res += "VWAPThroughADay";
    }
    if(value == FIX::BasisPxType::valVWAPThroughAMorningSession)
    {
      foundValue = true;
      res += "VWAPThroughAMorningSession";
    }
    if(value == FIX::BasisPxType::valVWAPThroughAnAfternoonSession)
    {
      foundValue = true;
      res += "VWAPThroughAnAfternoonSession";
    }
    if(value == FIX::BasisPxType::valVWAPThroughADayExceptYORI)
    {
      foundValue = true;
      res += "VWAPThroughADayExceptYORI";
    }
    if(value == FIX::BasisPxType::valVWAPThroughAMorningSessionExceptYORI)
    {
      foundValue = true;
      res += "VWAPThroughAMorningSessionExceptYORI";
    }
    if(value == FIX::BasisPxType::valVWAPThroughAnAfternoonSessionExceptYORI)
    {
      foundValue = true;
      res += "VWAPThroughAnAfternoonSessionExceptYORI";
    }
    if(value == FIX::BasisPxType::valStrike)
    {
      foundValue = true;
      res += "Strike";
    }
    if(value == FIX::BasisPxType::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(value == FIX::BasisPxType::valOthers)
    {
      foundValue = true;
      res += "Others";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoBidComponents::tag: {
    res = "NoBidComponents = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Country::tag: {
    res = "Country = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoStrikes::tag: {
    res = "TotNoStrikes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriceType::tag: {
    FIX::Int value = intOfStr(val);
    res = "PriceType = ";
    if(value == FIX::PriceType::valPercentageegPercentOfPar)
    {
      foundValue = true;
      res += "PercentageegPercentOfPar";
    }
    if(value == FIX::PriceType::valPerUnit)
    {
      foundValue = true;
      res += "PerUnit";
    }
    if(value == FIX::PriceType::valFixedAmount)
    {
      foundValue = true;
      res += "FixedAmount";
    }
    if(value == FIX::PriceType::valDiscountPercentagePointsBelowPar)
    {
      foundValue = true;
      res += "DiscountPercentagePointsBelowPar";
    }
    if(value == FIX::PriceType::valPremiumPercentagePointsOverPar)
    {
      foundValue = true;
      res += "PremiumPercentagePointsOverPar";
    }
    if(value == FIX::PriceType::valSpread)
    {
      foundValue = true;
      res += "Spread";
    }
    if(value == FIX::PriceType::valTEDPrice)
    {
      foundValue = true;
      res += "TEDPrice";
    }
    if(value == FIX::PriceType::valTEDYield)
    {
      foundValue = true;
      res += "TEDYield";
    }
    if(value == FIX::PriceType::valYield)
    {
      foundValue = true;
      res += "Yield";
    }
    if(value == FIX::PriceType::valFixedCabinetTradePrice)
    {
      foundValue = true;
      res += "FixedCabinetTradePrice";
    }
    if(value == FIX::PriceType::valVariableCabinetTradePrice)
    {
      foundValue = true;
      res += "VariableCabinetTradePrice";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayOrderQty::tag: {
    res = "DayOrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayCumQty::tag: {
    res = "DayCumQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayAvgPx::tag: {
    res = "DayAvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::GTBookingInst::tag: {
    FIX::Int value = intOfStr(val);
    res = "GTBookingInst = ";
    if(value == FIX::GTBookingInst::valBookOutAllTradesOnDayOfExecution)
    {
      foundValue = true;
      res += "BookOutAllTradesOnDayOfExecution";
    }
    if(value == FIX::GTBookingInst::valAccumulateExecutionsUntilOrderIsFilledOrExpires)
    {
      foundValue = true;
      res += "AccumulateExecutionsUntilOrderIsFilledOrExpires";
    }
    if(value == FIX::GTBookingInst::valAccumulateUntilVerballyNotifiedOtherwise)
    {
      foundValue = true;
      res += "AccumulateUntilVerballyNotifiedOtherwise";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoStrikes::tag: {
    res = "NoStrikes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListStatusType::tag: {
    FIX::Int value = intOfStr(val);
    res = "ListStatusType = ";
    if(value == FIX::ListStatusType::valAck)
    {
      foundValue = true;
      res += "Ack";
    }
    if(value == FIX::ListStatusType::valResponse)
    {
      foundValue = true;
      res += "Response";
    }
    if(value == FIX::ListStatusType::valTimed)
    {
      foundValue = true;
      res += "Timed";
    }
    if(value == FIX::ListStatusType::valExecStarted)
    {
      foundValue = true;
      res += "ExecStarted";
    }
    if(value == FIX::ListStatusType::valAllDone)
    {
      foundValue = true;
      res += "AllDone";
    }
    if(value == FIX::ListStatusType::valAlert)
    {
      foundValue = true;
      res += "Alert";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetGrossInd::tag: {
    FIX::Int value = intOfStr(val);
    res = "NetGrossInd = ";
    if(value == FIX::NetGrossInd::valNet)
    {
      foundValue = true;
      res += "Net";
    }
    if(value == FIX::NetGrossInd::valGross)
    {
      foundValue = true;
      res += "Gross";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListOrderStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "ListOrderStatus = ";
    if(value == FIX::ListOrderStatus::valInBiddingProcess)
    {
      foundValue = true;
      res += "InBiddingProcess";
    }
    if(value == FIX::ListOrderStatus::valReceivedForExecution)
    {
      foundValue = true;
      res += "ReceivedForExecution";
    }
    if(value == FIX::ListOrderStatus::valExecuting)
    {
      foundValue = true;
      res += "Executing";
    }
    if(value == FIX::ListOrderStatus::valCanceling)
    {
      foundValue = true;
      res += "Canceling";
    }
    if(value == FIX::ListOrderStatus::valAlert)
    {
      foundValue = true;
      res += "Alert";
    }
    if(value == FIX::ListOrderStatus::valAllDone)
    {
      foundValue = true;
      res += "AllDone";
    }
    if(value == FIX::ListOrderStatus::valReject)
    {
      foundValue = true;
      res += "Reject";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExpireDate::tag: {
    res = "ExpireDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListExecInstType::tag: {
    FIX::Char value = charOfStr(val);
    res = "ListExecInstType = ";
    if(value == FIX::ListExecInstType::valImmediate)
    {
      foundValue = true;
      res += "Immediate";
    }
    if(value == FIX::ListExecInstType::valWaitForExecuteInstruction)
    {
      foundValue = true;
      res += "WaitForExecuteInstruction";
    }
    if(value == FIX::ListExecInstType::valExchangeOrswitchCIVOrderSellDriven)
    {
      foundValue = true;
      res += "ExchangeOrswitchCIVOrderSellDriven";
    }
    if(value == FIX::ListExecInstType::valExchangeOrswitchCIVOrderBuyDrivenCashTopUp)
    {
      foundValue = true;
      res += "ExchangeOrswitchCIVOrderBuyDrivenCashTopUp";
    }
    if(value == FIX::ListExecInstType::valExchangeOrswitchCIVOrderBuyDrivenCashWithdraw)
    {
      foundValue = true;
      res += "ExchangeOrswitchCIVOrderBuyDrivenCashWithdraw";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlRejResponseTo::tag: {
    FIX::Char value = charOfStr(val);
    res = "CxlRejResponseTo = ";
    if(value == FIX::CxlRejResponseTo::valOrderCancelRequest)
    {
      foundValue = true;
      res += "OrderCancelRequest";
    }
    if(value == FIX::CxlRejResponseTo::valOrderCancelOrReplaceRequest)
    {
      foundValue = true;
      res += "OrderCancelOrReplaceRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCouponRate::tag: {
    res = "UnderlyingCouponRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingContractMultiplier::tag: {
    res = "UnderlyingContractMultiplier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraTradeQty::tag: {
    res = "ContraTradeQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraTradeTime::tag: {
    res = "ContraTradeTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingFirm::tag: {
    res = "ClearingFirm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingAccount::tag: {
    res = "ClearingAccount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityNumSecurities::tag: {
    res = "LiquidityNumSecurities = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MultiLegReportingType::tag: {
    FIX::Char value = charOfStr(val);
    res = "MultiLegReportingType = ";
    if(value == FIX::MultiLegReportingType::valSingleSecurity)
    {
      foundValue = true;
      res += "SingleSecurity";
    }
    if(value == FIX::MultiLegReportingType::valIndividualLegOfAMultiLegSecurity)
    {
      foundValue = true;
      res += "IndividualLegOfAMultiLegSecurity";
    }
    if(value == FIX::MultiLegReportingType::valMultiLegSecurity)
    {
      foundValue = true;
      res += "MultiLegSecurity";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StrikeTime::tag: {
    res = "StrikeTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListStatusText::tag: {
    res = "ListStatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListStatusTextLen::tag: {
    res = "EncodedListStatusTextLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListStatusText::tag: {
    res = "EncodedListStatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartyIDSource::tag: {
    FIX::Char value = charOfStr(val);
    res = "PartyIDSource = ";
    if(value == FIX::PartyIDSource::valBICBankIdentificationCodeSwiftManagedCodeISO9362)
    {
      foundValue = true;
      res += "BICBankIdentificationCodeSwiftManagedCodeISO9362";
    }
    if(value == FIX::PartyIDSource::valGenerallyAcceptedMarketParticipantIdentifier)
    {
      foundValue = true;
      res += "GenerallyAcceptedMarketParticipantIdentifier";
    }
    if(value == FIX::PartyIDSource::valProprietaryOrCustomCode)
    {
      foundValue = true;
      res += "ProprietaryOrCustomCode";
    }
    if(value == FIX::PartyIDSource::valISOCountryCode)
    {
      foundValue = true;
      res += "ISOCountryCode";
    }
    if(value == FIX::PartyIDSource::valSettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode)
    {
      foundValue = true;
      res += "SettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode";
    }
    if(value == FIX::PartyIDSource::valMICISO0383MarketIdentifierCode)
    {
      foundValue = true;
      res += "MICISO0383MarketIdentifierCode";
    }
    if(value == FIX::PartyIDSource::valCSDParticipantOrmemberCode)
    {
      foundValue = true;
      res += "CSDParticipantOrmemberCode";
    }
    if(value == FIX::PartyIDSource::valKoreanInvestorID)
    {
      foundValue = true;
      res += "KoreanInvestorID";
    }
    if(value == FIX::PartyIDSource::valTaiwaneseQualifiedForeignInvestorIDQFIIOrFID)
    {
      foundValue = true;
      res += "TaiwaneseQualifiedForeignInvestorIDQFIIOrFID";
    }
    if(value == FIX::PartyIDSource::valTaiwaneseTradingAccount)
    {
      foundValue = true;
      res += "TaiwaneseTradingAccount";
    }
    if(value == FIX::PartyIDSource::valMalaysianCentralDepositoryMCDNumber)
    {
      foundValue = true;
      res += "MalaysianCentralDepositoryMCDNumber";
    }
    if(value == FIX::PartyIDSource::valChineseBShare)
    {
      foundValue = true;
      res += "ChineseBShare";
    }
    if(value == FIX::PartyIDSource::valUKNationalInsuranceOrPensionNumber)
    {
      foundValue = true;
      res += "UKNationalInsuranceOrPensionNumber";
    }
    if(value == FIX::PartyIDSource::valUSSocialSecurityNumber)
    {
      foundValue = true;
      res += "USSocialSecurityNumber";
    }
    if(value == FIX::PartyIDSource::valUSEmployerIdentificationNumber)
    {
      foundValue = true;
      res += "USEmployerIdentificationNumber";
    }
    if(value == FIX::PartyIDSource::valAustralianBusinessNumber)
    {
      foundValue = true;
      res += "AustralianBusinessNumber";
    }
    if(value == FIX::PartyIDSource::valAustralianTaxFileNumber)
    {
      foundValue = true;
      res += "AustralianTaxFileNumber";
    }
    if(value == FIX::PartyIDSource::valDirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC)
    {
      foundValue = true;
      res += "DirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartyID::tag: {
    res = "PartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalVolumeTradedDate::tag: {
    res = "TotalVolumeTradedDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalVolumeTrade::tag: {
    res = "TotalVolumeTrade = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetChgPrevDay::tag: {
    res = "NetChgPrevDay = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartyRole::tag: {
    FIX::Int value = intOfStr(val);
    res = "PartyRole = ";
    if(value == FIX::PartyRole::valExecutingFirm)
    {
      foundValue = true;
      res += "ExecutingFirm";
    }
    if(value == FIX::PartyRole::valBrokerOfCredit)
    {
      foundValue = true;
      res += "BrokerOfCredit";
    }
    if(value == FIX::PartyRole::valClientID)
    {
      foundValue = true;
      res += "ClientID";
    }
    if(value == FIX::PartyRole::valClearingFirm)
    {
      foundValue = true;
      res += "ClearingFirm";
    }
    if(value == FIX::PartyRole::valInvestorID)
    {
      foundValue = true;
      res += "InvestorID";
    }
    if(value == FIX::PartyRole::valIntroducingFirm)
    {
      foundValue = true;
      res += "IntroducingFirm";
    }
    if(value == FIX::PartyRole::valEnteringFirm)
    {
      foundValue = true;
      res += "EnteringFirm";
    }
    if(value == FIX::PartyRole::valLocateOrLendingFirm)
    {
      foundValue = true;
      res += "LocateOrLendingFirm";
    }
    if(value == FIX::PartyRole::valFundManagerClientID)
    {
      foundValue = true;
      res += "FundManagerClientID";
    }
    if(value == FIX::PartyRole::valSettlementLocation)
    {
      foundValue = true;
      res += "SettlementLocation";
    }
    if(value == FIX::PartyRole::valOrderOriginationTrader)
    {
      foundValue = true;
      res += "OrderOriginationTrader";
    }
    if(value == FIX::PartyRole::valExecutingTrader)
    {
      foundValue = true;
      res += "ExecutingTrader";
    }
    if(value == FIX::PartyRole::valOrderOriginationFirm)
    {
      foundValue = true;
      res += "OrderOriginationFirm";
    }
    if(value == FIX::PartyRole::valGiveupClearingFirm)
    {
      foundValue = true;
      res += "GiveupClearingFirm";
    }
    if(value == FIX::PartyRole::valCorrespondantClearingFirm)
    {
      foundValue = true;
      res += "CorrespondantClearingFirm";
    }
    if(value == FIX::PartyRole::valExecutingSystem)
    {
      foundValue = true;
      res += "ExecutingSystem";
    }
    if(value == FIX::PartyRole::valContraFirm)
    {
      foundValue = true;
      res += "ContraFirm";
    }
    if(value == FIX::PartyRole::valContraClearingFirm)
    {
      foundValue = true;
      res += "ContraClearingFirm";
    }
    if(value == FIX::PartyRole::valSponsoringFirm)
    {
      foundValue = true;
      res += "SponsoringFirm";
    }
    if(value == FIX::PartyRole::valUnderlyingContraFirm)
    {
      foundValue = true;
      res += "UnderlyingContraFirm";
    }
    if(value == FIX::PartyRole::valClearingOrganization)
    {
      foundValue = true;
      res += "ClearingOrganization";
    }
    if(value == FIX::PartyRole::valExchange)
    {
      foundValue = true;
      res += "Exchange";
    }
    if(value == FIX::PartyRole::valCustomerAccount)
    {
      foundValue = true;
      res += "CustomerAccount";
    }
    if(value == FIX::PartyRole::valCorrespondentClearingOrganization)
    {
      foundValue = true;
      res += "CorrespondentClearingOrganization";
    }
    if(value == FIX::PartyRole::valCorrespondentBroker)
    {
      foundValue = true;
      res += "CorrespondentBroker";
    }
    if(value == FIX::PartyRole::valBuyerOrSeller)
    {
      foundValue = true;
      res += "BuyerOrSeller";
    }
    if(value == FIX::PartyRole::valCustodian)
    {
      foundValue = true;
      res += "Custodian";
    }
    if(value == FIX::PartyRole::valIntermediary)
    {
      foundValue = true;
      res += "Intermediary";
    }
    if(value == FIX::PartyRole::valAgent)
    {
      foundValue = true;
      res += "Agent";
    }
    if(value == FIX::PartyRole::valSubCustodian)
    {
      foundValue = true;
      res += "SubCustodian";
    }
    if(value == FIX::PartyRole::valBeneficiary)
    {
      foundValue = true;
      res += "Beneficiary";
    }
    if(value == FIX::PartyRole::valInterestedParty)
    {
      foundValue = true;
      res += "InterestedParty";
    }
    if(value == FIX::PartyRole::valRegulatoryBody)
    {
      foundValue = true;
      res += "RegulatoryBody";
    }
    if(value == FIX::PartyRole::valLiquidityProvider)
    {
      foundValue = true;
      res += "LiquidityProvider";
    }
    if(value == FIX::PartyRole::valEnteringTrader)
    {
      foundValue = true;
      res += "EnteringTrader";
    }
    if(value == FIX::PartyRole::valContraTrader)
    {
      foundValue = true;
      res += "ContraTrader";
    }
    if(value == FIX::PartyRole::valPositionAccount)
    {
      foundValue = true;
      res += "PositionAccount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPartyIDs::tag: {
    res = "NoPartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSecurityAltID::tag: {
    res = "NoSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityAltID::tag: {
    res = "SecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityAltIDSource::tag: {
    res = "SecurityAltIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoUnderlyingSecurityAltID::tag: {
    res = "NoUnderlyingSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityAltID::tag: {
    res = "UnderlyingSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityAltIDSource::tag: {
    res = "UnderlyingSecurityAltIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Product::tag: {
    FIX::Int value = intOfStr(val);
    res = "Product = ";
    if(value == FIX::Product::valAGENCY)
    {
      foundValue = true;
      res += "AGENCY";
    }
    if(value == FIX::Product::valCOMMODITY)
    {
      foundValue = true;
      res += "COMMODITY";
    }
    if(value == FIX::Product::valCORPORATE)
    {
      foundValue = true;
      res += "CORPORATE";
    }
    if(value == FIX::Product::valCURRENCY)
    {
      foundValue = true;
      res += "CURRENCY";
    }
    if(value == FIX::Product::valEQUITY)
    {
      foundValue = true;
      res += "EQUITY";
    }
    if(value == FIX::Product::valGOVERNMENT)
    {
      foundValue = true;
      res += "GOVERNMENT";
    }
    if(value == FIX::Product::valINDEX)
    {
      foundValue = true;
      res += "INDEX";
    }
    if(value == FIX::Product::valLOAN)
    {
      foundValue = true;
      res += "LOAN";
    }
    if(value == FIX::Product::valMONEYMARKET)
    {
      foundValue = true;
      res += "MONEYMARKET";
    }
    if(value == FIX::Product::valMORTGAGE)
    {
      foundValue = true;
      res += "MORTGAGE";
    }
    if(value == FIX::Product::valMUNICIPAL)
    {
      foundValue = true;
      res += "MUNICIPAL";
    }
    if(value == FIX::Product::valOTHER)
    {
      foundValue = true;
      res += "OTHER";
    }
    if(value == FIX::Product::valFINANCING)
    {
      foundValue = true;
      res += "FINANCING";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CFICode::tag: {
    res = "CFICode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingProduct::tag: {
    res = "UnderlyingProduct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCFICode::tag: {
    res = "UnderlyingCFICode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TestMessageIndicator::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "TestMessageIndicator = ";
    if(value == FIX::TestMessageIndicator::valTrue)
    {
      foundValue = true;
      res += "True";
    }
    if(value == FIX::TestMessageIndicator::valFalse)
    {
      foundValue = true;
      res += "False";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuantityType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuantityType = ";
    if(value == FIX::QuantityType::valSHARES)
    {
      foundValue = true;
      res += "SHARES";
    }
    if(value == FIX::QuantityType::valBONDS)
    {
      foundValue = true;
      res += "BONDS";
    }
    if(value == FIX::QuantityType::valCURRENTFACE)
    {
      foundValue = true;
      res += "CURRENTFACE";
    }
    if(value == FIX::QuantityType::valORIGINALFACE)
    {
      foundValue = true;
      res += "ORIGINALFACE";
    }
    if(value == FIX::QuantityType::valCURRENCY)
    {
      foundValue = true;
      res += "CURRENCY";
    }
    if(value == FIX::QuantityType::valCONTRACTS)
    {
      foundValue = true;
      res += "CONTRACTS";
    }
    if(value == FIX::QuantityType::valOTHER)
    {
      foundValue = true;
      res += "OTHER";
    }
    if(value == FIX::QuantityType::valPAR)
    {
      foundValue = true;
      res += "PAR";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BookingRefID::tag: {
    res = "BookingRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IndividualAllocID::tag: {
    res = "IndividualAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoundingDirection::tag: {
    res = "RoundingDirection = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoundingModulus::tag: {
    res = "RoundingModulus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CountryOfIssue::tag: {
    res = "CountryOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StateOrProvinceOfIssue::tag: {
    res = "StateOrProvinceOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LocaleOfIssue::tag: {
    res = "LocaleOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRegistDtls::tag: {
    res = "NoRegistDtls = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MailingDtls::tag: {
    res = "MailingDtls = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InvestorCountryOfResidence::tag: {
    res = "InvestorCountryOfResidence = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentRef::tag: {
    res = "PaymentRef = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DistribPaymentMethod::tag: {
    res = "DistribPaymentMethod = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribCurr::tag: {
    res = "CashDistribCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CommCurrency::tag: {
    res = "CommCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CancellationRights::tag: {
    res = "CancellationRights = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MoneyLaunderingStatus::tag: {
    FIX::Char value = charOfStr(val);
    res = "MoneyLaunderingStatus = ";
    if(value == FIX::MoneyLaunderingStatus::valPassed)
    {
      foundValue = true;
      res += "Passed";
    }
    if(value == FIX::MoneyLaunderingStatus::valNotChecked)
    {
      foundValue = true;
      res += "NotChecked";
    }
    if(value == FIX::MoneyLaunderingStatus::valExemptBelowTheLimit)
    {
      foundValue = true;
      res += "ExemptBelowTheLimit";
    }
    if(value == FIX::MoneyLaunderingStatus::valExemptClientMoneyTypeExemption)
    {
      foundValue = true;
      res += "ExemptClientMoneyTypeExemption";
    }
    if(value == FIX::MoneyLaunderingStatus::valExemptAuthorisedCreditOrFinancialInstitution)
    {
      foundValue = true;
      res += "ExemptAuthorisedCreditOrFinancialInstitution";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MailingInst::tag: {
    res = "MailingInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TransBkdTime::tag: {
    res = "TransBkdTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecPriceType::tag: {
    res = "ExecPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecPriceAdjustment::tag: {
    res = "ExecPriceAdjustment = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DateOfBirth::tag: {
    res = "DateOfBirth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportTransType::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeReportTransType = ";
    if(value == FIX::TradeReportTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::TradeReportTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value == FIX::TradeReportTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value == FIX::TradeReportTransType::valRelease)
    {
      foundValue = true;
      res += "Release";
    }
    if(value == FIX::TradeReportTransType::valReverse)
    {
      foundValue = true;
      res += "Reverse";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardHolderName::tag: {
    res = "CardHolderName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardNumber::tag: {
    res = "CardNumber = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardExpDate::tag: {
    res = "CardExpDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardIssNum::tag: {
    res = "CardIssNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentMethod::tag: {
    res = "PaymentMethod = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistAcctType::tag: {
    res = "RegistAcctType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Designation::tag: {
    res = "Designation = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TaxAdvantageType::tag: {
    res = "TaxAdvantageType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistRejReasonText::tag: {
    res = "RegistRejReasonText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::FundRenewWaiv::tag: {
    res = "FundRenewWaiv = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentName::tag: {
    res = "CashDistribAgentName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentCode::tag: {
    res = "CashDistribAgentCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentAcctNumber::tag: {
    res = "CashDistribAgentAcctNumber = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribPayRef::tag: {
    res = "CashDistribPayRef = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentAcctName::tag: {
    res = "CashDistribAgentAcctName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardStartDate::tag: {
    res = "CardStartDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentDate::tag: {
    res = "PaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentRemitterID::tag: {
    res = "PaymentRemitterID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistStatus::tag: {
    res = "RegistStatus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistRejReasonCode::tag: {
    res = "RegistRejReasonCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistRefID::tag: {
    res = "RegistRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistDtls::tag: {
    res = "RegistDtls = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoDistribInsts::tag: {
    res = "NoDistribInsts = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistEmail::tag: {
    res = "RegistEmail = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DistribPercentage::tag: {
    res = "DistribPercentage = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistID::tag: {
    res = "RegistID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistTransType::tag: {
    FIX::Char value = charOfStr(val);
    res = "RegistTransType = ";
    if(value == FIX::RegistTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::RegistTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value == FIX::RegistTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecValuationPoint::tag: {
    res = "ExecValuationPoint = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderPercent::tag: {
    res = "OrderPercent = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OwnershipType::tag: {
    res = "OwnershipType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoContAmts::tag: {
    res = "NoContAmts = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContAmtType::tag: {
    res = "ContAmtType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContAmtValue::tag: {
    res = "ContAmtValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContAmtCurr::tag: {
    res = "ContAmtCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OwnerType::tag: {
    FIX::Int value = intOfStr(val);
    res = "OwnerType = ";
    if(value == FIX::OwnerType::valIndividualInvestor)
    {
      foundValue = true;
      res += "IndividualInvestor";
    }
    if(value == FIX::OwnerType::valPublicCompany)
    {
      foundValue = true;
      res += "PublicCompany";
    }
    if(value == FIX::OwnerType::valPrivateCompany)
    {
      foundValue = true;
      res += "PrivateCompany";
    }
    if(value == FIX::OwnerType::valIndividualTrustee)
    {
      foundValue = true;
      res += "IndividualTrustee";
    }
    if(value == FIX::OwnerType::valCompanyTrustee)
    {
      foundValue = true;
      res += "CompanyTrustee";
    }
    if(value == FIX::OwnerType::valPensionPlan)
    {
      foundValue = true;
      res += "PensionPlan";
    }
    if(value == FIX::OwnerType::valCustodianUnderGiftsToMinorsAct)
    {
      foundValue = true;
      res += "CustodianUnderGiftsToMinorsAct";
    }
    if(value == FIX::OwnerType::valTrusts)
    {
      foundValue = true;
      res += "Trusts";
    }
    if(value == FIX::OwnerType::valFiduciaries)
    {
      foundValue = true;
      res += "Fiduciaries";
    }
    if(value == FIX::OwnerType::valNetworkingSubAccount)
    {
      foundValue = true;
      res += "NetworkingSubAccount";
    }
    if(value == FIX::OwnerType::valNonProfitOrganization)
    {
      foundValue = true;
      res += "NonProfitOrganization";
    }
    if(value == FIX::OwnerType::valCorporateBody)
    {
      foundValue = true;
      res += "CorporateBody";
    }
    if(value == FIX::OwnerType::valNominee)
    {
      foundValue = true;
      res += "Nominee";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartySubID::tag: {
    res = "PartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartyID::tag: {
    res = "NestedPartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartyIDSource::tag: {
    res = "NestedPartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryClOrdID::tag: {
    res = "SecondaryClOrdID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryExecID::tag: {
    res = "SecondaryExecID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderCapacity::tag: {
    FIX::Char value = charOfStr(val);
    res = "OrderCapacity = ";
    if(value == FIX::OrderCapacity::valAgency)
    {
      foundValue = true;
      res += "Agency";
    }
    if(value == FIX::OrderCapacity::valProprietary)
    {
      foundValue = true;
      res += "Proprietary";
    }
    if(value == FIX::OrderCapacity::valIndividual)
    {
      foundValue = true;
      res += "Individual";
    }
    if(value == FIX::OrderCapacity::valPrincipal)
    {
      foundValue = true;
      res += "Principal";
    }
    if(value == FIX::OrderCapacity::valRisklessPrincipal)
    {
      foundValue = true;
      res += "RisklessPrincipal";
    }
    if(value == FIX::OrderCapacity::valAgentForOtherMember)
    {
      foundValue = true;
      res += "AgentForOtherMember";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderRestrictions::tag: {
    res = "OrderRestrictions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassCancelRequestType::tag: {
    FIX::Char value = charOfStr(val);
    res = "MassCancelRequestType = ";
    if(value == FIX::MassCancelRequestType::valCancelOrdersForASecurity)
    {
      foundValue = true;
      res += "CancelOrdersForASecurity";
    }
    if(value == FIX::MassCancelRequestType::valCancelOrdersForAnUnderlyingSecurity)
    {
      foundValue = true;
      res += "CancelOrdersForAnUnderlyingSecurity";
    }
    if(value == FIX::MassCancelRequestType::valCancelOrdersForAProduct)
    {
      foundValue = true;
      res += "CancelOrdersForAProduct";
    }
    if(value == FIX::MassCancelRequestType::valCancelOrdersForACFICode)
    {
      foundValue = true;
      res += "CancelOrdersForACFICode";
    }
    if(value == FIX::MassCancelRequestType::valCancelOrdersForASecurityType)
    {
      foundValue = true;
      res += "CancelOrdersForASecurityType";
    }
    if(value == FIX::MassCancelRequestType::valCancelOrdersForATradingSession)
    {
      foundValue = true;
      res += "CancelOrdersForATradingSession";
    }
    if(value == FIX::MassCancelRequestType::valCancelAllOrders)
    {
      foundValue = true;
      res += "CancelAllOrders";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassCancelResponse::tag: {
    FIX::Char value = charOfStr(val);
    res = "MassCancelResponse = ";
    if(value == FIX::MassCancelResponse::valCancelRequestRejectedSeeMassCancelRejectReason)
    {
      foundValue = true;
      res += "CancelRequestRejectedSeeMassCancelRejectReason";
    }
    if(value == FIX::MassCancelResponse::valCancelOrdersForASecurity)
    {
      foundValue = true;
      res += "CancelOrdersForASecurity";
    }
    if(value == FIX::MassCancelResponse::valCancelOrdersForAnUnderlyingSecurity)
    {
      foundValue = true;
      res += "CancelOrdersForAnUnderlyingSecurity";
    }
    if(value == FIX::MassCancelResponse::valCancelOrdersForAProduct)
    {
      foundValue = true;
      res += "CancelOrdersForAProduct";
    }
    if(value == FIX::MassCancelResponse::valCancelOrdersForACFICode)
    {
      foundValue = true;
      res += "CancelOrdersForACFICode";
    }
    if(value == FIX::MassCancelResponse::valCancelOrdersForASecurityType)
    {
      foundValue = true;
      res += "CancelOrdersForASecurityType";
    }
    if(value == FIX::MassCancelResponse::valCancelOrdersForATradingSession)
    {
      foundValue = true;
      res += "CancelOrdersForATradingSession";
    }
    if(value == FIX::MassCancelResponse::valCancelAllOrders)
    {
      foundValue = true;
      res += "CancelAllOrders";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassCancelRejectReason::tag: {
    res = "MassCancelRejectReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalAffectedOrders::tag: {
    res = "TotalAffectedOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoAffectedOrders::tag: {
    res = "NoAffectedOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AffectedOrderID::tag: {
    res = "AffectedOrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AffectedSecondaryOrderID::tag: {
    res = "AffectedSecondaryOrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteType = ";
    if(value == FIX::QuoteType::valIndicative)
    {
      foundValue = true;
      res += "Indicative";
    }
    if(value == FIX::QuoteType::valTradeable)
    {
      foundValue = true;
      res += "Tradeable";
    }
    if(value == FIX::QuoteType::valRestrictedTradeable)
    {
      foundValue = true;
      res += "RestrictedTradeable";
    }
    if(value == FIX::QuoteType::valCounter)
    {
      foundValue = true;
      res += "Counter";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartyRole::tag: {
    res = "NestedPartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNestedPartyIDs::tag: {
    res = "NoNestedPartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalAccruedInterestAmt::tag: {
    res = "TotalAccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityDate::tag: {
    res = "MaturityDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingMaturityDate::tag: {
    res = "UnderlyingMaturityDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InstrRegistry::tag: {
    FIX::String value = stringOfStr(val);
    res = "InstrRegistry = ";
    if(!strcmp(value, FIX::InstrRegistry::valBankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords))
    {
      foundValue = true;
      res += "BankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords";
    }
    if(!strcmp(value, FIX::InstrRegistry::valZPhysicalOrBearer))
    {
      foundValue = true;
      res += "ZPhysicalOrBearer";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashMargin::tag: {
    FIX::Char value = charOfStr(val);
    res = "CashMargin = ";
    if(value == FIX::CashMargin::valCash)
    {
      foundValue = true;
      res += "Cash";
    }
    if(value == FIX::CashMargin::valMarginOpen)
    {
      foundValue = true;
      res += "MarginOpen";
    }
    if(value == FIX::CashMargin::valMarginClose)
    {
      foundValue = true;
      res += "MarginClose";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartySubID::tag: {
    res = "NestedPartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Scope::tag: {
    res = "Scope = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDImplicitDelete::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "MDImplicitDelete = ";
    if(value == FIX::MDImplicitDelete::valClientHasResponsibilityForImplicitlyDeletingBidsOrOffers)
    {
      foundValue = true;
      res += "ClientHasResponsibilityForImplicitlyDeletingBidsOrOffers";
    }
    if(value == FIX::MDImplicitDelete::valServerMustSendAnExplicitDeleteForBidsOrOffers)
    {
      foundValue = true;
      res += "ServerMustSendAnExplicitDeleteForBidsOrOffers";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossID::tag: {
    res = "CrossID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossType::tag: {
    FIX::Int value = intOfStr(val);
    res = "CrossType = ";
    if(value == FIX::CrossType::valCrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner)
    {
      foundValue = true;
      res += "CrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner";
    }
    if(value == FIX::CrossType::valCrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled)
    {
      foundValue = true;
      res += "CrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled";
    }
    if(value == FIX::CrossType::valCrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions)
    {
      foundValue = true;
      res += "CrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions";
    }
    if(value == FIX::CrossType::valCrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist)
    {
      foundValue = true;
      res += "CrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossPrioritization::tag: {
    res = "CrossPrioritization = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigCrossID::tag: {
    res = "OrigCrossID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSides::tag: {
    FIX::Int value = intOfStr(val);
    res = "NoSides = ";
    if(value == FIX::NoSides::valOneSide)
    {
      foundValue = true;
      res += "OneSide";
    }
    if(value == FIX::NoSides::valBothSides)
    {
      foundValue = true;
      res += "BothSides";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Username::tag: {
    res = "Username = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Password::tag: {
    res = "Password = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegs::tag: {
    res = "NoLegs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCurrency::tag: {
    res = "LegCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoSecurityTypes::tag: {
    res = "TotNoSecurityTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSecurityTypes::tag: {
    res = "NoSecurityTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityListRequestType::tag: {
    FIX::Int value = intOfStr(val);
    res = "SecurityListRequestType = ";
    if(value == FIX::SecurityListRequestType::valSymbol)
    {
      foundValue = true;
      res += "Symbol";
    }
    if(value == FIX::SecurityListRequestType::valSecurityTypeAndOrCFICode)
    {
      foundValue = true;
      res += "SecurityTypeAndOrCFICode";
    }
    if(value == FIX::SecurityListRequestType::valProduct)
    {
      foundValue = true;
      res += "Product";
    }
    if(value == FIX::SecurityListRequestType::valTradingSessionID)
    {
      foundValue = true;
      res += "TradingSessionID";
    }
    if(value == FIX::SecurityListRequestType::valAllSecurities)
    {
      foundValue = true;
      res += "AllSecurities";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityRequestResult::tag: {
    FIX::Int value = intOfStr(val);
    res = "SecurityRequestResult = ";
    if(value == FIX::SecurityRequestResult::valValidRequest)
    {
      foundValue = true;
      res += "ValidRequest";
    }
    if(value == FIX::SecurityRequestResult::valInvalidOrUnsupportedRequest)
    {
      foundValue = true;
      res += "InvalidOrUnsupportedRequest";
    }
    if(value == FIX::SecurityRequestResult::valNoInstrumentsFoundThatMatchSelectionCriteria)
    {
      foundValue = true;
      res += "NoInstrumentsFoundThatMatchSelectionCriteria";
    }
    if(value == FIX::SecurityRequestResult::valNotAuthorizedToRetrieveInstrumentData)
    {
      foundValue = true;
      res += "NotAuthorizedToRetrieveInstrumentData";
    }
    if(value == FIX::SecurityRequestResult::valInstrumentDataTemporarilyUnavailable)
    {
      foundValue = true;
      res += "InstrumentDataTemporarilyUnavailable";
    }
    if(value == FIX::SecurityRequestResult::valRequestForInstrumentDataNotSupported)
    {
      foundValue = true;
      res += "RequestForInstrumentDataNotSupported";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoundLot::tag: {
    res = "RoundLot = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinTradeVol::tag: {
    res = "MinTradeVol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MultiLegRptTypeReq::tag: {
    res = "MultiLegRptTypeReq = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPositionEffect::tag: {
    res = "LegPositionEffect = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCoveredOrUncovered::tag: {
    res = "LegCoveredOrUncovered = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPrice::tag: {
    res = "LegPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesStatusRejReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradSesStatusRejReason = ";
    if(value == FIX::TradSesStatusRejReason::valUnknownOrInvalidTradingSessionID)
    {
      foundValue = true;
      res += "UnknownOrInvalidTradingSessionID";
    }
    if(value == FIX::TradSesStatusRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestID::tag: {
    res = "TradeRequestID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestType::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeRequestType = ";
    if(value == FIX::TradeRequestType::valAllTrades)
    {
      foundValue = true;
      res += "AllTrades";
    }
    if(value == FIX::TradeRequestType::valMatchedTradesMatchingCriteriaProvidedOnRequest)
    {
      foundValue = true;
      res += "MatchedTradesMatchingCriteriaProvidedOnRequest";
    }
    if(value == FIX::TradeRequestType::valUnmatchedTradesThatMatchCriteria)
    {
      foundValue = true;
      res += "UnmatchedTradesThatMatchCriteria";
    }
    if(value == FIX::TradeRequestType::valUnreportedTradesThatMatchCriteria)
    {
      foundValue = true;
      res += "UnreportedTradesThatMatchCriteria";
    }
    if(value == FIX::TradeRequestType::valAdvisoriesThatMatchCriteria)
    {
      foundValue = true;
      res += "AdvisoriesThatMatchCriteria";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PreviouslyReported::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "PreviouslyReported = ";
    if(value == FIX::PreviouslyReported::valPreviouslyReportedToCounterparty)
    {
      foundValue = true;
      res += "PreviouslyReportedToCounterparty";
    }
    if(value == FIX::PreviouslyReported::valNotReportedToCounterparty)
    {
      foundValue = true;
      res += "NotReportedToCounterparty";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportID::tag: {
    res = "TradeReportID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportRefID::tag: {
    res = "TradeReportRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MatchStatus::tag: {
    FIX::Char value = charOfStr(val);
    res = "MatchStatus = ";
    if(value == FIX::MatchStatus::valComparedMatchedOrAffirmed)
    {
      foundValue = true;
      res += "ComparedMatchedOrAffirmed";
    }
    if(value == FIX::MatchStatus::valUncomparedUnmatchedOrUnaffirmed)
    {
      foundValue = true;
      res += "UncomparedUnmatchedOrUnaffirmed";
    }
    if(value == FIX::MatchStatus::valAdvisoryOrAlert)
    {
      foundValue = true;
      res += "AdvisoryOrAlert";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MatchType::tag: {
    FIX::String value = stringOfStr(val);
    res = "MatchType = ";
    if(!strcmp(value, FIX::MatchType::valExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime))
    {
      foundValue = true;
      res += "ExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime";
    }
    if(!strcmp(value, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges";
    }
    if(!strcmp(value, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime";
    }
    if(!strcmp(value, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges";
    }
    if(!strcmp(value, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime";
    }
    if(!strcmp(value, FIX::MatchType::valComparedRecordsResultingFromStampedAdvisoriesOrSpecialist))
    {
      foundValue = true;
      res += "ComparedRecordsResultingFromStampedAdvisoriesOrSpecialist";
    }
    if(!strcmp(value, FIX::MatchType::valSummarizedMatchUsingAToA1))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA1";
    }
    if(!strcmp(value, FIX::MatchType::valSummarizedMatchUsingAToA2))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA2";
    }
    if(!strcmp(value, FIX::MatchType::valSummarizedMatchUsingAToA3))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA3";
    }
    if(!strcmp(value, FIX::MatchType::valSummarizedMatchUsingAToA4))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA4";
    }
    if(!strcmp(value, FIX::MatchType::valSummarizedMatchUsingAToA5))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA5";
    }
    if(!strcmp(value, FIX::MatchType::valExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator))
    {
      foundValue = true;
      res += "ExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator";
    }
    if(!strcmp(value, FIX::MatchType::valSummarizedMatchMinusBadgesAndTimes))
    {
      foundValue = true;
      res += "SummarizedMatchMinusBadgesAndTimes";
    }
    if(!strcmp(value, FIX::MatchType::valOCSLockedIn))
    {
      foundValue = true;
      res += "OCSLockedIn";
    }
    if(!strcmp(value, FIX::MatchType::valACTMMatch))
    {
      foundValue = true;
      res += "ACTMMatch";
    }
    if(!strcmp(value, FIX::MatchType::valACTM2Match))
    {
      foundValue = true;
      res += "ACTM2Match";
    }
    if(!strcmp(value, FIX::MatchType::valACTAcceptedTrade))
    {
      foundValue = true;
      res += "ACTAcceptedTrade";
    }
    if(!strcmp(value, FIX::MatchType::valACTDefaultTrade))
    {
      foundValue = true;
      res += "ACTDefaultTrade";
    }
    if(!strcmp(value, FIX::MatchType::valACTDefaultAfterM2))
    {
      foundValue = true;
      res += "ACTDefaultAfterM2";
    }
    if(!strcmp(value, FIX::MatchType::valACTM6Match))
    {
      foundValue = true;
      res += "ACTM6Match";
    }
    if(!strcmp(value, FIX::MatchType::valNonACT))
    {
      foundValue = true;
      res += "NonACT";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OddLot::tag: {
    res = "OddLot = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoClearingInstructions::tag: {
    res = "NoClearingInstructions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingInstruction::tag: {
    FIX::Int value = intOfStr(val);
    res = "ClearingInstruction = ";
    if(value == FIX::ClearingInstruction::valProcessNormally)
    {
      foundValue = true;
      res += "ProcessNormally";
    }
    if(value == FIX::ClearingInstruction::valExcludeFromAllNetting)
    {
      foundValue = true;
      res += "ExcludeFromAllNetting";
    }
    if(value == FIX::ClearingInstruction::valBilateralNettingOnly)
    {
      foundValue = true;
      res += "BilateralNettingOnly";
    }
    if(value == FIX::ClearingInstruction::valExClearing)
    {
      foundValue = true;
      res += "ExClearing";
    }
    if(value == FIX::ClearingInstruction::valSpecialTrade)
    {
      foundValue = true;
      res += "SpecialTrade";
    }
    if(value == FIX::ClearingInstruction::valMultilateralNetting)
    {
      foundValue = true;
      res += "MultilateralNetting";
    }
    if(value == FIX::ClearingInstruction::valClearAgainstCentralCounterparty)
    {
      foundValue = true;
      res += "ClearAgainstCentralCounterparty";
    }
    if(value == FIX::ClearingInstruction::valExcludeFromCentralCounterparty)
    {
      foundValue = true;
      res += "ExcludeFromCentralCounterparty";
    }
    if(value == FIX::ClearingInstruction::valManualMode)
    {
      foundValue = true;
      res += "ManualMode";
    }
    if(value == FIX::ClearingInstruction::valAutomaticPostingMode)
    {
      foundValue = true;
      res += "AutomaticPostingMode";
    }
    if(value == FIX::ClearingInstruction::valAutomaticGiveUpMode)
    {
      foundValue = true;
      res += "AutomaticGiveUpMode";
    }
    if(value == FIX::ClearingInstruction::valQualifiedServiceRepresentativeQSR)
    {
      foundValue = true;
      res += "QualifiedServiceRepresentativeQSR";
    }
    if(value == FIX::ClearingInstruction::valCustomerTrade)
    {
      foundValue = true;
      res += "CustomerTrade";
    }
    if(value == FIX::ClearingInstruction::valSelfClearing)
    {
      foundValue = true;
      res += "SelfClearing";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeInputSource::tag: {
    res = "TradeInputSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeInputDevice::tag: {
    res = "TradeInputDevice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoDates::tag: {
    res = "NoDates = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AccountType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AccountType = ";
    if(value == FIX::AccountType::valAccountIsCarriedOnCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnCustomerSideOfBooks";
    }
    if(value == FIX::AccountType::valAccountIsCarriedOnNonCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooks";
    }
    if(value == FIX::AccountType::valHouseTrader)
    {
      foundValue = true;
      res += "HouseTrader";
    }
    if(value == FIX::AccountType::valFloorTrader)
    {
      foundValue = true;
      res += "FloorTrader";
    }
    if(value == FIX::AccountType::valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined";
    }
    if(value == FIX::AccountType::valAccountIsHouseTraderAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsHouseTraderAndIsCrossMargined";
    }
    if(value == FIX::AccountType::valJointBackofficeAccount)
    {
      foundValue = true;
      res += "JointBackofficeAccount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CustOrderCapacity::tag: {
    res = "CustOrderCapacity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClOrdLinkID::tag: {
    res = "ClOrdLinkID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassStatusReqID::tag: {
    res = "MassStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassStatusReqType::tag: {
    FIX::Int value = intOfStr(val);
    res = "MassStatusReqType = ";
    if(value == FIX::MassStatusReqType::valStatusForOrdersForASecurity)
    {
      foundValue = true;
      res += "StatusForOrdersForASecurity";
    }
    if(value == FIX::MassStatusReqType::valStatusForOrdersForAnUnderlyingSecurity)
    {
      foundValue = true;
      res += "StatusForOrdersForAnUnderlyingSecurity";
    }
    if(value == FIX::MassStatusReqType::valStatusForOrdersForAProduct)
    {
      foundValue = true;
      res += "StatusForOrdersForAProduct";
    }
    if(value == FIX::MassStatusReqType::valStatusForOrdersForACFICode)
    {
      foundValue = true;
      res += "StatusForOrdersForACFICode";
    }
    if(value == FIX::MassStatusReqType::valStatusForOrdersForASecurityType)
    {
      foundValue = true;
      res += "StatusForOrdersForASecurityType";
    }
    if(value == FIX::MassStatusReqType::valStatusForOrdersForATradingSession)
    {
      foundValue = true;
      res += "StatusForOrdersForATradingSession";
    }
    if(value == FIX::MassStatusReqType::valStatusForAllOrders)
    {
      foundValue = true;
      res += "StatusForAllOrders";
    }
    if(value == FIX::MassStatusReqType::valStatusForOrdersForAPartyID)
    {
      foundValue = true;
      res += "StatusForOrdersForAPartyID";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigOrdModTime::tag: {
    res = "OrigOrdModTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSettlType::tag: {
    res = "LegSettlType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSettlDate::tag: {
    res = "LegSettlDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayBookingInst::tag: {
    res = "DayBookingInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BookingUnit::tag: {
    res = "BookingUnit = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PreallocMethod::tag: {
    res = "PreallocMethod = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCountryOfIssue::tag: {
    res = "UnderlyingCountryOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStateOrProvinceOfIssue::tag: {
    res = "UnderlyingStateOrProvinceOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingLocaleOfIssue::tag: {
    res = "UnderlyingLocaleOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingInstrRegistry::tag: {
    res = "UnderlyingInstrRegistry = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCountryOfIssue::tag: {
    res = "LegCountryOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStateOrProvinceOfIssue::tag: {
    res = "LegStateOrProvinceOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegLocaleOfIssue::tag: {
    res = "LegLocaleOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegInstrRegistry::tag: {
    res = "LegInstrRegistry = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSymbol::tag: {
    res = "LegSymbol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSymbolSfx::tag: {
    res = "LegSymbolSfx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityID::tag: {
    res = "LegSecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityIDSource::tag: {
    res = "LegSecurityIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegSecurityAltID::tag: {
    res = "NoLegSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityAltID::tag: {
    res = "LegSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityAltIDSource::tag: {
    res = "LegSecurityAltIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegProduct::tag: {
    res = "LegProduct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCFICode::tag: {
    res = "LegCFICode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityType::tag: {
    res = "LegSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegMaturityMonthYear::tag: {
    res = "LegMaturityMonthYear = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegMaturityDate::tag: {
    res = "LegMaturityDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStrikePrice::tag: {
    res = "LegStrikePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegOptAttribute::tag: {
    res = "LegOptAttribute = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegContractMultiplier::tag: {
    res = "LegContractMultiplier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCouponRate::tag: {
    res = "LegCouponRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityExchange::tag: {
    res = "LegSecurityExchange = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIssuer::tag: {
    res = "LegIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegIssuerLen::tag: {
    res = "EncodedLegIssuerLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegIssuer::tag: {
    res = "EncodedLegIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityDesc::tag: {
    res = "LegSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegSecurityDescLen::tag: {
    res = "EncodedLegSecurityDescLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegSecurityDesc::tag: {
    res = "EncodedLegSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRatioQty::tag: {
    res = "LegRatioQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSide::tag: {
    res = "LegSide = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradingSessionSubID::tag: {
    res = "TradingSessionSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocType = ";
    if(value == FIX::AllocType::valCalculated)
    {
      foundValue = true;
      res += "Calculated";
    }
    if(value == FIX::AllocType::valPreliminary)
    {
      foundValue = true;
      res += "Preliminary";
    }
    if(value == FIX::AllocType::valSellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "SellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney";
    }
    if(value == FIX::AllocType::valSellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "SellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney";
    }
    if(value == FIX::AllocType::valReadyToBookSingleOrder)
    {
      foundValue = true;
      res += "ReadyToBookSingleOrder";
    }
    if(value == FIX::AllocType::valBuysideReadyToBookCombinedSetOfOrders)
    {
      foundValue = true;
      res += "BuysideReadyToBookCombinedSetOfOrders";
    }
    if(value == FIX::AllocType::valWarehouseInstruction)
    {
      foundValue = true;
      res += "WarehouseInstruction";
    }
    if(value == FIX::AllocType::valRequestToIntermediary)
    {
      foundValue = true;
      res += "RequestToIntermediary";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoHops::tag: {
    res = "NoHops = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HopCompID::tag: {
    res = "HopCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HopSendingTime::tag: {
    res = "HopSendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HopRefID::tag: {
    res = "HopRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MidPx::tag: {
    res = "MidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidYield::tag: {
    res = "BidYield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MidYield::tag: {
    res = "MidYield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferYield::tag: {
    res = "OfferYield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingFeeIndicator::tag: {
    res = "ClearingFeeIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::WorkingIndicator::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "WorkingIndicator = ";
    if(value == FIX::WorkingIndicator::valOrderIsCurrentlyBeingWorked)
    {
      foundValue = true;
      res += "OrderIsCurrentlyBeingWorked";
    }
    if(value == FIX::WorkingIndicator::valOrderHasBeenAcceptedButNotYetInAWorkingState)
    {
      foundValue = true;
      res += "OrderHasBeenAcceptedButNotYetInAWorkingState";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegLastPx::tag: {
    res = "LegLastPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriorityIndicator::tag: {
    FIX::Int value = intOfStr(val);
    res = "PriorityIndicator = ";
    if(value == FIX::PriorityIndicator::valPriorityUnchanged)
    {
      foundValue = true;
      res += "PriorityUnchanged";
    }
    if(value == FIX::PriorityIndicator::valLostPriorityAsResultOfOrderChange)
    {
      foundValue = true;
      res += "LostPriorityAsResultOfOrderChange";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriceImprovement::tag: {
    res = "PriceImprovement = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Price2::tag: {
    res = "Price2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastForwardPoints2::tag: {
    res = "LastForwardPoints2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidForwardPoints2::tag: {
    res = "BidForwardPoints2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferForwardPoints2::tag: {
    res = "OfferForwardPoints2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RFQReqID::tag: {
    res = "RFQReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MktBidPx::tag: {
    res = "MktBidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MktOfferPx::tag: {
    res = "MktOfferPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinBidSize::tag: {
    res = "MinBidSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinOfferSize::tag: {
    res = "MinOfferSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteStatusReqID::tag: {
    res = "QuoteStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegalConfirm::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "LegalConfirm = ";
    if(value == FIX::LegalConfirm::valLegalConfirm)
    {
      foundValue = true;
      res += "LegalConfirm";
    }
    if(value == FIX::LegalConfirm::valDoesNotConstituteALegalConfirm)
    {
      foundValue = true;
      res += "DoesNotConstituteALegalConfirm";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingLastPx::tag: {
    res = "UnderlyingLastPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingLastQty::tag: {
    res = "UnderlyingLastQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecDefStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "SecDefStatus = ";
    if(value == FIX::SecDefStatus::valPendingApproval)
    {
      foundValue = true;
      res += "PendingApproval";
    }
    if(value == FIX::SecDefStatus::valApproved)
    {
      foundValue = true;
      res += "Approved";
    }
    if(value == FIX::SecDefStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value == FIX::SecDefStatus::valUnauthorizedRequest)
    {
      foundValue = true;
      res += "UnauthorizedRequest";
    }
    if(value == FIX::SecDefStatus::valInvalidDefinitionRequest)
    {
      foundValue = true;
      res += "InvalidDefinitionRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRefID::tag: {
    res = "LegRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraLegRefID::tag: {
    res = "ContraLegRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrBidFxRate::tag: {
    res = "SettlCurrBidFxRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrOfferFxRate::tag: {
    res = "SettlCurrOfferFxRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRequestRejectReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteRequestRejectReason = ";
    if(value == FIX::QuoteRequestRejectReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value == FIX::QuoteRequestRejectReason::valExchangeSecurityClosed)
    {
      foundValue = true;
      res += "ExchangeSecurityClosed";
    }
    if(value == FIX::QuoteRequestRejectReason::valQuoteRequestExceedsLimit)
    {
      foundValue = true;
      res += "QuoteRequestExceedsLimit";
    }
    if(value == FIX::QuoteRequestRejectReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value == FIX::QuoteRequestRejectReason::valInvalidPrice)
    {
      foundValue = true;
      res += "InvalidPrice";
    }
    if(value == FIX::QuoteRequestRejectReason::valNotAuthorizedToRequestQuote)
    {
      foundValue = true;
      res += "NotAuthorizedToRequestQuote";
    }
    if(value == FIX::QuoteRequestRejectReason::valNoMatchForInquiry)
    {
      foundValue = true;
      res += "NoMatchForInquiry";
    }
    if(value == FIX::QuoteRequestRejectReason::valNoMarketForInstrument)
    {
      foundValue = true;
      res += "NoMarketForInstrument";
    }
    if(value == FIX::QuoteRequestRejectReason::valNoInventory)
    {
      foundValue = true;
      res += "NoInventory";
    }
    if(value == FIX::QuoteRequestRejectReason::valPass)
    {
      foundValue = true;
      res += "Pass";
    }
    if(value == FIX::QuoteRequestRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideComplianceID::tag: {
    res = "SideComplianceID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AcctIDSource::tag: {
    FIX::Int value = intOfStr(val);
    res = "AcctIDSource = ";
    if(value == FIX::AcctIDSource::valBIC)
    {
      foundValue = true;
      res += "BIC";
    }
    if(value == FIX::AcctIDSource::valSIDCode)
    {
      foundValue = true;
      res += "SIDCode";
    }
    if(value == FIX::AcctIDSource::valTFM)
    {
      foundValue = true;
      res += "TFM";
    }
    if(value == FIX::AcctIDSource::valOMGEO)
    {
      foundValue = true;
      res += "OMGEO";
    }
    if(value == FIX::AcctIDSource::valDTCCCode)
    {
      foundValue = true;
      res += "DTCCCode";
    }
    if(value == FIX::AcctIDSource::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAcctIDSource::tag: {
    res = "AllocAcctIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkPrice::tag: {
    res = "BenchmarkPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkPriceType::tag: {
    res = "BenchmarkPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmID::tag: {
    res = "ConfirmID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "ConfirmStatus = ";
    if(value == FIX::ConfirmStatus::valReceived)
    {
      foundValue = true;
      res += "Received";
    }
    if(value == FIX::ConfirmStatus::valMismatchedAccount)
    {
      foundValue = true;
      res += "MismatchedAccount";
    }
    if(value == FIX::ConfirmStatus::valMissingSettlementInstructions)
    {
      foundValue = true;
      res += "MissingSettlementInstructions";
    }
    if(value == FIX::ConfirmStatus::valConfirmed)
    {
      foundValue = true;
      res += "Confirmed";
    }
    if(value == FIX::ConfirmStatus::valRequestRejected)
    {
      foundValue = true;
      res += "RequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmTransType::tag: {
    FIX::Int value = intOfStr(val);
    res = "ConfirmTransType = ";
    if(value == FIX::ConfirmTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value == FIX::ConfirmTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value == FIX::ConfirmTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContractSettlMonth::tag: {
    res = "ContractSettlMonth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliveryForm::tag: {
    FIX::Int value = intOfStr(val);
    res = "DeliveryForm = ";
    if(value == FIX::DeliveryForm::valBookEntryTheDefault)
    {
      foundValue = true;
      res += "BookEntryTheDefault";
    }
    if(value == FIX::DeliveryForm::valBearer)
    {
      foundValue = true;
      res += "Bearer";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastParPx::tag: {
    res = "LastParPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegAllocs::tag: {
    res = "NoLegAllocs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegAllocAccount::tag: {
    res = "LegAllocAccount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIndividualAllocID::tag: {
    res = "LegIndividualAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegAllocQty::tag: {
    res = "LegAllocQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegAllocAcctIDSource::tag: {
    res = "LegAllocAcctIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSettlCurrency::tag: {
    res = "LegSettlCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkCurveCurrency::tag: {
    res = "LegBenchmarkCurveCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkCurveName::tag: {
    res = "LegBenchmarkCurveName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkCurvePoint::tag: {
    res = "LegBenchmarkCurvePoint = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkPrice::tag: {
    res = "LegBenchmarkPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkPriceType::tag: {
    res = "LegBenchmarkPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBidPx::tag: {
    res = "LegBidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIOIQty::tag: {
    res = "LegIOIQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegStipulations::tag: {
    res = "NoLegStipulations = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegOfferPx::tag: {
    res = "LegOfferPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegOrderQty::tag: {
    res = "LegOrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPriceType::tag: {
    res = "LegPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegQty::tag: {
    res = "LegQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStipulationType::tag: {
    res = "LegStipulationType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStipulationValue::tag: {
    res = "LegStipulationValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSwapType::tag: {
    FIX::Int value = intOfStr(val);
    res = "LegSwapType = ";
    if(value == FIX::LegSwapType::valParForPar)
    {
      foundValue = true;
      res += "ParForPar";
    }
    if(value == FIX::LegSwapType::valModifiedDuration)
    {
      foundValue = true;
      res += "ModifiedDuration";
    }
    if(value == FIX::LegSwapType::valRisk)
    {
      foundValue = true;
      res += "Risk";
    }
    if(value == FIX::LegSwapType::valProceeds)
    {
      foundValue = true;
      res += "Proceeds";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Pool::tag: {
    res = "Pool = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuotePriceType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuotePriceType = ";
    if(value == FIX::QuotePriceType::valPercent)
    {
      foundValue = true;
      res += "Percent";
    }
    if(value == FIX::QuotePriceType::valPerShare)
    {
      foundValue = true;
      res += "PerShare";
    }
    if(value == FIX::QuotePriceType::valFixedAmount)
    {
      foundValue = true;
      res += "FixedAmount";
    }
    if(value == FIX::QuotePriceType::valDiscountPercentagePointsBelowPar)
    {
      foundValue = true;
      res += "DiscountPercentagePointsBelowPar";
    }
    if(value == FIX::QuotePriceType::valPremiumPercentagePointsOverPar)
    {
      foundValue = true;
      res += "PremiumPercentagePointsOverPar";
    }
    if(value == FIX::QuotePriceType::valBasisPointsRelativeToBenchmark)
    {
      foundValue = true;
      res += "BasisPointsRelativeToBenchmark";
    }
    if(value == FIX::QuotePriceType::valTEDPrice)
    {
      foundValue = true;
      res += "TEDPrice";
    }
    if(value == FIX::QuotePriceType::valTEDYield)
    {
      foundValue = true;
      res += "TEDYield";
    }
    if(value == FIX::QuotePriceType::valYieldSpread)
    {
      foundValue = true;
      res += "YieldSpread";
    }
    if(value == FIX::QuotePriceType::valYield)
    {
      foundValue = true;
      res += "Yield";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRespID::tag: {
    res = "QuoteRespID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRespType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QuoteRespType = ";
    if(value == FIX::QuoteRespType::valHitOrLift)
    {
      foundValue = true;
      res += "HitOrLift";
    }
    if(value == FIX::QuoteRespType::valCounter)
    {
      foundValue = true;
      res += "Counter";
    }
    if(value == FIX::QuoteRespType::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value == FIX::QuoteRespType::valCover)
    {
      foundValue = true;
      res += "Cover";
    }
    if(value == FIX::QuoteRespType::valDoneAway)
    {
      foundValue = true;
      res += "DoneAway";
    }
    if(value == FIX::QuoteRespType::valPass)
    {
      foundValue = true;
      res += "Pass";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteQualifier::tag: {
    res = "QuoteQualifier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldRedemptionDate::tag: {
    res = "YieldRedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldRedemptionPrice::tag: {
    res = "YieldRedemptionPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldRedemptionPriceType::tag: {
    res = "YieldRedemptionPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkSecurityID::tag: {
    res = "BenchmarkSecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ReversalIndicator::tag: {
    res = "ReversalIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldCalcDate::tag: {
    res = "YieldCalcDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPositions::tag: {
    res = "NoPositions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosType::tag: {
    FIX::String value = stringOfStr(val);
    res = "PosType = ";
    if(!strcmp(value, FIX::PosType::valTransactionQuantity))
    {
      foundValue = true;
      res += "TransactionQuantity";
    }
    if(!strcmp(value, FIX::PosType::valIntraSpreadQty))
    {
      foundValue = true;
      res += "IntraSpreadQty";
    }
    if(!strcmp(value, FIX::PosType::valInterSpreadQty))
    {
      foundValue = true;
      res += "InterSpreadQty";
    }
    if(!strcmp(value, FIX::PosType::valEndOfDayQty))
    {
      foundValue = true;
      res += "EndOfDayQty";
    }
    if(!strcmp(value, FIX::PosType::valStartOfDayQty))
    {
      foundValue = true;
      res += "StartOfDayQty";
    }
    if(!strcmp(value, FIX::PosType::valOptionExerciseQty))
    {
      foundValue = true;
      res += "OptionExerciseQty";
    }
    if(!strcmp(value, FIX::PosType::valOptionAssignment))
    {
      foundValue = true;
      res += "OptionAssignment";
    }
    if(!strcmp(value, FIX::PosType::valTransactionFromExercise))
    {
      foundValue = true;
      res += "TransactionFromExercise";
    }
    if(!strcmp(value, FIX::PosType::valTransactionFromAssignment))
    {
      foundValue = true;
      res += "TransactionFromAssignment";
    }
    if(!strcmp(value, FIX::PosType::valPitTradeQty))
    {
      foundValue = true;
      res += "PitTradeQty";
    }
    if(!strcmp(value, FIX::PosType::valTransferTradeQty))
    {
      foundValue = true;
      res += "TransferTradeQty";
    }
    if(!strcmp(value, FIX::PosType::valElectronicTradeQty))
    {
      foundValue = true;
      res += "ElectronicTradeQty";
    }
    if(!strcmp(value, FIX::PosType::valAllocationTradeQty))
    {
      foundValue = true;
      res += "AllocationTradeQty";
    }
    if(!strcmp(value, FIX::PosType::valAdjustmentQty))
    {
      foundValue = true;
      res += "AdjustmentQty";
    }
    if(!strcmp(value, FIX::PosType::valAsOfTradeQty))
    {
      foundValue = true;
      res += "AsOfTradeQty";
    }
    if(!strcmp(value, FIX::PosType::valDeliveryQty))
    {
      foundValue = true;
      res += "DeliveryQty";
    }
    if(!strcmp(value, FIX::PosType::valTotalTransactionQty))
    {
      foundValue = true;
      res += "TotalTransactionQty";
    }
    if(!strcmp(value, FIX::PosType::valCrossMarginQty))
    {
      foundValue = true;
      res += "CrossMarginQty";
    }
    if(!strcmp(value, FIX::PosType::valIntegralSplit))
    {
      foundValue = true;
      res += "IntegralSplit";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LongQty::tag: {
    res = "LongQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ShortQty::tag: {
    res = "ShortQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosQtyStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosQtyStatus = ";
    if(value == FIX::PosQtyStatus::valSubmitted)
    {
      foundValue = true;
      res += "Submitted";
    }
    if(value == FIX::PosQtyStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::PosQtyStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosAmtType::tag: {
    FIX::String value = stringOfStr(val);
    res = "PosAmtType = ";
    if(!strcmp(value, FIX::PosAmtType::valFinalMarkToMarketAmount))
    {
      foundValue = true;
      res += "FinalMarkToMarketAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valIncrementalMarkToMarketAmount))
    {
      foundValue = true;
      res += "IncrementalMarkToMarketAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valTradeVariationAmount))
    {
      foundValue = true;
      res += "TradeVariationAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valStartOfDayMarkToMarketAmount))
    {
      foundValue = true;
      res += "StartOfDayMarkToMarketAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valPremiumAmount))
    {
      foundValue = true;
      res += "PremiumAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valCashResidualAmount))
    {
      foundValue = true;
      res += "CashResidualAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valCashAmount))
    {
      foundValue = true;
      res += "CashAmount";
    }
    if(!strcmp(value, FIX::PosAmtType::valValueAdjustedAmount))
    {
      foundValue = true;
      res += "ValueAdjustedAmount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosAmt::tag: {
    res = "PosAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosTransType::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosTransType = ";
    if(value == FIX::PosTransType::valExercise)
    {
      foundValue = true;
      res += "Exercise";
    }
    if(value == FIX::PosTransType::valDoNotExercise)
    {
      foundValue = true;
      res += "DoNotExercise";
    }
    if(value == FIX::PosTransType::valPositionAdjustment)
    {
      foundValue = true;
      res += "PositionAdjustment";
    }
    if(value == FIX::PosTransType::valPositionChangeSubmissionOrMarginDisposition)
    {
      foundValue = true;
      res += "PositionChangeSubmissionOrMarginDisposition";
    }
    if(value == FIX::PosTransType::valPledge)
    {
      foundValue = true;
      res += "Pledge";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqID::tag: {
    res = "PosReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoUnderlyings::tag: {
    res = "NoUnderlyings = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintAction::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosMaintAction = ";
    if(value == FIX::PosMaintAction::valNewUsedToIncrementTheOverallTransactionQuantity)
    {
      foundValue = true;
      res += "NewUsedToIncrementTheOverallTransactionQuantity";
    }
    if(value == FIX::PosMaintAction::valReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId)
    {
      foundValue = true;
      res += "ReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId";
    }
    if(value == FIX::PosMaintAction::valCancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId)
    {
      foundValue = true;
      res += "CancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigPosReqRefID::tag: {
    res = "OrigPosReqRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintRptRefID::tag: {
    res = "PosMaintRptRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingBusinessDate::tag: {
    res = "ClearingBusinessDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlSessID::tag: {
    res = "SettlSessID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlSessSubID::tag: {
    res = "SettlSessSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdjustmentType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AdjustmentType = ";
    if(value == FIX::AdjustmentType::valProcessRequestAsMarginDisposition)
    {
      foundValue = true;
      res += "ProcessRequestAsMarginDisposition";
    }
    if(value == FIX::AdjustmentType::valDeltaPlus)
    {
      foundValue = true;
      res += "DeltaPlus";
    }
    if(value == FIX::AdjustmentType::valDeltaMinus)
    {
      foundValue = true;
      res += "DeltaMinus";
    }
    if(value == FIX::AdjustmentType::valFinal)
    {
      foundValue = true;
      res += "Final";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraryInstructionIndicator::tag: {
    res = "ContraryInstructionIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriorSpreadIndicator::tag: {
    res = "PriorSpreadIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintRptID::tag: {
    res = "PosMaintRptID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosMaintStatus = ";
    if(value == FIX::PosMaintStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::PosMaintStatus::valAcceptedWithWarnings)
    {
      foundValue = true;
      res += "AcceptedWithWarnings";
    }
    if(value == FIX::PosMaintStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value == FIX::PosMaintStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value == FIX::PosMaintStatus::valCompletedWithWarnings)
    {
      foundValue = true;
      res += "CompletedWithWarnings";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintResult::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosMaintResult = ";
    if(value == FIX::PosMaintResult::valSuccessfulCompletionNoWarningsOrErrors)
    {
      foundValue = true;
      res += "SuccessfulCompletionNoWarningsOrErrors";
    }
    if(value == FIX::PosMaintResult::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value == FIX::PosMaintResult::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqType::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosReqType = ";
    if(value == FIX::PosReqType::valPositions)
    {
      foundValue = true;
      res += "Positions";
    }
    if(value == FIX::PosReqType::valTrades)
    {
      foundValue = true;
      res += "Trades";
    }
    if(value == FIX::PosReqType::valExercises)
    {
      foundValue = true;
      res += "Exercises";
    }
    if(value == FIX::PosReqType::valAssignments)
    {
      foundValue = true;
      res += "Assignments";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ResponseTransportType::tag: {
    FIX::Int value = intOfStr(val);
    res = "ResponseTransportType = ";
    if(value == FIX::ResponseTransportType::valInbandTransportTheRequestWasSentOver)
    {
      foundValue = true;
      res += "InbandTransportTheRequestWasSentOver";
    }
    if(value == FIX::ResponseTransportType::valOutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME)
    {
      foundValue = true;
      res += "OutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ResponseDestination::tag: {
    res = "ResponseDestination = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalNumPosReports::tag: {
    res = "TotalNumPosReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqResult::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosReqResult = ";
    if(value == FIX::PosReqResult::valValidRequest)
    {
      foundValue = true;
      res += "ValidRequest";
    }
    if(value == FIX::PosReqResult::valInvalidOrUnsupportedRequest)
    {
      foundValue = true;
      res += "InvalidOrUnsupportedRequest";
    }
    if(value == FIX::PosReqResult::valNoPositionsFoundThatMatchCriteria)
    {
      foundValue = true;
      res += "NoPositionsFoundThatMatchCriteria";
    }
    if(value == FIX::PosReqResult::valNotAuthorizedToRequestPositions)
    {
      foundValue = true;
      res += "NotAuthorizedToRequestPositions";
    }
    if(value == FIX::PosReqResult::valRequestForPositionNotSupported)
    {
      foundValue = true;
      res += "RequestForPositionNotSupported";
    }
    if(value == FIX::PosReqResult::valOtheruseText)
    {
      foundValue = true;
      res += "OtheruseText";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "PosReqStatus = ";
    if(value == FIX::PosReqStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value == FIX::PosReqStatus::valCompletedWithWarnings)
    {
      foundValue = true;
      res += "CompletedWithWarnings";
    }
    if(value == FIX::PosReqStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPrice::tag: {
    res = "SettlPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPriceType::tag: {
    FIX::Int value = intOfStr(val);
    res = "SettlPriceType = ";
    if(value == FIX::SettlPriceType::valFinal)
    {
      foundValue = true;
      res += "Final";
    }
    if(value == FIX::SettlPriceType::valTheoretical)
    {
      foundValue = true;
      res += "Theoretical";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSettlPrice::tag: {
    res = "UnderlyingSettlPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSettlPriceType::tag: {
    res = "UnderlyingSettlPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriorSettlPrice::tag: {
    res = "PriorSettlPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoQuoteQualifiers::tag: {
    res = "NoQuoteQualifiers = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocSettlCurrency::tag: {
    res = "AllocSettlCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocSettlCurrAmt::tag: {
    res = "AllocSettlCurrAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InterestAtMaturity::tag: {
    res = "InterestAtMaturity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegDatedDate::tag: {
    res = "LegDatedDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPool::tag: {
    res = "LegPool = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocInterestAtMaturity::tag: {
    res = "AllocInterestAtMaturity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAccruedInterestAmt::tag: {
    res = "AllocAccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliveryDate::tag: {
    res = "DeliveryDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AssignmentMethod::tag: {
    FIX::Char value = charOfStr(val);
    res = "AssignmentMethod = ";
    if(value == FIX::AssignmentMethod::valRandom)
    {
      foundValue = true;
      res += "Random";
    }
    if(value == FIX::AssignmentMethod::valProRata)
    {
      foundValue = true;
      res += "ProRata";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AssignmentUnit::tag: {
    res = "AssignmentUnit = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OpenInterest::tag: {
    res = "OpenInterest = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExerciseMethod::tag: {
    FIX::Char value = charOfStr(val);
    res = "ExerciseMethod = ";
    if(value == FIX::ExerciseMethod::valAutomatic)
    {
      foundValue = true;
      res += "Automatic";
    }
    if(value == FIX::ExerciseMethod::valManual)
    {
      foundValue = true;
      res += "Manual";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNumTradeReports::tag: {
    res = "TotNumTradeReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestResult::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeRequestResult = ";
    if(value == FIX::TradeRequestResult::valSuccessful)
    {
      foundValue = true;
      res += "Successful";
    }
    if(value == FIX::TradeRequestResult::valInvalidOrUnknownInstrument)
    {
      foundValue = true;
      res += "InvalidOrUnknownInstrument";
    }
    if(value == FIX::TradeRequestResult::valInvalidTypeOfTradeRequested)
    {
      foundValue = true;
      res += "InvalidTypeOfTradeRequested";
    }
    if(value == FIX::TradeRequestResult::valInvalidParties)
    {
      foundValue = true;
      res += "InvalidParties";
    }
    if(value == FIX::TradeRequestResult::valInvalidTransportTypeRequested)
    {
      foundValue = true;
      res += "InvalidTransportTypeRequested";
    }
    if(value == FIX::TradeRequestResult::valInvalidDestinationRequested)
    {
      foundValue = true;
      res += "InvalidDestinationRequested";
    }
    if(value == FIX::TradeRequestResult::valTradeRequestTypeNotSupported)
    {
      foundValue = true;
      res += "TradeRequestTypeNotSupported";
    }
    if(value == FIX::TradeRequestResult::valUnauthorizedForTradeCaptureReportRequest)
    {
      foundValue = true;
      res += "UnauthorizedForTradeCaptureReportRequest";
    }
    if(value == FIX::TradeRequestResult::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeRequestStatus = ";
    if(value == FIX::TradeRequestStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::TradeRequestStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value == FIX::TradeRequestStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportRejectReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeReportRejectReason = ";
    if(value == FIX::TradeReportRejectReason::valSuccessful)
    {
      foundValue = true;
      res += "Successful";
    }
    if(value == FIX::TradeReportRejectReason::valInvalidPartyInformation)
    {
      foundValue = true;
      res += "InvalidPartyInformation";
    }
    if(value == FIX::TradeReportRejectReason::valUnknownInstrument)
    {
      foundValue = true;
      res += "UnknownInstrument";
    }
    if(value == FIX::TradeReportRejectReason::valUnauthorizedToReportTrades)
    {
      foundValue = true;
      res += "UnauthorizedToReportTrades";
    }
    if(value == FIX::TradeReportRejectReason::valInvalidTradeType)
    {
      foundValue = true;
      res += "InvalidTradeType";
    }
    if(value == FIX::TradeReportRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideMultiLegReportingType::tag: {
    FIX::Int value = intOfStr(val);
    res = "SideMultiLegReportingType = ";
    if(value == FIX::SideMultiLegReportingType::valSingleSecurity)
    {
      foundValue = true;
      res += "SingleSecurity";
    }
    if(value == FIX::SideMultiLegReportingType::valIndividualLegOfAMultiLegSecurity)
    {
      foundValue = true;
      res += "IndividualLegOfAMultiLegSecurity";
    }
    if(value == FIX::SideMultiLegReportingType::valMultiLegSecurity)
    {
      foundValue = true;
      res += "MultiLegSecurity";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPosAmt::tag: {
    res = "NoPosAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AutoAcceptIndicator::tag: {
    res = "AutoAcceptIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocReportID::tag: {
    res = "AllocReportID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested2PartyIDs::tag: {
    res = "NoNested2PartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartyID::tag: {
    res = "Nested2PartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartyIDSource::tag: {
    res = "Nested2PartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartyRole::tag: {
    res = "Nested2PartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartySubID::tag: {
    res = "Nested2PartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkSecurityIDSource::tag: {
    res = "BenchmarkSecurityIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySubType::tag: {
    res = "SecuritySubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecuritySubType::tag: {
    res = "UnderlyingSecuritySubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecuritySubType::tag: {
    res = "LegSecuritySubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllowableOneSidednessPct::tag: {
    res = "AllowableOneSidednessPct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllowableOneSidednessValue::tag: {
    res = "AllowableOneSidednessValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllowableOneSidednessCurr::tag: {
    res = "AllowableOneSidednessCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoTrdRegTimestamps::tag: {
    res = "NoTrdRegTimestamps = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRegTimestamp::tag: {
    res = "TrdRegTimestamp = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRegTimestampType::tag: {
    FIX::Int value = intOfStr(val);
    res = "TrdRegTimestampType = ";
    if(value == FIX::TrdRegTimestampType::valExecutionTime)
    {
      foundValue = true;
      res += "ExecutionTime";
    }
    if(value == FIX::TrdRegTimestampType::valTimeIn)
    {
      foundValue = true;
      res += "TimeIn";
    }
    if(value == FIX::TrdRegTimestampType::valTimeOut)
    {
      foundValue = true;
      res += "TimeOut";
    }
    if(value == FIX::TrdRegTimestampType::valBrokerReceipt)
    {
      foundValue = true;
      res += "BrokerReceipt";
    }
    if(value == FIX::TrdRegTimestampType::valBrokerExecution)
    {
      foundValue = true;
      res += "BrokerExecution";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRegTimestampOrigin::tag: {
    res = "TrdRegTimestampOrigin = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmRefID::tag: {
    res = "ConfirmRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmType::tag: {
    FIX::Int value = intOfStr(val);
    res = "ConfirmType = ";
    if(value == FIX::ConfirmType::valStatus)
    {
      foundValue = true;
      res += "Status";
    }
    if(value == FIX::ConfirmType::valConfirmation)
    {
      foundValue = true;
      res += "Confirmation";
    }
    if(value == FIX::ConfirmType::valConfirmationRequestRejected)
    {
      foundValue = true;
      res += "ConfirmationRequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmRejReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "ConfirmRejReason = ";
    if(value == FIX::ConfirmRejReason::valMismatchedAccount)
    {
      foundValue = true;
      res += "MismatchedAccount";
    }
    if(value == FIX::ConfirmRejReason::valMissingSettlementInstructions)
    {
      foundValue = true;
      res += "MissingSettlementInstructions";
    }
    if(value == FIX::ConfirmRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BookingType::tag: {
    FIX::Int value = intOfStr(val);
    res = "BookingType = ";
    if(value == FIX::BookingType::valRegularBooking)
    {
      foundValue = true;
      res += "RegularBooking";
    }
    if(value == FIX::BookingType::valCFD)
    {
      foundValue = true;
      res += "CFD";
    }
    if(value == FIX::BookingType::valTotalReturnSwap)
    {
      foundValue = true;
      res += "TotalReturnSwap";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IndividualAllocRejCode::tag: {
    res = "IndividualAllocRejCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstMsgID::tag: {
    res = "SettlInstMsgID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSettlInst::tag: {
    res = "NoSettlInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastUpdateTime::tag: {
    res = "LastUpdateTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocSettlInstType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocSettlInstType = ";
    if(value == FIX::AllocSettlInstType::valUseDefaultInstructions)
    {
      foundValue = true;
      res += "UseDefaultInstructions";
    }
    if(value == FIX::AllocSettlInstType::valDeriveFromParametersProvided)
    {
      foundValue = true;
      res += "DeriveFromParametersProvided";
    }
    if(value == FIX::AllocSettlInstType::valFullDetailsProvided)
    {
      foundValue = true;
      res += "FullDetailsProvided";
    }
    if(value == FIX::AllocSettlInstType::valSSIDbIdsProvided)
    {
      foundValue = true;
      res += "SSIDbIdsProvided";
    }
    if(value == FIX::AllocSettlInstType::valPhoneForInstructions)
    {
      foundValue = true;
      res += "PhoneForInstructions";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSettlPartyIDs::tag: {
    res = "NoSettlPartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartyID::tag: {
    res = "SettlPartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartyIDSource::tag: {
    res = "SettlPartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartyRole::tag: {
    res = "SettlPartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartySubID::tag: {
    res = "SettlPartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartySubIDType::tag: {
    res = "SettlPartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DlvyInstType::tag: {
    FIX::Char value = charOfStr(val);
    res = "DlvyInstType = ";
    if(value == FIX::DlvyInstType::valSecurities)
    {
      foundValue = true;
      res += "Securities";
    }
    if(value == FIX::DlvyInstType::valCash)
    {
      foundValue = true;
      res += "Cash";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TerminationType::tag: {
    FIX::Int value = intOfStr(val);
    res = "TerminationType = ";
    if(value == FIX::TerminationType::valOvernight)
    {
      foundValue = true;
      res += "Overnight";
    }
    if(value == FIX::TerminationType::valTerm)
    {
      foundValue = true;
      res += "Term";
    }
    if(value == FIX::TerminationType::valFlexible)
    {
      foundValue = true;
      res += "Flexible";
    }
    if(value == FIX::TerminationType::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NextExpectedMsgSeqNum::tag: {
    res = "NextExpectedMsgSeqNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdStatusReqID::tag: {
    res = "OrdStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstReqID::tag: {
    res = "SettlInstReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstReqRejCode::tag: {
    FIX::Int value = intOfStr(val);
    res = "SettlInstReqRejCode = ";
    if(value == FIX::SettlInstReqRejCode::valUnableToProcessRequest)
    {
      foundValue = true;
      res += "UnableToProcessRequest";
    }
    if(value == FIX::SettlInstReqRejCode::valUnknownAccount)
    {
      foundValue = true;
      res += "UnknownAccount";
    }
    if(value == FIX::SettlInstReqRejCode::valNoMatchingSettlementInstructionsFound)
    {
      foundValue = true;
      res += "NoMatchingSettlementInstructionsFound";
    }
    if(value == FIX::SettlInstReqRejCode::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryAllocID::tag: {
    res = "SecondaryAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocReportType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocReportType = ";
    if(value == FIX::AllocReportType::valSellsideCalculatedUsingPreliminary)
    {
      foundValue = true;
      res += "SellsideCalculatedUsingPreliminary";
    }
    if(value == FIX::AllocReportType::valSellsideCalculatedWithoutPreliminary)
    {
      foundValue = true;
      res += "SellsideCalculatedWithoutPreliminary";
    }
    if(value == FIX::AllocReportType::valWarehouseRecap)
    {
      foundValue = true;
      res += "WarehouseRecap";
    }
    if(value == FIX::AllocReportType::valRequestToIntermediary)
    {
      foundValue = true;
      res += "RequestToIntermediary";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocReportRefID::tag: {
    res = "AllocReportRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocCancReplaceReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocCancReplaceReason = ";
    if(value == FIX::AllocCancReplaceReason::valOriginalDetailsIncompleteOrIncorrect)
    {
      foundValue = true;
      res += "OriginalDetailsIncompleteOrIncorrect";
    }
    if(value == FIX::AllocCancReplaceReason::valChangeInUnderlyingOrderDetails)
    {
      foundValue = true;
      res += "ChangeInUnderlyingOrderDetails";
    }
    if(value == FIX::AllocCancReplaceReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CopyMsgIndicator::tag: {
    res = "CopyMsgIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAccountType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocAccountType = ";
    if(value == FIX::AllocAccountType::valAccountIsCarriedOnCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnCustomerSideOfBooks";
    }
    if(value == FIX::AllocAccountType::valAccountIsCarriedOnNonCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooks";
    }
    if(value == FIX::AllocAccountType::valHouseTrader)
    {
      foundValue = true;
      res += "HouseTrader";
    }
    if(value == FIX::AllocAccountType::valFloorTrader)
    {
      foundValue = true;
      res += "FloorTrader";
    }
    if(value == FIX::AllocAccountType::valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined";
    }
    if(value == FIX::AllocAccountType::valAccountIsHouseTraderAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsHouseTraderAndIsCrossMargined";
    }
    if(value == FIX::AllocAccountType::valJointBackofficeAccount)
    {
      foundValue = true;
      res += "JointBackofficeAccount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderAvgPx::tag: {
    res = "OrderAvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderBookingQty::tag: {
    res = "OrderBookingQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSettlPartySubIDs::tag: {
    res = "NoSettlPartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPartySubIDs::tag: {
    res = "NoPartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartySubIDType::tag: {
    res = "PartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNestedPartySubIDs::tag: {
    res = "NoNestedPartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartySubIDType::tag: {
    res = "NestedPartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested2PartySubIDs::tag: {
    res = "NoNested2PartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartySubIDType::tag: {
    res = "Nested2PartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocIntermedReqType::tag: {
    FIX::Int value = intOfStr(val);
    res = "AllocIntermedReqType = ";
    if(value == FIX::AllocIntermedReqType::valPendingAccept)
    {
      foundValue = true;
      res += "PendingAccept";
    }
    if(value == FIX::AllocIntermedReqType::valPendingRelease)
    {
      foundValue = true;
      res += "PendingRelease";
    }
    if(value == FIX::AllocIntermedReqType::valPendingReversal)
    {
      foundValue = true;
      res += "PendingReversal";
    }
    if(value == FIX::AllocIntermedReqType::valAccept)
    {
      foundValue = true;
      res += "Accept";
    }
    if(value == FIX::AllocIntermedReqType::valBlockLevelReject)
    {
      foundValue = true;
      res += "BlockLevelReject";
    }
    if(value == FIX::AllocIntermedReqType::valAccountLevelReject)
    {
      foundValue = true;
      res += "AccountLevelReject";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingPx::tag: {
    res = "UnderlyingPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriceDelta::tag: {
    res = "PriceDelta = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueMax::tag: {
    res = "ApplQueueMax = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueDepth::tag: {
    res = "ApplQueueDepth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueResolution::tag: {
    FIX::Int value = intOfStr(val);
    res = "ApplQueueResolution = ";
    if(value == FIX::ApplQueueResolution::valNoActionTaken)
    {
      foundValue = true;
      res += "NoActionTaken";
    }
    if(value == FIX::ApplQueueResolution::valQueueFlushed)
    {
      foundValue = true;
      res += "QueueFlushed";
    }
    if(value == FIX::ApplQueueResolution::valOverlayLast)
    {
      foundValue = true;
      res += "OverlayLast";
    }
    if(value == FIX::ApplQueueResolution::valEndSession)
    {
      foundValue = true;
      res += "EndSession";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueAction::tag: {
    FIX::Int value = intOfStr(val);
    res = "ApplQueueAction = ";
    if(value == FIX::ApplQueueAction::valNoActionTaken)
    {
      foundValue = true;
      res += "NoActionTaken";
    }
    if(value == FIX::ApplQueueAction::valQueueFlushed)
    {
      foundValue = true;
      res += "QueueFlushed";
    }
    if(value == FIX::ApplQueueAction::valOverlayLast)
    {
      foundValue = true;
      res += "OverlayLast";
    }
    if(value == FIX::ApplQueueAction::valEndSession)
    {
      foundValue = true;
      res += "EndSession";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoAltMDSource::tag: {
    res = "NoAltMDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AltMDSourceID::tag: {
    res = "AltMDSourceID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryTradeReportID::tag: {
    res = "SecondaryTradeReportID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgPxIndicator::tag: {
    FIX::Int value = intOfStr(val);
    res = "AvgPxIndicator = ";
    if(value == FIX::AvgPxIndicator::valNoAveragePricing)
    {
      foundValue = true;
      res += "NoAveragePricing";
    }
    if(value == FIX::AvgPxIndicator::valTradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID)
    {
      foundValue = true;
      res += "TradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID";
    }
    if(value == FIX::AvgPxIndicator::valLastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID)
    {
      foundValue = true;
      res += "LastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeLinkID::tag: {
    res = "TradeLinkID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderInputDevice::tag: {
    res = "OrderInputDevice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingTradingSessionID::tag: {
    res = "UnderlyingTradingSessionID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingTradingSessionSubID::tag: {
    res = "UnderlyingTradingSessionSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeLegRefID::tag: {
    res = "TradeLegRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExchangeRule::tag: {
    res = "ExchangeRule = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeAllocIndicator::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeAllocIndicator = ";
    if(value == FIX::TradeAllocIndicator::valAllocationNotRequired)
    {
      foundValue = true;
      res += "AllocationNotRequired";
    }
    if(value == FIX::TradeAllocIndicator::valAllocationRequiredgiveUpTradeAllocationInformationNotProvided)
    {
      foundValue = true;
      res += "AllocationRequiredgiveUpTradeAllocationInformationNotProvided";
    }
    if(value == FIX::TradeAllocIndicator::valUseAllocationProvidedWithTheTrade)
    {
      foundValue = true;
      res += "UseAllocationProvidedWithTheTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExpirationCycle::tag: {
    FIX::Int value = intOfStr(val);
    res = "ExpirationCycle = ";
    if(value == FIX::ExpirationCycle::valExpireOnTradingSessionClose)
    {
      foundValue = true;
      res += "ExpireOnTradingSessionClose";
    }
    if(value == FIX::ExpirationCycle::valExpireOnTradingSessionOpen)
    {
      foundValue = true;
      res += "ExpireOnTradingSessionOpen";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdType::tag: {
    FIX::Int value = intOfStr(val);
    res = "TrdType = ";
    if(value == FIX::TrdType::valRegularTrade)
    {
      foundValue = true;
      res += "RegularTrade";
    }
    if(value == FIX::TrdType::valBlockTrade)
    {
      foundValue = true;
      res += "BlockTrade";
    }
    if(value == FIX::TrdType::valEFP)
    {
      foundValue = true;
      res += "EFP";
    }
    if(value == FIX::TrdType::valTransfer)
    {
      foundValue = true;
      res += "Transfer";
    }
    if(value == FIX::TrdType::valLateTrade)
    {
      foundValue = true;
      res += "LateTrade";
    }
    if(value == FIX::TrdType::valTTrade)
    {
      foundValue = true;
      res += "TTrade";
    }
    if(value == FIX::TrdType::valWeightedAveragePriceTrade)
    {
      foundValue = true;
      res += "WeightedAveragePriceTrade";
    }
    if(value == FIX::TrdType::valBunchedTrade)
    {
      foundValue = true;
      res += "BunchedTrade";
    }
    if(value == FIX::TrdType::valLateBunchedTrade)
    {
      foundValue = true;
      res += "LateBunchedTrade";
    }
    if(value == FIX::TrdType::valPriorReferencePriceTrade)
    {
      foundValue = true;
      res += "PriorReferencePriceTrade";
    }
    if(value == FIX::TrdType::valAfterHoursTrade)
    {
      foundValue = true;
      res += "AfterHoursTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdSubType::tag: {
    res = "TrdSubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TransferReason::tag: {
    res = "TransferReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AsgnReqID::tag: {
    res = "AsgnReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNumAssignmentReports::tag: {
    res = "TotNumAssignmentReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AsgnRptID::tag: {
    res = "AsgnRptID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ThresholdAmount::tag: {
    res = "ThresholdAmount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegMoveType::tag: {
    res = "PegMoveType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegOffsetType::tag: {
    res = "PegOffsetType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegLimitType::tag: {
    res = "PegLimitType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegRoundDirection::tag: {
    res = "PegRoundDirection = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PeggedPrice::tag: {
    res = "PeggedPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegScope::tag: {
    FIX::Int value = intOfStr(val);
    res = "PegScope = ";
    if(value == FIX::PegScope::valLocal)
    {
      foundValue = true;
      res += "Local";
    }
    if(value == FIX::PegScope::valNational)
    {
      foundValue = true;
      res += "National";
    }
    if(value == FIX::PegScope::valGlobal)
    {
      foundValue = true;
      res += "Global";
    }
    if(value == FIX::PegScope::valNationalExcludingLocal)
    {
      foundValue = true;
      res += "NationalExcludingLocal";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionMoveType::tag: {
    res = "DiscretionMoveType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionOffsetType::tag: {
    res = "DiscretionOffsetType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionLimitType::tag: {
    res = "DiscretionLimitType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionRoundDirection::tag: {
    res = "DiscretionRoundDirection = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionPrice::tag: {
    res = "DiscretionPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionScope::tag: {
    FIX::Int value = intOfStr(val);
    res = "DiscretionScope = ";
    if(value == FIX::DiscretionScope::valLocal)
    {
      foundValue = true;
      res += "Local";
    }
    if(value == FIX::DiscretionScope::valNational)
    {
      foundValue = true;
      res += "National";
    }
    if(value == FIX::DiscretionScope::valGlobal)
    {
      foundValue = true;
      res += "Global";
    }
    if(value == FIX::DiscretionScope::valNationalExcludingLocal)
    {
      foundValue = true;
      res += "NationalExcludingLocal";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetStrategy::tag: {
    res = "TargetStrategy = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetStrategyParameters::tag: {
    res = "TargetStrategyParameters = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ParticipationRate::tag: {
    res = "ParticipationRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetStrategyPerformance::tag: {
    res = "TargetStrategyPerformance = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastLiquidityInd::tag: {
    FIX::Int value = intOfStr(val);
    res = "LastLiquidityInd = ";
    if(value == FIX::LastLiquidityInd::valAddedLiquidity)
    {
      foundValue = true;
      res += "AddedLiquidity";
    }
    if(value == FIX::LastLiquidityInd::valRemovedLiquidity)
    {
      foundValue = true;
      res += "RemovedLiquidity";
    }
    if(value == FIX::LastLiquidityInd::valLiquidityRoutedOut)
    {
      foundValue = true;
      res += "LiquidityRoutedOut";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PublishTrdIndicator::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "PublishTrdIndicator = ";
    if(value == FIX::PublishTrdIndicator::valReportTrade)
    {
      foundValue = true;
      res += "ReportTrade";
    }
    if(value == FIX::PublishTrdIndicator::valDoNotReportTrade)
    {
      foundValue = true;
      res += "DoNotReportTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ShortSaleReason::tag: {
    FIX::Int value = intOfStr(val);
    res = "ShortSaleReason = ";
    if(value == FIX::ShortSaleReason::valDealerSoldShort)
    {
      foundValue = true;
      res += "DealerSoldShort";
    }
    if(value == FIX::ShortSaleReason::valDealerSoldShortExempt)
    {
      foundValue = true;
      res += "DealerSoldShortExempt";
    }
    if(value == FIX::ShortSaleReason::valSellingCustomerSoldShort)
    {
      foundValue = true;
      res += "SellingCustomerSoldShort";
    }
    if(value == FIX::ShortSaleReason::valSellingCustomerSoldShortExempt)
    {
      foundValue = true;
      res += "SellingCustomerSoldShortExempt";
    }
    if(value == FIX::ShortSaleReason::valQualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort)
    {
      foundValue = true;
      res += "QualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort";
    }
    if(value == FIX::ShortSaleReason::valQSROrAGUContraSideSoldShortExempt)
    {
      foundValue = true;
      res += "QSROrAGUContraSideSoldShortExempt";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QtyType::tag: {
    FIX::Int value = intOfStr(val);
    res = "QtyType = ";
    if(value == FIX::QtyType::valUnits)
    {
      foundValue = true;
      res += "Units";
    }
    if(value == FIX::QtyType::valContractsIfUsedShouldSpecifyContractMultiplier)
    {
      foundValue = true;
      res += "ContractsIfUsedShouldSpecifyContractMultiplier";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryTrdType::tag: {
    res = "SecondaryTrdType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportType::tag: {
    FIX::Int value = intOfStr(val);
    res = "TradeReportType = ";
    if(value == FIX::TradeReportType::valSubmit)
    {
      foundValue = true;
      res += "Submit";
    }
    if(value == FIX::TradeReportType::valAlleged)
    {
      foundValue = true;
      res += "Alleged";
    }
    if(value == FIX::TradeReportType::valAccept)
    {
      foundValue = true;
      res += "Accept";
    }
    if(value == FIX::TradeReportType::valDecline)
    {
      foundValue = true;
      res += "Decline";
    }
    if(value == FIX::TradeReportType::valAddendum)
    {
      foundValue = true;
      res += "Addendum";
    }
    if(value == FIX::TradeReportType::valNoOrWas)
    {
      foundValue = true;
      res += "NoOrWas";
    }
    if(value == FIX::TradeReportType::valTradeReportCancel)
    {
      foundValue = true;
      res += "TradeReportCancel";
    }
    if(value == FIX::TradeReportType::valLockedInTradeBreak)
    {
      foundValue = true;
      res += "LockedInTradeBreak";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocNoOrdersType::tag: {
    res = "AllocNoOrdersType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SharedCommission::tag: {
    res = "SharedCommission = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmReqID::tag: {
    res = "ConfirmReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgParPx::tag: {
    res = "AvgParPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ReportedPx::tag: {
    res = "ReportedPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoCapacities::tag: {
    res = "NoCapacities = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderCapacityQty::tag: {
    res = "OrderCapacityQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoEvents::tag: {
    res = "NoEvents = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventType::tag: {
    FIX::Int value = intOfStr(val);
    res = "EventType = ";
    if(value == FIX::EventType::valPut)
    {
      foundValue = true;
      res += "Put";
    }
    if(value == FIX::EventType::valCall)
    {
      foundValue = true;
      res += "Call";
    }
    if(value == FIX::EventType::valTender)
    {
      foundValue = true;
      res += "Tender";
    }
    if(value == FIX::EventType::valSinkingFundCall)
    {
      foundValue = true;
      res += "SinkingFundCall";
    }
    if(value == FIX::EventType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventDate::tag: {
    res = "EventDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventPx::tag: {
    res = "EventPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventText::tag: {
    res = "EventText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PctAtRisk::tag: {
    res = "PctAtRisk = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoInstrAttrib::tag: {
    res = "NoInstrAttrib = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InstrAttribType::tag: {
    FIX::Int value = intOfStr(val);
    res = "InstrAttribType = ";
    if(value == FIX::InstrAttribType::valFlat)
    {
      foundValue = true;
      res += "Flat";
    }
    if(value == FIX::InstrAttribType::valZeroCoupon)
    {
      foundValue = true;
      res += "ZeroCoupon";
    }
    if(value == FIX::InstrAttribType::valInterestBearing)
    {
      foundValue = true;
      res += "InterestBearing";
    }
    if(value == FIX::InstrAttribType::valNoPeriodicPayments)
    {
      foundValue = true;
      res += "NoPeriodicPayments";
    }
    if(value == FIX::InstrAttribType::valVariableRate)
    {
      foundValue = true;
      res += "VariableRate";
    }
    if(value == FIX::InstrAttribType::valLessFeeForPut)
    {
      foundValue = true;
      res += "LessFeeForPut";
    }
    if(value == FIX::InstrAttribType::valSteppedCoupon)
    {
      foundValue = true;
      res += "SteppedCoupon";
    }
    if(value == FIX::InstrAttribType::valCouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "CouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field";
    }
    if(value == FIX::InstrAttribType::valWhenAndIfIssued)
    {
      foundValue = true;
      res += "WhenAndIfIssued";
    }
    if(value == FIX::InstrAttribType::valOriginalIssueDiscount)
    {
      foundValue = true;
      res += "OriginalIssueDiscount";
    }
    if(value == FIX::InstrAttribType::valCallablePuttable)
    {
      foundValue = true;
      res += "CallablePuttable";
    }
    if(value == FIX::InstrAttribType::valEscrowedToMaturity)
    {
      foundValue = true;
      res += "EscrowedToMaturity";
    }
    if(value == FIX::InstrAttribType::valEscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "EscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field";
    }
    if(value == FIX::InstrAttribType::valPrerefunded)
    {
      foundValue = true;
      res += "Prerefunded";
    }
    if(value == FIX::InstrAttribType::valInDefault)
    {
      foundValue = true;
      res += "InDefault";
    }
    if(value == FIX::InstrAttribType::valUnrated)
    {
      foundValue = true;
      res += "Unrated";
    }
    if(value == FIX::InstrAttribType::valTaxable)
    {
      foundValue = true;
      res += "Taxable";
    }
    if(value == FIX::InstrAttribType::valIndexed)
    {
      foundValue = true;
      res += "Indexed";
    }
    if(value == FIX::InstrAttribType::valSubjectToAlternativeMinimumTax)
    {
      foundValue = true;
      res += "SubjectToAlternativeMinimumTax";
    }
    if(value == FIX::InstrAttribType::valOriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "OriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field";
    }
    if(value == FIX::InstrAttribType::valCallableBelowMaturityValue)
    {
      foundValue = true;
      res += "CallableBelowMaturityValue";
    }
    if(value == FIX::InstrAttribType::valCallableWithoutNoticeByMailToHolderUnlessRegistered)
    {
      foundValue = true;
      res += "CallableWithoutNoticeByMailToHolderUnlessRegistered";
    }
    if(value == FIX::InstrAttribType::valTextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "TextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::InstrAttribValue::tag: {
    res = "InstrAttribValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DatedDate::tag: {
    res = "DatedDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InterestAccrualDate::tag: {
    res = "InterestAccrualDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CPProgram::tag: {
    FIX::Int value = intOfStr(val);
    res = "CPProgram = ";
    if(value == FIX::CPProgram::val3a)
    {
      foundValue = true;
      res += "3a";
    }
    if(value == FIX::CPProgram::val4)
    {
      foundValue = true;
      res += "4";
    }
    if(value == FIX::CPProgram::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CPRegType::tag: {
    res = "CPRegType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCPProgram::tag: {
    res = "UnderlyingCPProgram = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCPRegType::tag: {
    res = "UnderlyingCPRegType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingQty::tag: {
    res = "UnderlyingQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdMatchID::tag: {
    res = "TrdMatchID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryTradeReportRefID::tag: {
    res = "SecondaryTradeReportRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingDirtyPrice::tag: {
    res = "UnderlyingDirtyPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingEndPrice::tag: {
    res = "UnderlyingEndPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStartValue::tag: {
    res = "UnderlyingStartValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCurrentValue::tag: {
    res = "UnderlyingCurrentValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingEndValue::tag: {
    res = "UnderlyingEndValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoUnderlyingStips::tag: {
    res = "NoUnderlyingStips = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStipType::tag: {
    res = "UnderlyingStipType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStipValue::tag: {
    res = "UnderlyingStipValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityNetMoney::tag: {
    res = "MaturityNetMoney = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeBasis::tag: {
    res = "MiscFeeBasis = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoAllocs::tag: {
    res = "TotNoAllocs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastFragment::tag: {
    FIX::Boolean value = boolOfStr(val);
    res = "LastFragment = ";
    if(value == FIX::LastFragment::valLastMessage)
    {
      foundValue = true;
      res += "LastMessage";
    }
    if(value == FIX::LastFragment::valNotLastMessage)
    {
      foundValue = true;
      res += "NotLastMessage";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollReqID::tag: {
    res = "CollReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnReason::tag: {
    res = "CollAsgnReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryQualifier::tag: {
    res = "CollInquiryQualifier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoTrades::tag: {
    res = "NoTrades = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MarginRatio::tag: {
    res = "MarginRatio = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MarginExcess::tag: {
    res = "MarginExcess = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalNetValue::tag: {
    res = "TotalNetValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashOutstanding::tag: {
    res = "CashOutstanding = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnID::tag: {
    res = "CollAsgnID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnTransType::tag: {
    res = "CollAsgnTransType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollRespID::tag: {
    res = "CollRespID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnRespType::tag: {
    res = "CollAsgnRespType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnRejectReason::tag: {
    res = "CollAsgnRejectReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnRefID::tag: {
    res = "CollAsgnRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollRptID::tag: {
    res = "CollRptID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryID::tag: {
    res = "CollInquiryID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollStatus::tag: {
    res = "CollStatus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNumReports::tag: {
    res = "TotNumReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastRptRequested::tag: {
    res = "LastRptRequested = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementDesc::tag: {
    res = "AgreementDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementID::tag: {
    res = "AgreementID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementDate::tag: {
    res = "AgreementDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StartDate::tag: {
    res = "StartDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndDate::tag: {
    res = "EndDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementCurrency::tag: {
    res = "AgreementCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliveryType::tag: {
    res = "DeliveryType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndAccruedInterestAmt::tag: {
    res = "EndAccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StartCash::tag: {
    res = "StartCash = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndCash::tag: {
    res = "EndCash = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserRequestID::tag: {
    res = "UserRequestID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserRequestType::tag: {
    FIX::Int value = intOfStr(val);
    res = "UserRequestType = ";
    if(value == FIX::UserRequestType::valLogOnUser)
    {
      foundValue = true;
      res += "LogOnUser";
    }
    if(value == FIX::UserRequestType::valLogOffUser)
    {
      foundValue = true;
      res += "LogOffUser";
    }
    if(value == FIX::UserRequestType::valChangePasswordForUser)
    {
      foundValue = true;
      res += "ChangePasswordForUser";
    }
    if(value == FIX::UserRequestType::valRequestIndividualUserStatus)
    {
      foundValue = true;
      res += "RequestIndividualUserStatus";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NewPassword::tag: {
    res = "NewPassword = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "UserStatus = ";
    if(value == FIX::UserStatus::valLoggedIn)
    {
      foundValue = true;
      res += "LoggedIn";
    }
    if(value == FIX::UserStatus::valNotLoggedIn)
    {
      foundValue = true;
      res += "NotLoggedIn";
    }
    if(value == FIX::UserStatus::valUserNotRecognised)
    {
      foundValue = true;
      res += "UserNotRecognised";
    }
    if(value == FIX::UserStatus::valPasswordIncorrect)
    {
      foundValue = true;
      res += "PasswordIncorrect";
    }
    if(value == FIX::UserStatus::valPasswordChanged)
    {
      foundValue = true;
      res += "PasswordChanged";
    }
    if(value == FIX::UserStatus::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserStatusText::tag: {
    res = "UserStatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StatusValue::tag: {
    FIX::Int value = intOfStr(val);
    res = "StatusValue = ";
    if(value == FIX::StatusValue::valConnected)
    {
      foundValue = true;
      res += "Connected";
    }
    if(value == FIX::StatusValue::valNotConnectedDownExpectedUp)
    {
      foundValue = true;
      res += "NotConnectedDownExpectedUp";
    }
    if(value == FIX::StatusValue::valNotConnectedDownExpectedDown)
    {
      foundValue = true;
      res += "NotConnectedDownExpectedDown";
    }
    if(value == FIX::StatusValue::valInProcess)
    {
      foundValue = true;
      res += "InProcess";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StatusText::tag: {
    res = "StatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefCompID::tag: {
    res = "RefCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefSubID::tag: {
    res = "RefSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkResponseID::tag: {
    res = "NetworkResponseID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkRequestID::tag: {
    res = "NetworkRequestID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastNetworkResponseID::tag: {
    res = "LastNetworkResponseID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkRequestType::tag: {
    FIX::Int value = intOfStr(val);
    res = "NetworkRequestType = ";
    if(value == FIX::NetworkRequestType::valSnapshot)
    {
      foundValue = true;
      res += "Snapshot";
    }
    if(value == FIX::NetworkRequestType::valSubscribe)
    {
      foundValue = true;
      res += "Subscribe";
    }
    if(value == FIX::NetworkRequestType::valStopSubscribing)
    {
      foundValue = true;
      res += "StopSubscribing";
    }
    if(value == FIX::NetworkRequestType::valLevelOfDetailThenNoCompIDsBecomesRequired)
    {
      foundValue = true;
      res += "LevelOfDetailThenNoCompIDsBecomesRequired";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoCompIDs::tag: {
    res = "NoCompIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkStatusResponseType::tag: {
    FIX::Int value = intOfStr(val);
    res = "NetworkStatusResponseType = ";
    if(value == FIX::NetworkStatusResponseType::valFull)
    {
      foundValue = true;
      res += "Full";
    }
    if(value == FIX::NetworkStatusResponseType::valIncrementalUpdate)
    {
      foundValue = true;
      res += "IncrementalUpdate";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoCollInquiryQualifier::tag: {
    res = "NoCollInquiryQualifier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRptStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "TrdRptStatus = ";
    if(value == FIX::TrdRptStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::TrdRptStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AffirmStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "AffirmStatus = ";
    if(value == FIX::AffirmStatus::valReceived)
    {
      foundValue = true;
      res += "Received";
    }
    if(value == FIX::AffirmStatus::valConfirmRejectedIeNotAffirmed)
    {
      foundValue = true;
      res += "ConfirmRejectedIeNotAffirmed";
    }
    if(value == FIX::AffirmStatus::valAffirmed)
    {
      foundValue = true;
      res += "Affirmed";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStrikeCurrency::tag: {
    res = "UnderlyingStrikeCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStrikeCurrency::tag: {
    res = "LegStrikeCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TimeBracket::tag: {
    res = "TimeBracket = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAction::tag: {
    FIX::Int value = intOfStr(val);
    res = "CollAction = ";
    if(value == FIX::CollAction::valRetain)
    {
      foundValue = true;
      res += "Retain";
    }
    if(value == FIX::CollAction::valAdd)
    {
      foundValue = true;
      res += "Add";
    }
    if(value == FIX::CollAction::valRemove)
    {
      foundValue = true;
      res += "Remove";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryStatus::tag: {
    FIX::Int value = intOfStr(val);
    res = "CollInquiryStatus = ";
    if(value == FIX::CollInquiryStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value == FIX::CollInquiryStatus::valAcceptedWithWarnings)
    {
      foundValue = true;
      res += "AcceptedWithWarnings";
    }
    if(value == FIX::CollInquiryStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value == FIX::CollInquiryStatus::valCompletedWithWarnings)
    {
      foundValue = true;
      res += "CompletedWithWarnings";
    }
    if(value == FIX::CollInquiryStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryResult::tag: {
    FIX::Int value = intOfStr(val);
    res = "CollInquiryResult = ";
    if(value == FIX::CollInquiryResult::valSuccessful)
    {
      foundValue = true;
      res += "Successful";
    }
    if(value == FIX::CollInquiryResult::valInvalidOrUnknownInstrument)
    {
      foundValue = true;
      res += "InvalidOrUnknownInstrument";
    }
    if(value == FIX::CollInquiryResult::valInvalidOrUnknownCollateralType)
    {
      foundValue = true;
      res += "InvalidOrUnknownCollateralType";
    }
    if(value == FIX::CollInquiryResult::valInvalidParties)
    {
      foundValue = true;
      res += "InvalidParties";
    }
    if(value == FIX::CollInquiryResult::valInvalidTransportTypeRequested)
    {
      foundValue = true;
      res += "InvalidTransportTypeRequested";
    }
    if(value == FIX::CollInquiryResult::valInvalidDestinationRequested)
    {
      foundValue = true;
      res += "InvalidDestinationRequested";
    }
    if(value == FIX::CollInquiryResult::valNoCollateralFoundForTheTradeSpecified)
    {
      foundValue = true;
      res += "NoCollateralFoundForTheTradeSpecified";
    }
    if(value == FIX::CollInquiryResult::valNoCollateralFoundForTheOrderSpecified)
    {
      foundValue = true;
      res += "NoCollateralFoundForTheOrderSpecified";
    }
    if(value == FIX::CollInquiryResult::valCollateralInquiryTypeNotSupported)
    {
      foundValue = true;
      res += "CollateralInquiryTypeNotSupported";
    }
    if(value == FIX::CollInquiryResult::valUnauthorizedForCollateralInquiry)
    {
      foundValue = true;
      res += "UnauthorizedForCollateralInquiry";
    }
    if(value == FIX::CollInquiryResult::valOtherfurtherInformationInText)
    {
      foundValue = true;
      res += "OtherfurtherInformationInText";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StrikeCurrency::tag: {
    res = "StrikeCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested3PartyIDs::tag: {
    res = "NoNested3PartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartyID::tag: {
    res = "Nested3PartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartyIDSource::tag: {
    res = "Nested3PartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartyRole::tag: {
    res = "Nested3PartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested3PartySubIDs::tag: {
    res = "NoNested3PartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartySubID::tag: {
    res = "Nested3PartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartySubIDType::tag: {
    res = "Nested3PartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegContractSettlMonth::tag: {
    res = "LegContractSettlMonth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegInterestAccrualDate::tag: {
    res = "LegInterestAccrualDate = ";
    if(!foundValue)
      res += val;
  }break;

}
return res;
}
} //namespace FIX
