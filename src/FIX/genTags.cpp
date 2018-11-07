#include "Tags.hpp"
#include <cstring>
#include <cstdio>

namespace FIX
{
char Account::toStrBuff[1024];
char AccountStrBuffInit = (memcpy(Account::toStrBuff, "1=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AdvId::toStrBuff[1024];
char AdvIdStrBuffInit = (memcpy(AdvId::toStrBuff, "2=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AdvRefID::toStrBuff[1024];
char AdvRefIDStrBuffInit = (memcpy(AdvRefID::toStrBuff, "3=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AdvSide::toStrBuff[1024];
char AdvSideStrBuffInit = (memcpy(AdvSide::toStrBuff, "4=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AdvTransType::toStrBuff[1024];
char AdvTransTypeStrBuffInit = (memcpy(AdvTransType::toStrBuff, "5=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AvgPx::toStrBuff[1024];
char AvgPxStrBuffInit = (memcpy(AvgPx::toStrBuff, "6=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BeginSeqNo::toStrBuff[1024];
char BeginSeqNoStrBuffInit = (memcpy(BeginSeqNo::toStrBuff, "7=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BeginString::toStrBuff[1024];
char BeginStringStrBuffInit = (memcpy(BeginString::toStrBuff, "8=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BodyLength::toStrBuff[1024];
char BodyLengthStrBuffInit = (memcpy(BodyLength::toStrBuff, "9=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CheckSum::toStrBuff[1024];
char CheckSumStrBuffInit = (memcpy(CheckSum::toStrBuff, "10=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClOrdID::toStrBuff[1024];
char ClOrdIDStrBuffInit = (memcpy(ClOrdID::toStrBuff, "11=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Commission::toStrBuff[1024];
char CommissionStrBuffInit = (memcpy(Commission::toStrBuff, "12=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CommType::toStrBuff[1024];
char CommTypeStrBuffInit = (memcpy(CommType::toStrBuff, "13=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CumQty::toStrBuff[1024];
char CumQtyStrBuffInit = (memcpy(CumQty::toStrBuff, "14=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Currency::toStrBuff[1024];
char CurrencyStrBuffInit = (memcpy(Currency::toStrBuff, "15=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EndSeqNo::toStrBuff[1024];
char EndSeqNoStrBuffInit = (memcpy(EndSeqNo::toStrBuff, "16=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecID::toStrBuff[1024];
char ExecIDStrBuffInit = (memcpy(ExecID::toStrBuff, "17=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecInst::toStrBuff[1024];
char ExecInstStrBuffInit = (memcpy(ExecInst::toStrBuff, "18=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecRefID::toStrBuff[1024];
char ExecRefIDStrBuffInit = (memcpy(ExecRefID::toStrBuff, "19=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecTransType::toStrBuff[1024];
char ExecTransTypeStrBuffInit = (memcpy(ExecTransType::toStrBuff, "20=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HandlInst::toStrBuff[1024];
char HandlInstStrBuffInit = (memcpy(HandlInst::toStrBuff, "21=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityIDSource::toStrBuff[1024];
char SecurityIDSourceStrBuffInit = (memcpy(SecurityIDSource::toStrBuff, "22=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOIID::toStrBuff[1024];
char IOIIDStrBuffInit = (memcpy(IOIID::toStrBuff, "23=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOIOthSv::toStrBuff[1024];
char IOIOthSvStrBuffInit = (memcpy(IOIOthSv::toStrBuff, "24=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOIQltyInd::toStrBuff[1024];
char IOIQltyIndStrBuffInit = (memcpy(IOIQltyInd::toStrBuff, "25=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOIRefID::toStrBuff[1024];
char IOIRefIDStrBuffInit = (memcpy(IOIRefID::toStrBuff, "26=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOIQty::toStrBuff[1024];
char IOIQtyStrBuffInit = (memcpy(IOIQty::toStrBuff, "27=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOITransType::toStrBuff[1024];
char IOITransTypeStrBuffInit = (memcpy(IOITransType::toStrBuff, "28=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastCapacity::toStrBuff[1024];
char LastCapacityStrBuffInit = (memcpy(LastCapacity::toStrBuff, "29=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastMkt::toStrBuff[1024];
char LastMktStrBuffInit = (memcpy(LastMkt::toStrBuff, "30=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastPx::toStrBuff[1024];
char LastPxStrBuffInit = (memcpy(LastPx::toStrBuff, "31=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastQty::toStrBuff[1024];
char LastQtyStrBuffInit = (memcpy(LastQty::toStrBuff, "32=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoLinesOfText::toStrBuff[1024];
char NoLinesOfTextStrBuffInit = (memcpy(NoLinesOfText::toStrBuff, "33=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MsgSeqNum::toStrBuff[1024];
char MsgSeqNumStrBuffInit = (memcpy(MsgSeqNum::toStrBuff, "34=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MsgType::toStrBuff[1024];
char MsgTypeStrBuffInit = (memcpy(MsgType::toStrBuff, "35=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NewSeqNo::toStrBuff[1024];
char NewSeqNoStrBuffInit = (memcpy(NewSeqNo::toStrBuff, "36=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderID::toStrBuff[1024];
char OrderIDStrBuffInit = (memcpy(OrderID::toStrBuff, "37=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderQty::toStrBuff[1024];
char OrderQtyStrBuffInit = (memcpy(OrderQty::toStrBuff, "38=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrdStatus::toStrBuff[1024];
char OrdStatusStrBuffInit = (memcpy(OrdStatus::toStrBuff, "39=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrdType::toStrBuff[1024];
char OrdTypeStrBuffInit = (memcpy(OrdType::toStrBuff, "40=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrigClOrdID::toStrBuff[1024];
char OrigClOrdIDStrBuffInit = (memcpy(OrigClOrdID::toStrBuff, "41=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrigTime::toStrBuff[1024];
char OrigTimeStrBuffInit = (memcpy(OrigTime::toStrBuff, "42=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PossDupFlag::toStrBuff[1024];
char PossDupFlagStrBuffInit = (memcpy(PossDupFlag::toStrBuff, "43=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Price::toStrBuff[1024];
char PriceStrBuffInit = (memcpy(Price::toStrBuff, "44=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RefSeqNum::toStrBuff[1024];
char RefSeqNumStrBuffInit = (memcpy(RefSeqNum::toStrBuff, "45=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RelatdSy::toStrBuff[1024];
char RelatdSyStrBuffInit = (memcpy(RelatdSy::toStrBuff, "46=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Rule80A::toStrBuff[1024];
char Rule80AStrBuffInit = (memcpy(Rule80A::toStrBuff, "47=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityID::toStrBuff[1024];
char SecurityIDStrBuffInit = (memcpy(SecurityID::toStrBuff, "48=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SenderCompID::toStrBuff[1024];
char SenderCompIDStrBuffInit = (memcpy(SenderCompID::toStrBuff, "49=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SenderSubID::toStrBuff[1024];
char SenderSubIDStrBuffInit = (memcpy(SenderSubID::toStrBuff, "50=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SendingDat::toStrBuff[1024];
char SendingDatStrBuffInit = (memcpy(SendingDat::toStrBuff, "51=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SendingTime::toStrBuff[1024];
char SendingTimeStrBuffInit = (memcpy(SendingTime::toStrBuff, "52=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Quantity::toStrBuff[1024];
char QuantityStrBuffInit = (memcpy(Quantity::toStrBuff, "53=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Side::toStrBuff[1024];
char SideStrBuffInit = (memcpy(Side::toStrBuff, "54=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Symbol::toStrBuff[1024];
char SymbolStrBuffInit = (memcpy(Symbol::toStrBuff, "55=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TargetCompID::toStrBuff[1024];
char TargetCompIDStrBuffInit = (memcpy(TargetCompID::toStrBuff, "56=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TargetSubID::toStrBuff[1024];
char TargetSubIDStrBuffInit = (memcpy(TargetSubID::toStrBuff, "57=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Text::toStrBuff[1024];
char TextStrBuffInit = (memcpy(Text::toStrBuff, "58=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TimeInForce::toStrBuff[1024];
char TimeInForceStrBuffInit = (memcpy(TimeInForce::toStrBuff, "59=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TransactTime::toStrBuff[1024];
char TransactTimeStrBuffInit = (memcpy(TransactTime::toStrBuff, "60=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Urgency::toStrBuff[1024];
char UrgencyStrBuffInit = (memcpy(Urgency::toStrBuff, "61=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ValidUntilTime::toStrBuff[1024];
char ValidUntilTimeStrBuffInit = (memcpy(ValidUntilTime::toStrBuff, "62=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlType::toStrBuff[1024];
char SettlTypeStrBuffInit = (memcpy(SettlType::toStrBuff, "63=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlDate::toStrBuff[1024];
char SettlDateStrBuffInit = (memcpy(SettlDate::toStrBuff, "64=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SymbolSfx::toStrBuff[1024];
char SymbolSfxStrBuffInit = (memcpy(SymbolSfx::toStrBuff, "65=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListID::toStrBuff[1024];
char ListIDStrBuffInit = (memcpy(ListID::toStrBuff, "66=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListSeqNo::toStrBuff[1024];
char ListSeqNoStrBuffInit = (memcpy(ListSeqNo::toStrBuff, "67=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNoOrders::toStrBuff[1024];
char TotNoOrdersStrBuffInit = (memcpy(TotNoOrders::toStrBuff, "68=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListExecInst::toStrBuff[1024];
char ListExecInstStrBuffInit = (memcpy(ListExecInst::toStrBuff, "69=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocID::toStrBuff[1024];
char AllocIDStrBuffInit = (memcpy(AllocID::toStrBuff, "70=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocTransType::toStrBuff[1024];
char AllocTransTypeStrBuffInit = (memcpy(AllocTransType::toStrBuff, "71=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RefAllocID::toStrBuff[1024];
char RefAllocIDStrBuffInit = (memcpy(RefAllocID::toStrBuff, "72=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoOrders::toStrBuff[1024];
char NoOrdersStrBuffInit = (memcpy(NoOrders::toStrBuff, "73=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AvgPxPrecision::toStrBuff[1024];
char AvgPxPrecisionStrBuffInit = (memcpy(AvgPxPrecision::toStrBuff, "74=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeDate::toStrBuff[1024];
char TradeDateStrBuffInit = (memcpy(TradeDate::toStrBuff, "75=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecBroker::toStrBuff[1024];
char ExecBrokerStrBuffInit = (memcpy(ExecBroker::toStrBuff, "76=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PositionEffect::toStrBuff[1024];
char PositionEffectStrBuffInit = (memcpy(PositionEffect::toStrBuff, "77=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoAllocs::toStrBuff[1024];
char NoAllocsStrBuffInit = (memcpy(NoAllocs::toStrBuff, "78=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocAccount::toStrBuff[1024];
char AllocAccountStrBuffInit = (memcpy(AllocAccount::toStrBuff, "79=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocQty::toStrBuff[1024];
char AllocQtyStrBuffInit = (memcpy(AllocQty::toStrBuff, "80=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ProcessCode::toStrBuff[1024];
char ProcessCodeStrBuffInit = (memcpy(ProcessCode::toStrBuff, "81=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoRpts::toStrBuff[1024];
char NoRptsStrBuffInit = (memcpy(NoRpts::toStrBuff, "82=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RptSeq::toStrBuff[1024];
char RptSeqStrBuffInit = (memcpy(RptSeq::toStrBuff, "83=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CxlQty::toStrBuff[1024];
char CxlQtyStrBuffInit = (memcpy(CxlQty::toStrBuff, "84=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoDlvyInst::toStrBuff[1024];
char NoDlvyInstStrBuffInit = (memcpy(NoDlvyInst::toStrBuff, "85=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DlvyInst::toStrBuff[1024];
char DlvyInstStrBuffInit = (memcpy(DlvyInst::toStrBuff, "86=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocStatus::toStrBuff[1024];
char AllocStatusStrBuffInit = (memcpy(AllocStatus::toStrBuff, "87=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocRejCode::toStrBuff[1024];
char AllocRejCodeStrBuffInit = (memcpy(AllocRejCode::toStrBuff, "88=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Signature::toStrBuff[1024];
char SignatureStrBuffInit = (memcpy(Signature::toStrBuff, "89=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecureDataLen::toStrBuff[1024];
char SecureDataLenStrBuffInit = (memcpy(SecureDataLen::toStrBuff, "90=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecureData::toStrBuff[1024];
char SecureDataStrBuffInit = (memcpy(SecureData::toStrBuff, "91=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BrokerOfCredit::toStrBuff[1024];
char BrokerOfCreditStrBuffInit = (memcpy(BrokerOfCredit::toStrBuff, "92=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SignatureLength::toStrBuff[1024];
char SignatureLengthStrBuffInit = (memcpy(SignatureLength::toStrBuff, "93=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EmailType::toStrBuff[1024];
char EmailTypeStrBuffInit = (memcpy(EmailType::toStrBuff, "94=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RawDataLength::toStrBuff[1024];
char RawDataLengthStrBuffInit = (memcpy(RawDataLength::toStrBuff, "95=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RawData::toStrBuff[1024];
char RawDataStrBuffInit = (memcpy(RawData::toStrBuff, "96=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PossResend::toStrBuff[1024];
char PossResendStrBuffInit = (memcpy(PossResend::toStrBuff, "97=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncryptMethod::toStrBuff[1024];
char EncryptMethodStrBuffInit = (memcpy(EncryptMethod::toStrBuff, "98=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StopPx::toStrBuff[1024];
char StopPxStrBuffInit = (memcpy(StopPx::toStrBuff, "99=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExDestination::toStrBuff[1024];
char ExDestinationStrBuffInit = (memcpy(ExDestination::toStrBuff, "100=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CxlRejReason::toStrBuff[1024];
char CxlRejReasonStrBuffInit = (memcpy(CxlRejReason::toStrBuff, "102=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrdRejReason::toStrBuff[1024];
char OrdRejReasonStrBuffInit = (memcpy(OrdRejReason::toStrBuff, "103=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOIQualifier::toStrBuff[1024];
char IOIQualifierStrBuffInit = (memcpy(IOIQualifier::toStrBuff, "104=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char WaveNo::toStrBuff[1024];
char WaveNoStrBuffInit = (memcpy(WaveNo::toStrBuff, "105=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Issuer::toStrBuff[1024];
char IssuerStrBuffInit = (memcpy(Issuer::toStrBuff, "106=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityDesc::toStrBuff[1024];
char SecurityDescStrBuffInit = (memcpy(SecurityDesc::toStrBuff, "107=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HeartBtInt::toStrBuff[1024];
char HeartBtIntStrBuffInit = (memcpy(HeartBtInt::toStrBuff, "108=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClientID::toStrBuff[1024];
char ClientIDStrBuffInit = (memcpy(ClientID::toStrBuff, "109=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MinQty::toStrBuff[1024];
char MinQtyStrBuffInit = (memcpy(MinQty::toStrBuff, "110=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaxFloor::toStrBuff[1024];
char MaxFloorStrBuffInit = (memcpy(MaxFloor::toStrBuff, "111=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TestReqID::toStrBuff[1024];
char TestReqIDStrBuffInit = (memcpy(TestReqID::toStrBuff, "112=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ReportToExch::toStrBuff[1024];
char ReportToExchStrBuffInit = (memcpy(ReportToExch::toStrBuff, "113=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LocateReqd::toStrBuff[1024];
char LocateReqdStrBuffInit = (memcpy(LocateReqd::toStrBuff, "114=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OnBehalfOfCompID::toStrBuff[1024];
char OnBehalfOfCompIDStrBuffInit = (memcpy(OnBehalfOfCompID::toStrBuff, "115=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OnBehalfOfSubID::toStrBuff[1024];
char OnBehalfOfSubIDStrBuffInit = (memcpy(OnBehalfOfSubID::toStrBuff, "116=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteID::toStrBuff[1024];
char QuoteIDStrBuffInit = (memcpy(QuoteID::toStrBuff, "117=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetMoney::toStrBuff[1024];
char NetMoneyStrBuffInit = (memcpy(NetMoney::toStrBuff, "118=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlCurrAmt::toStrBuff[1024];
char SettlCurrAmtStrBuffInit = (memcpy(SettlCurrAmt::toStrBuff, "119=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlCurrency::toStrBuff[1024];
char SettlCurrencyStrBuffInit = (memcpy(SettlCurrency::toStrBuff, "120=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ForexReq::toStrBuff[1024];
char ForexReqStrBuffInit = (memcpy(ForexReq::toStrBuff, "121=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrigSendingTime::toStrBuff[1024];
char OrigSendingTimeStrBuffInit = (memcpy(OrigSendingTime::toStrBuff, "122=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char GapFillFlag::toStrBuff[1024];
char GapFillFlagStrBuffInit = (memcpy(GapFillFlag::toStrBuff, "123=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoExecs::toStrBuff[1024];
char NoExecsStrBuffInit = (memcpy(NoExecs::toStrBuff, "124=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CxlTyp::toStrBuff[1024];
char CxlTypStrBuffInit = (memcpy(CxlTyp::toStrBuff, "125=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExpireTime::toStrBuff[1024];
char ExpireTimeStrBuffInit = (memcpy(ExpireTime::toStrBuff, "126=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DKReason::toStrBuff[1024];
char DKReasonStrBuffInit = (memcpy(DKReason::toStrBuff, "127=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeliverToCompID::toStrBuff[1024];
char DeliverToCompIDStrBuffInit = (memcpy(DeliverToCompID::toStrBuff, "128=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeliverToSubID::toStrBuff[1024];
char DeliverToSubIDStrBuffInit = (memcpy(DeliverToSubID::toStrBuff, "129=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IOINaturalFlag::toStrBuff[1024];
char IOINaturalFlagStrBuffInit = (memcpy(IOINaturalFlag::toStrBuff, "130=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteReqID::toStrBuff[1024];
char QuoteReqIDStrBuffInit = (memcpy(QuoteReqID::toStrBuff, "131=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidPx::toStrBuff[1024];
char BidPxStrBuffInit = (memcpy(BidPx::toStrBuff, "132=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OfferPx::toStrBuff[1024];
char OfferPxStrBuffInit = (memcpy(OfferPx::toStrBuff, "133=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidSize::toStrBuff[1024];
char BidSizeStrBuffInit = (memcpy(BidSize::toStrBuff, "134=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OfferSize::toStrBuff[1024];
char OfferSizeStrBuffInit = (memcpy(OfferSize::toStrBuff, "135=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoMiscFees::toStrBuff[1024];
char NoMiscFeesStrBuffInit = (memcpy(NoMiscFees::toStrBuff, "136=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MiscFeeAmt::toStrBuff[1024];
char MiscFeeAmtStrBuffInit = (memcpy(MiscFeeAmt::toStrBuff, "137=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MiscFeeCurr::toStrBuff[1024];
char MiscFeeCurrStrBuffInit = (memcpy(MiscFeeCurr::toStrBuff, "138=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MiscFeeType::toStrBuff[1024];
char MiscFeeTypeStrBuffInit = (memcpy(MiscFeeType::toStrBuff, "139=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PrevClosePx::toStrBuff[1024];
char PrevClosePxStrBuffInit = (memcpy(PrevClosePx::toStrBuff, "140=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ResetSeqNumFlag::toStrBuff[1024];
char ResetSeqNumFlagStrBuffInit = (memcpy(ResetSeqNumFlag::toStrBuff, "141=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SenderLocationID::toStrBuff[1024];
char SenderLocationIDStrBuffInit = (memcpy(SenderLocationID::toStrBuff, "142=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TargetLocationID::toStrBuff[1024];
char TargetLocationIDStrBuffInit = (memcpy(TargetLocationID::toStrBuff, "143=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OnBehalfOfLocationID::toStrBuff[1024];
char OnBehalfOfLocationIDStrBuffInit = (memcpy(OnBehalfOfLocationID::toStrBuff, "144=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeliverToLocationID::toStrBuff[1024];
char DeliverToLocationIDStrBuffInit = (memcpy(DeliverToLocationID::toStrBuff, "145=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoRelatedSym::toStrBuff[1024];
char NoRelatedSymStrBuffInit = (memcpy(NoRelatedSym::toStrBuff, "146=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Subject::toStrBuff[1024];
char SubjectStrBuffInit = (memcpy(Subject::toStrBuff, "147=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Headline::toStrBuff[1024];
char HeadlineStrBuffInit = (memcpy(Headline::toStrBuff, "148=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char URLLink::toStrBuff[1024];
char URLLinkStrBuffInit = (memcpy(URLLink::toStrBuff, "149=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecType::toStrBuff[1024];
char ExecTypeStrBuffInit = (memcpy(ExecType::toStrBuff, "150=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LeavesQty::toStrBuff[1024];
char LeavesQtyStrBuffInit = (memcpy(LeavesQty::toStrBuff, "151=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashOrderQty::toStrBuff[1024];
char CashOrderQtyStrBuffInit = (memcpy(CashOrderQty::toStrBuff, "152=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocAvgPx::toStrBuff[1024];
char AllocAvgPxStrBuffInit = (memcpy(AllocAvgPx::toStrBuff, "153=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocNetMoney::toStrBuff[1024];
char AllocNetMoneyStrBuffInit = (memcpy(AllocNetMoney::toStrBuff, "154=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlCurrFxRate::toStrBuff[1024];
char SettlCurrFxRateStrBuffInit = (memcpy(SettlCurrFxRate::toStrBuff, "155=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlCurrFxRateCalc::toStrBuff[1024];
char SettlCurrFxRateCalcStrBuffInit = (memcpy(SettlCurrFxRateCalc::toStrBuff, "156=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NumDaysInterest::toStrBuff[1024];
char NumDaysInterestStrBuffInit = (memcpy(NumDaysInterest::toStrBuff, "157=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AccruedInterestRate::toStrBuff[1024];
char AccruedInterestRateStrBuffInit = (memcpy(AccruedInterestRate::toStrBuff, "158=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AccruedInterestAmt::toStrBuff[1024];
char AccruedInterestAmtStrBuffInit = (memcpy(AccruedInterestAmt::toStrBuff, "159=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstMode::toStrBuff[1024];
char SettlInstModeStrBuffInit = (memcpy(SettlInstMode::toStrBuff, "160=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocText::toStrBuff[1024];
char AllocTextStrBuffInit = (memcpy(AllocText::toStrBuff, "161=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstID::toStrBuff[1024];
char SettlInstIDStrBuffInit = (memcpy(SettlInstID::toStrBuff, "162=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstTransType::toStrBuff[1024];
char SettlInstTransTypeStrBuffInit = (memcpy(SettlInstTransType::toStrBuff, "163=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EmailThreadID::toStrBuff[1024];
char EmailThreadIDStrBuffInit = (memcpy(EmailThreadID::toStrBuff, "164=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstSource::toStrBuff[1024];
char SettlInstSourceStrBuffInit = (memcpy(SettlInstSource::toStrBuff, "165=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlLocation::toStrBuff[1024];
char SettlLocationStrBuffInit = (memcpy(SettlLocation::toStrBuff, "166=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityType::toStrBuff[1024];
char SecurityTypeStrBuffInit = (memcpy(SecurityType::toStrBuff, "167=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EffectiveTime::toStrBuff[1024];
char EffectiveTimeStrBuffInit = (memcpy(EffectiveTime::toStrBuff, "168=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StandInstDbType::toStrBuff[1024];
char StandInstDbTypeStrBuffInit = (memcpy(StandInstDbType::toStrBuff, "169=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StandInstDbName::toStrBuff[1024];
char StandInstDbNameStrBuffInit = (memcpy(StandInstDbName::toStrBuff, "170=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StandInstDbID::toStrBuff[1024];
char StandInstDbIDStrBuffInit = (memcpy(StandInstDbID::toStrBuff, "171=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlDeliveryType::toStrBuff[1024];
char SettlDeliveryTypeStrBuffInit = (memcpy(SettlDeliveryType::toStrBuff, "172=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlDepositoryCode::toStrBuff[1024];
char SettlDepositoryCodeStrBuffInit = (memcpy(SettlDepositoryCode::toStrBuff, "173=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlBrkrCode::toStrBuff[1024];
char SettlBrkrCodeStrBuffInit = (memcpy(SettlBrkrCode::toStrBuff, "174=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstCode::toStrBuff[1024];
char SettlInstCodeStrBuffInit = (memcpy(SettlInstCode::toStrBuff, "175=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySettlAgentName::toStrBuff[1024];
char SecuritySettlAgentNameStrBuffInit = (memcpy(SecuritySettlAgentName::toStrBuff, "176=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySettlAgentCode::toStrBuff[1024];
char SecuritySettlAgentCodeStrBuffInit = (memcpy(SecuritySettlAgentCode::toStrBuff, "177=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySettlAgentAcctNum::toStrBuff[1024];
char SecuritySettlAgentAcctNumStrBuffInit = (memcpy(SecuritySettlAgentAcctNum::toStrBuff, "178=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySettlAgentAcctName::toStrBuff[1024];
char SecuritySettlAgentAcctNameStrBuffInit = (memcpy(SecuritySettlAgentAcctName::toStrBuff, "179=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySettlAgentContactName::toStrBuff[1024];
char SecuritySettlAgentContactNameStrBuffInit = (memcpy(SecuritySettlAgentContactName::toStrBuff, "180=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySettlAgentContactPhone::toStrBuff[1024];
char SecuritySettlAgentContactPhoneStrBuffInit = (memcpy(SecuritySettlAgentContactPhone::toStrBuff, "181=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashSettlAgentName::toStrBuff[1024];
char CashSettlAgentNameStrBuffInit = (memcpy(CashSettlAgentName::toStrBuff, "182=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashSettlAgentCode::toStrBuff[1024];
char CashSettlAgentCodeStrBuffInit = (memcpy(CashSettlAgentCode::toStrBuff, "183=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashSettlAgentAcctNum::toStrBuff[1024];
char CashSettlAgentAcctNumStrBuffInit = (memcpy(CashSettlAgentAcctNum::toStrBuff, "184=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashSettlAgentAcctName::toStrBuff[1024];
char CashSettlAgentAcctNameStrBuffInit = (memcpy(CashSettlAgentAcctName::toStrBuff, "185=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashSettlAgentContactName::toStrBuff[1024];
char CashSettlAgentContactNameStrBuffInit = (memcpy(CashSettlAgentContactName::toStrBuff, "186=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashSettlAgentContactPhone::toStrBuff[1024];
char CashSettlAgentContactPhoneStrBuffInit = (memcpy(CashSettlAgentContactPhone::toStrBuff, "187=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidSpotRate::toStrBuff[1024];
char BidSpotRateStrBuffInit = (memcpy(BidSpotRate::toStrBuff, "188=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidForwardPoints::toStrBuff[1024];
char BidForwardPointsStrBuffInit = (memcpy(BidForwardPoints::toStrBuff, "189=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OfferSpotRate::toStrBuff[1024];
char OfferSpotRateStrBuffInit = (memcpy(OfferSpotRate::toStrBuff, "190=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OfferForwardPoints::toStrBuff[1024];
char OfferForwardPointsStrBuffInit = (memcpy(OfferForwardPoints::toStrBuff, "191=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderQty2::toStrBuff[1024];
char OrderQty2StrBuffInit = (memcpy(OrderQty2::toStrBuff, "192=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlDate2::toStrBuff[1024];
char SettlDate2StrBuffInit = (memcpy(SettlDate2::toStrBuff, "193=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastSpotRate::toStrBuff[1024];
char LastSpotRateStrBuffInit = (memcpy(LastSpotRate::toStrBuff, "194=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastForwardPoints::toStrBuff[1024];
char LastForwardPointsStrBuffInit = (memcpy(LastForwardPoints::toStrBuff, "195=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocLinkID::toStrBuff[1024];
char AllocLinkIDStrBuffInit = (memcpy(AllocLinkID::toStrBuff, "196=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocLinkType::toStrBuff[1024];
char AllocLinkTypeStrBuffInit = (memcpy(AllocLinkType::toStrBuff, "197=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryOrderID::toStrBuff[1024];
char SecondaryOrderIDStrBuffInit = (memcpy(SecondaryOrderID::toStrBuff, "198=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoIOIQualifiers::toStrBuff[1024];
char NoIOIQualifiersStrBuffInit = (memcpy(NoIOIQualifiers::toStrBuff, "199=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaturityMonthYear::toStrBuff[1024];
char MaturityMonthYearStrBuffInit = (memcpy(MaturityMonthYear::toStrBuff, "200=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PutOrCall::toStrBuff[1024];
char PutOrCallStrBuffInit = (memcpy(PutOrCall::toStrBuff, "201=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StrikePrice::toStrBuff[1024];
char StrikePriceStrBuffInit = (memcpy(StrikePrice::toStrBuff, "202=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CoveredOrUncovered::toStrBuff[1024];
char CoveredOrUncoveredStrBuffInit = (memcpy(CoveredOrUncovered::toStrBuff, "203=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CustomerOrFirm::toStrBuff[1024];
char CustomerOrFirmStrBuffInit = (memcpy(CustomerOrFirm::toStrBuff, "204=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaturityDay::toStrBuff[1024];
char MaturityDayStrBuffInit = (memcpy(MaturityDay::toStrBuff, "205=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OptAttribute::toStrBuff[1024];
char OptAttributeStrBuffInit = (memcpy(OptAttribute::toStrBuff, "206=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityExchange::toStrBuff[1024];
char SecurityExchangeStrBuffInit = (memcpy(SecurityExchange::toStrBuff, "207=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NotifyBrokerOfCredit::toStrBuff[1024];
char NotifyBrokerOfCreditStrBuffInit = (memcpy(NotifyBrokerOfCredit::toStrBuff, "208=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocHandlInst::toStrBuff[1024];
char AllocHandlInstStrBuffInit = (memcpy(AllocHandlInst::toStrBuff, "209=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaxShow::toStrBuff[1024];
char MaxShowStrBuffInit = (memcpy(MaxShow::toStrBuff, "210=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PegOffsetValue::toStrBuff[1024];
char PegOffsetValueStrBuffInit = (memcpy(PegOffsetValue::toStrBuff, "211=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char XmlDataLen::toStrBuff[1024];
char XmlDataLenStrBuffInit = (memcpy(XmlDataLen::toStrBuff, "212=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char XmlData::toStrBuff[1024];
char XmlDataStrBuffInit = (memcpy(XmlData::toStrBuff, "213=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstRefID::toStrBuff[1024];
char SettlInstRefIDStrBuffInit = (memcpy(SettlInstRefID::toStrBuff, "214=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoRoutingIDs::toStrBuff[1024];
char NoRoutingIDsStrBuffInit = (memcpy(NoRoutingIDs::toStrBuff, "215=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RoutingType::toStrBuff[1024];
char RoutingTypeStrBuffInit = (memcpy(RoutingType::toStrBuff, "216=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RoutingID::toStrBuff[1024];
char RoutingIDStrBuffInit = (memcpy(RoutingID::toStrBuff, "217=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Spread::toStrBuff[1024];
char SpreadStrBuffInit = (memcpy(Spread::toStrBuff, "218=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Benchmark::toStrBuff[1024];
char BenchmarkStrBuffInit = (memcpy(Benchmark::toStrBuff, "219=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkCurveCurrency::toStrBuff[1024];
char BenchmarkCurveCurrencyStrBuffInit = (memcpy(BenchmarkCurveCurrency::toStrBuff, "220=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkCurveName::toStrBuff[1024];
char BenchmarkCurveNameStrBuffInit = (memcpy(BenchmarkCurveName::toStrBuff, "221=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkCurvePoint::toStrBuff[1024];
char BenchmarkCurvePointStrBuffInit = (memcpy(BenchmarkCurvePoint::toStrBuff, "222=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CouponRate::toStrBuff[1024];
char CouponRateStrBuffInit = (memcpy(CouponRate::toStrBuff, "223=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CouponPaymentDate::toStrBuff[1024];
char CouponPaymentDateStrBuffInit = (memcpy(CouponPaymentDate::toStrBuff, "224=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IssueDate::toStrBuff[1024];
char IssueDateStrBuffInit = (memcpy(IssueDate::toStrBuff, "225=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RepurchaseTerm::toStrBuff[1024];
char RepurchaseTermStrBuffInit = (memcpy(RepurchaseTerm::toStrBuff, "226=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RepurchaseRate::toStrBuff[1024];
char RepurchaseRateStrBuffInit = (memcpy(RepurchaseRate::toStrBuff, "227=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Factor::toStrBuff[1024];
char FactorStrBuffInit = (memcpy(Factor::toStrBuff, "228=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeOriginationDate::toStrBuff[1024];
char TradeOriginationDateStrBuffInit = (memcpy(TradeOriginationDate::toStrBuff, "229=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExDate::toStrBuff[1024];
char ExDateStrBuffInit = (memcpy(ExDate::toStrBuff, "230=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContractMultiplier::toStrBuff[1024];
char ContractMultiplierStrBuffInit = (memcpy(ContractMultiplier::toStrBuff, "231=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoStipulations::toStrBuff[1024];
char NoStipulationsStrBuffInit = (memcpy(NoStipulations::toStrBuff, "232=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StipulationType::toStrBuff[1024];
char StipulationTypeStrBuffInit = (memcpy(StipulationType::toStrBuff, "233=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StipulationValue::toStrBuff[1024];
char StipulationValueStrBuffInit = (memcpy(StipulationValue::toStrBuff, "234=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char YieldType::toStrBuff[1024];
char YieldTypeStrBuffInit = (memcpy(YieldType::toStrBuff, "235=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Yield::toStrBuff[1024];
char YieldStrBuffInit = (memcpy(Yield::toStrBuff, "236=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalTakedown::toStrBuff[1024];
char TotalTakedownStrBuffInit = (memcpy(TotalTakedown::toStrBuff, "237=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Concession::toStrBuff[1024];
char ConcessionStrBuffInit = (memcpy(Concession::toStrBuff, "238=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RepoCollateralSecurityType::toStrBuff[1024];
char RepoCollateralSecurityTypeStrBuffInit = (memcpy(RepoCollateralSecurityType::toStrBuff, "239=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RedemptionDate::toStrBuff[1024];
char RedemptionDateStrBuffInit = (memcpy(RedemptionDate::toStrBuff, "240=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCouponPaymentDate::toStrBuff[1024];
char UnderlyingCouponPaymentDateStrBuffInit = (memcpy(UnderlyingCouponPaymentDate::toStrBuff, "241=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingIssueDate::toStrBuff[1024];
char UnderlyingIssueDateStrBuffInit = (memcpy(UnderlyingIssueDate::toStrBuff, "242=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingRepoCollateralSecurityType::toStrBuff[1024];
char UnderlyingRepoCollateralSecurityTypeStrBuffInit = (memcpy(UnderlyingRepoCollateralSecurityType::toStrBuff, "243=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingRepurchaseTerm::toStrBuff[1024];
char UnderlyingRepurchaseTermStrBuffInit = (memcpy(UnderlyingRepurchaseTerm::toStrBuff, "244=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingRepurchaseRate::toStrBuff[1024];
char UnderlyingRepurchaseRateStrBuffInit = (memcpy(UnderlyingRepurchaseRate::toStrBuff, "245=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingFactor::toStrBuff[1024];
char UnderlyingFactorStrBuffInit = (memcpy(UnderlyingFactor::toStrBuff, "246=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingRedemptionDate::toStrBuff[1024];
char UnderlyingRedemptionDateStrBuffInit = (memcpy(UnderlyingRedemptionDate::toStrBuff, "247=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCouponPaymentDate::toStrBuff[1024];
char LegCouponPaymentDateStrBuffInit = (memcpy(LegCouponPaymentDate::toStrBuff, "248=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegIssueDate::toStrBuff[1024];
char LegIssueDateStrBuffInit = (memcpy(LegIssueDate::toStrBuff, "249=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegRepoCollateralSecurityType::toStrBuff[1024];
char LegRepoCollateralSecurityTypeStrBuffInit = (memcpy(LegRepoCollateralSecurityType::toStrBuff, "250=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegRepurchaseTerm::toStrBuff[1024];
char LegRepurchaseTermStrBuffInit = (memcpy(LegRepurchaseTerm::toStrBuff, "251=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegRepurchaseRate::toStrBuff[1024];
char LegRepurchaseRateStrBuffInit = (memcpy(LegRepurchaseRate::toStrBuff, "252=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegFactor::toStrBuff[1024];
char LegFactorStrBuffInit = (memcpy(LegFactor::toStrBuff, "253=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegRedemptionDate::toStrBuff[1024];
char LegRedemptionDateStrBuffInit = (memcpy(LegRedemptionDate::toStrBuff, "254=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CreditRating::toStrBuff[1024];
char CreditRatingStrBuffInit = (memcpy(CreditRating::toStrBuff, "255=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCreditRating::toStrBuff[1024];
char UnderlyingCreditRatingStrBuffInit = (memcpy(UnderlyingCreditRating::toStrBuff, "256=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCreditRating::toStrBuff[1024];
char LegCreditRatingStrBuffInit = (memcpy(LegCreditRating::toStrBuff, "257=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradedFlatSwitch::toStrBuff[1024];
char TradedFlatSwitchStrBuffInit = (memcpy(TradedFlatSwitch::toStrBuff, "258=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BasisFeatureDate::toStrBuff[1024];
char BasisFeatureDateStrBuffInit = (memcpy(BasisFeatureDate::toStrBuff, "259=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BasisFeaturePrice::toStrBuff[1024];
char BasisFeaturePriceStrBuffInit = (memcpy(BasisFeaturePrice::toStrBuff, "260=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDReqID::toStrBuff[1024];
char MDReqIDStrBuffInit = (memcpy(MDReqID::toStrBuff, "262=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SubscriptionRequestType::toStrBuff[1024];
char SubscriptionRequestTypeStrBuffInit = (memcpy(SubscriptionRequestType::toStrBuff, "263=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MarketDepth::toStrBuff[1024];
char MarketDepthStrBuffInit = (memcpy(MarketDepth::toStrBuff, "264=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDUpdateType::toStrBuff[1024];
char MDUpdateTypeStrBuffInit = (memcpy(MDUpdateType::toStrBuff, "265=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AggregatedBook::toStrBuff[1024];
char AggregatedBookStrBuffInit = (memcpy(AggregatedBook::toStrBuff, "266=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoMDEntryTypes::toStrBuff[1024];
char NoMDEntryTypesStrBuffInit = (memcpy(NoMDEntryTypes::toStrBuff, "267=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoMDEntries::toStrBuff[1024];
char NoMDEntriesStrBuffInit = (memcpy(NoMDEntries::toStrBuff, "268=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryType::toStrBuff[1024];
char MDEntryTypeStrBuffInit = (memcpy(MDEntryType::toStrBuff, "269=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryPx::toStrBuff[1024];
char MDEntryPxStrBuffInit = (memcpy(MDEntryPx::toStrBuff, "270=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntrySize::toStrBuff[1024];
char MDEntrySizeStrBuffInit = (memcpy(MDEntrySize::toStrBuff, "271=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryDate::toStrBuff[1024];
char MDEntryDateStrBuffInit = (memcpy(MDEntryDate::toStrBuff, "272=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryTime::toStrBuff[1024];
char MDEntryTimeStrBuffInit = (memcpy(MDEntryTime::toStrBuff, "273=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TickDirection::toStrBuff[1024];
char TickDirectionStrBuffInit = (memcpy(TickDirection::toStrBuff, "274=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDMkt::toStrBuff[1024];
char MDMktStrBuffInit = (memcpy(MDMkt::toStrBuff, "275=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteCondition::toStrBuff[1024];
char QuoteConditionStrBuffInit = (memcpy(QuoteCondition::toStrBuff, "276=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeCondition::toStrBuff[1024];
char TradeConditionStrBuffInit = (memcpy(TradeCondition::toStrBuff, "277=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryID::toStrBuff[1024];
char MDEntryIDStrBuffInit = (memcpy(MDEntryID::toStrBuff, "278=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDUpdateAction::toStrBuff[1024];
char MDUpdateActionStrBuffInit = (memcpy(MDUpdateAction::toStrBuff, "279=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryRefID::toStrBuff[1024];
char MDEntryRefIDStrBuffInit = (memcpy(MDEntryRefID::toStrBuff, "280=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDReqRejReason::toStrBuff[1024];
char MDReqRejReasonStrBuffInit = (memcpy(MDReqRejReason::toStrBuff, "281=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryOriginator::toStrBuff[1024];
char MDEntryOriginatorStrBuffInit = (memcpy(MDEntryOriginator::toStrBuff, "282=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LocationID::toStrBuff[1024];
char LocationIDStrBuffInit = (memcpy(LocationID::toStrBuff, "283=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeskID::toStrBuff[1024];
char DeskIDStrBuffInit = (memcpy(DeskID::toStrBuff, "284=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeleteReason::toStrBuff[1024];
char DeleteReasonStrBuffInit = (memcpy(DeleteReason::toStrBuff, "285=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OpenCloseSettlFlag::toStrBuff[1024];
char OpenCloseSettlFlagStrBuffInit = (memcpy(OpenCloseSettlFlag::toStrBuff, "286=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SellerDays::toStrBuff[1024];
char SellerDaysStrBuffInit = (memcpy(SellerDays::toStrBuff, "287=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryBuyer::toStrBuff[1024];
char MDEntryBuyerStrBuffInit = (memcpy(MDEntryBuyer::toStrBuff, "288=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntrySeller::toStrBuff[1024];
char MDEntrySellerStrBuffInit = (memcpy(MDEntrySeller::toStrBuff, "289=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDEntryPositionNo::toStrBuff[1024];
char MDEntryPositionNoStrBuffInit = (memcpy(MDEntryPositionNo::toStrBuff, "290=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char FinancialStatus::toStrBuff[1024];
char FinancialStatusStrBuffInit = (memcpy(FinancialStatus::toStrBuff, "291=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CorporateAction::toStrBuff[1024];
char CorporateActionStrBuffInit = (memcpy(CorporateAction::toStrBuff, "292=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DefBidSize::toStrBuff[1024];
char DefBidSizeStrBuffInit = (memcpy(DefBidSize::toStrBuff, "293=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DefOfferSize::toStrBuff[1024];
char DefOfferSizeStrBuffInit = (memcpy(DefOfferSize::toStrBuff, "294=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoQuoteEntries::toStrBuff[1024];
char NoQuoteEntriesStrBuffInit = (memcpy(NoQuoteEntries::toStrBuff, "295=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoQuoteSets::toStrBuff[1024];
char NoQuoteSetsStrBuffInit = (memcpy(NoQuoteSets::toStrBuff, "296=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteStatus::toStrBuff[1024];
char QuoteStatusStrBuffInit = (memcpy(QuoteStatus::toStrBuff, "297=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteCancelType::toStrBuff[1024];
char QuoteCancelTypeStrBuffInit = (memcpy(QuoteCancelType::toStrBuff, "298=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteEntryID::toStrBuff[1024];
char QuoteEntryIDStrBuffInit = (memcpy(QuoteEntryID::toStrBuff, "299=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteRejectReason::toStrBuff[1024];
char QuoteRejectReasonStrBuffInit = (memcpy(QuoteRejectReason::toStrBuff, "300=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteResponseLevel::toStrBuff[1024];
char QuoteResponseLevelStrBuffInit = (memcpy(QuoteResponseLevel::toStrBuff, "301=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteSetID::toStrBuff[1024];
char QuoteSetIDStrBuffInit = (memcpy(QuoteSetID::toStrBuff, "302=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteRequestType::toStrBuff[1024];
char QuoteRequestTypeStrBuffInit = (memcpy(QuoteRequestType::toStrBuff, "303=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNoQuoteEntries::toStrBuff[1024];
char TotNoQuoteEntriesStrBuffInit = (memcpy(TotNoQuoteEntries::toStrBuff, "304=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityIDSource::toStrBuff[1024];
char UnderlyingSecurityIDSourceStrBuffInit = (memcpy(UnderlyingSecurityIDSource::toStrBuff, "305=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingIssuer::toStrBuff[1024];
char UnderlyingIssuerStrBuffInit = (memcpy(UnderlyingIssuer::toStrBuff, "306=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityDesc::toStrBuff[1024];
char UnderlyingSecurityDescStrBuffInit = (memcpy(UnderlyingSecurityDesc::toStrBuff, "307=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityExchange::toStrBuff[1024];
char UnderlyingSecurityExchangeStrBuffInit = (memcpy(UnderlyingSecurityExchange::toStrBuff, "308=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityID::toStrBuff[1024];
char UnderlyingSecurityIDStrBuffInit = (memcpy(UnderlyingSecurityID::toStrBuff, "309=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityType::toStrBuff[1024];
char UnderlyingSecurityTypeStrBuffInit = (memcpy(UnderlyingSecurityType::toStrBuff, "310=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSymbol::toStrBuff[1024];
char UnderlyingSymbolStrBuffInit = (memcpy(UnderlyingSymbol::toStrBuff, "311=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSymbolSfx::toStrBuff[1024];
char UnderlyingSymbolSfxStrBuffInit = (memcpy(UnderlyingSymbolSfx::toStrBuff, "312=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingMaturityMonthYear::toStrBuff[1024];
char UnderlyingMaturityMonthYearStrBuffInit = (memcpy(UnderlyingMaturityMonthYear::toStrBuff, "313=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingMaturityDay::toStrBuff[1024];
char UnderlyingMaturityDayStrBuffInit = (memcpy(UnderlyingMaturityDay::toStrBuff, "314=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingPutOrCall::toStrBuff[1024];
char UnderlyingPutOrCallStrBuffInit = (memcpy(UnderlyingPutOrCall::toStrBuff, "315=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingStrikePrice::toStrBuff[1024];
char UnderlyingStrikePriceStrBuffInit = (memcpy(UnderlyingStrikePrice::toStrBuff, "316=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingOptAttribute::toStrBuff[1024];
char UnderlyingOptAttributeStrBuffInit = (memcpy(UnderlyingOptAttribute::toStrBuff, "317=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCurrency::toStrBuff[1024];
char UnderlyingCurrencyStrBuffInit = (memcpy(UnderlyingCurrency::toStrBuff, "318=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RatioQty::toStrBuff[1024];
char RatioQtyStrBuffInit = (memcpy(RatioQty::toStrBuff, "319=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityReqID::toStrBuff[1024];
char SecurityReqIDStrBuffInit = (memcpy(SecurityReqID::toStrBuff, "320=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityRequestType::toStrBuff[1024];
char SecurityRequestTypeStrBuffInit = (memcpy(SecurityRequestType::toStrBuff, "321=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityResponseID::toStrBuff[1024];
char SecurityResponseIDStrBuffInit = (memcpy(SecurityResponseID::toStrBuff, "322=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityResponseType::toStrBuff[1024];
char SecurityResponseTypeStrBuffInit = (memcpy(SecurityResponseType::toStrBuff, "323=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityStatusReqID::toStrBuff[1024];
char SecurityStatusReqIDStrBuffInit = (memcpy(SecurityStatusReqID::toStrBuff, "324=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnsolicitedIndicator::toStrBuff[1024];
char UnsolicitedIndicatorStrBuffInit = (memcpy(UnsolicitedIndicator::toStrBuff, "325=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityTradingStatus::toStrBuff[1024];
char SecurityTradingStatusStrBuffInit = (memcpy(SecurityTradingStatus::toStrBuff, "326=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HaltReason::toStrBuff[1024];
char HaltReasonStrBuffInit = (memcpy(HaltReason::toStrBuff, "327=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InViewOfCommon::toStrBuff[1024];
char InViewOfCommonStrBuffInit = (memcpy(InViewOfCommon::toStrBuff, "328=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DueToRelated::toStrBuff[1024];
char DueToRelatedStrBuffInit = (memcpy(DueToRelated::toStrBuff, "329=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BuyVolume::toStrBuff[1024];
char BuyVolumeStrBuffInit = (memcpy(BuyVolume::toStrBuff, "330=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SellVolume::toStrBuff[1024];
char SellVolumeStrBuffInit = (memcpy(SellVolume::toStrBuff, "331=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HighPx::toStrBuff[1024];
char HighPxStrBuffInit = (memcpy(HighPx::toStrBuff, "332=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LowPx::toStrBuff[1024];
char LowPxStrBuffInit = (memcpy(LowPx::toStrBuff, "333=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Adjustment::toStrBuff[1024];
char AdjustmentStrBuffInit = (memcpy(Adjustment::toStrBuff, "334=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesReqID::toStrBuff[1024];
char TradSesReqIDStrBuffInit = (memcpy(TradSesReqID::toStrBuff, "335=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradingSessionID::toStrBuff[1024];
char TradingSessionIDStrBuffInit = (memcpy(TradingSessionID::toStrBuff, "336=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContraTrader::toStrBuff[1024];
char ContraTraderStrBuffInit = (memcpy(ContraTrader::toStrBuff, "337=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesMethod::toStrBuff[1024];
char TradSesMethodStrBuffInit = (memcpy(TradSesMethod::toStrBuff, "338=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesMode::toStrBuff[1024];
char TradSesModeStrBuffInit = (memcpy(TradSesMode::toStrBuff, "339=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesStatus::toStrBuff[1024];
char TradSesStatusStrBuffInit = (memcpy(TradSesStatus::toStrBuff, "340=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesStartTime::toStrBuff[1024];
char TradSesStartTimeStrBuffInit = (memcpy(TradSesStartTime::toStrBuff, "341=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesOpenTime::toStrBuff[1024];
char TradSesOpenTimeStrBuffInit = (memcpy(TradSesOpenTime::toStrBuff, "342=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesPreCloseTime::toStrBuff[1024];
char TradSesPreCloseTimeStrBuffInit = (memcpy(TradSesPreCloseTime::toStrBuff, "343=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesCloseTime::toStrBuff[1024];
char TradSesCloseTimeStrBuffInit = (memcpy(TradSesCloseTime::toStrBuff, "344=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesEndTime::toStrBuff[1024];
char TradSesEndTimeStrBuffInit = (memcpy(TradSesEndTime::toStrBuff, "345=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NumberOfOrders::toStrBuff[1024];
char NumberOfOrdersStrBuffInit = (memcpy(NumberOfOrders::toStrBuff, "346=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MessageEncoding::toStrBuff[1024];
char MessageEncodingStrBuffInit = (memcpy(MessageEncoding::toStrBuff, "347=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedIssuerLen::toStrBuff[1024];
char EncodedIssuerLenStrBuffInit = (memcpy(EncodedIssuerLen::toStrBuff, "348=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedIssuer::toStrBuff[1024];
char EncodedIssuerStrBuffInit = (memcpy(EncodedIssuer::toStrBuff, "349=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedSecurityDescLen::toStrBuff[1024];
char EncodedSecurityDescLenStrBuffInit = (memcpy(EncodedSecurityDescLen::toStrBuff, "350=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedSecurityDesc::toStrBuff[1024];
char EncodedSecurityDescStrBuffInit = (memcpy(EncodedSecurityDesc::toStrBuff, "351=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedListExecInstLen::toStrBuff[1024];
char EncodedListExecInstLenStrBuffInit = (memcpy(EncodedListExecInstLen::toStrBuff, "352=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedListExecInst::toStrBuff[1024];
char EncodedListExecInstStrBuffInit = (memcpy(EncodedListExecInst::toStrBuff, "353=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedTextLen::toStrBuff[1024];
char EncodedTextLenStrBuffInit = (memcpy(EncodedTextLen::toStrBuff, "354=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedText::toStrBuff[1024];
char EncodedTextStrBuffInit = (memcpy(EncodedText::toStrBuff, "355=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedSubjectLen::toStrBuff[1024];
char EncodedSubjectLenStrBuffInit = (memcpy(EncodedSubjectLen::toStrBuff, "356=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedSubject::toStrBuff[1024];
char EncodedSubjectStrBuffInit = (memcpy(EncodedSubject::toStrBuff, "357=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedHeadlineLen::toStrBuff[1024];
char EncodedHeadlineLenStrBuffInit = (memcpy(EncodedHeadlineLen::toStrBuff, "358=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedHeadline::toStrBuff[1024];
char EncodedHeadlineStrBuffInit = (memcpy(EncodedHeadline::toStrBuff, "359=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedAllocTextLen::toStrBuff[1024];
char EncodedAllocTextLenStrBuffInit = (memcpy(EncodedAllocTextLen::toStrBuff, "360=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedAllocText::toStrBuff[1024];
char EncodedAllocTextStrBuffInit = (memcpy(EncodedAllocText::toStrBuff, "361=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedUnderlyingIssuerLen::toStrBuff[1024];
char EncodedUnderlyingIssuerLenStrBuffInit = (memcpy(EncodedUnderlyingIssuerLen::toStrBuff, "362=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedUnderlyingIssuer::toStrBuff[1024];
char EncodedUnderlyingIssuerStrBuffInit = (memcpy(EncodedUnderlyingIssuer::toStrBuff, "363=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedUnderlyingSecurityDescLen::toStrBuff[1024];
char EncodedUnderlyingSecurityDescLenStrBuffInit = (memcpy(EncodedUnderlyingSecurityDescLen::toStrBuff, "364=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedUnderlyingSecurityDesc::toStrBuff[1024];
char EncodedUnderlyingSecurityDescStrBuffInit = (memcpy(EncodedUnderlyingSecurityDesc::toStrBuff, "365=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocPrice::toStrBuff[1024];
char AllocPriceStrBuffInit = (memcpy(AllocPrice::toStrBuff, "366=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteSetValidUntilTime::toStrBuff[1024];
char QuoteSetValidUntilTimeStrBuffInit = (memcpy(QuoteSetValidUntilTime::toStrBuff, "367=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteEntryRejectReason::toStrBuff[1024];
char QuoteEntryRejectReasonStrBuffInit = (memcpy(QuoteEntryRejectReason::toStrBuff, "368=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastMsgSeqNumProcessed::toStrBuff[1024];
char LastMsgSeqNumProcessedStrBuffInit = (memcpy(LastMsgSeqNumProcessed::toStrBuff, "369=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OnBehalfOfSendingTime::toStrBuff[1024];
char OnBehalfOfSendingTimeStrBuffInit = (memcpy(OnBehalfOfSendingTime::toStrBuff, "370=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RefTagID::toStrBuff[1024];
char RefTagIDStrBuffInit = (memcpy(RefTagID::toStrBuff, "371=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RefMsgType::toStrBuff[1024];
char RefMsgTypeStrBuffInit = (memcpy(RefMsgType::toStrBuff, "372=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SessionRejectReason::toStrBuff[1024];
char SessionRejectReasonStrBuffInit = (memcpy(SessionRejectReason::toStrBuff, "373=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidRequestTransType::toStrBuff[1024];
char BidRequestTransTypeStrBuffInit = (memcpy(BidRequestTransType::toStrBuff, "374=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContraBroker::toStrBuff[1024];
char ContraBrokerStrBuffInit = (memcpy(ContraBroker::toStrBuff, "375=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ComplianceID::toStrBuff[1024];
char ComplianceIDStrBuffInit = (memcpy(ComplianceID::toStrBuff, "376=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SolicitedFlag::toStrBuff[1024];
char SolicitedFlagStrBuffInit = (memcpy(SolicitedFlag::toStrBuff, "377=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecRestatementReason::toStrBuff[1024];
char ExecRestatementReasonStrBuffInit = (memcpy(ExecRestatementReason::toStrBuff, "378=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BusinessRejectRefID::toStrBuff[1024];
char BusinessRejectRefIDStrBuffInit = (memcpy(BusinessRejectRefID::toStrBuff, "379=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BusinessRejectReason::toStrBuff[1024];
char BusinessRejectReasonStrBuffInit = (memcpy(BusinessRejectReason::toStrBuff, "380=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char GrossTradeAmt::toStrBuff[1024];
char GrossTradeAmtStrBuffInit = (memcpy(GrossTradeAmt::toStrBuff, "381=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoContraBrokers::toStrBuff[1024];
char NoContraBrokersStrBuffInit = (memcpy(NoContraBrokers::toStrBuff, "382=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaxMessageSize::toStrBuff[1024];
char MaxMessageSizeStrBuffInit = (memcpy(MaxMessageSize::toStrBuff, "383=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoMsgTypes::toStrBuff[1024];
char NoMsgTypesStrBuffInit = (memcpy(NoMsgTypes::toStrBuff, "384=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MsgDirection::toStrBuff[1024];
char MsgDirectionStrBuffInit = (memcpy(MsgDirection::toStrBuff, "385=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoTradingSessions::toStrBuff[1024];
char NoTradingSessionsStrBuffInit = (memcpy(NoTradingSessions::toStrBuff, "386=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalVolumeTraded::toStrBuff[1024];
char TotalVolumeTradedStrBuffInit = (memcpy(TotalVolumeTraded::toStrBuff, "387=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionInst::toStrBuff[1024];
char DiscretionInstStrBuffInit = (memcpy(DiscretionInst::toStrBuff, "388=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionOffsetValue::toStrBuff[1024];
char DiscretionOffsetValueStrBuffInit = (memcpy(DiscretionOffsetValue::toStrBuff, "389=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidID::toStrBuff[1024];
char BidIDStrBuffInit = (memcpy(BidID::toStrBuff, "390=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClientBidID::toStrBuff[1024];
char ClientBidIDStrBuffInit = (memcpy(ClientBidID::toStrBuff, "391=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListName::toStrBuff[1024];
char ListNameStrBuffInit = (memcpy(ListName::toStrBuff, "392=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNoRelatedSym::toStrBuff[1024];
char TotNoRelatedSymStrBuffInit = (memcpy(TotNoRelatedSym::toStrBuff, "393=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidType::toStrBuff[1024];
char BidTypeStrBuffInit = (memcpy(BidType::toStrBuff, "394=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NumTickets::toStrBuff[1024];
char NumTicketsStrBuffInit = (memcpy(NumTickets::toStrBuff, "395=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SideValue1::toStrBuff[1024];
char SideValue1StrBuffInit = (memcpy(SideValue1::toStrBuff, "396=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SideValue2::toStrBuff[1024];
char SideValue2StrBuffInit = (memcpy(SideValue2::toStrBuff, "397=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoBidDescriptors::toStrBuff[1024];
char NoBidDescriptorsStrBuffInit = (memcpy(NoBidDescriptors::toStrBuff, "398=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidDescriptorType::toStrBuff[1024];
char BidDescriptorTypeStrBuffInit = (memcpy(BidDescriptorType::toStrBuff, "399=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidDescriptor::toStrBuff[1024];
char BidDescriptorStrBuffInit = (memcpy(BidDescriptor::toStrBuff, "400=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SideValueInd::toStrBuff[1024];
char SideValueIndStrBuffInit = (memcpy(SideValueInd::toStrBuff, "401=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LiquidityPctLow::toStrBuff[1024];
char LiquidityPctLowStrBuffInit = (memcpy(LiquidityPctLow::toStrBuff, "402=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LiquidityPctHigh::toStrBuff[1024];
char LiquidityPctHighStrBuffInit = (memcpy(LiquidityPctHigh::toStrBuff, "403=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LiquidityValue::toStrBuff[1024];
char LiquidityValueStrBuffInit = (memcpy(LiquidityValue::toStrBuff, "404=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EFPTrackingError::toStrBuff[1024];
char EFPTrackingErrorStrBuffInit = (memcpy(EFPTrackingError::toStrBuff, "405=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char FairValue::toStrBuff[1024];
char FairValueStrBuffInit = (memcpy(FairValue::toStrBuff, "406=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OutsideIndexPct::toStrBuff[1024];
char OutsideIndexPctStrBuffInit = (memcpy(OutsideIndexPct::toStrBuff, "407=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ValueOfFutures::toStrBuff[1024];
char ValueOfFuturesStrBuffInit = (memcpy(ValueOfFutures::toStrBuff, "408=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LiquidityIndType::toStrBuff[1024];
char LiquidityIndTypeStrBuffInit = (memcpy(LiquidityIndType::toStrBuff, "409=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char WtAverageLiquidity::toStrBuff[1024];
char WtAverageLiquidityStrBuffInit = (memcpy(WtAverageLiquidity::toStrBuff, "410=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExchangeForPhysical::toStrBuff[1024];
char ExchangeForPhysicalStrBuffInit = (memcpy(ExchangeForPhysical::toStrBuff, "411=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OutMainCntryUIndex::toStrBuff[1024];
char OutMainCntryUIndexStrBuffInit = (memcpy(OutMainCntryUIndex::toStrBuff, "412=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CrossPercent::toStrBuff[1024];
char CrossPercentStrBuffInit = (memcpy(CrossPercent::toStrBuff, "413=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ProgRptReqs::toStrBuff[1024];
char ProgRptReqsStrBuffInit = (memcpy(ProgRptReqs::toStrBuff, "414=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ProgPeriodInterval::toStrBuff[1024];
char ProgPeriodIntervalStrBuffInit = (memcpy(ProgPeriodInterval::toStrBuff, "415=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IncTaxInd::toStrBuff[1024];
char IncTaxIndStrBuffInit = (memcpy(IncTaxInd::toStrBuff, "416=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NumBidders::toStrBuff[1024];
char NumBiddersStrBuffInit = (memcpy(NumBidders::toStrBuff, "417=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidTradeType::toStrBuff[1024];
char BidTradeTypeStrBuffInit = (memcpy(BidTradeType::toStrBuff, "418=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BasisPxType::toStrBuff[1024];
char BasisPxTypeStrBuffInit = (memcpy(BasisPxType::toStrBuff, "419=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoBidComponents::toStrBuff[1024];
char NoBidComponentsStrBuffInit = (memcpy(NoBidComponents::toStrBuff, "420=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Country::toStrBuff[1024];
char CountryStrBuffInit = (memcpy(Country::toStrBuff, "421=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNoStrikes::toStrBuff[1024];
char TotNoStrikesStrBuffInit = (memcpy(TotNoStrikes::toStrBuff, "422=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PriceType::toStrBuff[1024];
char PriceTypeStrBuffInit = (memcpy(PriceType::toStrBuff, "423=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DayOrderQty::toStrBuff[1024];
char DayOrderQtyStrBuffInit = (memcpy(DayOrderQty::toStrBuff, "424=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DayCumQty::toStrBuff[1024];
char DayCumQtyStrBuffInit = (memcpy(DayCumQty::toStrBuff, "425=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DayAvgPx::toStrBuff[1024];
char DayAvgPxStrBuffInit = (memcpy(DayAvgPx::toStrBuff, "426=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char GTBookingInst::toStrBuff[1024];
char GTBookingInstStrBuffInit = (memcpy(GTBookingInst::toStrBuff, "427=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoStrikes::toStrBuff[1024];
char NoStrikesStrBuffInit = (memcpy(NoStrikes::toStrBuff, "428=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListStatusType::toStrBuff[1024];
char ListStatusTypeStrBuffInit = (memcpy(ListStatusType::toStrBuff, "429=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetGrossInd::toStrBuff[1024];
char NetGrossIndStrBuffInit = (memcpy(NetGrossInd::toStrBuff, "430=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListOrderStatus::toStrBuff[1024];
char ListOrderStatusStrBuffInit = (memcpy(ListOrderStatus::toStrBuff, "431=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExpireDate::toStrBuff[1024];
char ExpireDateStrBuffInit = (memcpy(ExpireDate::toStrBuff, "432=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListExecInstType::toStrBuff[1024];
char ListExecInstTypeStrBuffInit = (memcpy(ListExecInstType::toStrBuff, "433=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CxlRejResponseTo::toStrBuff[1024];
char CxlRejResponseToStrBuffInit = (memcpy(CxlRejResponseTo::toStrBuff, "434=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCouponRate::toStrBuff[1024];
char UnderlyingCouponRateStrBuffInit = (memcpy(UnderlyingCouponRate::toStrBuff, "435=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingContractMultiplier::toStrBuff[1024];
char UnderlyingContractMultiplierStrBuffInit = (memcpy(UnderlyingContractMultiplier::toStrBuff, "436=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContraTradeQty::toStrBuff[1024];
char ContraTradeQtyStrBuffInit = (memcpy(ContraTradeQty::toStrBuff, "437=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContraTradeTime::toStrBuff[1024];
char ContraTradeTimeStrBuffInit = (memcpy(ContraTradeTime::toStrBuff, "438=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClearingFirm::toStrBuff[1024];
char ClearingFirmStrBuffInit = (memcpy(ClearingFirm::toStrBuff, "439=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClearingAccount::toStrBuff[1024];
char ClearingAccountStrBuffInit = (memcpy(ClearingAccount::toStrBuff, "440=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LiquidityNumSecurities::toStrBuff[1024];
char LiquidityNumSecuritiesStrBuffInit = (memcpy(LiquidityNumSecurities::toStrBuff, "441=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MultiLegReportingType::toStrBuff[1024];
char MultiLegReportingTypeStrBuffInit = (memcpy(MultiLegReportingType::toStrBuff, "442=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StrikeTime::toStrBuff[1024];
char StrikeTimeStrBuffInit = (memcpy(StrikeTime::toStrBuff, "443=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ListStatusText::toStrBuff[1024];
char ListStatusTextStrBuffInit = (memcpy(ListStatusText::toStrBuff, "444=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedListStatusTextLen::toStrBuff[1024];
char EncodedListStatusTextLenStrBuffInit = (memcpy(EncodedListStatusTextLen::toStrBuff, "445=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedListStatusText::toStrBuff[1024];
char EncodedListStatusTextStrBuffInit = (memcpy(EncodedListStatusText::toStrBuff, "446=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PartyIDSource::toStrBuff[1024];
char PartyIDSourceStrBuffInit = (memcpy(PartyIDSource::toStrBuff, "447=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PartyID::toStrBuff[1024];
char PartyIDStrBuffInit = (memcpy(PartyID::toStrBuff, "448=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalVolumeTradedDate::toStrBuff[1024];
char TotalVolumeTradedDateStrBuffInit = (memcpy(TotalVolumeTradedDate::toStrBuff, "449=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalVolumeTrade::toStrBuff[1024];
char TotalVolumeTradeStrBuffInit = (memcpy(TotalVolumeTrade::toStrBuff, "450=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetChgPrevDay::toStrBuff[1024];
char NetChgPrevDayStrBuffInit = (memcpy(NetChgPrevDay::toStrBuff, "451=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PartyRole::toStrBuff[1024];
char PartyRoleStrBuffInit = (memcpy(PartyRole::toStrBuff, "452=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoPartyIDs::toStrBuff[1024];
char NoPartyIDsStrBuffInit = (memcpy(NoPartyIDs::toStrBuff, "453=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoSecurityAltID::toStrBuff[1024];
char NoSecurityAltIDStrBuffInit = (memcpy(NoSecurityAltID::toStrBuff, "454=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityAltID::toStrBuff[1024];
char SecurityAltIDStrBuffInit = (memcpy(SecurityAltID::toStrBuff, "455=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityAltIDSource::toStrBuff[1024];
char SecurityAltIDSourceStrBuffInit = (memcpy(SecurityAltIDSource::toStrBuff, "456=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoUnderlyingSecurityAltID::toStrBuff[1024];
char NoUnderlyingSecurityAltIDStrBuffInit = (memcpy(NoUnderlyingSecurityAltID::toStrBuff, "457=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityAltID::toStrBuff[1024];
char UnderlyingSecurityAltIDStrBuffInit = (memcpy(UnderlyingSecurityAltID::toStrBuff, "458=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecurityAltIDSource::toStrBuff[1024];
char UnderlyingSecurityAltIDSourceStrBuffInit = (memcpy(UnderlyingSecurityAltIDSource::toStrBuff, "459=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Product::toStrBuff[1024];
char ProductStrBuffInit = (memcpy(Product::toStrBuff, "460=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CFICode::toStrBuff[1024];
char CFICodeStrBuffInit = (memcpy(CFICode::toStrBuff, "461=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingProduct::toStrBuff[1024];
char UnderlyingProductStrBuffInit = (memcpy(UnderlyingProduct::toStrBuff, "462=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCFICode::toStrBuff[1024];
char UnderlyingCFICodeStrBuffInit = (memcpy(UnderlyingCFICode::toStrBuff, "463=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TestMessageIndicator::toStrBuff[1024];
char TestMessageIndicatorStrBuffInit = (memcpy(TestMessageIndicator::toStrBuff, "464=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuantityType::toStrBuff[1024];
char QuantityTypeStrBuffInit = (memcpy(QuantityType::toStrBuff, "465=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BookingRefID::toStrBuff[1024];
char BookingRefIDStrBuffInit = (memcpy(BookingRefID::toStrBuff, "466=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IndividualAllocID::toStrBuff[1024];
char IndividualAllocIDStrBuffInit = (memcpy(IndividualAllocID::toStrBuff, "467=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RoundingDirection::toStrBuff[1024];
char RoundingDirectionStrBuffInit = (memcpy(RoundingDirection::toStrBuff, "468=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RoundingModulus::toStrBuff[1024];
char RoundingModulusStrBuffInit = (memcpy(RoundingModulus::toStrBuff, "469=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CountryOfIssue::toStrBuff[1024];
char CountryOfIssueStrBuffInit = (memcpy(CountryOfIssue::toStrBuff, "470=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StateOrProvinceOfIssue::toStrBuff[1024];
char StateOrProvinceOfIssueStrBuffInit = (memcpy(StateOrProvinceOfIssue::toStrBuff, "471=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LocaleOfIssue::toStrBuff[1024];
char LocaleOfIssueStrBuffInit = (memcpy(LocaleOfIssue::toStrBuff, "472=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoRegistDtls::toStrBuff[1024];
char NoRegistDtlsStrBuffInit = (memcpy(NoRegistDtls::toStrBuff, "473=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MailingDtls::toStrBuff[1024];
char MailingDtlsStrBuffInit = (memcpy(MailingDtls::toStrBuff, "474=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InvestorCountryOfResidence::toStrBuff[1024];
char InvestorCountryOfResidenceStrBuffInit = (memcpy(InvestorCountryOfResidence::toStrBuff, "475=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PaymentRef::toStrBuff[1024];
char PaymentRefStrBuffInit = (memcpy(PaymentRef::toStrBuff, "476=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DistribPaymentMethod::toStrBuff[1024];
char DistribPaymentMethodStrBuffInit = (memcpy(DistribPaymentMethod::toStrBuff, "477=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashDistribCurr::toStrBuff[1024];
char CashDistribCurrStrBuffInit = (memcpy(CashDistribCurr::toStrBuff, "478=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CommCurrency::toStrBuff[1024];
char CommCurrencyStrBuffInit = (memcpy(CommCurrency::toStrBuff, "479=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CancellationRights::toStrBuff[1024];
char CancellationRightsStrBuffInit = (memcpy(CancellationRights::toStrBuff, "480=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MoneyLaunderingStatus::toStrBuff[1024];
char MoneyLaunderingStatusStrBuffInit = (memcpy(MoneyLaunderingStatus::toStrBuff, "481=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MailingInst::toStrBuff[1024];
char MailingInstStrBuffInit = (memcpy(MailingInst::toStrBuff, "482=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TransBkdTime::toStrBuff[1024];
char TransBkdTimeStrBuffInit = (memcpy(TransBkdTime::toStrBuff, "483=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecPriceType::toStrBuff[1024];
char ExecPriceTypeStrBuffInit = (memcpy(ExecPriceType::toStrBuff, "484=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecPriceAdjustment::toStrBuff[1024];
char ExecPriceAdjustmentStrBuffInit = (memcpy(ExecPriceAdjustment::toStrBuff, "485=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DateOfBirth::toStrBuff[1024];
char DateOfBirthStrBuffInit = (memcpy(DateOfBirth::toStrBuff, "486=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeReportTransType::toStrBuff[1024];
char TradeReportTransTypeStrBuffInit = (memcpy(TradeReportTransType::toStrBuff, "487=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CardHolderName::toStrBuff[1024];
char CardHolderNameStrBuffInit = (memcpy(CardHolderName::toStrBuff, "488=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CardNumber::toStrBuff[1024];
char CardNumberStrBuffInit = (memcpy(CardNumber::toStrBuff, "489=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CardExpDate::toStrBuff[1024];
char CardExpDateStrBuffInit = (memcpy(CardExpDate::toStrBuff, "490=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CardIssNum::toStrBuff[1024];
char CardIssNumStrBuffInit = (memcpy(CardIssNum::toStrBuff, "491=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PaymentMethod::toStrBuff[1024];
char PaymentMethodStrBuffInit = (memcpy(PaymentMethod::toStrBuff, "492=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistAcctType::toStrBuff[1024];
char RegistAcctTypeStrBuffInit = (memcpy(RegistAcctType::toStrBuff, "493=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Designation::toStrBuff[1024];
char DesignationStrBuffInit = (memcpy(Designation::toStrBuff, "494=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TaxAdvantageType::toStrBuff[1024];
char TaxAdvantageTypeStrBuffInit = (memcpy(TaxAdvantageType::toStrBuff, "495=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistRejReasonText::toStrBuff[1024];
char RegistRejReasonTextStrBuffInit = (memcpy(RegistRejReasonText::toStrBuff, "496=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char FundRenewWaiv::toStrBuff[1024];
char FundRenewWaivStrBuffInit = (memcpy(FundRenewWaiv::toStrBuff, "497=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashDistribAgentName::toStrBuff[1024];
char CashDistribAgentNameStrBuffInit = (memcpy(CashDistribAgentName::toStrBuff, "498=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashDistribAgentCode::toStrBuff[1024];
char CashDistribAgentCodeStrBuffInit = (memcpy(CashDistribAgentCode::toStrBuff, "499=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashDistribAgentAcctNumber::toStrBuff[1024];
char CashDistribAgentAcctNumberStrBuffInit = (memcpy(CashDistribAgentAcctNumber::toStrBuff, "500=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashDistribPayRef::toStrBuff[1024];
char CashDistribPayRefStrBuffInit = (memcpy(CashDistribPayRef::toStrBuff, "501=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashDistribAgentAcctName::toStrBuff[1024];
char CashDistribAgentAcctNameStrBuffInit = (memcpy(CashDistribAgentAcctName::toStrBuff, "502=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CardStartDate::toStrBuff[1024];
char CardStartDateStrBuffInit = (memcpy(CardStartDate::toStrBuff, "503=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PaymentDate::toStrBuff[1024];
char PaymentDateStrBuffInit = (memcpy(PaymentDate::toStrBuff, "504=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PaymentRemitterID::toStrBuff[1024];
char PaymentRemitterIDStrBuffInit = (memcpy(PaymentRemitterID::toStrBuff, "505=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistStatus::toStrBuff[1024];
char RegistStatusStrBuffInit = (memcpy(RegistStatus::toStrBuff, "506=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistRejReasonCode::toStrBuff[1024];
char RegistRejReasonCodeStrBuffInit = (memcpy(RegistRejReasonCode::toStrBuff, "507=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistRefID::toStrBuff[1024];
char RegistRefIDStrBuffInit = (memcpy(RegistRefID::toStrBuff, "508=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistDtls::toStrBuff[1024];
char RegistDtlsStrBuffInit = (memcpy(RegistDtls::toStrBuff, "509=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoDistribInsts::toStrBuff[1024];
char NoDistribInstsStrBuffInit = (memcpy(NoDistribInsts::toStrBuff, "510=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistEmail::toStrBuff[1024];
char RegistEmailStrBuffInit = (memcpy(RegistEmail::toStrBuff, "511=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DistribPercentage::toStrBuff[1024];
char DistribPercentageStrBuffInit = (memcpy(DistribPercentage::toStrBuff, "512=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistID::toStrBuff[1024];
char RegistIDStrBuffInit = (memcpy(RegistID::toStrBuff, "513=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RegistTransType::toStrBuff[1024];
char RegistTransTypeStrBuffInit = (memcpy(RegistTransType::toStrBuff, "514=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExecValuationPoint::toStrBuff[1024];
char ExecValuationPointStrBuffInit = (memcpy(ExecValuationPoint::toStrBuff, "515=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderPercent::toStrBuff[1024];
char OrderPercentStrBuffInit = (memcpy(OrderPercent::toStrBuff, "516=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OwnershipType::toStrBuff[1024];
char OwnershipTypeStrBuffInit = (memcpy(OwnershipType::toStrBuff, "517=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoContAmts::toStrBuff[1024];
char NoContAmtsStrBuffInit = (memcpy(NoContAmts::toStrBuff, "518=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContAmtType::toStrBuff[1024];
char ContAmtTypeStrBuffInit = (memcpy(ContAmtType::toStrBuff, "519=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContAmtValue::toStrBuff[1024];
char ContAmtValueStrBuffInit = (memcpy(ContAmtValue::toStrBuff, "520=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContAmtCurr::toStrBuff[1024];
char ContAmtCurrStrBuffInit = (memcpy(ContAmtCurr::toStrBuff, "521=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OwnerType::toStrBuff[1024];
char OwnerTypeStrBuffInit = (memcpy(OwnerType::toStrBuff, "522=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PartySubID::toStrBuff[1024];
char PartySubIDStrBuffInit = (memcpy(PartySubID::toStrBuff, "523=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NestedPartyID::toStrBuff[1024];
char NestedPartyIDStrBuffInit = (memcpy(NestedPartyID::toStrBuff, "524=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NestedPartyIDSource::toStrBuff[1024];
char NestedPartyIDSourceStrBuffInit = (memcpy(NestedPartyIDSource::toStrBuff, "525=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryClOrdID::toStrBuff[1024];
char SecondaryClOrdIDStrBuffInit = (memcpy(SecondaryClOrdID::toStrBuff, "526=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryExecID::toStrBuff[1024];
char SecondaryExecIDStrBuffInit = (memcpy(SecondaryExecID::toStrBuff, "527=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderCapacity::toStrBuff[1024];
char OrderCapacityStrBuffInit = (memcpy(OrderCapacity::toStrBuff, "528=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderRestrictions::toStrBuff[1024];
char OrderRestrictionsStrBuffInit = (memcpy(OrderRestrictions::toStrBuff, "529=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MassCancelRequestType::toStrBuff[1024];
char MassCancelRequestTypeStrBuffInit = (memcpy(MassCancelRequestType::toStrBuff, "530=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MassCancelResponse::toStrBuff[1024];
char MassCancelResponseStrBuffInit = (memcpy(MassCancelResponse::toStrBuff, "531=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MassCancelRejectReason::toStrBuff[1024];
char MassCancelRejectReasonStrBuffInit = (memcpy(MassCancelRejectReason::toStrBuff, "532=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalAffectedOrders::toStrBuff[1024];
char TotalAffectedOrdersStrBuffInit = (memcpy(TotalAffectedOrders::toStrBuff, "533=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoAffectedOrders::toStrBuff[1024];
char NoAffectedOrdersStrBuffInit = (memcpy(NoAffectedOrders::toStrBuff, "534=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AffectedOrderID::toStrBuff[1024];
char AffectedOrderIDStrBuffInit = (memcpy(AffectedOrderID::toStrBuff, "535=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AffectedSecondaryOrderID::toStrBuff[1024];
char AffectedSecondaryOrderIDStrBuffInit = (memcpy(AffectedSecondaryOrderID::toStrBuff, "536=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteType::toStrBuff[1024];
char QuoteTypeStrBuffInit = (memcpy(QuoteType::toStrBuff, "537=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NestedPartyRole::toStrBuff[1024];
char NestedPartyRoleStrBuffInit = (memcpy(NestedPartyRole::toStrBuff, "538=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoNestedPartyIDs::toStrBuff[1024];
char NoNestedPartyIDsStrBuffInit = (memcpy(NoNestedPartyIDs::toStrBuff, "539=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalAccruedInterestAmt::toStrBuff[1024];
char TotalAccruedInterestAmtStrBuffInit = (memcpy(TotalAccruedInterestAmt::toStrBuff, "540=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaturityDate::toStrBuff[1024];
char MaturityDateStrBuffInit = (memcpy(MaturityDate::toStrBuff, "541=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingMaturityDate::toStrBuff[1024];
char UnderlyingMaturityDateStrBuffInit = (memcpy(UnderlyingMaturityDate::toStrBuff, "542=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InstrRegistry::toStrBuff[1024];
char InstrRegistryStrBuffInit = (memcpy(InstrRegistry::toStrBuff, "543=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashMargin::toStrBuff[1024];
char CashMarginStrBuffInit = (memcpy(CashMargin::toStrBuff, "544=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NestedPartySubID::toStrBuff[1024];
char NestedPartySubIDStrBuffInit = (memcpy(NestedPartySubID::toStrBuff, "545=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Scope::toStrBuff[1024];
char ScopeStrBuffInit = (memcpy(Scope::toStrBuff, "546=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MDImplicitDelete::toStrBuff[1024];
char MDImplicitDeleteStrBuffInit = (memcpy(MDImplicitDelete::toStrBuff, "547=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CrossID::toStrBuff[1024];
char CrossIDStrBuffInit = (memcpy(CrossID::toStrBuff, "548=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CrossType::toStrBuff[1024];
char CrossTypeStrBuffInit = (memcpy(CrossType::toStrBuff, "549=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CrossPrioritization::toStrBuff[1024];
char CrossPrioritizationStrBuffInit = (memcpy(CrossPrioritization::toStrBuff, "550=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrigCrossID::toStrBuff[1024];
char OrigCrossIDStrBuffInit = (memcpy(OrigCrossID::toStrBuff, "551=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoSides::toStrBuff[1024];
char NoSidesStrBuffInit = (memcpy(NoSides::toStrBuff, "552=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Username::toStrBuff[1024];
char UsernameStrBuffInit = (memcpy(Username::toStrBuff, "553=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Password::toStrBuff[1024];
char PasswordStrBuffInit = (memcpy(Password::toStrBuff, "554=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoLegs::toStrBuff[1024];
char NoLegsStrBuffInit = (memcpy(NoLegs::toStrBuff, "555=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCurrency::toStrBuff[1024];
char LegCurrencyStrBuffInit = (memcpy(LegCurrency::toStrBuff, "556=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNoSecurityTypes::toStrBuff[1024];
char TotNoSecurityTypesStrBuffInit = (memcpy(TotNoSecurityTypes::toStrBuff, "557=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoSecurityTypes::toStrBuff[1024];
char NoSecurityTypesStrBuffInit = (memcpy(NoSecurityTypes::toStrBuff, "558=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityListRequestType::toStrBuff[1024];
char SecurityListRequestTypeStrBuffInit = (memcpy(SecurityListRequestType::toStrBuff, "559=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecurityRequestResult::toStrBuff[1024];
char SecurityRequestResultStrBuffInit = (memcpy(SecurityRequestResult::toStrBuff, "560=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RoundLot::toStrBuff[1024];
char RoundLotStrBuffInit = (memcpy(RoundLot::toStrBuff, "561=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MinTradeVol::toStrBuff[1024];
char MinTradeVolStrBuffInit = (memcpy(MinTradeVol::toStrBuff, "562=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MultiLegRptTypeReq::toStrBuff[1024];
char MultiLegRptTypeReqStrBuffInit = (memcpy(MultiLegRptTypeReq::toStrBuff, "563=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegPositionEffect::toStrBuff[1024];
char LegPositionEffectStrBuffInit = (memcpy(LegPositionEffect::toStrBuff, "564=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCoveredOrUncovered::toStrBuff[1024];
char LegCoveredOrUncoveredStrBuffInit = (memcpy(LegCoveredOrUncovered::toStrBuff, "565=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegPrice::toStrBuff[1024];
char LegPriceStrBuffInit = (memcpy(LegPrice::toStrBuff, "566=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradSesStatusRejReason::toStrBuff[1024];
char TradSesStatusRejReasonStrBuffInit = (memcpy(TradSesStatusRejReason::toStrBuff, "567=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeRequestID::toStrBuff[1024];
char TradeRequestIDStrBuffInit = (memcpy(TradeRequestID::toStrBuff, "568=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeRequestType::toStrBuff[1024];
char TradeRequestTypeStrBuffInit = (memcpy(TradeRequestType::toStrBuff, "569=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PreviouslyReported::toStrBuff[1024];
char PreviouslyReportedStrBuffInit = (memcpy(PreviouslyReported::toStrBuff, "570=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeReportID::toStrBuff[1024];
char TradeReportIDStrBuffInit = (memcpy(TradeReportID::toStrBuff, "571=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeReportRefID::toStrBuff[1024];
char TradeReportRefIDStrBuffInit = (memcpy(TradeReportRefID::toStrBuff, "572=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MatchStatus::toStrBuff[1024];
char MatchStatusStrBuffInit = (memcpy(MatchStatus::toStrBuff, "573=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MatchType::toStrBuff[1024];
char MatchTypeStrBuffInit = (memcpy(MatchType::toStrBuff, "574=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OddLot::toStrBuff[1024];
char OddLotStrBuffInit = (memcpy(OddLot::toStrBuff, "575=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoClearingInstructions::toStrBuff[1024];
char NoClearingInstructionsStrBuffInit = (memcpy(NoClearingInstructions::toStrBuff, "576=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClearingInstruction::toStrBuff[1024];
char ClearingInstructionStrBuffInit = (memcpy(ClearingInstruction::toStrBuff, "577=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeInputSource::toStrBuff[1024];
char TradeInputSourceStrBuffInit = (memcpy(TradeInputSource::toStrBuff, "578=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeInputDevice::toStrBuff[1024];
char TradeInputDeviceStrBuffInit = (memcpy(TradeInputDevice::toStrBuff, "579=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoDates::toStrBuff[1024];
char NoDatesStrBuffInit = (memcpy(NoDates::toStrBuff, "580=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AccountType::toStrBuff[1024];
char AccountTypeStrBuffInit = (memcpy(AccountType::toStrBuff, "581=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CustOrderCapacity::toStrBuff[1024];
char CustOrderCapacityStrBuffInit = (memcpy(CustOrderCapacity::toStrBuff, "582=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClOrdLinkID::toStrBuff[1024];
char ClOrdLinkIDStrBuffInit = (memcpy(ClOrdLinkID::toStrBuff, "583=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MassStatusReqID::toStrBuff[1024];
char MassStatusReqIDStrBuffInit = (memcpy(MassStatusReqID::toStrBuff, "584=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MassStatusReqType::toStrBuff[1024];
char MassStatusReqTypeStrBuffInit = (memcpy(MassStatusReqType::toStrBuff, "585=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrigOrdModTime::toStrBuff[1024];
char OrigOrdModTimeStrBuffInit = (memcpy(OrigOrdModTime::toStrBuff, "586=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSettlType::toStrBuff[1024];
char LegSettlTypeStrBuffInit = (memcpy(LegSettlType::toStrBuff, "587=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSettlDate::toStrBuff[1024];
char LegSettlDateStrBuffInit = (memcpy(LegSettlDate::toStrBuff, "588=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DayBookingInst::toStrBuff[1024];
char DayBookingInstStrBuffInit = (memcpy(DayBookingInst::toStrBuff, "589=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BookingUnit::toStrBuff[1024];
char BookingUnitStrBuffInit = (memcpy(BookingUnit::toStrBuff, "590=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PreallocMethod::toStrBuff[1024];
char PreallocMethodStrBuffInit = (memcpy(PreallocMethod::toStrBuff, "591=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCountryOfIssue::toStrBuff[1024];
char UnderlyingCountryOfIssueStrBuffInit = (memcpy(UnderlyingCountryOfIssue::toStrBuff, "592=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingStateOrProvinceOfIssue::toStrBuff[1024];
char UnderlyingStateOrProvinceOfIssueStrBuffInit = (memcpy(UnderlyingStateOrProvinceOfIssue::toStrBuff, "593=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingLocaleOfIssue::toStrBuff[1024];
char UnderlyingLocaleOfIssueStrBuffInit = (memcpy(UnderlyingLocaleOfIssue::toStrBuff, "594=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingInstrRegistry::toStrBuff[1024];
char UnderlyingInstrRegistryStrBuffInit = (memcpy(UnderlyingInstrRegistry::toStrBuff, "595=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCountryOfIssue::toStrBuff[1024];
char LegCountryOfIssueStrBuffInit = (memcpy(LegCountryOfIssue::toStrBuff, "596=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegStateOrProvinceOfIssue::toStrBuff[1024];
char LegStateOrProvinceOfIssueStrBuffInit = (memcpy(LegStateOrProvinceOfIssue::toStrBuff, "597=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegLocaleOfIssue::toStrBuff[1024];
char LegLocaleOfIssueStrBuffInit = (memcpy(LegLocaleOfIssue::toStrBuff, "598=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegInstrRegistry::toStrBuff[1024];
char LegInstrRegistryStrBuffInit = (memcpy(LegInstrRegistry::toStrBuff, "599=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSymbol::toStrBuff[1024];
char LegSymbolStrBuffInit = (memcpy(LegSymbol::toStrBuff, "600=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSymbolSfx::toStrBuff[1024];
char LegSymbolSfxStrBuffInit = (memcpy(LegSymbolSfx::toStrBuff, "601=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityID::toStrBuff[1024];
char LegSecurityIDStrBuffInit = (memcpy(LegSecurityID::toStrBuff, "602=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityIDSource::toStrBuff[1024];
char LegSecurityIDSourceStrBuffInit = (memcpy(LegSecurityIDSource::toStrBuff, "603=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoLegSecurityAltID::toStrBuff[1024];
char NoLegSecurityAltIDStrBuffInit = (memcpy(NoLegSecurityAltID::toStrBuff, "604=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityAltID::toStrBuff[1024];
char LegSecurityAltIDStrBuffInit = (memcpy(LegSecurityAltID::toStrBuff, "605=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityAltIDSource::toStrBuff[1024];
char LegSecurityAltIDSourceStrBuffInit = (memcpy(LegSecurityAltIDSource::toStrBuff, "606=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegProduct::toStrBuff[1024];
char LegProductStrBuffInit = (memcpy(LegProduct::toStrBuff, "607=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCFICode::toStrBuff[1024];
char LegCFICodeStrBuffInit = (memcpy(LegCFICode::toStrBuff, "608=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityType::toStrBuff[1024];
char LegSecurityTypeStrBuffInit = (memcpy(LegSecurityType::toStrBuff, "609=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegMaturityMonthYear::toStrBuff[1024];
char LegMaturityMonthYearStrBuffInit = (memcpy(LegMaturityMonthYear::toStrBuff, "610=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegMaturityDate::toStrBuff[1024];
char LegMaturityDateStrBuffInit = (memcpy(LegMaturityDate::toStrBuff, "611=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegStrikePrice::toStrBuff[1024];
char LegStrikePriceStrBuffInit = (memcpy(LegStrikePrice::toStrBuff, "612=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegOptAttribute::toStrBuff[1024];
char LegOptAttributeStrBuffInit = (memcpy(LegOptAttribute::toStrBuff, "613=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegContractMultiplier::toStrBuff[1024];
char LegContractMultiplierStrBuffInit = (memcpy(LegContractMultiplier::toStrBuff, "614=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegCouponRate::toStrBuff[1024];
char LegCouponRateStrBuffInit = (memcpy(LegCouponRate::toStrBuff, "615=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityExchange::toStrBuff[1024];
char LegSecurityExchangeStrBuffInit = (memcpy(LegSecurityExchange::toStrBuff, "616=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegIssuer::toStrBuff[1024];
char LegIssuerStrBuffInit = (memcpy(LegIssuer::toStrBuff, "617=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedLegIssuerLen::toStrBuff[1024];
char EncodedLegIssuerLenStrBuffInit = (memcpy(EncodedLegIssuerLen::toStrBuff, "618=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedLegIssuer::toStrBuff[1024];
char EncodedLegIssuerStrBuffInit = (memcpy(EncodedLegIssuer::toStrBuff, "619=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecurityDesc::toStrBuff[1024];
char LegSecurityDescStrBuffInit = (memcpy(LegSecurityDesc::toStrBuff, "620=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedLegSecurityDescLen::toStrBuff[1024];
char EncodedLegSecurityDescLenStrBuffInit = (memcpy(EncodedLegSecurityDescLen::toStrBuff, "621=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EncodedLegSecurityDesc::toStrBuff[1024];
char EncodedLegSecurityDescStrBuffInit = (memcpy(EncodedLegSecurityDesc::toStrBuff, "622=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegRatioQty::toStrBuff[1024];
char LegRatioQtyStrBuffInit = (memcpy(LegRatioQty::toStrBuff, "623=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSide::toStrBuff[1024];
char LegSideStrBuffInit = (memcpy(LegSide::toStrBuff, "624=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradingSessionSubID::toStrBuff[1024];
char TradingSessionSubIDStrBuffInit = (memcpy(TradingSessionSubID::toStrBuff, "625=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocType::toStrBuff[1024];
char AllocTypeStrBuffInit = (memcpy(AllocType::toStrBuff, "626=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoHops::toStrBuff[1024];
char NoHopsStrBuffInit = (memcpy(NoHops::toStrBuff, "627=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HopCompID::toStrBuff[1024];
char HopCompIDStrBuffInit = (memcpy(HopCompID::toStrBuff, "628=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HopSendingTime::toStrBuff[1024];
char HopSendingTimeStrBuffInit = (memcpy(HopSendingTime::toStrBuff, "629=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char HopRefID::toStrBuff[1024];
char HopRefIDStrBuffInit = (memcpy(HopRefID::toStrBuff, "630=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MidPx::toStrBuff[1024];
char MidPxStrBuffInit = (memcpy(MidPx::toStrBuff, "631=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidYield::toStrBuff[1024];
char BidYieldStrBuffInit = (memcpy(BidYield::toStrBuff, "632=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MidYield::toStrBuff[1024];
char MidYieldStrBuffInit = (memcpy(MidYield::toStrBuff, "633=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OfferYield::toStrBuff[1024];
char OfferYieldStrBuffInit = (memcpy(OfferYield::toStrBuff, "634=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClearingFeeIndicator::toStrBuff[1024];
char ClearingFeeIndicatorStrBuffInit = (memcpy(ClearingFeeIndicator::toStrBuff, "635=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char WorkingIndicator::toStrBuff[1024];
char WorkingIndicatorStrBuffInit = (memcpy(WorkingIndicator::toStrBuff, "636=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegLastPx::toStrBuff[1024];
char LegLastPxStrBuffInit = (memcpy(LegLastPx::toStrBuff, "637=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PriorityIndicator::toStrBuff[1024];
char PriorityIndicatorStrBuffInit = (memcpy(PriorityIndicator::toStrBuff, "638=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PriceImprovement::toStrBuff[1024];
char PriceImprovementStrBuffInit = (memcpy(PriceImprovement::toStrBuff, "639=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Price2::toStrBuff[1024];
char Price2StrBuffInit = (memcpy(Price2::toStrBuff, "640=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastForwardPoints2::toStrBuff[1024];
char LastForwardPoints2StrBuffInit = (memcpy(LastForwardPoints2::toStrBuff, "641=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BidForwardPoints2::toStrBuff[1024];
char BidForwardPoints2StrBuffInit = (memcpy(BidForwardPoints2::toStrBuff, "642=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OfferForwardPoints2::toStrBuff[1024];
char OfferForwardPoints2StrBuffInit = (memcpy(OfferForwardPoints2::toStrBuff, "643=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RFQReqID::toStrBuff[1024];
char RFQReqIDStrBuffInit = (memcpy(RFQReqID::toStrBuff, "644=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MktBidPx::toStrBuff[1024];
char MktBidPxStrBuffInit = (memcpy(MktBidPx::toStrBuff, "645=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MktOfferPx::toStrBuff[1024];
char MktOfferPxStrBuffInit = (memcpy(MktOfferPx::toStrBuff, "646=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MinBidSize::toStrBuff[1024];
char MinBidSizeStrBuffInit = (memcpy(MinBidSize::toStrBuff, "647=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MinOfferSize::toStrBuff[1024];
char MinOfferSizeStrBuffInit = (memcpy(MinOfferSize::toStrBuff, "648=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteStatusReqID::toStrBuff[1024];
char QuoteStatusReqIDStrBuffInit = (memcpy(QuoteStatusReqID::toStrBuff, "649=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegalConfirm::toStrBuff[1024];
char LegalConfirmStrBuffInit = (memcpy(LegalConfirm::toStrBuff, "650=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingLastPx::toStrBuff[1024];
char UnderlyingLastPxStrBuffInit = (memcpy(UnderlyingLastPx::toStrBuff, "651=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingLastQty::toStrBuff[1024];
char UnderlyingLastQtyStrBuffInit = (memcpy(UnderlyingLastQty::toStrBuff, "652=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecDefStatus::toStrBuff[1024];
char SecDefStatusStrBuffInit = (memcpy(SecDefStatus::toStrBuff, "653=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegRefID::toStrBuff[1024];
char LegRefIDStrBuffInit = (memcpy(LegRefID::toStrBuff, "654=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContraLegRefID::toStrBuff[1024];
char ContraLegRefIDStrBuffInit = (memcpy(ContraLegRefID::toStrBuff, "655=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlCurrBidFxRate::toStrBuff[1024];
char SettlCurrBidFxRateStrBuffInit = (memcpy(SettlCurrBidFxRate::toStrBuff, "656=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlCurrOfferFxRate::toStrBuff[1024];
char SettlCurrOfferFxRateStrBuffInit = (memcpy(SettlCurrOfferFxRate::toStrBuff, "657=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteRequestRejectReason::toStrBuff[1024];
char QuoteRequestRejectReasonStrBuffInit = (memcpy(QuoteRequestRejectReason::toStrBuff, "658=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SideComplianceID::toStrBuff[1024];
char SideComplianceIDStrBuffInit = (memcpy(SideComplianceID::toStrBuff, "659=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AcctIDSource::toStrBuff[1024];
char AcctIDSourceStrBuffInit = (memcpy(AcctIDSource::toStrBuff, "660=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocAcctIDSource::toStrBuff[1024];
char AllocAcctIDSourceStrBuffInit = (memcpy(AllocAcctIDSource::toStrBuff, "661=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkPrice::toStrBuff[1024];
char BenchmarkPriceStrBuffInit = (memcpy(BenchmarkPrice::toStrBuff, "662=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkPriceType::toStrBuff[1024];
char BenchmarkPriceTypeStrBuffInit = (memcpy(BenchmarkPriceType::toStrBuff, "663=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmID::toStrBuff[1024];
char ConfirmIDStrBuffInit = (memcpy(ConfirmID::toStrBuff, "664=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmStatus::toStrBuff[1024];
char ConfirmStatusStrBuffInit = (memcpy(ConfirmStatus::toStrBuff, "665=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmTransType::toStrBuff[1024];
char ConfirmTransTypeStrBuffInit = (memcpy(ConfirmTransType::toStrBuff, "666=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContractSettlMonth::toStrBuff[1024];
char ContractSettlMonthStrBuffInit = (memcpy(ContractSettlMonth::toStrBuff, "667=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeliveryForm::toStrBuff[1024];
char DeliveryFormStrBuffInit = (memcpy(DeliveryForm::toStrBuff, "668=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastParPx::toStrBuff[1024];
char LastParPxStrBuffInit = (memcpy(LastParPx::toStrBuff, "669=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoLegAllocs::toStrBuff[1024];
char NoLegAllocsStrBuffInit = (memcpy(NoLegAllocs::toStrBuff, "670=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegAllocAccount::toStrBuff[1024];
char LegAllocAccountStrBuffInit = (memcpy(LegAllocAccount::toStrBuff, "671=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegIndividualAllocID::toStrBuff[1024];
char LegIndividualAllocIDStrBuffInit = (memcpy(LegIndividualAllocID::toStrBuff, "672=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegAllocQty::toStrBuff[1024];
char LegAllocQtyStrBuffInit = (memcpy(LegAllocQty::toStrBuff, "673=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegAllocAcctIDSource::toStrBuff[1024];
char LegAllocAcctIDSourceStrBuffInit = (memcpy(LegAllocAcctIDSource::toStrBuff, "674=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSettlCurrency::toStrBuff[1024];
char LegSettlCurrencyStrBuffInit = (memcpy(LegSettlCurrency::toStrBuff, "675=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegBenchmarkCurveCurrency::toStrBuff[1024];
char LegBenchmarkCurveCurrencyStrBuffInit = (memcpy(LegBenchmarkCurveCurrency::toStrBuff, "676=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegBenchmarkCurveName::toStrBuff[1024];
char LegBenchmarkCurveNameStrBuffInit = (memcpy(LegBenchmarkCurveName::toStrBuff, "677=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegBenchmarkCurvePoint::toStrBuff[1024];
char LegBenchmarkCurvePointStrBuffInit = (memcpy(LegBenchmarkCurvePoint::toStrBuff, "678=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegBenchmarkPrice::toStrBuff[1024];
char LegBenchmarkPriceStrBuffInit = (memcpy(LegBenchmarkPrice::toStrBuff, "679=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegBenchmarkPriceType::toStrBuff[1024];
char LegBenchmarkPriceTypeStrBuffInit = (memcpy(LegBenchmarkPriceType::toStrBuff, "680=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegBidPx::toStrBuff[1024];
char LegBidPxStrBuffInit = (memcpy(LegBidPx::toStrBuff, "681=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegIOIQty::toStrBuff[1024];
char LegIOIQtyStrBuffInit = (memcpy(LegIOIQty::toStrBuff, "682=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoLegStipulations::toStrBuff[1024];
char NoLegStipulationsStrBuffInit = (memcpy(NoLegStipulations::toStrBuff, "683=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegOfferPx::toStrBuff[1024];
char LegOfferPxStrBuffInit = (memcpy(LegOfferPx::toStrBuff, "684=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegOrderQty::toStrBuff[1024];
char LegOrderQtyStrBuffInit = (memcpy(LegOrderQty::toStrBuff, "685=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegPriceType::toStrBuff[1024];
char LegPriceTypeStrBuffInit = (memcpy(LegPriceType::toStrBuff, "686=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegQty::toStrBuff[1024];
char LegQtyStrBuffInit = (memcpy(LegQty::toStrBuff, "687=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegStipulationType::toStrBuff[1024];
char LegStipulationTypeStrBuffInit = (memcpy(LegStipulationType::toStrBuff, "688=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegStipulationValue::toStrBuff[1024];
char LegStipulationValueStrBuffInit = (memcpy(LegStipulationValue::toStrBuff, "689=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSwapType::toStrBuff[1024];
char LegSwapTypeStrBuffInit = (memcpy(LegSwapType::toStrBuff, "690=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Pool::toStrBuff[1024];
char PoolStrBuffInit = (memcpy(Pool::toStrBuff, "691=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuotePriceType::toStrBuff[1024];
char QuotePriceTypeStrBuffInit = (memcpy(QuotePriceType::toStrBuff, "692=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteRespID::toStrBuff[1024];
char QuoteRespIDStrBuffInit = (memcpy(QuoteRespID::toStrBuff, "693=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteRespType::toStrBuff[1024];
char QuoteRespTypeStrBuffInit = (memcpy(QuoteRespType::toStrBuff, "694=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QuoteQualifier::toStrBuff[1024];
char QuoteQualifierStrBuffInit = (memcpy(QuoteQualifier::toStrBuff, "695=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char YieldRedemptionDate::toStrBuff[1024];
char YieldRedemptionDateStrBuffInit = (memcpy(YieldRedemptionDate::toStrBuff, "696=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char YieldRedemptionPrice::toStrBuff[1024];
char YieldRedemptionPriceStrBuffInit = (memcpy(YieldRedemptionPrice::toStrBuff, "697=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char YieldRedemptionPriceType::toStrBuff[1024];
char YieldRedemptionPriceTypeStrBuffInit = (memcpy(YieldRedemptionPriceType::toStrBuff, "698=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkSecurityID::toStrBuff[1024];
char BenchmarkSecurityIDStrBuffInit = (memcpy(BenchmarkSecurityID::toStrBuff, "699=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ReversalIndicator::toStrBuff[1024];
char ReversalIndicatorStrBuffInit = (memcpy(ReversalIndicator::toStrBuff, "700=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char YieldCalcDate::toStrBuff[1024];
char YieldCalcDateStrBuffInit = (memcpy(YieldCalcDate::toStrBuff, "701=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoPositions::toStrBuff[1024];
char NoPositionsStrBuffInit = (memcpy(NoPositions::toStrBuff, "702=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosType::toStrBuff[1024];
char PosTypeStrBuffInit = (memcpy(PosType::toStrBuff, "703=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LongQty::toStrBuff[1024];
char LongQtyStrBuffInit = (memcpy(LongQty::toStrBuff, "704=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ShortQty::toStrBuff[1024];
char ShortQtyStrBuffInit = (memcpy(ShortQty::toStrBuff, "705=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosQtyStatus::toStrBuff[1024];
char PosQtyStatusStrBuffInit = (memcpy(PosQtyStatus::toStrBuff, "706=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosAmtType::toStrBuff[1024];
char PosAmtTypeStrBuffInit = (memcpy(PosAmtType::toStrBuff, "707=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosAmt::toStrBuff[1024];
char PosAmtStrBuffInit = (memcpy(PosAmt::toStrBuff, "708=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosTransType::toStrBuff[1024];
char PosTransTypeStrBuffInit = (memcpy(PosTransType::toStrBuff, "709=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosReqID::toStrBuff[1024];
char PosReqIDStrBuffInit = (memcpy(PosReqID::toStrBuff, "710=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoUnderlyings::toStrBuff[1024];
char NoUnderlyingsStrBuffInit = (memcpy(NoUnderlyings::toStrBuff, "711=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosMaintAction::toStrBuff[1024];
char PosMaintActionStrBuffInit = (memcpy(PosMaintAction::toStrBuff, "712=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrigPosReqRefID::toStrBuff[1024];
char OrigPosReqRefIDStrBuffInit = (memcpy(OrigPosReqRefID::toStrBuff, "713=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosMaintRptRefID::toStrBuff[1024];
char PosMaintRptRefIDStrBuffInit = (memcpy(PosMaintRptRefID::toStrBuff, "714=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ClearingBusinessDate::toStrBuff[1024];
char ClearingBusinessDateStrBuffInit = (memcpy(ClearingBusinessDate::toStrBuff, "715=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlSessID::toStrBuff[1024];
char SettlSessIDStrBuffInit = (memcpy(SettlSessID::toStrBuff, "716=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlSessSubID::toStrBuff[1024];
char SettlSessSubIDStrBuffInit = (memcpy(SettlSessSubID::toStrBuff, "717=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AdjustmentType::toStrBuff[1024];
char AdjustmentTypeStrBuffInit = (memcpy(AdjustmentType::toStrBuff, "718=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ContraryInstructionIndicator::toStrBuff[1024];
char ContraryInstructionIndicatorStrBuffInit = (memcpy(ContraryInstructionIndicator::toStrBuff, "719=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PriorSpreadIndicator::toStrBuff[1024];
char PriorSpreadIndicatorStrBuffInit = (memcpy(PriorSpreadIndicator::toStrBuff, "720=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosMaintRptID::toStrBuff[1024];
char PosMaintRptIDStrBuffInit = (memcpy(PosMaintRptID::toStrBuff, "721=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosMaintStatus::toStrBuff[1024];
char PosMaintStatusStrBuffInit = (memcpy(PosMaintStatus::toStrBuff, "722=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosMaintResult::toStrBuff[1024];
char PosMaintResultStrBuffInit = (memcpy(PosMaintResult::toStrBuff, "723=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosReqType::toStrBuff[1024];
char PosReqTypeStrBuffInit = (memcpy(PosReqType::toStrBuff, "724=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ResponseTransportType::toStrBuff[1024];
char ResponseTransportTypeStrBuffInit = (memcpy(ResponseTransportType::toStrBuff, "725=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ResponseDestination::toStrBuff[1024];
char ResponseDestinationStrBuffInit = (memcpy(ResponseDestination::toStrBuff, "726=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalNumPosReports::toStrBuff[1024];
char TotalNumPosReportsStrBuffInit = (memcpy(TotalNumPosReports::toStrBuff, "727=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosReqResult::toStrBuff[1024];
char PosReqResultStrBuffInit = (memcpy(PosReqResult::toStrBuff, "728=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PosReqStatus::toStrBuff[1024];
char PosReqStatusStrBuffInit = (memcpy(PosReqStatus::toStrBuff, "729=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPrice::toStrBuff[1024];
char SettlPriceStrBuffInit = (memcpy(SettlPrice::toStrBuff, "730=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPriceType::toStrBuff[1024];
char SettlPriceTypeStrBuffInit = (memcpy(SettlPriceType::toStrBuff, "731=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSettlPrice::toStrBuff[1024];
char UnderlyingSettlPriceStrBuffInit = (memcpy(UnderlyingSettlPrice::toStrBuff, "732=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSettlPriceType::toStrBuff[1024];
char UnderlyingSettlPriceTypeStrBuffInit = (memcpy(UnderlyingSettlPriceType::toStrBuff, "733=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PriorSettlPrice::toStrBuff[1024];
char PriorSettlPriceStrBuffInit = (memcpy(PriorSettlPrice::toStrBuff, "734=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoQuoteQualifiers::toStrBuff[1024];
char NoQuoteQualifiersStrBuffInit = (memcpy(NoQuoteQualifiers::toStrBuff, "735=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocSettlCurrency::toStrBuff[1024];
char AllocSettlCurrencyStrBuffInit = (memcpy(AllocSettlCurrency::toStrBuff, "736=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocSettlCurrAmt::toStrBuff[1024];
char AllocSettlCurrAmtStrBuffInit = (memcpy(AllocSettlCurrAmt::toStrBuff, "737=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InterestAtMaturity::toStrBuff[1024];
char InterestAtMaturityStrBuffInit = (memcpy(InterestAtMaturity::toStrBuff, "738=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegDatedDate::toStrBuff[1024];
char LegDatedDateStrBuffInit = (memcpy(LegDatedDate::toStrBuff, "739=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegPool::toStrBuff[1024];
char LegPoolStrBuffInit = (memcpy(LegPool::toStrBuff, "740=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocInterestAtMaturity::toStrBuff[1024];
char AllocInterestAtMaturityStrBuffInit = (memcpy(AllocInterestAtMaturity::toStrBuff, "741=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocAccruedInterestAmt::toStrBuff[1024];
char AllocAccruedInterestAmtStrBuffInit = (memcpy(AllocAccruedInterestAmt::toStrBuff, "742=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeliveryDate::toStrBuff[1024];
char DeliveryDateStrBuffInit = (memcpy(DeliveryDate::toStrBuff, "743=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AssignmentMethod::toStrBuff[1024];
char AssignmentMethodStrBuffInit = (memcpy(AssignmentMethod::toStrBuff, "744=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AssignmentUnit::toStrBuff[1024];
char AssignmentUnitStrBuffInit = (memcpy(AssignmentUnit::toStrBuff, "745=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OpenInterest::toStrBuff[1024];
char OpenInterestStrBuffInit = (memcpy(OpenInterest::toStrBuff, "746=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExerciseMethod::toStrBuff[1024];
char ExerciseMethodStrBuffInit = (memcpy(ExerciseMethod::toStrBuff, "747=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNumTradeReports::toStrBuff[1024];
char TotNumTradeReportsStrBuffInit = (memcpy(TotNumTradeReports::toStrBuff, "748=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeRequestResult::toStrBuff[1024];
char TradeRequestResultStrBuffInit = (memcpy(TradeRequestResult::toStrBuff, "749=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeRequestStatus::toStrBuff[1024];
char TradeRequestStatusStrBuffInit = (memcpy(TradeRequestStatus::toStrBuff, "750=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeReportRejectReason::toStrBuff[1024];
char TradeReportRejectReasonStrBuffInit = (memcpy(TradeReportRejectReason::toStrBuff, "751=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SideMultiLegReportingType::toStrBuff[1024];
char SideMultiLegReportingTypeStrBuffInit = (memcpy(SideMultiLegReportingType::toStrBuff, "752=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoPosAmt::toStrBuff[1024];
char NoPosAmtStrBuffInit = (memcpy(NoPosAmt::toStrBuff, "753=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AutoAcceptIndicator::toStrBuff[1024];
char AutoAcceptIndicatorStrBuffInit = (memcpy(AutoAcceptIndicator::toStrBuff, "754=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocReportID::toStrBuff[1024];
char AllocReportIDStrBuffInit = (memcpy(AllocReportID::toStrBuff, "755=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoNested2PartyIDs::toStrBuff[1024];
char NoNested2PartyIDsStrBuffInit = (memcpy(NoNested2PartyIDs::toStrBuff, "756=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested2PartyID::toStrBuff[1024];
char Nested2PartyIDStrBuffInit = (memcpy(Nested2PartyID::toStrBuff, "757=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested2PartyIDSource::toStrBuff[1024];
char Nested2PartyIDSourceStrBuffInit = (memcpy(Nested2PartyIDSource::toStrBuff, "758=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested2PartyRole::toStrBuff[1024];
char Nested2PartyRoleStrBuffInit = (memcpy(Nested2PartyRole::toStrBuff, "759=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested2PartySubID::toStrBuff[1024];
char Nested2PartySubIDStrBuffInit = (memcpy(Nested2PartySubID::toStrBuff, "760=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BenchmarkSecurityIDSource::toStrBuff[1024];
char BenchmarkSecurityIDSourceStrBuffInit = (memcpy(BenchmarkSecurityIDSource::toStrBuff, "761=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecuritySubType::toStrBuff[1024];
char SecuritySubTypeStrBuffInit = (memcpy(SecuritySubType::toStrBuff, "762=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingSecuritySubType::toStrBuff[1024];
char UnderlyingSecuritySubTypeStrBuffInit = (memcpy(UnderlyingSecuritySubType::toStrBuff, "763=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegSecuritySubType::toStrBuff[1024];
char LegSecuritySubTypeStrBuffInit = (memcpy(LegSecuritySubType::toStrBuff, "764=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllowableOneSidednessPct::toStrBuff[1024];
char AllowableOneSidednessPctStrBuffInit = (memcpy(AllowableOneSidednessPct::toStrBuff, "765=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllowableOneSidednessValue::toStrBuff[1024];
char AllowableOneSidednessValueStrBuffInit = (memcpy(AllowableOneSidednessValue::toStrBuff, "766=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllowableOneSidednessCurr::toStrBuff[1024];
char AllowableOneSidednessCurrStrBuffInit = (memcpy(AllowableOneSidednessCurr::toStrBuff, "767=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoTrdRegTimestamps::toStrBuff[1024];
char NoTrdRegTimestampsStrBuffInit = (memcpy(NoTrdRegTimestamps::toStrBuff, "768=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdRegTimestamp::toStrBuff[1024];
char TrdRegTimestampStrBuffInit = (memcpy(TrdRegTimestamp::toStrBuff, "769=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdRegTimestampType::toStrBuff[1024];
char TrdRegTimestampTypeStrBuffInit = (memcpy(TrdRegTimestampType::toStrBuff, "770=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdRegTimestampOrigin::toStrBuff[1024];
char TrdRegTimestampOriginStrBuffInit = (memcpy(TrdRegTimestampOrigin::toStrBuff, "771=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmRefID::toStrBuff[1024];
char ConfirmRefIDStrBuffInit = (memcpy(ConfirmRefID::toStrBuff, "772=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmType::toStrBuff[1024];
char ConfirmTypeStrBuffInit = (memcpy(ConfirmType::toStrBuff, "773=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmRejReason::toStrBuff[1024];
char ConfirmRejReasonStrBuffInit = (memcpy(ConfirmRejReason::toStrBuff, "774=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char BookingType::toStrBuff[1024];
char BookingTypeStrBuffInit = (memcpy(BookingType::toStrBuff, "775=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char IndividualAllocRejCode::toStrBuff[1024];
char IndividualAllocRejCodeStrBuffInit = (memcpy(IndividualAllocRejCode::toStrBuff, "776=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstMsgID::toStrBuff[1024];
char SettlInstMsgIDStrBuffInit = (memcpy(SettlInstMsgID::toStrBuff, "777=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoSettlInst::toStrBuff[1024];
char NoSettlInstStrBuffInit = (memcpy(NoSettlInst::toStrBuff, "778=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastUpdateTime::toStrBuff[1024];
char LastUpdateTimeStrBuffInit = (memcpy(LastUpdateTime::toStrBuff, "779=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocSettlInstType::toStrBuff[1024];
char AllocSettlInstTypeStrBuffInit = (memcpy(AllocSettlInstType::toStrBuff, "780=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoSettlPartyIDs::toStrBuff[1024];
char NoSettlPartyIDsStrBuffInit = (memcpy(NoSettlPartyIDs::toStrBuff, "781=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPartyID::toStrBuff[1024];
char SettlPartyIDStrBuffInit = (memcpy(SettlPartyID::toStrBuff, "782=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPartyIDSource::toStrBuff[1024];
char SettlPartyIDSourceStrBuffInit = (memcpy(SettlPartyIDSource::toStrBuff, "783=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPartyRole::toStrBuff[1024];
char SettlPartyRoleStrBuffInit = (memcpy(SettlPartyRole::toStrBuff, "784=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPartySubID::toStrBuff[1024];
char SettlPartySubIDStrBuffInit = (memcpy(SettlPartySubID::toStrBuff, "785=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlPartySubIDType::toStrBuff[1024];
char SettlPartySubIDTypeStrBuffInit = (memcpy(SettlPartySubIDType::toStrBuff, "786=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DlvyInstType::toStrBuff[1024];
char DlvyInstTypeStrBuffInit = (memcpy(DlvyInstType::toStrBuff, "787=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TerminationType::toStrBuff[1024];
char TerminationTypeStrBuffInit = (memcpy(TerminationType::toStrBuff, "788=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NextExpectedMsgSeqNum::toStrBuff[1024];
char NextExpectedMsgSeqNumStrBuffInit = (memcpy(NextExpectedMsgSeqNum::toStrBuff, "789=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrdStatusReqID::toStrBuff[1024];
char OrdStatusReqIDStrBuffInit = (memcpy(OrdStatusReqID::toStrBuff, "790=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstReqID::toStrBuff[1024];
char SettlInstReqIDStrBuffInit = (memcpy(SettlInstReqID::toStrBuff, "791=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SettlInstReqRejCode::toStrBuff[1024];
char SettlInstReqRejCodeStrBuffInit = (memcpy(SettlInstReqRejCode::toStrBuff, "792=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryAllocID::toStrBuff[1024];
char SecondaryAllocIDStrBuffInit = (memcpy(SecondaryAllocID::toStrBuff, "793=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocReportType::toStrBuff[1024];
char AllocReportTypeStrBuffInit = (memcpy(AllocReportType::toStrBuff, "794=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocReportRefID::toStrBuff[1024];
char AllocReportRefIDStrBuffInit = (memcpy(AllocReportRefID::toStrBuff, "795=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocCancReplaceReason::toStrBuff[1024];
char AllocCancReplaceReasonStrBuffInit = (memcpy(AllocCancReplaceReason::toStrBuff, "796=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CopyMsgIndicator::toStrBuff[1024];
char CopyMsgIndicatorStrBuffInit = (memcpy(CopyMsgIndicator::toStrBuff, "797=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocAccountType::toStrBuff[1024];
char AllocAccountTypeStrBuffInit = (memcpy(AllocAccountType::toStrBuff, "798=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderAvgPx::toStrBuff[1024];
char OrderAvgPxStrBuffInit = (memcpy(OrderAvgPx::toStrBuff, "799=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderBookingQty::toStrBuff[1024];
char OrderBookingQtyStrBuffInit = (memcpy(OrderBookingQty::toStrBuff, "800=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoSettlPartySubIDs::toStrBuff[1024];
char NoSettlPartySubIDsStrBuffInit = (memcpy(NoSettlPartySubIDs::toStrBuff, "801=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoPartySubIDs::toStrBuff[1024];
char NoPartySubIDsStrBuffInit = (memcpy(NoPartySubIDs::toStrBuff, "802=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PartySubIDType::toStrBuff[1024];
char PartySubIDTypeStrBuffInit = (memcpy(PartySubIDType::toStrBuff, "803=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoNestedPartySubIDs::toStrBuff[1024];
char NoNestedPartySubIDsStrBuffInit = (memcpy(NoNestedPartySubIDs::toStrBuff, "804=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NestedPartySubIDType::toStrBuff[1024];
char NestedPartySubIDTypeStrBuffInit = (memcpy(NestedPartySubIDType::toStrBuff, "805=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoNested2PartySubIDs::toStrBuff[1024];
char NoNested2PartySubIDsStrBuffInit = (memcpy(NoNested2PartySubIDs::toStrBuff, "806=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested2PartySubIDType::toStrBuff[1024];
char Nested2PartySubIDTypeStrBuffInit = (memcpy(Nested2PartySubIDType::toStrBuff, "807=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocIntermedReqType::toStrBuff[1024];
char AllocIntermedReqTypeStrBuffInit = (memcpy(AllocIntermedReqType::toStrBuff, "808=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingPx::toStrBuff[1024];
char UnderlyingPxStrBuffInit = (memcpy(UnderlyingPx::toStrBuff, "810=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PriceDelta::toStrBuff[1024];
char PriceDeltaStrBuffInit = (memcpy(PriceDelta::toStrBuff, "811=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ApplQueueMax::toStrBuff[1024];
char ApplQueueMaxStrBuffInit = (memcpy(ApplQueueMax::toStrBuff, "812=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ApplQueueDepth::toStrBuff[1024];
char ApplQueueDepthStrBuffInit = (memcpy(ApplQueueDepth::toStrBuff, "813=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ApplQueueResolution::toStrBuff[1024];
char ApplQueueResolutionStrBuffInit = (memcpy(ApplQueueResolution::toStrBuff, "814=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ApplQueueAction::toStrBuff[1024];
char ApplQueueActionStrBuffInit = (memcpy(ApplQueueAction::toStrBuff, "815=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoAltMDSource::toStrBuff[1024];
char NoAltMDSourceStrBuffInit = (memcpy(NoAltMDSource::toStrBuff, "816=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AltMDSourceID::toStrBuff[1024];
char AltMDSourceIDStrBuffInit = (memcpy(AltMDSourceID::toStrBuff, "817=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryTradeReportID::toStrBuff[1024];
char SecondaryTradeReportIDStrBuffInit = (memcpy(SecondaryTradeReportID::toStrBuff, "818=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AvgPxIndicator::toStrBuff[1024];
char AvgPxIndicatorStrBuffInit = (memcpy(AvgPxIndicator::toStrBuff, "819=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeLinkID::toStrBuff[1024];
char TradeLinkIDStrBuffInit = (memcpy(TradeLinkID::toStrBuff, "820=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderInputDevice::toStrBuff[1024];
char OrderInputDeviceStrBuffInit = (memcpy(OrderInputDevice::toStrBuff, "821=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingTradingSessionID::toStrBuff[1024];
char UnderlyingTradingSessionIDStrBuffInit = (memcpy(UnderlyingTradingSessionID::toStrBuff, "822=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingTradingSessionSubID::toStrBuff[1024];
char UnderlyingTradingSessionSubIDStrBuffInit = (memcpy(UnderlyingTradingSessionSubID::toStrBuff, "823=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeLegRefID::toStrBuff[1024];
char TradeLegRefIDStrBuffInit = (memcpy(TradeLegRefID::toStrBuff, "824=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExchangeRule::toStrBuff[1024];
char ExchangeRuleStrBuffInit = (memcpy(ExchangeRule::toStrBuff, "825=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeAllocIndicator::toStrBuff[1024];
char TradeAllocIndicatorStrBuffInit = (memcpy(TradeAllocIndicator::toStrBuff, "826=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ExpirationCycle::toStrBuff[1024];
char ExpirationCycleStrBuffInit = (memcpy(ExpirationCycle::toStrBuff, "827=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdType::toStrBuff[1024];
char TrdTypeStrBuffInit = (memcpy(TrdType::toStrBuff, "828=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdSubType::toStrBuff[1024];
char TrdSubTypeStrBuffInit = (memcpy(TrdSubType::toStrBuff, "829=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TransferReason::toStrBuff[1024];
char TransferReasonStrBuffInit = (memcpy(TransferReason::toStrBuff, "830=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AsgnReqID::toStrBuff[1024];
char AsgnReqIDStrBuffInit = (memcpy(AsgnReqID::toStrBuff, "831=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNumAssignmentReports::toStrBuff[1024];
char TotNumAssignmentReportsStrBuffInit = (memcpy(TotNumAssignmentReports::toStrBuff, "832=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AsgnRptID::toStrBuff[1024];
char AsgnRptIDStrBuffInit = (memcpy(AsgnRptID::toStrBuff, "833=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ThresholdAmount::toStrBuff[1024];
char ThresholdAmountStrBuffInit = (memcpy(ThresholdAmount::toStrBuff, "834=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PegMoveType::toStrBuff[1024];
char PegMoveTypeStrBuffInit = (memcpy(PegMoveType::toStrBuff, "835=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PegOffsetType::toStrBuff[1024];
char PegOffsetTypeStrBuffInit = (memcpy(PegOffsetType::toStrBuff, "836=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PegLimitType::toStrBuff[1024];
char PegLimitTypeStrBuffInit = (memcpy(PegLimitType::toStrBuff, "837=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PegRoundDirection::toStrBuff[1024];
char PegRoundDirectionStrBuffInit = (memcpy(PegRoundDirection::toStrBuff, "838=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PeggedPrice::toStrBuff[1024];
char PeggedPriceStrBuffInit = (memcpy(PeggedPrice::toStrBuff, "839=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PegScope::toStrBuff[1024];
char PegScopeStrBuffInit = (memcpy(PegScope::toStrBuff, "840=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionMoveType::toStrBuff[1024];
char DiscretionMoveTypeStrBuffInit = (memcpy(DiscretionMoveType::toStrBuff, "841=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionOffsetType::toStrBuff[1024];
char DiscretionOffsetTypeStrBuffInit = (memcpy(DiscretionOffsetType::toStrBuff, "842=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionLimitType::toStrBuff[1024];
char DiscretionLimitTypeStrBuffInit = (memcpy(DiscretionLimitType::toStrBuff, "843=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionRoundDirection::toStrBuff[1024];
char DiscretionRoundDirectionStrBuffInit = (memcpy(DiscretionRoundDirection::toStrBuff, "844=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionPrice::toStrBuff[1024];
char DiscretionPriceStrBuffInit = (memcpy(DiscretionPrice::toStrBuff, "845=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DiscretionScope::toStrBuff[1024];
char DiscretionScopeStrBuffInit = (memcpy(DiscretionScope::toStrBuff, "846=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TargetStrategy::toStrBuff[1024];
char TargetStrategyStrBuffInit = (memcpy(TargetStrategy::toStrBuff, "847=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TargetStrategyParameters::toStrBuff[1024];
char TargetStrategyParametersStrBuffInit = (memcpy(TargetStrategyParameters::toStrBuff, "848=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ParticipationRate::toStrBuff[1024];
char ParticipationRateStrBuffInit = (memcpy(ParticipationRate::toStrBuff, "849=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TargetStrategyPerformance::toStrBuff[1024];
char TargetStrategyPerformanceStrBuffInit = (memcpy(TargetStrategyPerformance::toStrBuff, "850=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastLiquidityInd::toStrBuff[1024];
char LastLiquidityIndStrBuffInit = (memcpy(LastLiquidityInd::toStrBuff, "851=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PublishTrdIndicator::toStrBuff[1024];
char PublishTrdIndicatorStrBuffInit = (memcpy(PublishTrdIndicator::toStrBuff, "852=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ShortSaleReason::toStrBuff[1024];
char ShortSaleReasonStrBuffInit = (memcpy(ShortSaleReason::toStrBuff, "853=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char QtyType::toStrBuff[1024];
char QtyTypeStrBuffInit = (memcpy(QtyType::toStrBuff, "854=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryTrdType::toStrBuff[1024];
char SecondaryTrdTypeStrBuffInit = (memcpy(SecondaryTrdType::toStrBuff, "855=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TradeReportType::toStrBuff[1024];
char TradeReportTypeStrBuffInit = (memcpy(TradeReportType::toStrBuff, "856=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AllocNoOrdersType::toStrBuff[1024];
char AllocNoOrdersTypeStrBuffInit = (memcpy(AllocNoOrdersType::toStrBuff, "857=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SharedCommission::toStrBuff[1024];
char SharedCommissionStrBuffInit = (memcpy(SharedCommission::toStrBuff, "858=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ConfirmReqID::toStrBuff[1024];
char ConfirmReqIDStrBuffInit = (memcpy(ConfirmReqID::toStrBuff, "859=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AvgParPx::toStrBuff[1024];
char AvgParPxStrBuffInit = (memcpy(AvgParPx::toStrBuff, "860=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char ReportedPx::toStrBuff[1024];
char ReportedPxStrBuffInit = (memcpy(ReportedPx::toStrBuff, "861=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoCapacities::toStrBuff[1024];
char NoCapacitiesStrBuffInit = (memcpy(NoCapacities::toStrBuff, "862=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char OrderCapacityQty::toStrBuff[1024];
char OrderCapacityQtyStrBuffInit = (memcpy(OrderCapacityQty::toStrBuff, "863=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoEvents::toStrBuff[1024];
char NoEventsStrBuffInit = (memcpy(NoEvents::toStrBuff, "864=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EventType::toStrBuff[1024];
char EventTypeStrBuffInit = (memcpy(EventType::toStrBuff, "865=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EventDate::toStrBuff[1024];
char EventDateStrBuffInit = (memcpy(EventDate::toStrBuff, "866=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EventPx::toStrBuff[1024];
char EventPxStrBuffInit = (memcpy(EventPx::toStrBuff, "867=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EventText::toStrBuff[1024];
char EventTextStrBuffInit = (memcpy(EventText::toStrBuff, "868=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char PctAtRisk::toStrBuff[1024];
char PctAtRiskStrBuffInit = (memcpy(PctAtRisk::toStrBuff, "869=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoInstrAttrib::toStrBuff[1024];
char NoInstrAttribStrBuffInit = (memcpy(NoInstrAttrib::toStrBuff, "870=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InstrAttribType::toStrBuff[1024];
char InstrAttribTypeStrBuffInit = (memcpy(InstrAttribType::toStrBuff, "871=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InstrAttribValue::toStrBuff[1024];
char InstrAttribValueStrBuffInit = (memcpy(InstrAttribValue::toStrBuff, "872=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DatedDate::toStrBuff[1024];
char DatedDateStrBuffInit = (memcpy(DatedDate::toStrBuff, "873=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char InterestAccrualDate::toStrBuff[1024];
char InterestAccrualDateStrBuffInit = (memcpy(InterestAccrualDate::toStrBuff, "874=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CPProgram::toStrBuff[1024];
char CPProgramStrBuffInit = (memcpy(CPProgram::toStrBuff, "875=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CPRegType::toStrBuff[1024];
char CPRegTypeStrBuffInit = (memcpy(CPRegType::toStrBuff, "876=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCPProgram::toStrBuff[1024];
char UnderlyingCPProgramStrBuffInit = (memcpy(UnderlyingCPProgram::toStrBuff, "877=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCPRegType::toStrBuff[1024];
char UnderlyingCPRegTypeStrBuffInit = (memcpy(UnderlyingCPRegType::toStrBuff, "878=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingQty::toStrBuff[1024];
char UnderlyingQtyStrBuffInit = (memcpy(UnderlyingQty::toStrBuff, "879=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdMatchID::toStrBuff[1024];
char TrdMatchIDStrBuffInit = (memcpy(TrdMatchID::toStrBuff, "880=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char SecondaryTradeReportRefID::toStrBuff[1024];
char SecondaryTradeReportRefIDStrBuffInit = (memcpy(SecondaryTradeReportRefID::toStrBuff, "881=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingDirtyPrice::toStrBuff[1024];
char UnderlyingDirtyPriceStrBuffInit = (memcpy(UnderlyingDirtyPrice::toStrBuff, "882=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingEndPrice::toStrBuff[1024];
char UnderlyingEndPriceStrBuffInit = (memcpy(UnderlyingEndPrice::toStrBuff, "883=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingStartValue::toStrBuff[1024];
char UnderlyingStartValueStrBuffInit = (memcpy(UnderlyingStartValue::toStrBuff, "884=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingCurrentValue::toStrBuff[1024];
char UnderlyingCurrentValueStrBuffInit = (memcpy(UnderlyingCurrentValue::toStrBuff, "885=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingEndValue::toStrBuff[1024];
char UnderlyingEndValueStrBuffInit = (memcpy(UnderlyingEndValue::toStrBuff, "886=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoUnderlyingStips::toStrBuff[1024];
char NoUnderlyingStipsStrBuffInit = (memcpy(NoUnderlyingStips::toStrBuff, "887=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingStipType::toStrBuff[1024];
char UnderlyingStipTypeStrBuffInit = (memcpy(UnderlyingStipType::toStrBuff, "888=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingStipValue::toStrBuff[1024];
char UnderlyingStipValueStrBuffInit = (memcpy(UnderlyingStipValue::toStrBuff, "889=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MaturityNetMoney::toStrBuff[1024];
char MaturityNetMoneyStrBuffInit = (memcpy(MaturityNetMoney::toStrBuff, "890=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MiscFeeBasis::toStrBuff[1024];
char MiscFeeBasisStrBuffInit = (memcpy(MiscFeeBasis::toStrBuff, "891=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNoAllocs::toStrBuff[1024];
char TotNoAllocsStrBuffInit = (memcpy(TotNoAllocs::toStrBuff, "892=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastFragment::toStrBuff[1024];
char LastFragmentStrBuffInit = (memcpy(LastFragment::toStrBuff, "893=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollReqID::toStrBuff[1024];
char CollReqIDStrBuffInit = (memcpy(CollReqID::toStrBuff, "894=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAsgnReason::toStrBuff[1024];
char CollAsgnReasonStrBuffInit = (memcpy(CollAsgnReason::toStrBuff, "895=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollInquiryQualifier::toStrBuff[1024];
char CollInquiryQualifierStrBuffInit = (memcpy(CollInquiryQualifier::toStrBuff, "896=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoTrades::toStrBuff[1024];
char NoTradesStrBuffInit = (memcpy(NoTrades::toStrBuff, "897=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MarginRatio::toStrBuff[1024];
char MarginRatioStrBuffInit = (memcpy(MarginRatio::toStrBuff, "898=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char MarginExcess::toStrBuff[1024];
char MarginExcessStrBuffInit = (memcpy(MarginExcess::toStrBuff, "899=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotalNetValue::toStrBuff[1024];
char TotalNetValueStrBuffInit = (memcpy(TotalNetValue::toStrBuff, "900=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CashOutstanding::toStrBuff[1024];
char CashOutstandingStrBuffInit = (memcpy(CashOutstanding::toStrBuff, "901=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAsgnID::toStrBuff[1024];
char CollAsgnIDStrBuffInit = (memcpy(CollAsgnID::toStrBuff, "902=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAsgnTransType::toStrBuff[1024];
char CollAsgnTransTypeStrBuffInit = (memcpy(CollAsgnTransType::toStrBuff, "903=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollRespID::toStrBuff[1024];
char CollRespIDStrBuffInit = (memcpy(CollRespID::toStrBuff, "904=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAsgnRespType::toStrBuff[1024];
char CollAsgnRespTypeStrBuffInit = (memcpy(CollAsgnRespType::toStrBuff, "905=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAsgnRejectReason::toStrBuff[1024];
char CollAsgnRejectReasonStrBuffInit = (memcpy(CollAsgnRejectReason::toStrBuff, "906=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAsgnRefID::toStrBuff[1024];
char CollAsgnRefIDStrBuffInit = (memcpy(CollAsgnRefID::toStrBuff, "907=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollRptID::toStrBuff[1024];
char CollRptIDStrBuffInit = (memcpy(CollRptID::toStrBuff, "908=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollInquiryID::toStrBuff[1024];
char CollInquiryIDStrBuffInit = (memcpy(CollInquiryID::toStrBuff, "909=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollStatus::toStrBuff[1024];
char CollStatusStrBuffInit = (memcpy(CollStatus::toStrBuff, "910=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TotNumReports::toStrBuff[1024];
char TotNumReportsStrBuffInit = (memcpy(TotNumReports::toStrBuff, "911=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastRptRequested::toStrBuff[1024];
char LastRptRequestedStrBuffInit = (memcpy(LastRptRequested::toStrBuff, "912=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AgreementDesc::toStrBuff[1024];
char AgreementDescStrBuffInit = (memcpy(AgreementDesc::toStrBuff, "913=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AgreementID::toStrBuff[1024];
char AgreementIDStrBuffInit = (memcpy(AgreementID::toStrBuff, "914=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AgreementDate::toStrBuff[1024];
char AgreementDateStrBuffInit = (memcpy(AgreementDate::toStrBuff, "915=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StartDate::toStrBuff[1024];
char StartDateStrBuffInit = (memcpy(StartDate::toStrBuff, "916=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EndDate::toStrBuff[1024];
char EndDateStrBuffInit = (memcpy(EndDate::toStrBuff, "917=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AgreementCurrency::toStrBuff[1024];
char AgreementCurrencyStrBuffInit = (memcpy(AgreementCurrency::toStrBuff, "918=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char DeliveryType::toStrBuff[1024];
char DeliveryTypeStrBuffInit = (memcpy(DeliveryType::toStrBuff, "919=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EndAccruedInterestAmt::toStrBuff[1024];
char EndAccruedInterestAmtStrBuffInit = (memcpy(EndAccruedInterestAmt::toStrBuff, "920=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StartCash::toStrBuff[1024];
char StartCashStrBuffInit = (memcpy(StartCash::toStrBuff, "921=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char EndCash::toStrBuff[1024];
char EndCashStrBuffInit = (memcpy(EndCash::toStrBuff, "922=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UserRequestID::toStrBuff[1024];
char UserRequestIDStrBuffInit = (memcpy(UserRequestID::toStrBuff, "923=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UserRequestType::toStrBuff[1024];
char UserRequestTypeStrBuffInit = (memcpy(UserRequestType::toStrBuff, "924=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NewPassword::toStrBuff[1024];
char NewPasswordStrBuffInit = (memcpy(NewPassword::toStrBuff, "925=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UserStatus::toStrBuff[1024];
char UserStatusStrBuffInit = (memcpy(UserStatus::toStrBuff, "926=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UserStatusText::toStrBuff[1024];
char UserStatusTextStrBuffInit = (memcpy(UserStatusText::toStrBuff, "927=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StatusValue::toStrBuff[1024];
char StatusValueStrBuffInit = (memcpy(StatusValue::toStrBuff, "928=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StatusText::toStrBuff[1024];
char StatusTextStrBuffInit = (memcpy(StatusText::toStrBuff, "929=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RefCompID::toStrBuff[1024];
char RefCompIDStrBuffInit = (memcpy(RefCompID::toStrBuff, "930=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char RefSubID::toStrBuff[1024];
char RefSubIDStrBuffInit = (memcpy(RefSubID::toStrBuff, "931=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetworkResponseID::toStrBuff[1024];
char NetworkResponseIDStrBuffInit = (memcpy(NetworkResponseID::toStrBuff, "932=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetworkRequestID::toStrBuff[1024];
char NetworkRequestIDStrBuffInit = (memcpy(NetworkRequestID::toStrBuff, "933=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LastNetworkResponseID::toStrBuff[1024];
char LastNetworkResponseIDStrBuffInit = (memcpy(LastNetworkResponseID::toStrBuff, "934=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetworkRequestType::toStrBuff[1024];
char NetworkRequestTypeStrBuffInit = (memcpy(NetworkRequestType::toStrBuff, "935=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoCompIDs::toStrBuff[1024];
char NoCompIDsStrBuffInit = (memcpy(NoCompIDs::toStrBuff, "936=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NetworkStatusResponseType::toStrBuff[1024];
char NetworkStatusResponseTypeStrBuffInit = (memcpy(NetworkStatusResponseType::toStrBuff, "937=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoCollInquiryQualifier::toStrBuff[1024];
char NoCollInquiryQualifierStrBuffInit = (memcpy(NoCollInquiryQualifier::toStrBuff, "938=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TrdRptStatus::toStrBuff[1024];
char TrdRptStatusStrBuffInit = (memcpy(TrdRptStatus::toStrBuff, "939=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char AffirmStatus::toStrBuff[1024];
char AffirmStatusStrBuffInit = (memcpy(AffirmStatus::toStrBuff, "940=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char UnderlyingStrikeCurrency::toStrBuff[1024];
char UnderlyingStrikeCurrencyStrBuffInit = (memcpy(UnderlyingStrikeCurrency::toStrBuff, "941=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegStrikeCurrency::toStrBuff[1024];
char LegStrikeCurrencyStrBuffInit = (memcpy(LegStrikeCurrency::toStrBuff, "942=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char TimeBracket::toStrBuff[1024];
char TimeBracketStrBuffInit = (memcpy(TimeBracket::toStrBuff, "943=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollAction::toStrBuff[1024];
char CollActionStrBuffInit = (memcpy(CollAction::toStrBuff, "944=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollInquiryStatus::toStrBuff[1024];
char CollInquiryStatusStrBuffInit = (memcpy(CollInquiryStatus::toStrBuff, "945=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char CollInquiryResult::toStrBuff[1024];
char CollInquiryResultStrBuffInit = (memcpy(CollInquiryResult::toStrBuff, "946=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char StrikeCurrency::toStrBuff[1024];
char StrikeCurrencyStrBuffInit = (memcpy(StrikeCurrency::toStrBuff, "947=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoNested3PartyIDs::toStrBuff[1024];
char NoNested3PartyIDsStrBuffInit = (memcpy(NoNested3PartyIDs::toStrBuff, "948=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested3PartyID::toStrBuff[1024];
char Nested3PartyIDStrBuffInit = (memcpy(Nested3PartyID::toStrBuff, "949=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested3PartyIDSource::toStrBuff[1024];
char Nested3PartyIDSourceStrBuffInit = (memcpy(Nested3PartyIDSource::toStrBuff, "950=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested3PartyRole::toStrBuff[1024];
char Nested3PartyRoleStrBuffInit = (memcpy(Nested3PartyRole::toStrBuff, "951=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char NoNested3PartySubIDs::toStrBuff[1024];
char NoNested3PartySubIDsStrBuffInit = (memcpy(NoNested3PartySubIDs::toStrBuff, "952=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested3PartySubID::toStrBuff[1024];
char Nested3PartySubIDStrBuffInit = (memcpy(Nested3PartySubID::toStrBuff, "953=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char Nested3PartySubIDType::toStrBuff[1024];
char Nested3PartySubIDTypeStrBuffInit = (memcpy(Nested3PartySubIDType::toStrBuff, "954=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegContractSettlMonth::toStrBuff[1024];
char LegContractSettlMonthStrBuffInit = (memcpy(LegContractSettlMonth::toStrBuff, "955=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

char LegInterestAccrualDate::toStrBuff[1024];
char LegInterestAccrualDateStrBuffInit = (memcpy(LegInterestAccrualDate::toStrBuff, "956=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 10), 0);

std::string toHuman(int tag, const char* val)
{
  std::string res;
  bool foundValue = false;
  switch(tag)
  {
  case FIX::Account::tag: {
    FIX::Account::Value value(val);
    res = "Account = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvId::tag: {
    FIX::AdvId::Value value(val);
    res = "AdvId = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvRefID::tag: {
    FIX::AdvRefID::Value value(val);
    res = "AdvRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvSide::tag: {
    FIX::AdvSide::Value value(val);
    res = "AdvSide = ";
    if(value.val == FIX::AdvSide::valBuy)
    {
      foundValue = true;
      res += "Buy";
    }
    if(value.val == FIX::AdvSide::valSell)
    {
      foundValue = true;
      res += "Sell";
    }
    if(value.val == FIX::AdvSide::valCross)
    {
      foundValue = true;
      res += "Cross";
    }
    if(value.val == FIX::AdvSide::valTrade)
    {
      foundValue = true;
      res += "Trade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdvTransType::tag: {
    FIX::AdvTransType::Value value(val);
    res = "AdvTransType = ";
    if(!strcmp(value.val, FIX::AdvTransType::valNew))
    {
      foundValue = true;
      res += "New";
    }
    if(!strcmp(value.val, FIX::AdvTransType::valCancel))
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!strcmp(value.val, FIX::AdvTransType::valReplace))
    {
      foundValue = true;
      res += "Replace";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgPx::tag: {
    FIX::AvgPx::Value value(val);
    res = "AvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BeginSeqNo::tag: {
    FIX::BeginSeqNo::Value value(val);
    res = "BeginSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BeginString::tag: {
    FIX::BeginString::Value value(val);
    res = "BeginString = ";
    if(!strcmp(value.val, FIX::BeginString::valFIX44))
    {
      foundValue = true;
      res += "FIX44";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BodyLength::tag: {
    FIX::BodyLength::Value value(val);
    res = "BodyLength = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CheckSum::tag: {
    FIX::CheckSum::Value value(val);
    res = "CheckSum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClOrdID::tag: {
    FIX::ClOrdID::Value value(val);
    res = "ClOrdID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Commission::tag: {
    FIX::Commission::Value value(val);
    res = "Commission = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CommType::tag: {
    FIX::CommType::Value value(val);
    res = "CommType = ";
    if(value.val == FIX::CommType::valPerUnit)
    {
      foundValue = true;
      res += "PerUnit";
    }
    if(value.val == FIX::CommType::valPercentage)
    {
      foundValue = true;
      res += "Percentage";
    }
    if(value.val == FIX::CommType::valAbsolute)
    {
      foundValue = true;
      res += "Absolute";
    }
    if(value.val == FIX::CommType::valPercentageWaivedCashDiscount)
    {
      foundValue = true;
      res += "PercentageWaivedCashDiscount";
    }
    if(value.val == FIX::CommType::valPercentageWaivedEnhancedUnits)
    {
      foundValue = true;
      res += "PercentageWaivedEnhancedUnits";
    }
    if(value.val == FIX::CommType::valPointsPerBondOrOrContractSupplyContractMultiplier)
    {
      foundValue = true;
      res += "PointsPerBondOrOrContractSupplyContractMultiplier";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CumQty::tag: {
    FIX::CumQty::Value value(val);
    res = "CumQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Currency::tag: {
    FIX::Currency::Value value(val);
    res = "Currency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndSeqNo::tag: {
    FIX::EndSeqNo::Value value(val);
    res = "EndSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecID::tag: {
    FIX::ExecID::Value value(val);
    res = "ExecID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecInst::tag: {
    FIX::ExecInst::Value value(val);
    res = "ExecInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecRefID::tag: {
    FIX::ExecRefID::Value value(val);
    res = "ExecRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecTransType::tag: {
    FIX::ExecTransType::Value value(val);
    res = "ExecTransType = ";
    if(value.val == FIX::ExecTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::ExecTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value.val == FIX::ExecTransType::valCorrect)
    {
      foundValue = true;
      res += "Correct";
    }
    if(value.val == FIX::ExecTransType::valStatus)
    {
      foundValue = true;
      res += "Status";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::HandlInst::tag: {
    FIX::HandlInst::Value value(val);
    res = "HandlInst = ";
    if(value.val == FIX::HandlInst::valAutomatedExecutionOrderPrivateNoBrokerIntervention)
    {
      foundValue = true;
      res += "AutomatedExecutionOrderPrivateNoBrokerIntervention";
    }
    if(value.val == FIX::HandlInst::valAutomatedExecutionOrderPublicBrokerInterventionOK)
    {
      foundValue = true;
      res += "AutomatedExecutionOrderPublicBrokerInterventionOK";
    }
    if(value.val == FIX::HandlInst::valManualOrderBestExecution)
    {
      foundValue = true;
      res += "ManualOrderBestExecution";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityIDSource::tag: {
    FIX::SecurityIDSource::Value value(val);
    res = "SecurityIDSource = ";
    if(!strcmp(value.val, FIX::SecurityIDSource::valCUSIP))
    {
      foundValue = true;
      res += "CUSIP";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valSEDOL))
    {
      foundValue = true;
      res += "SEDOL";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valQUIK))
    {
      foundValue = true;
      res += "QUIK";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valISINNumber))
    {
      foundValue = true;
      res += "ISINNumber";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valRICCode))
    {
      foundValue = true;
      res += "RICCode";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valISOCurrencyCode))
    {
      foundValue = true;
      res += "ISOCurrencyCode";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valISOCountryCode))
    {
      foundValue = true;
      res += "ISOCountryCode";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valExchangeSymbol))
    {
      foundValue = true;
      res += "ExchangeSymbol";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valConsolidatedTapeAssociationCTASymbol))
    {
      foundValue = true;
      res += "ConsolidatedTapeAssociationCTASymbol";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valBloombergSymbol))
    {
      foundValue = true;
      res += "BloombergSymbol";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valWertpapier))
    {
      foundValue = true;
      res += "Wertpapier";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valDutch))
    {
      foundValue = true;
      res += "Dutch";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valValoren))
    {
      foundValue = true;
      res += "Valoren";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valSicovam))
    {
      foundValue = true;
      res += "Sicovam";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valBelgian))
    {
      foundValue = true;
      res += "Belgian";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valCommon))
    {
      foundValue = true;
      res += "Common";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valClearingHouseOrClearingOrganization))
    {
      foundValue = true;
      res += "ClearingHouseOrClearingOrganization";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valISDAOrFpMLProductSpecification))
    {
      foundValue = true;
      res += "ISDAOrFpMLProductSpecification";
    }
    if(!strcmp(value.val, FIX::SecurityIDSource::valOptionsPriceReportingAuthority))
    {
      foundValue = true;
      res += "OptionsPriceReportingAuthority";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIID::tag: {
    FIX::IOIID::Value value(val);
    res = "IOIID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIOthSv::tag: {
    FIX::IOIOthSv::Value value(val);
    res = "IOIOthSv = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIQltyInd::tag: {
    FIX::IOIQltyInd::Value value(val);
    res = "IOIQltyInd = ";
    if(value.val == FIX::IOIQltyInd::valLow)
    {
      foundValue = true;
      res += "Low";
    }
    if(value.val == FIX::IOIQltyInd::valMedium)
    {
      foundValue = true;
      res += "Medium";
    }
    if(value.val == FIX::IOIQltyInd::valHigh)
    {
      foundValue = true;
      res += "High";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIRefID::tag: {
    FIX::IOIRefID::Value value(val);
    res = "IOIRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIQty::tag: {
    FIX::IOIQty::Value value(val);
    res = "IOIQty = ";
    if(!strcmp(value.val, FIX::IOIQty::valZero))
    {
      foundValue = true;
      res += "Zero";
    }
    if(!strcmp(value.val, FIX::IOIQty::valSmall))
    {
      foundValue = true;
      res += "Small";
    }
    if(!strcmp(value.val, FIX::IOIQty::valMedium))
    {
      foundValue = true;
      res += "Medium";
    }
    if(!strcmp(value.val, FIX::IOIQty::valLarge))
    {
      foundValue = true;
      res += "Large";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOITransType::tag: {
    FIX::IOITransType::Value value(val);
    res = "IOITransType = ";
    if(value.val == FIX::IOITransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::IOITransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value.val == FIX::IOITransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastCapacity::tag: {
    FIX::LastCapacity::Value value(val);
    res = "LastCapacity = ";
    if(value.val == FIX::LastCapacity::valAgent)
    {
      foundValue = true;
      res += "Agent";
    }
    if(value.val == FIX::LastCapacity::valCrossAsAgent)
    {
      foundValue = true;
      res += "CrossAsAgent";
    }
    if(value.val == FIX::LastCapacity::valCrossAsPrincipal)
    {
      foundValue = true;
      res += "CrossAsPrincipal";
    }
    if(value.val == FIX::LastCapacity::valPrincipal)
    {
      foundValue = true;
      res += "Principal";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastMkt::tag: {
    FIX::LastMkt::Value value(val);
    res = "LastMkt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastPx::tag: {
    FIX::LastPx::Value value(val);
    res = "LastPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastQty::tag: {
    FIX::LastQty::Value value(val);
    res = "LastQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLinesOfText::tag: {
    FIX::NoLinesOfText::Value value(val);
    res = "NoLinesOfText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MsgSeqNum::tag: {
    FIX::MsgSeqNum::Value value(val);
    res = "MsgSeqNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MsgType::tag: {
    FIX::MsgType::Value value(val);
    res = "MsgType = ";
    if(!strcmp(value.val, FIX::MsgType::valHeartbeat))
    {
      foundValue = true;
      res += "Heartbeat";
    }
    if(!strcmp(value.val, FIX::MsgType::valTestRequest))
    {
      foundValue = true;
      res += "TestRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valResendRequest))
    {
      foundValue = true;
      res += "ResendRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valReject))
    {
      foundValue = true;
      res += "Reject";
    }
    if(!strcmp(value.val, FIX::MsgType::valSequenceReset))
    {
      foundValue = true;
      res += "SequenceReset";
    }
    if(!strcmp(value.val, FIX::MsgType::valLogout))
    {
      foundValue = true;
      res += "Logout";
    }
    if(!strcmp(value.val, FIX::MsgType::valIndicationOfInterest))
    {
      foundValue = true;
      res += "IndicationOfInterest";
    }
    if(!strcmp(value.val, FIX::MsgType::valAdvertisement))
    {
      foundValue = true;
      res += "Advertisement";
    }
    if(!strcmp(value.val, FIX::MsgType::valExecutionReport))
    {
      foundValue = true;
      res += "ExecutionReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderCancelReject))
    {
      foundValue = true;
      res += "OrderCancelReject";
    }
    if(!strcmp(value.val, FIX::MsgType::valLogon))
    {
      foundValue = true;
      res += "Logon";
    }
    if(!strcmp(value.val, FIX::MsgType::valNews))
    {
      foundValue = true;
      res += "News";
    }
    if(!strcmp(value.val, FIX::MsgType::valEmail))
    {
      foundValue = true;
      res += "Email";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderSingle))
    {
      foundValue = true;
      res += "OrderSingle";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderList))
    {
      foundValue = true;
      res += "OrderList";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderCancelRequest))
    {
      foundValue = true;
      res += "OrderCancelRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderCancelOrReplaceRequest))
    {
      foundValue = true;
      res += "OrderCancelOrReplaceRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderStatusRequest))
    {
      foundValue = true;
      res += "OrderStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valAllocationInstruction))
    {
      foundValue = true;
      res += "AllocationInstruction";
    }
    if(!strcmp(value.val, FIX::MsgType::valListCancelRequest))
    {
      foundValue = true;
      res += "ListCancelRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valListExecute))
    {
      foundValue = true;
      res += "ListExecute";
    }
    if(!strcmp(value.val, FIX::MsgType::valListStatusRequest))
    {
      foundValue = true;
      res += "ListStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valListStatus))
    {
      foundValue = true;
      res += "ListStatus";
    }
    if(!strcmp(value.val, FIX::MsgType::valAllocationInstructionAck))
    {
      foundValue = true;
      res += "AllocationInstructionAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valDontKnowTrade))
    {
      foundValue = true;
      res += "DontKnowTrade";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuoteRequest))
    {
      foundValue = true;
      res += "QuoteRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuote))
    {
      foundValue = true;
      res += "Quote";
    }
    if(!strcmp(value.val, FIX::MsgType::valSettlementInstructions))
    {
      foundValue = true;
      res += "SettlementInstructions";
    }
    if(!strcmp(value.val, FIX::MsgType::valMarketDataRequest))
    {
      foundValue = true;
      res += "MarketDataRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valMarketDataSnapshotOrFullRefresh))
    {
      foundValue = true;
      res += "MarketDataSnapshotOrFullRefresh";
    }
    if(!strcmp(value.val, FIX::MsgType::valMarketDataIncrementalRefresh))
    {
      foundValue = true;
      res += "MarketDataIncrementalRefresh";
    }
    if(!strcmp(value.val, FIX::MsgType::valMarketDataRequestReject))
    {
      foundValue = true;
      res += "MarketDataRequestReject";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuoteCancel))
    {
      foundValue = true;
      res += "QuoteCancel";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuoteStatusRequest))
    {
      foundValue = true;
      res += "QuoteStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valMassQuoteAcknowledgement))
    {
      foundValue = true;
      res += "MassQuoteAcknowledgement";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityDefinitionRequest))
    {
      foundValue = true;
      res += "SecurityDefinitionRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityDefinition))
    {
      foundValue = true;
      res += "SecurityDefinition";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityStatusRequest))
    {
      foundValue = true;
      res += "SecurityStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityStatus))
    {
      foundValue = true;
      res += "SecurityStatus";
    }
    if(!strcmp(value.val, FIX::MsgType::valTradingSessionStatusRequest))
    {
      foundValue = true;
      res += "TradingSessionStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valTradingSessionStatus))
    {
      foundValue = true;
      res += "TradingSessionStatus";
    }
    if(!strcmp(value.val, FIX::MsgType::valMassQuote))
    {
      foundValue = true;
      res += "MassQuote";
    }
    if(!strcmp(value.val, FIX::MsgType::valBusinessMessageReject))
    {
      foundValue = true;
      res += "BusinessMessageReject";
    }
    if(!strcmp(value.val, FIX::MsgType::valBidRequest))
    {
      foundValue = true;
      res += "BidRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valBidResponse))
    {
      foundValue = true;
      res += "BidResponse";
    }
    if(!strcmp(value.val, FIX::MsgType::valListStrikePrice))
    {
      foundValue = true;
      res += "ListStrikePrice";
    }
    if(!strcmp(value.val, FIX::MsgType::valXMLMessage))
    {
      foundValue = true;
      res += "XMLMessage";
    }
    if(!strcmp(value.val, FIX::MsgType::valRegistrationInstructions))
    {
      foundValue = true;
      res += "RegistrationInstructions";
    }
    if(!strcmp(value.val, FIX::MsgType::valRegistrationInstructionsResponse))
    {
      foundValue = true;
      res += "RegistrationInstructionsResponse";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderMassCancelRequest))
    {
      foundValue = true;
      res += "OrderMassCancelRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderMassCancelReport))
    {
      foundValue = true;
      res += "OrderMassCancelReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valNewOrderCross))
    {
      foundValue = true;
      res += "NewOrderCross";
    }
    if(!strcmp(value.val, FIX::MsgType::valCrossOrderCancelOrReplaceRequest))
    {
      foundValue = true;
      res += "CrossOrderCancelOrReplaceRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valCrossOrderCancelRequest))
    {
      foundValue = true;
      res += "CrossOrderCancelRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityTypeRequest))
    {
      foundValue = true;
      res += "SecurityTypeRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityTypes))
    {
      foundValue = true;
      res += "SecurityTypes";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityListRequest))
    {
      foundValue = true;
      res += "SecurityListRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valSecurityList))
    {
      foundValue = true;
      res += "SecurityList";
    }
    if(!strcmp(value.val, FIX::MsgType::valDerivativeSecurityListRequest))
    {
      foundValue = true;
      res += "DerivativeSecurityListRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valDerivativeSecurityList))
    {
      foundValue = true;
      res += "DerivativeSecurityList";
    }
    if(!strcmp(value.val, FIX::MsgType::valNewOrderMultileg))
    {
      foundValue = true;
      res += "NewOrderMultileg";
    }
    if(!strcmp(value.val, FIX::MsgType::valMultilegOrderCancelOrReplace))
    {
      foundValue = true;
      res += "MultilegOrderCancelOrReplace";
    }
    if(!strcmp(value.val, FIX::MsgType::valTradeCaptureReportRequest))
    {
      foundValue = true;
      res += "TradeCaptureReportRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valTradeCaptureReport))
    {
      foundValue = true;
      res += "TradeCaptureReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valOrderMassStatusRequest))
    {
      foundValue = true;
      res += "OrderMassStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuoteRequestReject))
    {
      foundValue = true;
      res += "QuoteRequestReject";
    }
    if(!strcmp(value.val, FIX::MsgType::valRFQRequest))
    {
      foundValue = true;
      res += "RFQRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuoteStatusReport))
    {
      foundValue = true;
      res += "QuoteStatusReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valQuoteResponse))
    {
      foundValue = true;
      res += "QuoteResponse";
    }
    if(!strcmp(value.val, FIX::MsgType::valConfirmation))
    {
      foundValue = true;
      res += "Confirmation";
    }
    if(!strcmp(value.val, FIX::MsgType::valPositionMaintenanceRequest))
    {
      foundValue = true;
      res += "PositionMaintenanceRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valPositionMaintenanceReport))
    {
      foundValue = true;
      res += "PositionMaintenanceReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valRequestForPositions))
    {
      foundValue = true;
      res += "RequestForPositions";
    }
    if(!strcmp(value.val, FIX::MsgType::valRequestForPositionsAck))
    {
      foundValue = true;
      res += "RequestForPositionsAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valPositionReport))
    {
      foundValue = true;
      res += "PositionReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valTradeCaptureReportRequestAck))
    {
      foundValue = true;
      res += "TradeCaptureReportRequestAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valTradeCaptureReportAck))
    {
      foundValue = true;
      res += "TradeCaptureReportAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valAllocationReport))
    {
      foundValue = true;
      res += "AllocationReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valAllocationReportAck))
    {
      foundValue = true;
      res += "AllocationReportAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valConfirmationAck))
    {
      foundValue = true;
      res += "ConfirmationAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valSettlementInstructionRequest))
    {
      foundValue = true;
      res += "SettlementInstructionRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valAssignmentReport))
    {
      foundValue = true;
      res += "AssignmentReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valCollateralRequest))
    {
      foundValue = true;
      res += "CollateralRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valCollateralAssignment))
    {
      foundValue = true;
      res += "CollateralAssignment";
    }
    if(!strcmp(value.val, FIX::MsgType::valCollateralResponse))
    {
      foundValue = true;
      res += "CollateralResponse";
    }
    if(!strcmp(value.val, FIX::MsgType::valCollateralReport))
    {
      foundValue = true;
      res += "CollateralReport";
    }
    if(!strcmp(value.val, FIX::MsgType::valCollateralInquiry))
    {
      foundValue = true;
      res += "CollateralInquiry";
    }
    if(!strcmp(value.val, FIX::MsgType::valNetworkCounterpartySystemStatusRequest))
    {
      foundValue = true;
      res += "NetworkCounterpartySystemStatusRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valNetworkCounterpartySystemStatusResponse))
    {
      foundValue = true;
      res += "NetworkCounterpartySystemStatusResponse";
    }
    if(!strcmp(value.val, FIX::MsgType::valUserRequest))
    {
      foundValue = true;
      res += "UserRequest";
    }
    if(!strcmp(value.val, FIX::MsgType::valUserResponse))
    {
      foundValue = true;
      res += "UserResponse";
    }
    if(!strcmp(value.val, FIX::MsgType::valCollateralInquiryAck))
    {
      foundValue = true;
      res += "CollateralInquiryAck";
    }
    if(!strcmp(value.val, FIX::MsgType::valConfirmationRequest))
    {
      foundValue = true;
      res += "ConfirmationRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NewSeqNo::tag: {
    FIX::NewSeqNo::Value value(val);
    res = "NewSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderID::tag: {
    FIX::OrderID::Value value(val);
    res = "OrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderQty::tag: {
    FIX::OrderQty::Value value(val);
    res = "OrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdStatus::tag: {
    FIX::OrdStatus::Value value(val);
    res = "OrdStatus = ";
    if(value.val == FIX::OrdStatus::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::OrdStatus::valPartiallyFilled)
    {
      foundValue = true;
      res += "PartiallyFilled";
    }
    if(value.val == FIX::OrdStatus::valFilled)
    {
      foundValue = true;
      res += "Filled";
    }
    if(value.val == FIX::OrdStatus::valDoneForDay)
    {
      foundValue = true;
      res += "DoneForDay";
    }
    if(value.val == FIX::OrdStatus::valCanceled)
    {
      foundValue = true;
      res += "Canceled";
    }
    if(value.val == FIX::OrdStatus::valReplaced)
    {
      foundValue = true;
      res += "Replaced";
    }
    if(value.val == FIX::OrdStatus::valPendingCancel)
    {
      foundValue = true;
      res += "PendingCancel";
    }
    if(value.val == FIX::OrdStatus::valStopped)
    {
      foundValue = true;
      res += "Stopped";
    }
    if(value.val == FIX::OrdStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value.val == FIX::OrdStatus::valSuspended)
    {
      foundValue = true;
      res += "Suspended";
    }
    if(value.val == FIX::OrdStatus::valPendingNew)
    {
      foundValue = true;
      res += "PendingNew";
    }
    if(value.val == FIX::OrdStatus::valCalculated)
    {
      foundValue = true;
      res += "Calculated";
    }
    if(value.val == FIX::OrdStatus::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value.val == FIX::OrdStatus::valAcceptedForBidding)
    {
      foundValue = true;
      res += "AcceptedForBidding";
    }
    if(value.val == FIX::OrdStatus::valPendingReplace)
    {
      foundValue = true;
      res += "PendingReplace";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdType::tag: {
    FIX::OrdType::Value value(val);
    res = "OrdType = ";
    if(value.val == FIX::OrdType::valMarket)
    {
      foundValue = true;
      res += "Market";
    }
    if(value.val == FIX::OrdType::valLimit)
    {
      foundValue = true;
      res += "Limit";
    }
    if(value.val == FIX::OrdType::valStop)
    {
      foundValue = true;
      res += "Stop";
    }
    if(value.val == FIX::OrdType::valStopLimit)
    {
      foundValue = true;
      res += "StopLimit";
    }
    if(value.val == FIX::OrdType::valMarketOnClose)
    {
      foundValue = true;
      res += "MarketOnClose";
    }
    if(value.val == FIX::OrdType::valWithOrWithout)
    {
      foundValue = true;
      res += "WithOrWithout";
    }
    if(value.val == FIX::OrdType::valLimitOrBetter)
    {
      foundValue = true;
      res += "LimitOrBetter";
    }
    if(value.val == FIX::OrdType::valLimitWithOrWithout)
    {
      foundValue = true;
      res += "LimitWithOrWithout";
    }
    if(value.val == FIX::OrdType::valOnBasis)
    {
      foundValue = true;
      res += "OnBasis";
    }
    if(value.val == FIX::OrdType::valOnClose)
    {
      foundValue = true;
      res += "OnClose";
    }
    if(value.val == FIX::OrdType::valLimitOnClose)
    {
      foundValue = true;
      res += "LimitOnClose";
    }
    if(value.val == FIX::OrdType::valForexMarket)
    {
      foundValue = true;
      res += "ForexMarket";
    }
    if(value.val == FIX::OrdType::valPreviouslyQuoted)
    {
      foundValue = true;
      res += "PreviouslyQuoted";
    }
    if(value.val == FIX::OrdType::valPreviouslyIndicated)
    {
      foundValue = true;
      res += "PreviouslyIndicated";
    }
    if(value.val == FIX::OrdType::valForexLimit)
    {
      foundValue = true;
      res += "ForexLimit";
    }
    if(value.val == FIX::OrdType::valForexSwap)
    {
      foundValue = true;
      res += "ForexSwap";
    }
    if(value.val == FIX::OrdType::valForexPreviouslyQuoted)
    {
      foundValue = true;
      res += "ForexPreviouslyQuoted";
    }
    if(value.val == FIX::OrdType::valFunari)
    {
      foundValue = true;
      res += "Funari";
    }
    if(value.val == FIX::OrdType::valMarketIfTouched)
    {
      foundValue = true;
      res += "MarketIfTouched";
    }
    if(value.val == FIX::OrdType::valMarketWithLeftoverAsLimit)
    {
      foundValue = true;
      res += "MarketWithLeftoverAsLimit";
    }
    if(value.val == FIX::OrdType::valPreviousFundValuationPointHistoricPricing)
    {
      foundValue = true;
      res += "PreviousFundValuationPointHistoricPricing";
    }
    if(value.val == FIX::OrdType::valNextFundValuationPointForwardPricing)
    {
      foundValue = true;
      res += "NextFundValuationPointForwardPricing";
    }
    if(value.val == FIX::OrdType::valPegged)
    {
      foundValue = true;
      res += "Pegged";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigClOrdID::tag: {
    FIX::OrigClOrdID::Value value(val);
    res = "OrigClOrdID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigTime::tag: {
    FIX::OrigTime::Value value(val);
    res = "OrigTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PossDupFlag::tag: {
    FIX::PossDupFlag::Value value(val);
    res = "PossDupFlag = ";
    if(value.val == FIX::PossDupFlag::valPossibleDuplicate)
    {
      foundValue = true;
      res += "PossibleDuplicate";
    }
    if(value.val == FIX::PossDupFlag::valOriginalTransmission)
    {
      foundValue = true;
      res += "OriginalTransmission";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Price::tag: {
    FIX::Price::Value value(val);
    res = "Price = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefSeqNum::tag: {
    FIX::RefSeqNum::Value value(val);
    res = "RefSeqNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RelatdSy::tag: {
    FIX::RelatdSy::Value value(val);
    res = "RelatdSy = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Rule80A::tag: {
    FIX::Rule80A::Value value(val);
    res = "Rule80A = ";
    if(value.val == FIX::Rule80A::valAgencySingleOrder)
    {
      foundValue = true;
      res += "AgencySingleOrder";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionAType)
    {
      foundValue = true;
      res += "ShortExemptTransactionAType";
    }
    if(value.val == FIX::Rule80A::valProgramOrderNonIndexArbForMemberFirmOrorg)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForMemberFirmOrorg";
    }
    if(value.val == FIX::Rule80A::valProgramOrderIndexArbForMemberFirmOrorg)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForMemberFirmOrorg";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionForPrincipal)
    {
      foundValue = true;
      res += "ShortExemptTransactionForPrincipal";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionWType)
    {
      foundValue = true;
      res += "ShortExemptTransactionWType";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionIType)
    {
      foundValue = true;
      res += "ShortExemptTransactionIType";
    }
    if(value.val == FIX::Rule80A::valIndividualInvestorSingleOrder)
    {
      foundValue = true;
      res += "IndividualInvestorSingleOrder";
    }
    if(value.val == FIX::Rule80A::valProgramOrderIndexArbForIndividualCustomer)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForIndividualCustomer";
    }
    if(value.val == FIX::Rule80A::valProgramOrderNonIndexArbForIndividualCustomer)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForIndividualCustomer";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade)
    {
      foundValue = true;
      res += "ShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade";
    }
    if(value.val == FIX::Rule80A::valProgramOrderIndexArbForOtherMember)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForOtherMember";
    }
    if(value.val == FIX::Rule80A::valProgramOrderNonIndexArbForOtherMember)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForOtherMember";
    }
    if(value.val == FIX::Rule80A::valProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember)
    {
      foundValue = true;
      res += "ProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember";
    }
    if(value.val == FIX::Rule80A::valPrincipal)
    {
      foundValue = true;
      res += "Principal";
    }
    if(value.val == FIX::Rule80A::valTransactionsForTheAccountOfANonMembercompetingMarketMaker)
    {
      foundValue = true;
      res += "TransactionsForTheAccountOfANonMembercompetingMarketMaker";
    }
    if(value.val == FIX::Rule80A::valSpecialistTrades)
    {
      foundValue = true;
      res += "SpecialistTrades";
    }
    if(value.val == FIX::Rule80A::valTransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker)
    {
      foundValue = true;
      res += "TransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker";
    }
    if(value.val == FIX::Rule80A::valProgramOrderIndexArbForOtherAgency)
    {
      foundValue = true;
      res += "ProgramOrderIndexArbForOtherAgency";
    }
    if(value.val == FIX::Rule80A::valAllOtherOrdersAsAgentForOtherMember)
    {
      foundValue = true;
      res += "AllOtherOrdersAsAgentForOtherMember";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade)
    {
      foundValue = true;
      res += "ShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade";
    }
    if(value.val == FIX::Rule80A::valProgramOrderNonIndexArbForOtherAgency)
    {
      foundValue = true;
      res += "ProgramOrderNonIndexArbForOtherAgency";
    }
    if(value.val == FIX::Rule80A::valShortExemptTransactionForNonMemberCompetingMarketMaker)
    {
      foundValue = true;
      res += "ShortExemptTransactionForNonMemberCompetingMarketMaker";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityID::tag: {
    FIX::SecurityID::Value value(val);
    res = "SecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SenderCompID::tag: {
    FIX::SenderCompID::Value value(val);
    res = "SenderCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SenderSubID::tag: {
    FIX::SenderSubID::Value value(val);
    res = "SenderSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SendingDat::tag: {
    FIX::SendingDat::Value value(val);
    res = "SendingDat = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SendingTime::tag: {
    FIX::SendingTime::Value value(val);
    res = "SendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Quantity::tag: {
    FIX::Quantity::Value value(val);
    res = "Quantity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Side::tag: {
    FIX::Side::Value value(val);
    res = "Side = ";
    if(value.val == FIX::Side::valBuy)
    {
      foundValue = true;
      res += "Buy";
    }
    if(value.val == FIX::Side::valSell)
    {
      foundValue = true;
      res += "Sell";
    }
    if(value.val == FIX::Side::valBuyMinus)
    {
      foundValue = true;
      res += "BuyMinus";
    }
    if(value.val == FIX::Side::valSellPlus)
    {
      foundValue = true;
      res += "SellPlus";
    }
    if(value.val == FIX::Side::valSellShort)
    {
      foundValue = true;
      res += "SellShort";
    }
    if(value.val == FIX::Side::valSellShortExempt)
    {
      foundValue = true;
      res += "SellShortExempt";
    }
    if(value.val == FIX::Side::valUndisclosed)
    {
      foundValue = true;
      res += "Undisclosed";
    }
    if(value.val == FIX::Side::valCross)
    {
      foundValue = true;
      res += "Cross";
    }
    if(value.val == FIX::Side::valCrossShort)
    {
      foundValue = true;
      res += "CrossShort";
    }
    if(value.val == FIX::Side::valCrossShortExempt)
    {
      foundValue = true;
      res += "CrossShortExempt";
    }
    if(value.val == FIX::Side::valAsDefined)
    {
      foundValue = true;
      res += "AsDefined";
    }
    if(value.val == FIX::Side::valOpposite)
    {
      foundValue = true;
      res += "Opposite";
    }
    if(value.val == FIX::Side::valSubscribe)
    {
      foundValue = true;
      res += "Subscribe";
    }
    if(value.val == FIX::Side::valRedeem)
    {
      foundValue = true;
      res += "Redeem";
    }
    if(value.val == FIX::Side::valLend)
    {
      foundValue = true;
      res += "Lend";
    }
    if(value.val == FIX::Side::valBorrow)
    {
      foundValue = true;
      res += "Borrow";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Symbol::tag: {
    FIX::Symbol::Value value(val);
    res = "Symbol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetCompID::tag: {
    FIX::TargetCompID::Value value(val);
    res = "TargetCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetSubID::tag: {
    FIX::TargetSubID::Value value(val);
    res = "TargetSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Text::tag: {
    FIX::Text::Value value(val);
    res = "Text = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TimeInForce::tag: {
    FIX::TimeInForce::Value value(val);
    res = "TimeInForce = ";
    if(value.val == FIX::TimeInForce::valDay)
    {
      foundValue = true;
      res += "Day";
    }
    if(value.val == FIX::TimeInForce::valGoodTillCancel)
    {
      foundValue = true;
      res += "GoodTillCancel";
    }
    if(value.val == FIX::TimeInForce::valAtTheOpening)
    {
      foundValue = true;
      res += "AtTheOpening";
    }
    if(value.val == FIX::TimeInForce::valImmediateOrCancel)
    {
      foundValue = true;
      res += "ImmediateOrCancel";
    }
    if(value.val == FIX::TimeInForce::valFillOrKill)
    {
      foundValue = true;
      res += "FillOrKill";
    }
    if(value.val == FIX::TimeInForce::valGoodTillCrossing)
    {
      foundValue = true;
      res += "GoodTillCrossing";
    }
    if(value.val == FIX::TimeInForce::valGoodTillDate)
    {
      foundValue = true;
      res += "GoodTillDate";
    }
    if(value.val == FIX::TimeInForce::valAtTheClose)
    {
      foundValue = true;
      res += "AtTheClose";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TransactTime::tag: {
    FIX::TransactTime::Value value(val);
    res = "TransactTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Urgency::tag: {
    FIX::Urgency::Value value(val);
    res = "Urgency = ";
    if(value.val == FIX::Urgency::valNormal)
    {
      foundValue = true;
      res += "Normal";
    }
    if(value.val == FIX::Urgency::valFlash)
    {
      foundValue = true;
      res += "Flash";
    }
    if(value.val == FIX::Urgency::valBackground)
    {
      foundValue = true;
      res += "Background";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ValidUntilTime::tag: {
    FIX::ValidUntilTime::Value value(val);
    res = "ValidUntilTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlType::tag: {
    FIX::SettlType::Value value(val);
    res = "SettlType = ";
    if(value.val == FIX::SettlType::valRegular)
    {
      foundValue = true;
      res += "Regular";
    }
    if(value.val == FIX::SettlType::valCash)
    {
      foundValue = true;
      res += "Cash";
    }
    if(value.val == FIX::SettlType::valNextDay)
    {
      foundValue = true;
      res += "NextDay";
    }
    if(value.val == FIX::SettlType::valTplus2)
    {
      foundValue = true;
      res += "Tplus2";
    }
    if(value.val == FIX::SettlType::valTplus3)
    {
      foundValue = true;
      res += "Tplus3";
    }
    if(value.val == FIX::SettlType::valTplus4)
    {
      foundValue = true;
      res += "Tplus4";
    }
    if(value.val == FIX::SettlType::valFuture)
    {
      foundValue = true;
      res += "Future";
    }
    if(value.val == FIX::SettlType::valWhenAndIfIssued)
    {
      foundValue = true;
      res += "WhenAndIfIssued";
    }
    if(value.val == FIX::SettlType::valSellersOption)
    {
      foundValue = true;
      res += "SellersOption";
    }
    if(value.val == FIX::SettlType::valTplus5)
    {
      foundValue = true;
      res += "Tplus5";
    }
    if(value.val == FIX::SettlType::valTplusRemovedInFIX44Use2NextDay)
    {
      foundValue = true;
      res += "TplusRemovedInFIX44Use2NextDay";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDate::tag: {
    FIX::SettlDate::Value value(val);
    res = "SettlDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SymbolSfx::tag: {
    FIX::SymbolSfx::Value value(val);
    res = "SymbolSfx = ";
    if(!strcmp(value.val, FIX::SymbolSfx::valWhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN))
    {
      foundValue = true;
      res += "WhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN";
    }
    if(!strcmp(value.val, FIX::SymbolSfx::valAEUCPWithLumpSumInterestRatherThanDiscountPrice))
    {
      foundValue = true;
      res += "AEUCPWithLumpSumInterestRatherThanDiscountPrice";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListID::tag: {
    FIX::ListID::Value value(val);
    res = "ListID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListSeqNo::tag: {
    FIX::ListSeqNo::Value value(val);
    res = "ListSeqNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoOrders::tag: {
    FIX::TotNoOrders::Value value(val);
    res = "TotNoOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListExecInst::tag: {
    FIX::ListExecInst::Value value(val);
    res = "ListExecInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocID::tag: {
    FIX::AllocID::Value value(val);
    res = "AllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocTransType::tag: {
    FIX::AllocTransType::Value value(val);
    res = "AllocTransType = ";
    if(value.val == FIX::AllocTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::AllocTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value.val == FIX::AllocTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value.val == FIX::AllocTransType::valPreliminarywithoutMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "PreliminarywithoutMiscFeesAndNetMoney";
    }
    if(value.val == FIX::AllocTransType::valCalculatedIncludesMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "CalculatedIncludesMiscFeesAndNetMoney";
    }
    if(value.val == FIX::AllocTransType::valCalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "CalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefAllocID::tag: {
    FIX::RefAllocID::Value value(val);
    res = "RefAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoOrders::tag: {
    FIX::NoOrders::Value value(val);
    res = "NoOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgPxPrecision::tag: {
    FIX::AvgPxPrecision::Value value(val);
    res = "AvgPxPrecision = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeDate::tag: {
    FIX::TradeDate::Value value(val);
    res = "TradeDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecBroker::tag: {
    FIX::ExecBroker::Value value(val);
    res = "ExecBroker = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PositionEffect::tag: {
    FIX::PositionEffect::Value value(val);
    res = "PositionEffect = ";
    if(value.val == FIX::PositionEffect::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(value.val == FIX::PositionEffect::valClose)
    {
      foundValue = true;
      res += "Close";
    }
    if(value.val == FIX::PositionEffect::valRolled)
    {
      foundValue = true;
      res += "Rolled";
    }
    if(value.val == FIX::PositionEffect::valFIFO)
    {
      foundValue = true;
      res += "FIFO";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoAllocs::tag: {
    FIX::NoAllocs::Value value(val);
    res = "NoAllocs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAccount::tag: {
    FIX::AllocAccount::Value value(val);
    res = "AllocAccount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocQty::tag: {
    FIX::AllocQty::Value value(val);
    res = "AllocQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ProcessCode::tag: {
    FIX::ProcessCode::Value value(val);
    res = "ProcessCode = ";
    if(value.val == FIX::ProcessCode::valRegular)
    {
      foundValue = true;
      res += "Regular";
    }
    if(value.val == FIX::ProcessCode::valSoftDollar)
    {
      foundValue = true;
      res += "SoftDollar";
    }
    if(value.val == FIX::ProcessCode::valStepIn)
    {
      foundValue = true;
      res += "StepIn";
    }
    if(value.val == FIX::ProcessCode::valStepOut)
    {
      foundValue = true;
      res += "StepOut";
    }
    if(value.val == FIX::ProcessCode::valSoftDollarStepIn)
    {
      foundValue = true;
      res += "SoftDollarStepIn";
    }
    if(value.val == FIX::ProcessCode::valSoftDollarStepOut)
    {
      foundValue = true;
      res += "SoftDollarStepOut";
    }
    if(value.val == FIX::ProcessCode::valPlanSponsor)
    {
      foundValue = true;
      res += "PlanSponsor";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRpts::tag: {
    FIX::NoRpts::Value value(val);
    res = "NoRpts = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RptSeq::tag: {
    FIX::RptSeq::Value value(val);
    res = "RptSeq = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlQty::tag: {
    FIX::CxlQty::Value value(val);
    res = "CxlQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoDlvyInst::tag: {
    FIX::NoDlvyInst::Value value(val);
    res = "NoDlvyInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DlvyInst::tag: {
    FIX::DlvyInst::Value value(val);
    res = "DlvyInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocStatus::tag: {
    FIX::AllocStatus::Value value(val);
    res = "AllocStatus = ";
    if(value.val == FIX::AllocStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::AllocStatus::valBlockLevelReject)
    {
      foundValue = true;
      res += "BlockLevelReject";
    }
    if(value.val == FIX::AllocStatus::valAccountLevelReject)
    {
      foundValue = true;
      res += "AccountLevelReject";
    }
    if(value.val == FIX::AllocStatus::valReceived)
    {
      foundValue = true;
      res += "Received";
    }
    if(value.val == FIX::AllocStatus::valIncomplete)
    {
      foundValue = true;
      res += "Incomplete";
    }
    if(value.val == FIX::AllocStatus::valRejectedByIntermediary)
    {
      foundValue = true;
      res += "RejectedByIntermediary";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocRejCode::tag: {
    FIX::AllocRejCode::Value value(val);
    res = "AllocRejCode = ";
    if(value.val == FIX::AllocRejCode::valUnknownAccount)
    {
      foundValue = true;
      res += "UnknownAccount";
    }
    if(value.val == FIX::AllocRejCode::valIncorrectQuantity)
    {
      foundValue = true;
      res += "IncorrectQuantity";
    }
    if(value.val == FIX::AllocRejCode::valIncorrectAveragePrice)
    {
      foundValue = true;
      res += "IncorrectAveragePrice";
    }
    if(value.val == FIX::AllocRejCode::valUnknownExecutingBrokerMnemonic)
    {
      foundValue = true;
      res += "UnknownExecutingBrokerMnemonic";
    }
    if(value.val == FIX::AllocRejCode::valCommissionDifference)
    {
      foundValue = true;
      res += "CommissionDifference";
    }
    if(value.val == FIX::AllocRejCode::valUnknownOrderID)
    {
      foundValue = true;
      res += "UnknownOrderID";
    }
    if(value.val == FIX::AllocRejCode::valUnknownListID)
    {
      foundValue = true;
      res += "UnknownListID";
    }
    if(value.val == FIX::AllocRejCode::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value.val == FIX::AllocRejCode::valIncorrectAllocatedQuantity)
    {
      foundValue = true;
      res += "IncorrectAllocatedQuantity";
    }
    if(value.val == FIX::AllocRejCode::valCalculationDifference)
    {
      foundValue = true;
      res += "CalculationDifference";
    }
    if(value.val == FIX::AllocRejCode::valUnknownOrStaleExecID)
    {
      foundValue = true;
      res += "UnknownOrStaleExecID";
    }
    if(value.val == FIX::AllocRejCode::valMismatchedDataValue)
    {
      foundValue = true;
      res += "MismatchedDataValue";
    }
    if(value.val == FIX::AllocRejCode::valUnknownClOrdID)
    {
      foundValue = true;
      res += "UnknownClOrdID";
    }
    if(value.val == FIX::AllocRejCode::valWarehouseRequestRejected)
    {
      foundValue = true;
      res += "WarehouseRequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Signature::tag: {
    FIX::Signature::Value value(val);
    res = "Signature = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecureDataLen::tag: {
    FIX::SecureDataLen::Value value(val);
    res = "SecureDataLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecureData::tag: {
    FIX::SecureData::Value value(val);
    res = "SecureData = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BrokerOfCredit::tag: {
    FIX::BrokerOfCredit::Value value(val);
    res = "BrokerOfCredit = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SignatureLength::tag: {
    FIX::SignatureLength::Value value(val);
    res = "SignatureLength = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EmailType::tag: {
    FIX::EmailType::Value value(val);
    res = "EmailType = ";
    if(value.val == FIX::EmailType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::EmailType::valReply)
    {
      foundValue = true;
      res += "Reply";
    }
    if(value.val == FIX::EmailType::valAdminReply)
    {
      foundValue = true;
      res += "AdminReply";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RawDataLength::tag: {
    FIX::RawDataLength::Value value(val);
    res = "RawDataLength = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RawData::tag: {
    FIX::RawData::Value value(val);
    res = "RawData = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PossResend::tag: {
    FIX::PossResend::Value value(val);
    res = "PossResend = ";
    if(value.val == FIX::PossResend::valPossibleResend)
    {
      foundValue = true;
      res += "PossibleResend";
    }
    if(value.val == FIX::PossResend::valOriginalTransmission)
    {
      foundValue = true;
      res += "OriginalTransmission";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncryptMethod::tag: {
    FIX::EncryptMethod::Value value(val);
    res = "EncryptMethod = ";
    if(value.val == FIX::EncryptMethod::valNoneOrOther)
    {
      foundValue = true;
      res += "NoneOrOther";
    }
    if(value.val == FIX::EncryptMethod::valPKCS)
    {
      foundValue = true;
      res += "PKCS";
    }
    if(value.val == FIX::EncryptMethod::valDES)
    {
      foundValue = true;
      res += "DES";
    }
    if(value.val == FIX::EncryptMethod::valPKCSOrDES)
    {
      foundValue = true;
      res += "PKCSOrDES";
    }
    if(value.val == FIX::EncryptMethod::valPGPOrDES)
    {
      foundValue = true;
      res += "PGPOrDES";
    }
    if(value.val == FIX::EncryptMethod::valPGPOrDESMD5)
    {
      foundValue = true;
      res += "PGPOrDESMD5";
    }
    if(value.val == FIX::EncryptMethod::valPEMOrDESMD5)
    {
      foundValue = true;
      res += "PEMOrDESMD5";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StopPx::tag: {
    FIX::StopPx::Value value(val);
    res = "StopPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExDestination::tag: {
    FIX::ExDestination::Value value(val);
    res = "ExDestination = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlRejReason::tag: {
    FIX::CxlRejReason::Value value(val);
    res = "CxlRejReason = ";
    if(value.val == FIX::CxlRejReason::valTooLateToCancel)
    {
      foundValue = true;
      res += "TooLateToCancel";
    }
    if(value.val == FIX::CxlRejReason::valUnknownOrder)
    {
      foundValue = true;
      res += "UnknownOrder";
    }
    if(value.val == FIX::CxlRejReason::valBrokerOrExchangeOption)
    {
      foundValue = true;
      res += "BrokerOrExchangeOption";
    }
    if(value.val == FIX::CxlRejReason::valOrderAlreadyInPendingCancelOrPendingReplaceStatus)
    {
      foundValue = true;
      res += "OrderAlreadyInPendingCancelOrPendingReplaceStatus";
    }
    if(value.val == FIX::CxlRejReason::valUnableToProcessOrderMassCancelRequest)
    {
      foundValue = true;
      res += "UnableToProcessOrderMassCancelRequest";
    }
    if(value.val == FIX::CxlRejReason::valOrigOrdModTime586DidNotMatchLastTransactTime60OfOrder)
    {
      foundValue = true;
      res += "OrigOrdModTime586DidNotMatchLastTransactTime60OfOrder";
    }
    if(value.val == FIX::CxlRejReason::valDuplicateClOrdIDReceived)
    {
      foundValue = true;
      res += "DuplicateClOrdIDReceived";
    }
    if(value.val == FIX::CxlRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdRejReason::tag: {
    FIX::OrdRejReason::Value value(val);
    res = "OrdRejReason = ";
    if(value.val == FIX::OrdRejReason::valBrokerOrExchangeOption)
    {
      foundValue = true;
      res += "BrokerOrExchangeOption";
    }
    if(value.val == FIX::OrdRejReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value.val == FIX::OrdRejReason::valExchangeClosed)
    {
      foundValue = true;
      res += "ExchangeClosed";
    }
    if(value.val == FIX::OrdRejReason::valOrderExceedsLimit)
    {
      foundValue = true;
      res += "OrderExceedsLimit";
    }
    if(value.val == FIX::OrdRejReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value.val == FIX::OrdRejReason::valUnknownOrder)
    {
      foundValue = true;
      res += "UnknownOrder";
    }
    if(value.val == FIX::OrdRejReason::valDuplicateOrderegDupeClOrdID)
    {
      foundValue = true;
      res += "DuplicateOrderegDupeClOrdID";
    }
    if(value.val == FIX::OrdRejReason::valDuplicateOfAVerballyCommunicatedOrder)
    {
      foundValue = true;
      res += "DuplicateOfAVerballyCommunicatedOrder";
    }
    if(value.val == FIX::OrdRejReason::valStaleOrder)
    {
      foundValue = true;
      res += "StaleOrder";
    }
    if(value.val == FIX::OrdRejReason::valTradeAlongRequired)
    {
      foundValue = true;
      res += "TradeAlongRequired";
    }
    if(value.val == FIX::OrdRejReason::valInvalidInvestorID)
    {
      foundValue = true;
      res += "InvalidInvestorID";
    }
    if(value.val == FIX::OrdRejReason::valUnsupportedOrderCharacteristic2SurveillenceOption)
    {
      foundValue = true;
      res += "UnsupportedOrderCharacteristic2SurveillenceOption";
    }
    if(value.val == FIX::OrdRejReason::valIncorrectQuantity)
    {
      foundValue = true;
      res += "IncorrectQuantity";
    }
    if(value.val == FIX::OrdRejReason::valIncorrectAllocatedQuantity)
    {
      foundValue = true;
      res += "IncorrectAllocatedQuantity";
    }
    if(value.val == FIX::OrdRejReason::valUnknownAccount)
    {
      foundValue = true;
      res += "UnknownAccount";
    }
    if(value.val == FIX::OrdRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOIQualifier::tag: {
    FIX::IOIQualifier::Value value(val);
    res = "IOIQualifier = ";
    if(value.val == FIX::IOIQualifier::valAllOrNone)
    {
      foundValue = true;
      res += "AllOrNone";
    }
    if(value.val == FIX::IOIQualifier::valMarketOnCloseMOC)
    {
      foundValue = true;
      res += "MarketOnCloseMOC";
    }
    if(value.val == FIX::IOIQualifier::valAtTheClose)
    {
      foundValue = true;
      res += "AtTheClose";
    }
    if(value.val == FIX::IOIQualifier::valVWAP)
    {
      foundValue = true;
      res += "VWAP";
    }
    if(value.val == FIX::IOIQualifier::valInTouchWith)
    {
      foundValue = true;
      res += "InTouchWith";
    }
    if(value.val == FIX::IOIQualifier::valLimit)
    {
      foundValue = true;
      res += "Limit";
    }
    if(value.val == FIX::IOIQualifier::valMoreBehind)
    {
      foundValue = true;
      res += "MoreBehind";
    }
    if(value.val == FIX::IOIQualifier::valAtTheOpen)
    {
      foundValue = true;
      res += "AtTheOpen";
    }
    if(value.val == FIX::IOIQualifier::valTakingAPosition)
    {
      foundValue = true;
      res += "TakingAPosition";
    }
    if(value.val == FIX::IOIQualifier::valAtTheMarket)
    {
      foundValue = true;
      res += "AtTheMarket";
    }
    if(value.val == FIX::IOIQualifier::valReadyToTrade)
    {
      foundValue = true;
      res += "ReadyToTrade";
    }
    if(value.val == FIX::IOIQualifier::valPortfolioShown)
    {
      foundValue = true;
      res += "PortfolioShown";
    }
    if(value.val == FIX::IOIQualifier::valThroughTheDay)
    {
      foundValue = true;
      res += "ThroughTheDay";
    }
    if(value.val == FIX::IOIQualifier::valVersus)
    {
      foundValue = true;
      res += "Versus";
    }
    if(value.val == FIX::IOIQualifier::valIndicationWorkingAway)
    {
      foundValue = true;
      res += "IndicationWorkingAway";
    }
    if(value.val == FIX::IOIQualifier::valCrossingOpportunity)
    {
      foundValue = true;
      res += "CrossingOpportunity";
    }
    if(value.val == FIX::IOIQualifier::valAtTheMidpoint)
    {
      foundValue = true;
      res += "AtTheMidpoint";
    }
    if(value.val == FIX::IOIQualifier::valPreOpen)
    {
      foundValue = true;
      res += "PreOpen";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::WaveNo::tag: {
    FIX::WaveNo::Value value(val);
    res = "WaveNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Issuer::tag: {
    FIX::Issuer::Value value(val);
    res = "Issuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityDesc::tag: {
    FIX::SecurityDesc::Value value(val);
    res = "SecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HeartBtInt::tag: {
    FIX::HeartBtInt::Value value(val);
    res = "HeartBtInt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClientID::tag: {
    FIX::ClientID::Value value(val);
    res = "ClientID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinQty::tag: {
    FIX::MinQty::Value value(val);
    res = "MinQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaxFloor::tag: {
    FIX::MaxFloor::Value value(val);
    res = "MaxFloor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TestReqID::tag: {
    FIX::TestReqID::Value value(val);
    res = "TestReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ReportToExch::tag: {
    FIX::ReportToExch::Value value(val);
    res = "ReportToExch = ";
    if(value.val == FIX::ReportToExch::valIndicatesThatPartyReceivingMessageMustReportTrade)
    {
      foundValue = true;
      res += "IndicatesThatPartyReceivingMessageMustReportTrade";
    }
    if(value.val == FIX::ReportToExch::valIndicatesThatPartySendingMessageWillReportTrade)
    {
      foundValue = true;
      res += "IndicatesThatPartySendingMessageWillReportTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LocateReqd::tag: {
    FIX::LocateReqd::Value value(val);
    res = "LocateReqd = ";
    if(value.val == FIX::LocateReqd::valIndicatesTheBrokerIsResponsibleForLocatingTheStock)
    {
      foundValue = true;
      res += "IndicatesTheBrokerIsResponsibleForLocatingTheStock";
    }
    if(value.val == FIX::LocateReqd::valIndicatesTheBrokerIsNotRequiredToLocate)
    {
      foundValue = true;
      res += "IndicatesTheBrokerIsNotRequiredToLocate";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfCompID::tag: {
    FIX::OnBehalfOfCompID::Value value(val);
    res = "OnBehalfOfCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfSubID::tag: {
    FIX::OnBehalfOfSubID::Value value(val);
    res = "OnBehalfOfSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteID::tag: {
    FIX::QuoteID::Value value(val);
    res = "QuoteID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetMoney::tag: {
    FIX::NetMoney::Value value(val);
    res = "NetMoney = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrAmt::tag: {
    FIX::SettlCurrAmt::Value value(val);
    res = "SettlCurrAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrency::tag: {
    FIX::SettlCurrency::Value value(val);
    res = "SettlCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ForexReq::tag: {
    FIX::ForexReq::Value value(val);
    res = "ForexReq = ";
    if(value.val == FIX::ForexReq::valExecuteForexAfterSecurityTrade)
    {
      foundValue = true;
      res += "ExecuteForexAfterSecurityTrade";
    }
    if(value.val == FIX::ForexReq::valDoNotExecuteForexAfterSecurityTrade)
    {
      foundValue = true;
      res += "DoNotExecuteForexAfterSecurityTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigSendingTime::tag: {
    FIX::OrigSendingTime::Value value(val);
    res = "OrigSendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::GapFillFlag::tag: {
    FIX::GapFillFlag::Value value(val);
    res = "GapFillFlag = ";
    if(value.val == FIX::GapFillFlag::valGapFillMessageMsgSeqNumFieldValid)
    {
      foundValue = true;
      res += "GapFillMessageMsgSeqNumFieldValid";
    }
    if(value.val == FIX::GapFillFlag::valSequenceResetIgnoreMsgSeqNum)
    {
      foundValue = true;
      res += "SequenceResetIgnoreMsgSeqNum";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoExecs::tag: {
    FIX::NoExecs::Value value(val);
    res = "NoExecs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlTyp::tag: {
    FIX::CxlTyp::Value value(val);
    res = "CxlTyp = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExpireTime::tag: {
    FIX::ExpireTime::Value value(val);
    res = "ExpireTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DKReason::tag: {
    FIX::DKReason::Value value(val);
    res = "DKReason = ";
    if(value.val == FIX::DKReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value.val == FIX::DKReason::valWrongSide)
    {
      foundValue = true;
      res += "WrongSide";
    }
    if(value.val == FIX::DKReason::valQuantityExceedsOrder)
    {
      foundValue = true;
      res += "QuantityExceedsOrder";
    }
    if(value.val == FIX::DKReason::valNoMatchingOrder)
    {
      foundValue = true;
      res += "NoMatchingOrder";
    }
    if(value.val == FIX::DKReason::valPriceExceedsLimit)
    {
      foundValue = true;
      res += "PriceExceedsLimit";
    }
    if(value.val == FIX::DKReason::valCalculationDifference)
    {
      foundValue = true;
      res += "CalculationDifference";
    }
    if(value.val == FIX::DKReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliverToCompID::tag: {
    FIX::DeliverToCompID::Value value(val);
    res = "DeliverToCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliverToSubID::tag: {
    FIX::DeliverToSubID::Value value(val);
    res = "DeliverToSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IOINaturalFlag::tag: {
    FIX::IOINaturalFlag::Value value(val);
    res = "IOINaturalFlag = ";
    if(value.val == FIX::IOINaturalFlag::valNatural)
    {
      foundValue = true;
      res += "Natural";
    }
    if(value.val == FIX::IOINaturalFlag::valNotNatural)
    {
      foundValue = true;
      res += "NotNatural";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteReqID::tag: {
    FIX::QuoteReqID::Value value(val);
    res = "QuoteReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidPx::tag: {
    FIX::BidPx::Value value(val);
    res = "BidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferPx::tag: {
    FIX::OfferPx::Value value(val);
    res = "OfferPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidSize::tag: {
    FIX::BidSize::Value value(val);
    res = "BidSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferSize::tag: {
    FIX::OfferSize::Value value(val);
    res = "OfferSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMiscFees::tag: {
    FIX::NoMiscFees::Value value(val);
    res = "NoMiscFees = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeAmt::tag: {
    FIX::MiscFeeAmt::Value value(val);
    res = "MiscFeeAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeCurr::tag: {
    FIX::MiscFeeCurr::Value value(val);
    res = "MiscFeeCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeType::tag: {
    FIX::MiscFeeType::Value value(val);
    res = "MiscFeeType = ";
    if(value.val == FIX::MiscFeeType::valRegulatory)
    {
      foundValue = true;
      res += "Regulatory";
    }
    if(value.val == FIX::MiscFeeType::valTax)
    {
      foundValue = true;
      res += "Tax";
    }
    if(value.val == FIX::MiscFeeType::valLocalCommission)
    {
      foundValue = true;
      res += "LocalCommission";
    }
    if(value.val == FIX::MiscFeeType::valExchangeFees)
    {
      foundValue = true;
      res += "ExchangeFees";
    }
    if(value.val == FIX::MiscFeeType::valStamp)
    {
      foundValue = true;
      res += "Stamp";
    }
    if(value.val == FIX::MiscFeeType::valLevy)
    {
      foundValue = true;
      res += "Levy";
    }
    if(value.val == FIX::MiscFeeType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value.val == FIX::MiscFeeType::valMarkup)
    {
      foundValue = true;
      res += "Markup";
    }
    if(value.val == FIX::MiscFeeType::valConsumptionTax)
    {
      foundValue = true;
      res += "ConsumptionTax";
    }
    if(value.val == FIX::MiscFeeType::valPerTransaction)
    {
      foundValue = true;
      res += "PerTransaction";
    }
    if(value.val == FIX::MiscFeeType::valConversion)
    {
      foundValue = true;
      res += "Conversion";
    }
    if(value.val == FIX::MiscFeeType::valAgent)
    {
      foundValue = true;
      res += "Agent";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PrevClosePx::tag: {
    FIX::PrevClosePx::Value value(val);
    res = "PrevClosePx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ResetSeqNumFlag::tag: {
    FIX::ResetSeqNumFlag::Value value(val);
    res = "ResetSeqNumFlag = ";
    if(value.val == FIX::ResetSeqNumFlag::valYesResetSequenceNumbers)
    {
      foundValue = true;
      res += "YesResetSequenceNumbers";
    }
    if(value.val == FIX::ResetSeqNumFlag::valNo)
    {
      foundValue = true;
      res += "No";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SenderLocationID::tag: {
    FIX::SenderLocationID::Value value(val);
    res = "SenderLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetLocationID::tag: {
    FIX::TargetLocationID::Value value(val);
    res = "TargetLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfLocationID::tag: {
    FIX::OnBehalfOfLocationID::Value value(val);
    res = "OnBehalfOfLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliverToLocationID::tag: {
    FIX::DeliverToLocationID::Value value(val);
    res = "DeliverToLocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRelatedSym::tag: {
    FIX::NoRelatedSym::Value value(val);
    res = "NoRelatedSym = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Subject::tag: {
    FIX::Subject::Value value(val);
    res = "Subject = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Headline::tag: {
    FIX::Headline::Value value(val);
    res = "Headline = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::URLLink::tag: {
    FIX::URLLink::Value value(val);
    res = "URLLink = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecType::tag: {
    FIX::ExecType::Value value(val);
    res = "ExecType = ";
    if(value.val == FIX::ExecType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::ExecType::valPartialFill)
    {
      foundValue = true;
      res += "PartialFill";
    }
    if(value.val == FIX::ExecType::valFill)
    {
      foundValue = true;
      res += "Fill";
    }
    if(value.val == FIX::ExecType::valDoneForDay)
    {
      foundValue = true;
      res += "DoneForDay";
    }
    if(value.val == FIX::ExecType::valCanceled)
    {
      foundValue = true;
      res += "Canceled";
    }
    if(value.val == FIX::ExecType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value.val == FIX::ExecType::valPendingCancel)
    {
      foundValue = true;
      res += "PendingCancel";
    }
    if(value.val == FIX::ExecType::valStopped)
    {
      foundValue = true;
      res += "Stopped";
    }
    if(value.val == FIX::ExecType::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value.val == FIX::ExecType::valSuspended)
    {
      foundValue = true;
      res += "Suspended";
    }
    if(value.val == FIX::ExecType::valPendingNew)
    {
      foundValue = true;
      res += "PendingNew";
    }
    if(value.val == FIX::ExecType::valCalculated)
    {
      foundValue = true;
      res += "Calculated";
    }
    if(value.val == FIX::ExecType::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value.val == FIX::ExecType::valRestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason)
    {
      foundValue = true;
      res += "RestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason";
    }
    if(value.val == FIX::ExecType::valPendingReplace)
    {
      foundValue = true;
      res += "PendingReplace";
    }
    if(value.val == FIX::ExecType::valTrade)
    {
      foundValue = true;
      res += "Trade";
    }
    if(value.val == FIX::ExecType::valTradeCorrectformerlyAnExecTransType)
    {
      foundValue = true;
      res += "TradeCorrectformerlyAnExecTransType";
    }
    if(value.val == FIX::ExecType::valTradeCancel)
    {
      foundValue = true;
      res += "TradeCancel";
    }
    if(value.val == FIX::ExecType::valOrderStatus)
    {
      foundValue = true;
      res += "OrderStatus";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LeavesQty::tag: {
    FIX::LeavesQty::Value value(val);
    res = "LeavesQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashOrderQty::tag: {
    FIX::CashOrderQty::Value value(val);
    res = "CashOrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAvgPx::tag: {
    FIX::AllocAvgPx::Value value(val);
    res = "AllocAvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocNetMoney::tag: {
    FIX::AllocNetMoney::Value value(val);
    res = "AllocNetMoney = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrFxRate::tag: {
    FIX::SettlCurrFxRate::Value value(val);
    res = "SettlCurrFxRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrFxRateCalc::tag: {
    FIX::SettlCurrFxRateCalc::Value value(val);
    res = "SettlCurrFxRateCalc = ";
    if(value.val == FIX::SettlCurrFxRateCalc::valMultiply)
    {
      foundValue = true;
      res += "Multiply";
    }
    if(value.val == FIX::SettlCurrFxRateCalc::valDivide)
    {
      foundValue = true;
      res += "Divide";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumDaysInterest::tag: {
    FIX::NumDaysInterest::Value value(val);
    res = "NumDaysInterest = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AccruedInterestRate::tag: {
    FIX::AccruedInterestRate::Value value(val);
    res = "AccruedInterestRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AccruedInterestAmt::tag: {
    FIX::AccruedInterestAmt::Value value(val);
    res = "AccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstMode::tag: {
    FIX::SettlInstMode::Value value(val);
    res = "SettlInstMode = ";
    if(value.val == FIX::SettlInstMode::valDefault)
    {
      foundValue = true;
      res += "Default";
    }
    if(value.val == FIX::SettlInstMode::valStandingInstructionsProvided)
    {
      foundValue = true;
      res += "StandingInstructionsProvided";
    }
    if(value.val == FIX::SettlInstMode::valSpecificAllocationAccountOverriding)
    {
      foundValue = true;
      res += "SpecificAllocationAccountOverriding";
    }
    if(value.val == FIX::SettlInstMode::valSpecificAllocationAccountStanding)
    {
      foundValue = true;
      res += "SpecificAllocationAccountStanding";
    }
    if(value.val == FIX::SettlInstMode::valSpecificOrderForASingleAccount)
    {
      foundValue = true;
      res += "SpecificOrderForASingleAccount";
    }
    if(value.val == FIX::SettlInstMode::valRequestReject)
    {
      foundValue = true;
      res += "RequestReject";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocText::tag: {
    FIX::AllocText::Value value(val);
    res = "AllocText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstID::tag: {
    FIX::SettlInstID::Value value(val);
    res = "SettlInstID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstTransType::tag: {
    FIX::SettlInstTransType::Value value(val);
    res = "SettlInstTransType = ";
    if(value.val == FIX::SettlInstTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::SettlInstTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value.val == FIX::SettlInstTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value.val == FIX::SettlInstTransType::valRestate)
    {
      foundValue = true;
      res += "Restate";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EmailThreadID::tag: {
    FIX::EmailThreadID::Value value(val);
    res = "EmailThreadID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstSource::tag: {
    FIX::SettlInstSource::Value value(val);
    res = "SettlInstSource = ";
    if(value.val == FIX::SettlInstSource::valBrokersInstructions)
    {
      foundValue = true;
      res += "BrokersInstructions";
    }
    if(value.val == FIX::SettlInstSource::valInstitutionsInstructions)
    {
      foundValue = true;
      res += "InstitutionsInstructions";
    }
    if(value.val == FIX::SettlInstSource::valInvestor)
    {
      foundValue = true;
      res += "Investor";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlLocation::tag: {
    FIX::SettlLocation::Value value(val);
    res = "SettlLocation = ";
    if(!strcmp(value.val, FIX::SettlLocation::valCEDEL))
    {
      foundValue = true;
      res += "CEDEL";
    }
    if(!strcmp(value.val, FIX::SettlLocation::valDepositoryTrustCompany))
    {
      foundValue = true;
      res += "DepositoryTrustCompany";
    }
    if(!strcmp(value.val, FIX::SettlLocation::valEuroclear))
    {
      foundValue = true;
      res += "Euroclear";
    }
    if(!strcmp(value.val, FIX::SettlLocation::valFederalBookEntry))
    {
      foundValue = true;
      res += "FederalBookEntry";
    }
    if(!strcmp(value.val, FIX::SettlLocation::valPhysical))
    {
      foundValue = true;
      res += "Physical";
    }
    if(!strcmp(value.val, FIX::SettlLocation::valParticipantTrustCompany))
    {
      foundValue = true;
      res += "ParticipantTrustCompany";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityType::tag: {
    FIX::SecurityType::Value value(val);
    res = "SecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EffectiveTime::tag: {
    FIX::EffectiveTime::Value value(val);
    res = "EffectiveTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StandInstDbType::tag: {
    FIX::StandInstDbType::Value value(val);
    res = "StandInstDbType = ";
    if(value.val == FIX::StandInstDbType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value.val == FIX::StandInstDbType::valDTCSID)
    {
      foundValue = true;
      res += "DTCSID";
    }
    if(value.val == FIX::StandInstDbType::valThomsonALERT)
    {
      foundValue = true;
      res += "ThomsonALERT";
    }
    if(value.val == FIX::StandInstDbType::valAGlobalCustodianStandInstDbName)
    {
      foundValue = true;
      res += "AGlobalCustodianStandInstDbName";
    }
    if(value.val == FIX::StandInstDbType::valAccountNet)
    {
      foundValue = true;
      res += "AccountNet";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StandInstDbName::tag: {
    FIX::StandInstDbName::Value value(val);
    res = "StandInstDbName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StandInstDbID::tag: {
    FIX::StandInstDbID::Value value(val);
    res = "StandInstDbID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDeliveryType::tag: {
    FIX::SettlDeliveryType::Value value(val);
    res = "SettlDeliveryType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDepositoryCode::tag: {
    FIX::SettlDepositoryCode::Value value(val);
    res = "SettlDepositoryCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlBrkrCode::tag: {
    FIX::SettlBrkrCode::Value value(val);
    res = "SettlBrkrCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstCode::tag: {
    FIX::SettlInstCode::Value value(val);
    res = "SettlInstCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentName::tag: {
    FIX::SecuritySettlAgentName::Value value(val);
    res = "SecuritySettlAgentName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentCode::tag: {
    FIX::SecuritySettlAgentCode::Value value(val);
    res = "SecuritySettlAgentCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentAcctNum::tag: {
    FIX::SecuritySettlAgentAcctNum::Value value(val);
    res = "SecuritySettlAgentAcctNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentAcctName::tag: {
    FIX::SecuritySettlAgentAcctName::Value value(val);
    res = "SecuritySettlAgentAcctName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentContactName::tag: {
    FIX::SecuritySettlAgentContactName::Value value(val);
    res = "SecuritySettlAgentContactName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySettlAgentContactPhone::tag: {
    FIX::SecuritySettlAgentContactPhone::Value value(val);
    res = "SecuritySettlAgentContactPhone = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentName::tag: {
    FIX::CashSettlAgentName::Value value(val);
    res = "CashSettlAgentName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentCode::tag: {
    FIX::CashSettlAgentCode::Value value(val);
    res = "CashSettlAgentCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentAcctNum::tag: {
    FIX::CashSettlAgentAcctNum::Value value(val);
    res = "CashSettlAgentAcctNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentAcctName::tag: {
    FIX::CashSettlAgentAcctName::Value value(val);
    res = "CashSettlAgentAcctName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentContactName::tag: {
    FIX::CashSettlAgentContactName::Value value(val);
    res = "CashSettlAgentContactName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashSettlAgentContactPhone::tag: {
    FIX::CashSettlAgentContactPhone::Value value(val);
    res = "CashSettlAgentContactPhone = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidSpotRate::tag: {
    FIX::BidSpotRate::Value value(val);
    res = "BidSpotRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidForwardPoints::tag: {
    FIX::BidForwardPoints::Value value(val);
    res = "BidForwardPoints = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferSpotRate::tag: {
    FIX::OfferSpotRate::Value value(val);
    res = "OfferSpotRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferForwardPoints::tag: {
    FIX::OfferForwardPoints::Value value(val);
    res = "OfferForwardPoints = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderQty2::tag: {
    FIX::OrderQty2::Value value(val);
    res = "OrderQty2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlDate2::tag: {
    FIX::SettlDate2::Value value(val);
    res = "SettlDate2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastSpotRate::tag: {
    FIX::LastSpotRate::Value value(val);
    res = "LastSpotRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastForwardPoints::tag: {
    FIX::LastForwardPoints::Value value(val);
    res = "LastForwardPoints = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocLinkID::tag: {
    FIX::AllocLinkID::Value value(val);
    res = "AllocLinkID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocLinkType::tag: {
    FIX::AllocLinkType::Value value(val);
    res = "AllocLinkType = ";
    if(value.val == FIX::AllocLinkType::valFOrXNetting)
    {
      foundValue = true;
      res += "FOrXNetting";
    }
    if(value.val == FIX::AllocLinkType::valFOrXSwap)
    {
      foundValue = true;
      res += "FOrXSwap";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryOrderID::tag: {
    FIX::SecondaryOrderID::Value value(val);
    res = "SecondaryOrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoIOIQualifiers::tag: {
    FIX::NoIOIQualifiers::Value value(val);
    res = "NoIOIQualifiers = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityMonthYear::tag: {
    FIX::MaturityMonthYear::Value value(val);
    res = "MaturityMonthYear = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PutOrCall::tag: {
    FIX::PutOrCall::Value value(val);
    res = "PutOrCall = ";
    if(value.val == FIX::PutOrCall::valPut)
    {
      foundValue = true;
      res += "Put";
    }
    if(value.val == FIX::PutOrCall::valCall)
    {
      foundValue = true;
      res += "Call";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StrikePrice::tag: {
    FIX::StrikePrice::Value value(val);
    res = "StrikePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CoveredOrUncovered::tag: {
    FIX::CoveredOrUncovered::Value value(val);
    res = "CoveredOrUncovered = ";
    if(value.val == FIX::CoveredOrUncovered::valCovered)
    {
      foundValue = true;
      res += "Covered";
    }
    if(value.val == FIX::CoveredOrUncovered::valUncovered)
    {
      foundValue = true;
      res += "Uncovered";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CustomerOrFirm::tag: {
    FIX::CustomerOrFirm::Value value(val);
    res = "CustomerOrFirm = ";
    if(value.val == FIX::CustomerOrFirm::valCustomer)
    {
      foundValue = true;
      res += "Customer";
    }
    if(value.val == FIX::CustomerOrFirm::valFirm)
    {
      foundValue = true;
      res += "Firm";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityDay::tag: {
    FIX::MaturityDay::Value value(val);
    res = "MaturityDay = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OptAttribute::tag: {
    FIX::OptAttribute::Value value(val);
    res = "OptAttribute = ";
    if(value.val == FIX::OptAttribute::valLong)
    {
      foundValue = true;
      res += "Long";
    }
    if(value.val == FIX::OptAttribute::valShort)
    {
      foundValue = true;
      res += "Short";
    }
    if(value.val == FIX::OptAttribute::valZero)
    {
      foundValue = true;
      res += "Zero";
    }
    if(value.val == FIX::OptAttribute::valOne)
    {
      foundValue = true;
      res += "One";
    }
    if(value.val == FIX::OptAttribute::valTwo)
    {
      foundValue = true;
      res += "Two";
    }
    if(value.val == FIX::OptAttribute::valThree)
    {
      foundValue = true;
      res += "Three";
    }
    if(value.val == FIX::OptAttribute::valFour)
    {
      foundValue = true;
      res += "Four";
    }
    if(value.val == FIX::OptAttribute::valFive)
    {
      foundValue = true;
      res += "Five";
    }
    if(value.val == FIX::OptAttribute::valSix)
    {
      foundValue = true;
      res += "Six";
    }
    if(value.val == FIX::OptAttribute::valSeven)
    {
      foundValue = true;
      res += "Seven";
    }
    if(value.val == FIX::OptAttribute::valEight)
    {
      foundValue = true;
      res += "Eight";
    }
    if(value.val == FIX::OptAttribute::valNine)
    {
      foundValue = true;
      res += "Nine";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityExchange::tag: {
    FIX::SecurityExchange::Value value(val);
    res = "SecurityExchange = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NotifyBrokerOfCredit::tag: {
    FIX::NotifyBrokerOfCredit::Value value(val);
    res = "NotifyBrokerOfCredit = ";
    if(value.val == FIX::NotifyBrokerOfCredit::valDetailsShouldBeCommunicated)
    {
      foundValue = true;
      res += "DetailsShouldBeCommunicated";
    }
    if(value.val == FIX::NotifyBrokerOfCredit::valDetailsShouldNotBeCommunicated)
    {
      foundValue = true;
      res += "DetailsShouldNotBeCommunicated";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocHandlInst::tag: {
    FIX::AllocHandlInst::Value value(val);
    res = "AllocHandlInst = ";
    if(value.val == FIX::AllocHandlInst::valMatch)
    {
      foundValue = true;
      res += "Match";
    }
    if(value.val == FIX::AllocHandlInst::valForward)
    {
      foundValue = true;
      res += "Forward";
    }
    if(value.val == FIX::AllocHandlInst::valForwardAndMatch)
    {
      foundValue = true;
      res += "ForwardAndMatch";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaxShow::tag: {
    FIX::MaxShow::Value value(val);
    res = "MaxShow = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegOffsetValue::tag: {
    FIX::PegOffsetValue::Value value(val);
    res = "PegOffsetValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::XmlDataLen::tag: {
    FIX::XmlDataLen::Value value(val);
    res = "XmlDataLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::XmlData::tag: {
    FIX::XmlData::Value value(val);
    res = "XmlData = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstRefID::tag: {
    FIX::SettlInstRefID::Value value(val);
    res = "SettlInstRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRoutingIDs::tag: {
    FIX::NoRoutingIDs::Value value(val);
    res = "NoRoutingIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoutingType::tag: {
    FIX::RoutingType::Value value(val);
    res = "RoutingType = ";
    if(value.val == FIX::RoutingType::valTargetFirm)
    {
      foundValue = true;
      res += "TargetFirm";
    }
    if(value.val == FIX::RoutingType::valTargetList)
    {
      foundValue = true;
      res += "TargetList";
    }
    if(value.val == FIX::RoutingType::valBlockFirm)
    {
      foundValue = true;
      res += "BlockFirm";
    }
    if(value.val == FIX::RoutingType::valBlockList)
    {
      foundValue = true;
      res += "BlockList";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoutingID::tag: {
    FIX::RoutingID::Value value(val);
    res = "RoutingID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Spread::tag: {
    FIX::Spread::Value value(val);
    res = "Spread = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Benchmark::tag: {
    FIX::Benchmark::Value value(val);
    res = "Benchmark = ";
    if(value.val == FIX::Benchmark::valCURVE)
    {
      foundValue = true;
      res += "CURVE";
    }
    if(value.val == FIX::Benchmark::val5YR)
    {
      foundValue = true;
      res += "5YR";
    }
    if(value.val == FIX::Benchmark::valOLD5)
    {
      foundValue = true;
      res += "OLD5";
    }
    if(value.val == FIX::Benchmark::val0YR)
    {
      foundValue = true;
      res += "0YR";
    }
    if(value.val == FIX::Benchmark::valOLD0)
    {
      foundValue = true;
      res += "OLD0";
    }
    if(value.val == FIX::Benchmark::val30YR)
    {
      foundValue = true;
      res += "30YR";
    }
    if(value.val == FIX::Benchmark::valOLD30)
    {
      foundValue = true;
      res += "OLD30";
    }
    if(value.val == FIX::Benchmark::val3MOLIBOR)
    {
      foundValue = true;
      res += "3MOLIBOR";
    }
    if(value.val == FIX::Benchmark::val6MOLIBOR)
    {
      foundValue = true;
      res += "6MOLIBOR";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkCurveCurrency::tag: {
    FIX::BenchmarkCurveCurrency::Value value(val);
    res = "BenchmarkCurveCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkCurveName::tag: {
    FIX::BenchmarkCurveName::Value value(val);
    res = "BenchmarkCurveName = ";
    if(!strcmp(value.val, FIX::BenchmarkCurveName::valLondonInterBankOffers))
    {
      foundValue = true;
      res += "LondonInterBankOffers";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkCurvePoint::tag: {
    FIX::BenchmarkCurvePoint::Value value(val);
    res = "BenchmarkCurvePoint = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CouponRate::tag: {
    FIX::CouponRate::Value value(val);
    res = "CouponRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CouponPaymentDate::tag: {
    FIX::CouponPaymentDate::Value value(val);
    res = "CouponPaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IssueDate::tag: {
    FIX::IssueDate::Value value(val);
    res = "IssueDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RepurchaseTerm::tag: {
    FIX::RepurchaseTerm::Value value(val);
    res = "RepurchaseTerm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RepurchaseRate::tag: {
    FIX::RepurchaseRate::Value value(val);
    res = "RepurchaseRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Factor::tag: {
    FIX::Factor::Value value(val);
    res = "Factor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeOriginationDate::tag: {
    FIX::TradeOriginationDate::Value value(val);
    res = "TradeOriginationDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExDate::tag: {
    FIX::ExDate::Value value(val);
    res = "ExDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContractMultiplier::tag: {
    FIX::ContractMultiplier::Value value(val);
    res = "ContractMultiplier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoStipulations::tag: {
    FIX::NoStipulations::Value value(val);
    res = "NoStipulations = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StipulationType::tag: {
    FIX::StipulationType::Value value(val);
    res = "StipulationType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StipulationValue::tag: {
    FIX::StipulationValue::Value value(val);
    res = "StipulationValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldType::tag: {
    FIX::YieldType::Value value(val);
    res = "YieldType = ";
    if(!strcmp(value.val, FIX::YieldType::valAfterTaxYield))
    {
      foundValue = true;
      res += "AfterTaxYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valAnnualYield))
    {
      foundValue = true;
      res += "AnnualYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldAtIssue))
    {
      foundValue = true;
      res += "YieldAtIssue";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToAverageMaturity))
    {
      foundValue = true;
      res += "YieldToAverageMaturity";
    }
    if(!strcmp(value.val, FIX::YieldType::valBookYield))
    {
      foundValue = true;
      res += "BookYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToNextCall))
    {
      foundValue = true;
      res += "YieldToNextCall";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldChangeSinceClose))
    {
      foundValue = true;
      res += "YieldChangeSinceClose";
    }
    if(!strcmp(value.val, FIX::YieldType::valClosingYield))
    {
      foundValue = true;
      res += "ClosingYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valCompoundYield))
    {
      foundValue = true;
      res += "CompoundYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valCurrentYield))
    {
      foundValue = true;
      res += "CurrentYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valTrueGrossYield))
    {
      foundValue = true;
      res += "TrueGrossYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valGovernmentEquivalentYield))
    {
      foundValue = true;
      res += "GovernmentEquivalentYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldWithInflationAssumption))
    {
      foundValue = true;
      res += "YieldWithInflationAssumption";
    }
    if(!strcmp(value.val, FIX::YieldType::valInverseFloaterBondYield))
    {
      foundValue = true;
      res += "InverseFloaterBondYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valMostRecentClosingYield))
    {
      foundValue = true;
      res += "MostRecentClosingYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valClosingYieldMostRecentMonth))
    {
      foundValue = true;
      res += "ClosingYieldMostRecentMonth";
    }
    if(!strcmp(value.val, FIX::YieldType::valClosingYieldMostRecentQuarter))
    {
      foundValue = true;
      res += "ClosingYieldMostRecentQuarter";
    }
    if(!strcmp(value.val, FIX::YieldType::valClosingYieldMostRecentYear))
    {
      foundValue = true;
      res += "ClosingYieldMostRecentYear";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToLongestAverageLife))
    {
      foundValue = true;
      res += "YieldToLongestAverageLife";
    }
    if(!strcmp(value.val, FIX::YieldType::valMarkToMarketYield))
    {
      foundValue = true;
      res += "MarkToMarketYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToMaturity))
    {
      foundValue = true;
      res += "YieldToMaturity";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToNextRefund))
    {
      foundValue = true;
      res += "YieldToNextRefund";
    }
    if(!strcmp(value.val, FIX::YieldType::valOpenAverageYield))
    {
      foundValue = true;
      res += "OpenAverageYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToNextPut))
    {
      foundValue = true;
      res += "YieldToNextPut";
    }
    if(!strcmp(value.val, FIX::YieldType::valPreviousCloseYield))
    {
      foundValue = true;
      res += "PreviousCloseYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valProceedsYield))
    {
      foundValue = true;
      res += "ProceedsYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valSemiAnnualYield))
    {
      foundValue = true;
      res += "SemiAnnualYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToShortestAverageLife))
    {
      foundValue = true;
      res += "YieldToShortestAverageLife";
    }
    if(!strcmp(value.val, FIX::YieldType::valSimpleYield))
    {
      foundValue = true;
      res += "SimpleYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valTaxEquivalentYield))
    {
      foundValue = true;
      res += "TaxEquivalentYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToTenderDate))
    {
      foundValue = true;
      res += "YieldToTenderDate";
    }
    if(!strcmp(value.val, FIX::YieldType::valTrueYield))
    {
      foundValue = true;
      res += "TrueYield";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldValueOfOr32))
    {
      foundValue = true;
      res += "YieldValueOfOr32";
    }
    if(!strcmp(value.val, FIX::YieldType::valYieldToWorst))
    {
      foundValue = true;
      res += "YieldToWorst";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Yield::tag: {
    FIX::Yield::Value value(val);
    res = "Yield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalTakedown::tag: {
    FIX::TotalTakedown::Value value(val);
    res = "TotalTakedown = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Concession::tag: {
    FIX::Concession::Value value(val);
    res = "Concession = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RepoCollateralSecurityType::tag: {
    FIX::RepoCollateralSecurityType::Value value(val);
    res = "RepoCollateralSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RedemptionDate::tag: {
    FIX::RedemptionDate::Value value(val);
    res = "RedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCouponPaymentDate::tag: {
    FIX::UnderlyingCouponPaymentDate::Value value(val);
    res = "UnderlyingCouponPaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingIssueDate::tag: {
    FIX::UnderlyingIssueDate::Value value(val);
    res = "UnderlyingIssueDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRepoCollateralSecurityType::tag: {
    FIX::UnderlyingRepoCollateralSecurityType::Value value(val);
    res = "UnderlyingRepoCollateralSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRepurchaseTerm::tag: {
    FIX::UnderlyingRepurchaseTerm::Value value(val);
    res = "UnderlyingRepurchaseTerm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRepurchaseRate::tag: {
    FIX::UnderlyingRepurchaseRate::Value value(val);
    res = "UnderlyingRepurchaseRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingFactor::tag: {
    FIX::UnderlyingFactor::Value value(val);
    res = "UnderlyingFactor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingRedemptionDate::tag: {
    FIX::UnderlyingRedemptionDate::Value value(val);
    res = "UnderlyingRedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCouponPaymentDate::tag: {
    FIX::LegCouponPaymentDate::Value value(val);
    res = "LegCouponPaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIssueDate::tag: {
    FIX::LegIssueDate::Value value(val);
    res = "LegIssueDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRepoCollateralSecurityType::tag: {
    FIX::LegRepoCollateralSecurityType::Value value(val);
    res = "LegRepoCollateralSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRepurchaseTerm::tag: {
    FIX::LegRepurchaseTerm::Value value(val);
    res = "LegRepurchaseTerm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRepurchaseRate::tag: {
    FIX::LegRepurchaseRate::Value value(val);
    res = "LegRepurchaseRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegFactor::tag: {
    FIX::LegFactor::Value value(val);
    res = "LegFactor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRedemptionDate::tag: {
    FIX::LegRedemptionDate::Value value(val);
    res = "LegRedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CreditRating::tag: {
    FIX::CreditRating::Value value(val);
    res = "CreditRating = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCreditRating::tag: {
    FIX::UnderlyingCreditRating::Value value(val);
    res = "UnderlyingCreditRating = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCreditRating::tag: {
    FIX::LegCreditRating::Value value(val);
    res = "LegCreditRating = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradedFlatSwitch::tag: {
    FIX::TradedFlatSwitch::Value value(val);
    res = "TradedFlatSwitch = ";
    if(value.val == FIX::TradedFlatSwitch::valTradedFlat)
    {
      foundValue = true;
      res += "TradedFlat";
    }
    if(value.val == FIX::TradedFlatSwitch::valNotTradedFlat)
    {
      foundValue = true;
      res += "NotTradedFlat";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BasisFeatureDate::tag: {
    FIX::BasisFeatureDate::Value value(val);
    res = "BasisFeatureDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BasisFeaturePrice::tag: {
    FIX::BasisFeaturePrice::Value value(val);
    res = "BasisFeaturePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDReqID::tag: {
    FIX::MDReqID::Value value(val);
    res = "MDReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SubscriptionRequestType::tag: {
    FIX::SubscriptionRequestType::Value value(val);
    res = "SubscriptionRequestType = ";
    if(value.val == FIX::SubscriptionRequestType::valSnapshot)
    {
      foundValue = true;
      res += "Snapshot";
    }
    if(value.val == FIX::SubscriptionRequestType::valSnapshotplusUpdates)
    {
      foundValue = true;
      res += "SnapshotplusUpdates";
    }
    if(value.val == FIX::SubscriptionRequestType::valDisablePreviousSnapshotplusUpdateRequest)
    {
      foundValue = true;
      res += "DisablePreviousSnapshotplusUpdateRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MarketDepth::tag: {
    FIX::MarketDepth::Value value(val);
    res = "MarketDepth = ";
    if(value.val == FIX::MarketDepth::valFullBook)
    {
      foundValue = true;
      res += "FullBook";
    }
    if(value.val == FIX::MarketDepth::valTopOfBook)
    {
      foundValue = true;
      res += "TopOfBook";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDUpdateType::tag: {
    FIX::MDUpdateType::Value value(val);
    res = "MDUpdateType = ";
    if(value.val == FIX::MDUpdateType::valFullRefresh)
    {
      foundValue = true;
      res += "FullRefresh";
    }
    if(value.val == FIX::MDUpdateType::valIncrementalRefresh)
    {
      foundValue = true;
      res += "IncrementalRefresh";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AggregatedBook::tag: {
    FIX::AggregatedBook::Value value(val);
    res = "AggregatedBook = ";
    if(value.val == FIX::AggregatedBook::valOneBookEntryPerSidePerPrice)
    {
      foundValue = true;
      res += "OneBookEntryPerSidePerPrice";
    }
    if(value.val == FIX::AggregatedBook::valMultipleEntriesPerSidePerPriceAllowed)
    {
      foundValue = true;
      res += "MultipleEntriesPerSidePerPriceAllowed";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMDEntryTypes::tag: {
    FIX::NoMDEntryTypes::Value value(val);
    res = "NoMDEntryTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMDEntries::tag: {
    FIX::NoMDEntries::Value value(val);
    res = "NoMDEntries = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryType::tag: {
    FIX::MDEntryType::Value value(val);
    res = "MDEntryType = ";
    if(value.val == FIX::MDEntryType::valBid)
    {
      foundValue = true;
      res += "Bid";
    }
    if(value.val == FIX::MDEntryType::valOffer)
    {
      foundValue = true;
      res += "Offer";
    }
    if(value.val == FIX::MDEntryType::valTrade)
    {
      foundValue = true;
      res += "Trade";
    }
    if(value.val == FIX::MDEntryType::valIndexValue)
    {
      foundValue = true;
      res += "IndexValue";
    }
    if(value.val == FIX::MDEntryType::valOpeningPrice)
    {
      foundValue = true;
      res += "OpeningPrice";
    }
    if(value.val == FIX::MDEntryType::valClosingPrice)
    {
      foundValue = true;
      res += "ClosingPrice";
    }
    if(value.val == FIX::MDEntryType::valSettlementPrice)
    {
      foundValue = true;
      res += "SettlementPrice";
    }
    if(value.val == FIX::MDEntryType::valTradingSessionHighPrice)
    {
      foundValue = true;
      res += "TradingSessionHighPrice";
    }
    if(value.val == FIX::MDEntryType::valTradingSessionLowPrice)
    {
      foundValue = true;
      res += "TradingSessionLowPrice";
    }
    if(value.val == FIX::MDEntryType::valTradingSessionVWAPPrice)
    {
      foundValue = true;
      res += "TradingSessionVWAPPrice";
    }
    if(value.val == FIX::MDEntryType::valImbalance)
    {
      foundValue = true;
      res += "Imbalance";
    }
    if(value.val == FIX::MDEntryType::valTradeVolume)
    {
      foundValue = true;
      res += "TradeVolume";
    }
    if(value.val == FIX::MDEntryType::valOpenInterest)
    {
      foundValue = true;
      res += "OpenInterest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryPx::tag: {
    FIX::MDEntryPx::Value value(val);
    res = "MDEntryPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntrySize::tag: {
    FIX::MDEntrySize::Value value(val);
    res = "MDEntrySize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryDate::tag: {
    FIX::MDEntryDate::Value value(val);
    res = "MDEntryDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryTime::tag: {
    FIX::MDEntryTime::Value value(val);
    res = "MDEntryTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TickDirection::tag: {
    FIX::TickDirection::Value value(val);
    res = "TickDirection = ";
    if(value.val == FIX::TickDirection::valPlusTick)
    {
      foundValue = true;
      res += "PlusTick";
    }
    if(value.val == FIX::TickDirection::valZeroPlusTick)
    {
      foundValue = true;
      res += "ZeroPlusTick";
    }
    if(value.val == FIX::TickDirection::valMinusTick)
    {
      foundValue = true;
      res += "MinusTick";
    }
    if(value.val == FIX::TickDirection::valZeroMinusTick)
    {
      foundValue = true;
      res += "ZeroMinusTick";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDMkt::tag: {
    FIX::MDMkt::Value value(val);
    res = "MDMkt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteCondition::tag: {
    FIX::QuoteCondition::Value value(val);
    res = "QuoteCondition = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeCondition::tag: {
    FIX::TradeCondition::Value value(val);
    res = "TradeCondition = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryID::tag: {
    FIX::MDEntryID::Value value(val);
    res = "MDEntryID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDUpdateAction::tag: {
    FIX::MDUpdateAction::Value value(val);
    res = "MDUpdateAction = ";
    if(value.val == FIX::MDUpdateAction::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::MDUpdateAction::valChange)
    {
      foundValue = true;
      res += "Change";
    }
    if(value.val == FIX::MDUpdateAction::valDelete)
    {
      foundValue = true;
      res += "Delete";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryRefID::tag: {
    FIX::MDEntryRefID::Value value(val);
    res = "MDEntryRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDReqRejReason::tag: {
    FIX::MDReqRejReason::Value value(val);
    res = "MDReqRejReason = ";
    if(value.val == FIX::MDReqRejReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value.val == FIX::MDReqRejReason::valDuplicateMDReqID)
    {
      foundValue = true;
      res += "DuplicateMDReqID";
    }
    if(value.val == FIX::MDReqRejReason::valInsufficientBandwidth)
    {
      foundValue = true;
      res += "InsufficientBandwidth";
    }
    if(value.val == FIX::MDReqRejReason::valInsufficientPermissions)
    {
      foundValue = true;
      res += "InsufficientPermissions";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedSubscriptionRequestType)
    {
      foundValue = true;
      res += "UnsupportedSubscriptionRequestType";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedMarketDepth)
    {
      foundValue = true;
      res += "UnsupportedMarketDepth";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedMDUpdateType)
    {
      foundValue = true;
      res += "UnsupportedMDUpdateType";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedAggregatedBook)
    {
      foundValue = true;
      res += "UnsupportedAggregatedBook";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedMDEntryType)
    {
      foundValue = true;
      res += "UnsupportedMDEntryType";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedTradingSessionID)
    {
      foundValue = true;
      res += "UnsupportedTradingSessionID";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedScope)
    {
      foundValue = true;
      res += "UnsupportedScope";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedOpenCloseSettleFlag)
    {
      foundValue = true;
      res += "UnsupportedOpenCloseSettleFlag";
    }
    if(value.val == FIX::MDReqRejReason::valUnsupportedMDImplicitDelete)
    {
      foundValue = true;
      res += "UnsupportedMDImplicitDelete";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryOriginator::tag: {
    FIX::MDEntryOriginator::Value value(val);
    res = "MDEntryOriginator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LocationID::tag: {
    FIX::LocationID::Value value(val);
    res = "LocationID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeskID::tag: {
    FIX::DeskID::Value value(val);
    res = "DeskID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeleteReason::tag: {
    FIX::DeleteReason::Value value(val);
    res = "DeleteReason = ";
    if(value.val == FIX::DeleteReason::valCancelationOrTradeBust)
    {
      foundValue = true;
      res += "CancelationOrTradeBust";
    }
    if(value.val == FIX::DeleteReason::valError)
    {
      foundValue = true;
      res += "Error";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OpenCloseSettlFlag::tag: {
    FIX::OpenCloseSettlFlag::Value value(val);
    res = "OpenCloseSettlFlag = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SellerDays::tag: {
    FIX::SellerDays::Value value(val);
    res = "SellerDays = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryBuyer::tag: {
    FIX::MDEntryBuyer::Value value(val);
    res = "MDEntryBuyer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntrySeller::tag: {
    FIX::MDEntrySeller::Value value(val);
    res = "MDEntrySeller = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDEntryPositionNo::tag: {
    FIX::MDEntryPositionNo::Value value(val);
    res = "MDEntryPositionNo = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::FinancialStatus::tag: {
    FIX::FinancialStatus::Value value(val);
    res = "FinancialStatus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CorporateAction::tag: {
    FIX::CorporateAction::Value value(val);
    res = "CorporateAction = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DefBidSize::tag: {
    FIX::DefBidSize::Value value(val);
    res = "DefBidSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DefOfferSize::tag: {
    FIX::DefOfferSize::Value value(val);
    res = "DefOfferSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoQuoteEntries::tag: {
    FIX::NoQuoteEntries::Value value(val);
    res = "NoQuoteEntries = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoQuoteSets::tag: {
    FIX::NoQuoteSets::Value value(val);
    res = "NoQuoteSets = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteStatus::tag: {
    FIX::QuoteStatus::Value value(val);
    res = "QuoteStatus = ";
    if(value.val == FIX::QuoteStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::QuoteStatus::valCanceledForSymbol)
    {
      foundValue = true;
      res += "CanceledForSymbol";
    }
    if(value.val == FIX::QuoteStatus::valCanceledForSecurityType)
    {
      foundValue = true;
      res += "CanceledForSecurityType";
    }
    if(value.val == FIX::QuoteStatus::valCanceledForUnderlying)
    {
      foundValue = true;
      res += "CanceledForUnderlying";
    }
    if(value.val == FIX::QuoteStatus::valCanceledAll)
    {
      foundValue = true;
      res += "CanceledAll";
    }
    if(value.val == FIX::QuoteStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value.val == FIX::QuoteStatus::valRemovedFromMarket)
    {
      foundValue = true;
      res += "RemovedFromMarket";
    }
    if(value.val == FIX::QuoteStatus::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value.val == FIX::QuoteStatus::valQuery)
    {
      foundValue = true;
      res += "Query";
    }
    if(value.val == FIX::QuoteStatus::valQuoteNotFound)
    {
      foundValue = true;
      res += "QuoteNotFound";
    }
    if(value.val == FIX::QuoteStatus::valPending)
    {
      foundValue = true;
      res += "Pending";
    }
    if(value.val == FIX::QuoteStatus::valPass)
    {
      foundValue = true;
      res += "Pass";
    }
    if(value.val == FIX::QuoteStatus::valLockedMarketWarning)
    {
      foundValue = true;
      res += "LockedMarketWarning";
    }
    if(value.val == FIX::QuoteStatus::valCrossMarketWarning)
    {
      foundValue = true;
      res += "CrossMarketWarning";
    }
    if(value.val == FIX::QuoteStatus::valCanceledDueToLockMarket)
    {
      foundValue = true;
      res += "CanceledDueToLockMarket";
    }
    if(value.val == FIX::QuoteStatus::valCanceledDueToCrossMarket)
    {
      foundValue = true;
      res += "CanceledDueToCrossMarket";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteCancelType::tag: {
    FIX::QuoteCancelType::Value value(val);
    res = "QuoteCancelType = ";
    if(value.val == FIX::QuoteCancelType::valCancelForSymbol)
    {
      foundValue = true;
      res += "CancelForSymbol";
    }
    if(value.val == FIX::QuoteCancelType::valCancelForSecurityType)
    {
      foundValue = true;
      res += "CancelForSecurityType";
    }
    if(value.val == FIX::QuoteCancelType::valCancelForUnderlyingSymbol)
    {
      foundValue = true;
      res += "CancelForUnderlyingSymbol";
    }
    if(value.val == FIX::QuoteCancelType::valCancelAllQuotes)
    {
      foundValue = true;
      res += "CancelAllQuotes";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteEntryID::tag: {
    FIX::QuoteEntryID::Value value(val);
    res = "QuoteEntryID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRejectReason::tag: {
    FIX::QuoteRejectReason::Value value(val);
    res = "QuoteRejectReason = ";
    if(value.val == FIX::QuoteRejectReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value.val == FIX::QuoteRejectReason::valExchangeSecurityClosed)
    {
      foundValue = true;
      res += "ExchangeSecurityClosed";
    }
    if(value.val == FIX::QuoteRejectReason::valQuoteRequestExceedsLimit)
    {
      foundValue = true;
      res += "QuoteRequestExceedsLimit";
    }
    if(value.val == FIX::QuoteRejectReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value.val == FIX::QuoteRejectReason::valUnknownQuote)
    {
      foundValue = true;
      res += "UnknownQuote";
    }
    if(value.val == FIX::QuoteRejectReason::valDuplicateQuote)
    {
      foundValue = true;
      res += "DuplicateQuote";
    }
    if(value.val == FIX::QuoteRejectReason::valInvalidBidOraskSpread)
    {
      foundValue = true;
      res += "InvalidBidOraskSpread";
    }
    if(value.val == FIX::QuoteRejectReason::valInvalidPrice)
    {
      foundValue = true;
      res += "InvalidPrice";
    }
    if(value.val == FIX::QuoteRejectReason::valNotAuthorizedToQuoteSecurity)
    {
      foundValue = true;
      res += "NotAuthorizedToQuoteSecurity";
    }
    if(value.val == FIX::QuoteRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteResponseLevel::tag: {
    FIX::QuoteResponseLevel::Value value(val);
    res = "QuoteResponseLevel = ";
    if(value.val == FIX::QuoteResponseLevel::valNoAcknowledgement)
    {
      foundValue = true;
      res += "NoAcknowledgement";
    }
    if(value.val == FIX::QuoteResponseLevel::valAcknowledgeOnlyNegativeOrErroneousQuotes)
    {
      foundValue = true;
      res += "AcknowledgeOnlyNegativeOrErroneousQuotes";
    }
    if(value.val == FIX::QuoteResponseLevel::valAcknowledgeEachQuoteMessages)
    {
      foundValue = true;
      res += "AcknowledgeEachQuoteMessages";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteSetID::tag: {
    FIX::QuoteSetID::Value value(val);
    res = "QuoteSetID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRequestType::tag: {
    FIX::QuoteRequestType::Value value(val);
    res = "QuoteRequestType = ";
    if(value.val == FIX::QuoteRequestType::valManual)
    {
      foundValue = true;
      res += "Manual";
    }
    if(value.val == FIX::QuoteRequestType::valAutomatic)
    {
      foundValue = true;
      res += "Automatic";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoQuoteEntries::tag: {
    FIX::TotNoQuoteEntries::Value value(val);
    res = "TotNoQuoteEntries = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityIDSource::tag: {
    FIX::UnderlyingSecurityIDSource::Value value(val);
    res = "UnderlyingSecurityIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingIssuer::tag: {
    FIX::UnderlyingIssuer::Value value(val);
    res = "UnderlyingIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityDesc::tag: {
    FIX::UnderlyingSecurityDesc::Value value(val);
    res = "UnderlyingSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityExchange::tag: {
    FIX::UnderlyingSecurityExchange::Value value(val);
    res = "UnderlyingSecurityExchange = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityID::tag: {
    FIX::UnderlyingSecurityID::Value value(val);
    res = "UnderlyingSecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityType::tag: {
    FIX::UnderlyingSecurityType::Value value(val);
    res = "UnderlyingSecurityType = ";
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valFederalGovernmentOrTreasury))
    {
      foundValue = true;
      res += "FederalGovernmentOrTreasury";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valStateProvinceRegionEtc))
    {
      foundValue = true;
      res += "StateProvinceRegionEtc";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valFederalAgency))
    {
      foundValue = true;
      res += "FederalAgency";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valMortgagePassthrough))
    {
      foundValue = true;
      res += "MortgagePassthrough";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valCommercialPaper))
    {
      foundValue = true;
      res += "CommercialPaper";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valCorporate))
    {
      foundValue = true;
      res += "Corporate";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valEquity))
    {
      foundValue = true;
      res += "Equity";
    }
    if(!strcmp(value.val, FIX::UnderlyingSecurityType::valSupraNationalAgency))
    {
      foundValue = true;
      res += "SupraNationalAgency";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSymbol::tag: {
    FIX::UnderlyingSymbol::Value value(val);
    res = "UnderlyingSymbol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSymbolSfx::tag: {
    FIX::UnderlyingSymbolSfx::Value value(val);
    res = "UnderlyingSymbolSfx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingMaturityMonthYear::tag: {
    FIX::UnderlyingMaturityMonthYear::Value value(val);
    res = "UnderlyingMaturityMonthYear = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingMaturityDay::tag: {
    FIX::UnderlyingMaturityDay::Value value(val);
    res = "UnderlyingMaturityDay = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingPutOrCall::tag: {
    FIX::UnderlyingPutOrCall::Value value(val);
    res = "UnderlyingPutOrCall = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStrikePrice::tag: {
    FIX::UnderlyingStrikePrice::Value value(val);
    res = "UnderlyingStrikePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingOptAttribute::tag: {
    FIX::UnderlyingOptAttribute::Value value(val);
    res = "UnderlyingOptAttribute = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCurrency::tag: {
    FIX::UnderlyingCurrency::Value value(val);
    res = "UnderlyingCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RatioQty::tag: {
    FIX::RatioQty::Value value(val);
    res = "RatioQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityReqID::tag: {
    FIX::SecurityReqID::Value value(val);
    res = "SecurityReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityRequestType::tag: {
    FIX::SecurityRequestType::Value value(val);
    res = "SecurityRequestType = ";
    if(value.val == FIX::SecurityRequestType::valRequestSecurityIdentityAndSpecifications)
    {
      foundValue = true;
      res += "RequestSecurityIdentityAndSpecifications";
    }
    if(value.val == FIX::SecurityRequestType::valRequestSecurityIdentityForTheSpecificationsProvided)
    {
      foundValue = true;
      res += "RequestSecurityIdentityForTheSpecificationsProvided";
    }
    if(value.val == FIX::SecurityRequestType::valRequestListSecurityTypes)
    {
      foundValue = true;
      res += "RequestListSecurityTypes";
    }
    if(value.val == FIX::SecurityRequestType::valRequestListSecurities)
    {
      foundValue = true;
      res += "RequestListSecurities";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityResponseID::tag: {
    FIX::SecurityResponseID::Value value(val);
    res = "SecurityResponseID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityResponseType::tag: {
    FIX::SecurityResponseType::Value value(val);
    res = "SecurityResponseType = ";
    if(value.val == FIX::SecurityResponseType::valAcceptSecurityProposalAsIs)
    {
      foundValue = true;
      res += "AcceptSecurityProposalAsIs";
    }
    if(value.val == FIX::SecurityResponseType::valAcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage)
    {
      foundValue = true;
      res += "AcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage";
    }
    if(value.val == FIX::SecurityResponseType::valListOfSecurityTypesReturnedPerRequest)
    {
      foundValue = true;
      res += "ListOfSecurityTypesReturnedPerRequest";
    }
    if(value.val == FIX::SecurityResponseType::valListOfSecuritiesReturnedPerRequest)
    {
      foundValue = true;
      res += "ListOfSecuritiesReturnedPerRequest";
    }
    if(value.val == FIX::SecurityResponseType::valRejectSecurityProposal)
    {
      foundValue = true;
      res += "RejectSecurityProposal";
    }
    if(value.val == FIX::SecurityResponseType::valCanNotMatchSelectionCriteria)
    {
      foundValue = true;
      res += "CanNotMatchSelectionCriteria";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityStatusReqID::tag: {
    FIX::SecurityStatusReqID::Value value(val);
    res = "SecurityStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnsolicitedIndicator::tag: {
    FIX::UnsolicitedIndicator::Value value(val);
    res = "UnsolicitedIndicator = ";
    if(value.val == FIX::UnsolicitedIndicator::valMessageIsBeingSentUnsolicited)
    {
      foundValue = true;
      res += "MessageIsBeingSentUnsolicited";
    }
    if(value.val == FIX::UnsolicitedIndicator::valMessageIsBeingSentAsAResultOfAPriorRequest)
    {
      foundValue = true;
      res += "MessageIsBeingSentAsAResultOfAPriorRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityTradingStatus::tag: {
    FIX::SecurityTradingStatus::Value value(val);
    res = "SecurityTradingStatus = ";
    if(value.val == FIX::SecurityTradingStatus::valOpeningDelay)
    {
      foundValue = true;
      res += "OpeningDelay";
    }
    if(value.val == FIX::SecurityTradingStatus::valTradingHalt)
    {
      foundValue = true;
      res += "TradingHalt";
    }
    if(value.val == FIX::SecurityTradingStatus::valResume)
    {
      foundValue = true;
      res += "Resume";
    }
    if(value.val == FIX::SecurityTradingStatus::valNoOpenOrNoResume)
    {
      foundValue = true;
      res += "NoOpenOrNoResume";
    }
    if(value.val == FIX::SecurityTradingStatus::valPriceIndication)
    {
      foundValue = true;
      res += "PriceIndication";
    }
    if(value.val == FIX::SecurityTradingStatus::valTradingRangeIndication)
    {
      foundValue = true;
      res += "TradingRangeIndication";
    }
    if(value.val == FIX::SecurityTradingStatus::valMarketImbalanceBuy)
    {
      foundValue = true;
      res += "MarketImbalanceBuy";
    }
    if(value.val == FIX::SecurityTradingStatus::valMarketImbalanceSell)
    {
      foundValue = true;
      res += "MarketImbalanceSell";
    }
    if(value.val == FIX::SecurityTradingStatus::valMarketOnCloseImbalanceBuy)
    {
      foundValue = true;
      res += "MarketOnCloseImbalanceBuy";
    }
    if(value.val == FIX::SecurityTradingStatus::valMarketOnCloseImbalanceSell)
    {
      foundValue = true;
      res += "MarketOnCloseImbalanceSell";
    }
    if(value.val == FIX::SecurityTradingStatus::valNoMarketImbalance)
    {
      foundValue = true;
      res += "NoMarketImbalance";
    }
    if(value.val == FIX::SecurityTradingStatus::valNoMarketOnCloseImbalance)
    {
      foundValue = true;
      res += "NoMarketOnCloseImbalance";
    }
    if(value.val == FIX::SecurityTradingStatus::valITSPreOpening)
    {
      foundValue = true;
      res += "ITSPreOpening";
    }
    if(value.val == FIX::SecurityTradingStatus::valNewPriceIndication)
    {
      foundValue = true;
      res += "NewPriceIndication";
    }
    if(value.val == FIX::SecurityTradingStatus::valTradeDisseminationTime)
    {
      foundValue = true;
      res += "TradeDisseminationTime";
    }
    if(value.val == FIX::SecurityTradingStatus::valReadyToTrade)
    {
      foundValue = true;
      res += "ReadyToTrade";
    }
    if(value.val == FIX::SecurityTradingStatus::valNotAvailableForTrading)
    {
      foundValue = true;
      res += "NotAvailableForTrading";
    }
    if(value.val == FIX::SecurityTradingStatus::valNotTradedOnThisMarket)
    {
      foundValue = true;
      res += "NotTradedOnThisMarket";
    }
    if(value.val == FIX::SecurityTradingStatus::valUnknownOrInvalid)
    {
      foundValue = true;
      res += "UnknownOrInvalid";
    }
    if(value.val == FIX::SecurityTradingStatus::valPreOpen)
    {
      foundValue = true;
      res += "PreOpen";
    }
    if(value.val == FIX::SecurityTradingStatus::valOpeningRotation)
    {
      foundValue = true;
      res += "OpeningRotation";
    }
    if(value.val == FIX::SecurityTradingStatus::valFastMarket)
    {
      foundValue = true;
      res += "FastMarket";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::HaltReason::tag: {
    FIX::HaltReason::Value value(val);
    res = "HaltReason = ";
    if(value.val == FIX::HaltReason::valOrderImbalance)
    {
      foundValue = true;
      res += "OrderImbalance";
    }
    if(value.val == FIX::HaltReason::valEquipmentChangeover)
    {
      foundValue = true;
      res += "EquipmentChangeover";
    }
    if(value.val == FIX::HaltReason::valNewsPending)
    {
      foundValue = true;
      res += "NewsPending";
    }
    if(value.val == FIX::HaltReason::valNewsDissemination)
    {
      foundValue = true;
      res += "NewsDissemination";
    }
    if(value.val == FIX::HaltReason::valOrderInflux)
    {
      foundValue = true;
      res += "OrderInflux";
    }
    if(value.val == FIX::HaltReason::valAdditionalInformation)
    {
      foundValue = true;
      res += "AdditionalInformation";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::InViewOfCommon::tag: {
    FIX::InViewOfCommon::Value value(val);
    res = "InViewOfCommon = ";
    if(value.val == FIX::InViewOfCommon::valHaltWasDueToCommonStockBeingHalted)
    {
      foundValue = true;
      res += "HaltWasDueToCommonStockBeingHalted";
    }
    if(value.val == FIX::InViewOfCommon::valHaltWasNotRelatedToAHaltOfTheCommonStock)
    {
      foundValue = true;
      res += "HaltWasNotRelatedToAHaltOfTheCommonStock";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DueToRelated::tag: {
    FIX::DueToRelated::Value value(val);
    res = "DueToRelated = ";
    if(value.val == FIX::DueToRelated::valHaltWasDueToRelatedSecurityBeingHalted)
    {
      foundValue = true;
      res += "HaltWasDueToRelatedSecurityBeingHalted";
    }
    if(value.val == FIX::DueToRelated::valHaltWasNotRelatedToAHaltOfTheRelatedSecurity)
    {
      foundValue = true;
      res += "HaltWasNotRelatedToAHaltOfTheRelatedSecurity";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BuyVolume::tag: {
    FIX::BuyVolume::Value value(val);
    res = "BuyVolume = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SellVolume::tag: {
    FIX::SellVolume::Value value(val);
    res = "SellVolume = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HighPx::tag: {
    FIX::HighPx::Value value(val);
    res = "HighPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LowPx::tag: {
    FIX::LowPx::Value value(val);
    res = "LowPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Adjustment::tag: {
    FIX::Adjustment::Value value(val);
    res = "Adjustment = ";
    if(value.val == FIX::Adjustment::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value.val == FIX::Adjustment::valError)
    {
      foundValue = true;
      res += "Error";
    }
    if(value.val == FIX::Adjustment::valCorrection)
    {
      foundValue = true;
      res += "Correction";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesReqID::tag: {
    FIX::TradSesReqID::Value value(val);
    res = "TradSesReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradingSessionID::tag: {
    FIX::TradingSessionID::Value value(val);
    res = "TradingSessionID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraTrader::tag: {
    FIX::ContraTrader::Value value(val);
    res = "ContraTrader = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesMethod::tag: {
    FIX::TradSesMethod::Value value(val);
    res = "TradSesMethod = ";
    if(value.val == FIX::TradSesMethod::valElectronic)
    {
      foundValue = true;
      res += "Electronic";
    }
    if(value.val == FIX::TradSesMethod::valOpenOutcry)
    {
      foundValue = true;
      res += "OpenOutcry";
    }
    if(value.val == FIX::TradSesMethod::valTwoParty)
    {
      foundValue = true;
      res += "TwoParty";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesMode::tag: {
    FIX::TradSesMode::Value value(val);
    res = "TradSesMode = ";
    if(value.val == FIX::TradSesMode::valTesting)
    {
      foundValue = true;
      res += "Testing";
    }
    if(value.val == FIX::TradSesMode::valSimulated)
    {
      foundValue = true;
      res += "Simulated";
    }
    if(value.val == FIX::TradSesMode::valProduction)
    {
      foundValue = true;
      res += "Production";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesStatus::tag: {
    FIX::TradSesStatus::Value value(val);
    res = "TradSesStatus = ";
    if(value.val == FIX::TradSesStatus::valUnknown)
    {
      foundValue = true;
      res += "Unknown";
    }
    if(value.val == FIX::TradSesStatus::valHalted)
    {
      foundValue = true;
      res += "Halted";
    }
    if(value.val == FIX::TradSesStatus::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(value.val == FIX::TradSesStatus::valClosed)
    {
      foundValue = true;
      res += "Closed";
    }
    if(value.val == FIX::TradSesStatus::valPreOpen)
    {
      foundValue = true;
      res += "PreOpen";
    }
    if(value.val == FIX::TradSesStatus::valPreClose)
    {
      foundValue = true;
      res += "PreClose";
    }
    if(value.val == FIX::TradSesStatus::valRequestRejected)
    {
      foundValue = true;
      res += "RequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesStartTime::tag: {
    FIX::TradSesStartTime::Value value(val);
    res = "TradSesStartTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesOpenTime::tag: {
    FIX::TradSesOpenTime::Value value(val);
    res = "TradSesOpenTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesPreCloseTime::tag: {
    FIX::TradSesPreCloseTime::Value value(val);
    res = "TradSesPreCloseTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesCloseTime::tag: {
    FIX::TradSesCloseTime::Value value(val);
    res = "TradSesCloseTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesEndTime::tag: {
    FIX::TradSesEndTime::Value value(val);
    res = "TradSesEndTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumberOfOrders::tag: {
    FIX::NumberOfOrders::Value value(val);
    res = "NumberOfOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MessageEncoding::tag: {
    FIX::MessageEncoding::Value value(val);
    res = "MessageEncoding = ";
    if(!strcmp(value.val, FIX::MessageEncoding::val2022JP))
    {
      foundValue = true;
      res += "2022JP";
    }
    if(!strcmp(value.val, FIX::MessageEncoding::valJP))
    {
      foundValue = true;
      res += "JP";
    }
    if(!strcmp(value.val, FIX::MessageEncoding::valUTF8))
    {
      foundValue = true;
      res += "UTF8";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedIssuerLen::tag: {
    FIX::EncodedIssuerLen::Value value(val);
    res = "EncodedIssuerLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedIssuer::tag: {
    FIX::EncodedIssuer::Value value(val);
    res = "EncodedIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSecurityDescLen::tag: {
    FIX::EncodedSecurityDescLen::Value value(val);
    res = "EncodedSecurityDescLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSecurityDesc::tag: {
    FIX::EncodedSecurityDesc::Value value(val);
    res = "EncodedSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListExecInstLen::tag: {
    FIX::EncodedListExecInstLen::Value value(val);
    res = "EncodedListExecInstLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListExecInst::tag: {
    FIX::EncodedListExecInst::Value value(val);
    res = "EncodedListExecInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedTextLen::tag: {
    FIX::EncodedTextLen::Value value(val);
    res = "EncodedTextLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedText::tag: {
    FIX::EncodedText::Value value(val);
    res = "EncodedText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSubjectLen::tag: {
    FIX::EncodedSubjectLen::Value value(val);
    res = "EncodedSubjectLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedSubject::tag: {
    FIX::EncodedSubject::Value value(val);
    res = "EncodedSubject = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedHeadlineLen::tag: {
    FIX::EncodedHeadlineLen::Value value(val);
    res = "EncodedHeadlineLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedHeadline::tag: {
    FIX::EncodedHeadline::Value value(val);
    res = "EncodedHeadline = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedAllocTextLen::tag: {
    FIX::EncodedAllocTextLen::Value value(val);
    res = "EncodedAllocTextLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedAllocText::tag: {
    FIX::EncodedAllocText::Value value(val);
    res = "EncodedAllocText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingIssuerLen::tag: {
    FIX::EncodedUnderlyingIssuerLen::Value value(val);
    res = "EncodedUnderlyingIssuerLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingIssuer::tag: {
    FIX::EncodedUnderlyingIssuer::Value value(val);
    res = "EncodedUnderlyingIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingSecurityDescLen::tag: {
    FIX::EncodedUnderlyingSecurityDescLen::Value value(val);
    res = "EncodedUnderlyingSecurityDescLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedUnderlyingSecurityDesc::tag: {
    FIX::EncodedUnderlyingSecurityDesc::Value value(val);
    res = "EncodedUnderlyingSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocPrice::tag: {
    FIX::AllocPrice::Value value(val);
    res = "AllocPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteSetValidUntilTime::tag: {
    FIX::QuoteSetValidUntilTime::Value value(val);
    res = "QuoteSetValidUntilTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteEntryRejectReason::tag: {
    FIX::QuoteEntryRejectReason::Value value(val);
    res = "QuoteEntryRejectReason = ";
    if(value.val == FIX::QuoteEntryRejectReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valExchangeSecurityClosed)
    {
      foundValue = true;
      res += "ExchangeSecurityClosed";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valQuoteExceedsLimit)
    {
      foundValue = true;
      res += "QuoteExceedsLimit";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valUnknownQuote)
    {
      foundValue = true;
      res += "UnknownQuote";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valDuplicateQuote)
    {
      foundValue = true;
      res += "DuplicateQuote";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valInvalidBidOraskSpread)
    {
      foundValue = true;
      res += "InvalidBidOraskSpread";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valInvalidPrice)
    {
      foundValue = true;
      res += "InvalidPrice";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valNotAuthorizedToQuoteSecurity)
    {
      foundValue = true;
      res += "NotAuthorizedToQuoteSecurity";
    }
    if(value.val == FIX::QuoteEntryRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastMsgSeqNumProcessed::tag: {
    FIX::LastMsgSeqNumProcessed::Value value(val);
    res = "LastMsgSeqNumProcessed = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OnBehalfOfSendingTime::tag: {
    FIX::OnBehalfOfSendingTime::Value value(val);
    res = "OnBehalfOfSendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefTagID::tag: {
    FIX::RefTagID::Value value(val);
    res = "RefTagID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefMsgType::tag: {
    FIX::RefMsgType::Value value(val);
    res = "RefMsgType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SessionRejectReason::tag: {
    FIX::SessionRejectReason::Value value(val);
    res = "SessionRejectReason = ";
    if(value.val == FIX::SessionRejectReason::valInvalidTagNumber)
    {
      foundValue = true;
      res += "InvalidTagNumber";
    }
    if(value.val == FIX::SessionRejectReason::valRequiredTagMissing)
    {
      foundValue = true;
      res += "RequiredTagMissing";
    }
    if(value.val == FIX::SessionRejectReason::valTagNotDefinedForThisMessageType)
    {
      foundValue = true;
      res += "TagNotDefinedForThisMessageType";
    }
    if(value.val == FIX::SessionRejectReason::valUndefinedTag)
    {
      foundValue = true;
      res += "UndefinedTag";
    }
    if(value.val == FIX::SessionRejectReason::valTagSpecifiedWithoutAValue)
    {
      foundValue = true;
      res += "TagSpecifiedWithoutAValue";
    }
    if(value.val == FIX::SessionRejectReason::valValueIsIncorrectoutOfRangeForThisTag)
    {
      foundValue = true;
      res += "ValueIsIncorrectoutOfRangeForThisTag";
    }
    if(value.val == FIX::SessionRejectReason::valIncorrectDataFormatForValue)
    {
      foundValue = true;
      res += "IncorrectDataFormatForValue";
    }
    if(value.val == FIX::SessionRejectReason::valDecryptionProblem)
    {
      foundValue = true;
      res += "DecryptionProblem";
    }
    if(value.val == FIX::SessionRejectReason::valSignatureProblem)
    {
      foundValue = true;
      res += "SignatureProblem";
    }
    if(value.val == FIX::SessionRejectReason::valCompIDProblem)
    {
      foundValue = true;
      res += "CompIDProblem";
    }
    if(value.val == FIX::SessionRejectReason::valSendingTimeAccuracyProblem)
    {
      foundValue = true;
      res += "SendingTimeAccuracyProblem";
    }
    if(value.val == FIX::SessionRejectReason::valInvalidMsgType)
    {
      foundValue = true;
      res += "InvalidMsgType";
    }
    if(value.val == FIX::SessionRejectReason::valXMLValidationError)
    {
      foundValue = true;
      res += "XMLValidationError";
    }
    if(value.val == FIX::SessionRejectReason::valTagAppearsMoreThanOnce)
    {
      foundValue = true;
      res += "TagAppearsMoreThanOnce";
    }
    if(value.val == FIX::SessionRejectReason::valTagSpecifiedOutOfRequiredOrder)
    {
      foundValue = true;
      res += "TagSpecifiedOutOfRequiredOrder";
    }
    if(value.val == FIX::SessionRejectReason::valRepeatingGroupFieldsOutOfOrder)
    {
      foundValue = true;
      res += "RepeatingGroupFieldsOutOfOrder";
    }
    if(value.val == FIX::SessionRejectReason::valIncorrectNumInGroupCountForRepeatingGroup)
    {
      foundValue = true;
      res += "IncorrectNumInGroupCountForRepeatingGroup";
    }
    if(value.val == FIX::SessionRejectReason::valNondataValueIncludesFieldDelimiter)
    {
      foundValue = true;
      res += "NondataValueIncludesFieldDelimiter";
    }
    if(value.val == FIX::SessionRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidRequestTransType::tag: {
    FIX::BidRequestTransType::Value value(val);
    res = "BidRequestTransType = ";
    if(value.val == FIX::BidRequestTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::BidRequestTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraBroker::tag: {
    FIX::ContraBroker::Value value(val);
    res = "ContraBroker = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ComplianceID::tag: {
    FIX::ComplianceID::Value value(val);
    res = "ComplianceID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SolicitedFlag::tag: {
    FIX::SolicitedFlag::Value value(val);
    res = "SolicitedFlag = ";
    if(value.val == FIX::SolicitedFlag::valWasSolcitied)
    {
      foundValue = true;
      res += "WasSolcitied";
    }
    if(value.val == FIX::SolicitedFlag::valWasNotSolicited)
    {
      foundValue = true;
      res += "WasNotSolicited";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecRestatementReason::tag: {
    FIX::ExecRestatementReason::Value value(val);
    res = "ExecRestatementReason = ";
    if(value.val == FIX::ExecRestatementReason::valGTCorporateAction)
    {
      foundValue = true;
      res += "GTCorporateAction";
    }
    if(value.val == FIX::ExecRestatementReason::valGTRenewalOrRestatement)
    {
      foundValue = true;
      res += "GTRenewalOrRestatement";
    }
    if(value.val == FIX::ExecRestatementReason::valVerbalChange)
    {
      foundValue = true;
      res += "VerbalChange";
    }
    if(value.val == FIX::ExecRestatementReason::valRepricingOfOrder)
    {
      foundValue = true;
      res += "RepricingOfOrder";
    }
    if(value.val == FIX::ExecRestatementReason::valBrokerOption)
    {
      foundValue = true;
      res += "BrokerOption";
    }
    if(value.val == FIX::ExecRestatementReason::valPartialDeclineOfOrderQty)
    {
      foundValue = true;
      res += "PartialDeclineOfOrderQty";
    }
    if(value.val == FIX::ExecRestatementReason::valCancelOnTradingHalt)
    {
      foundValue = true;
      res += "CancelOnTradingHalt";
    }
    if(value.val == FIX::ExecRestatementReason::valCancelOnSystemFailure)
    {
      foundValue = true;
      res += "CancelOnSystemFailure";
    }
    if(value.val == FIX::ExecRestatementReason::valMarketExchangeOption)
    {
      foundValue = true;
      res += "MarketExchangeOption";
    }
    if(value.val == FIX::ExecRestatementReason::valCanceledNotBest)
    {
      foundValue = true;
      res += "CanceledNotBest";
    }
    if(value.val == FIX::ExecRestatementReason::valWarehouseRecap)
    {
      foundValue = true;
      res += "WarehouseRecap";
    }
    if(value.val == FIX::ExecRestatementReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BusinessRejectRefID::tag: {
    FIX::BusinessRejectRefID::Value value(val);
    res = "BusinessRejectRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BusinessRejectReason::tag: {
    FIX::BusinessRejectReason::Value value(val);
    res = "BusinessRejectReason = ";
    if(value.val == FIX::BusinessRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(value.val == FIX::BusinessRejectReason::valUnkownID)
    {
      foundValue = true;
      res += "UnkownID";
    }
    if(value.val == FIX::BusinessRejectReason::valUnknownSecurity)
    {
      foundValue = true;
      res += "UnknownSecurity";
    }
    if(value.val == FIX::BusinessRejectReason::valUnsupportedMessageType)
    {
      foundValue = true;
      res += "UnsupportedMessageType";
    }
    if(value.val == FIX::BusinessRejectReason::valApplicationNotAvailable)
    {
      foundValue = true;
      res += "ApplicationNotAvailable";
    }
    if(value.val == FIX::BusinessRejectReason::valConditionallyRequiredFieldMissing)
    {
      foundValue = true;
      res += "ConditionallyRequiredFieldMissing";
    }
    if(value.val == FIX::BusinessRejectReason::valNotAuthorized)
    {
      foundValue = true;
      res += "NotAuthorized";
    }
    if(value.val == FIX::BusinessRejectReason::valDeliverToFirmNotAvailableAtThisTime)
    {
      foundValue = true;
      res += "DeliverToFirmNotAvailableAtThisTime";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::GrossTradeAmt::tag: {
    FIX::GrossTradeAmt::Value value(val);
    res = "GrossTradeAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoContraBrokers::tag: {
    FIX::NoContraBrokers::Value value(val);
    res = "NoContraBrokers = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaxMessageSize::tag: {
    FIX::MaxMessageSize::Value value(val);
    res = "MaxMessageSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoMsgTypes::tag: {
    FIX::NoMsgTypes::Value value(val);
    res = "NoMsgTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MsgDirection::tag: {
    FIX::MsgDirection::Value value(val);
    res = "MsgDirection = ";
    if(value.val == FIX::MsgDirection::valSend)
    {
      foundValue = true;
      res += "Send";
    }
    if(value.val == FIX::MsgDirection::valReceive)
    {
      foundValue = true;
      res += "Receive";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoTradingSessions::tag: {
    FIX::NoTradingSessions::Value value(val);
    res = "NoTradingSessions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalVolumeTraded::tag: {
    FIX::TotalVolumeTraded::Value value(val);
    res = "TotalVolumeTraded = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionInst::tag: {
    FIX::DiscretionInst::Value value(val);
    res = "DiscretionInst = ";
    if(value.val == FIX::DiscretionInst::valRelatedToDisplayedPrice)
    {
      foundValue = true;
      res += "RelatedToDisplayedPrice";
    }
    if(value.val == FIX::DiscretionInst::valRelatedToMarketPrice)
    {
      foundValue = true;
      res += "RelatedToMarketPrice";
    }
    if(value.val == FIX::DiscretionInst::valRelatedToPrimaryPrice)
    {
      foundValue = true;
      res += "RelatedToPrimaryPrice";
    }
    if(value.val == FIX::DiscretionInst::valRelatedToLocalPrimaryPrice)
    {
      foundValue = true;
      res += "RelatedToLocalPrimaryPrice";
    }
    if(value.val == FIX::DiscretionInst::valRelatedToMidpointPrice)
    {
      foundValue = true;
      res += "RelatedToMidpointPrice";
    }
    if(value.val == FIX::DiscretionInst::valRelatedToLastTradePrice)
    {
      foundValue = true;
      res += "RelatedToLastTradePrice";
    }
    if(value.val == FIX::DiscretionInst::valRelatedToVWAP)
    {
      foundValue = true;
      res += "RelatedToVWAP";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionOffsetValue::tag: {
    FIX::DiscretionOffsetValue::Value value(val);
    res = "DiscretionOffsetValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidID::tag: {
    FIX::BidID::Value value(val);
    res = "BidID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClientBidID::tag: {
    FIX::ClientBidID::Value value(val);
    res = "ClientBidID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListName::tag: {
    FIX::ListName::Value value(val);
    res = "ListName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoRelatedSym::tag: {
    FIX::TotNoRelatedSym::Value value(val);
    res = "TotNoRelatedSym = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidType::tag: {
    FIX::BidType::Value value(val);
    res = "BidType = ";
    if(value.val == FIX::BidType::valNonDisclosedStyle)
    {
      foundValue = true;
      res += "NonDisclosedStyle";
    }
    if(value.val == FIX::BidType::valDisclosedStyle)
    {
      foundValue = true;
      res += "DisclosedStyle";
    }
    if(value.val == FIX::BidType::valNoBiddingProcess)
    {
      foundValue = true;
      res += "NoBiddingProcess";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumTickets::tag: {
    FIX::NumTickets::Value value(val);
    res = "NumTickets = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideValue1::tag: {
    FIX::SideValue1::Value value(val);
    res = "SideValue1 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideValue2::tag: {
    FIX::SideValue2::Value value(val);
    res = "SideValue2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoBidDescriptors::tag: {
    FIX::NoBidDescriptors::Value value(val);
    res = "NoBidDescriptors = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidDescriptorType::tag: {
    FIX::BidDescriptorType::Value value(val);
    res = "BidDescriptorType = ";
    if(value.val == FIX::BidDescriptorType::valSector)
    {
      foundValue = true;
      res += "Sector";
    }
    if(value.val == FIX::BidDescriptorType::valCountry)
    {
      foundValue = true;
      res += "Country";
    }
    if(value.val == FIX::BidDescriptorType::valIndex)
    {
      foundValue = true;
      res += "Index";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidDescriptor::tag: {
    FIX::BidDescriptor::Value value(val);
    res = "BidDescriptor = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideValueInd::tag: {
    FIX::SideValueInd::Value value(val);
    res = "SideValueInd = ";
    if(value.val == FIX::SideValueInd::valSideValue)
    {
      foundValue = true;
      res += "SideValue";
    }
    if(value.val == FIX::SideValueInd::valSideValue2)
    {
      foundValue = true;
      res += "SideValue2";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityPctLow::tag: {
    FIX::LiquidityPctLow::Value value(val);
    res = "LiquidityPctLow = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityPctHigh::tag: {
    FIX::LiquidityPctHigh::Value value(val);
    res = "LiquidityPctHigh = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityValue::tag: {
    FIX::LiquidityValue::Value value(val);
    res = "LiquidityValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EFPTrackingError::tag: {
    FIX::EFPTrackingError::Value value(val);
    res = "EFPTrackingError = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::FairValue::tag: {
    FIX::FairValue::Value value(val);
    res = "FairValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OutsideIndexPct::tag: {
    FIX::OutsideIndexPct::Value value(val);
    res = "OutsideIndexPct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ValueOfFutures::tag: {
    FIX::ValueOfFutures::Value value(val);
    res = "ValueOfFutures = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityIndType::tag: {
    FIX::LiquidityIndType::Value value(val);
    res = "LiquidityIndType = ";
    if(value.val == FIX::LiquidityIndType::val5dayMovingAverage)
    {
      foundValue = true;
      res += "5dayMovingAverage";
    }
    if(value.val == FIX::LiquidityIndType::val20DayMovingAverage)
    {
      foundValue = true;
      res += "20DayMovingAverage";
    }
    if(value.val == FIX::LiquidityIndType::valNormalMarketSize)
    {
      foundValue = true;
      res += "NormalMarketSize";
    }
    if(value.val == FIX::LiquidityIndType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::WtAverageLiquidity::tag: {
    FIX::WtAverageLiquidity::Value value(val);
    res = "WtAverageLiquidity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExchangeForPhysical::tag: {
    FIX::ExchangeForPhysical::Value value(val);
    res = "ExchangeForPhysical = ";
    if(value.val == FIX::ExchangeForPhysical::valTrue)
    {
      foundValue = true;
      res += "True";
    }
    if(value.val == FIX::ExchangeForPhysical::valFalse)
    {
      foundValue = true;
      res += "False";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OutMainCntryUIndex::tag: {
    FIX::OutMainCntryUIndex::Value value(val);
    res = "OutMainCntryUIndex = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossPercent::tag: {
    FIX::CrossPercent::Value value(val);
    res = "CrossPercent = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ProgRptReqs::tag: {
    FIX::ProgRptReqs::Value value(val);
    res = "ProgRptReqs = ";
    if(value.val == FIX::ProgRptReqs::valBuySideExplicitlyRequestsStatus)
    {
      foundValue = true;
      res += "BuySideExplicitlyRequestsStatus";
    }
    if(value.val == FIX::ProgRptReqs::valSellSidePeriodicallySendsStatus)
    {
      foundValue = true;
      res += "SellSidePeriodicallySendsStatus";
    }
    if(value.val == FIX::ProgRptReqs::valRealTimeExecutionReports)
    {
      foundValue = true;
      res += "RealTimeExecutionReports";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ProgPeriodInterval::tag: {
    FIX::ProgPeriodInterval::Value value(val);
    res = "ProgPeriodInterval = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IncTaxInd::tag: {
    FIX::IncTaxInd::Value value(val);
    res = "IncTaxInd = ";
    if(value.val == FIX::IncTaxInd::valNet)
    {
      foundValue = true;
      res += "Net";
    }
    if(value.val == FIX::IncTaxInd::valGross)
    {
      foundValue = true;
      res += "Gross";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NumBidders::tag: {
    FIX::NumBidders::Value value(val);
    res = "NumBidders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidTradeType::tag: {
    FIX::BidTradeType::Value value(val);
    res = "BidTradeType = ";
    if(value.val == FIX::BidTradeType::valRiskTrade)
    {
      foundValue = true;
      res += "RiskTrade";
    }
    if(value.val == FIX::BidTradeType::valVWAPGuarantee)
    {
      foundValue = true;
      res += "VWAPGuarantee";
    }
    if(value.val == FIX::BidTradeType::valAgency)
    {
      foundValue = true;
      res += "Agency";
    }
    if(value.val == FIX::BidTradeType::valGuaranteedClose)
    {
      foundValue = true;
      res += "GuaranteedClose";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BasisPxType::tag: {
    FIX::BasisPxType::Value value(val);
    res = "BasisPxType = ";
    if(value.val == FIX::BasisPxType::valClosingPriceAtMorningSession)
    {
      foundValue = true;
      res += "ClosingPriceAtMorningSession";
    }
    if(value.val == FIX::BasisPxType::valClosingPrice)
    {
      foundValue = true;
      res += "ClosingPrice";
    }
    if(value.val == FIX::BasisPxType::valCurrentPrice)
    {
      foundValue = true;
      res += "CurrentPrice";
    }
    if(value.val == FIX::BasisPxType::valSQ)
    {
      foundValue = true;
      res += "SQ";
    }
    if(value.val == FIX::BasisPxType::valVWAPThroughADay)
    {
      foundValue = true;
      res += "VWAPThroughADay";
    }
    if(value.val == FIX::BasisPxType::valVWAPThroughAMorningSession)
    {
      foundValue = true;
      res += "VWAPThroughAMorningSession";
    }
    if(value.val == FIX::BasisPxType::valVWAPThroughAnAfternoonSession)
    {
      foundValue = true;
      res += "VWAPThroughAnAfternoonSession";
    }
    if(value.val == FIX::BasisPxType::valVWAPThroughADayExceptYORI)
    {
      foundValue = true;
      res += "VWAPThroughADayExceptYORI";
    }
    if(value.val == FIX::BasisPxType::valVWAPThroughAMorningSessionExceptYORI)
    {
      foundValue = true;
      res += "VWAPThroughAMorningSessionExceptYORI";
    }
    if(value.val == FIX::BasisPxType::valVWAPThroughAnAfternoonSessionExceptYORI)
    {
      foundValue = true;
      res += "VWAPThroughAnAfternoonSessionExceptYORI";
    }
    if(value.val == FIX::BasisPxType::valStrike)
    {
      foundValue = true;
      res += "Strike";
    }
    if(value.val == FIX::BasisPxType::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(value.val == FIX::BasisPxType::valOthers)
    {
      foundValue = true;
      res += "Others";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoBidComponents::tag: {
    FIX::NoBidComponents::Value value(val);
    res = "NoBidComponents = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Country::tag: {
    FIX::Country::Value value(val);
    res = "Country = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoStrikes::tag: {
    FIX::TotNoStrikes::Value value(val);
    res = "TotNoStrikes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriceType::tag: {
    FIX::PriceType::Value value(val);
    res = "PriceType = ";
    if(value.val == FIX::PriceType::valPercentageegPercentOfPar)
    {
      foundValue = true;
      res += "PercentageegPercentOfPar";
    }
    if(value.val == FIX::PriceType::valPerUnit)
    {
      foundValue = true;
      res += "PerUnit";
    }
    if(value.val == FIX::PriceType::valFixedAmount)
    {
      foundValue = true;
      res += "FixedAmount";
    }
    if(value.val == FIX::PriceType::valDiscountPercentagePointsBelowPar)
    {
      foundValue = true;
      res += "DiscountPercentagePointsBelowPar";
    }
    if(value.val == FIX::PriceType::valPremiumPercentagePointsOverPar)
    {
      foundValue = true;
      res += "PremiumPercentagePointsOverPar";
    }
    if(value.val == FIX::PriceType::valSpread)
    {
      foundValue = true;
      res += "Spread";
    }
    if(value.val == FIX::PriceType::valTEDPrice)
    {
      foundValue = true;
      res += "TEDPrice";
    }
    if(value.val == FIX::PriceType::valTEDYield)
    {
      foundValue = true;
      res += "TEDYield";
    }
    if(value.val == FIX::PriceType::valYield)
    {
      foundValue = true;
      res += "Yield";
    }
    if(value.val == FIX::PriceType::valFixedCabinetTradePrice)
    {
      foundValue = true;
      res += "FixedCabinetTradePrice";
    }
    if(value.val == FIX::PriceType::valVariableCabinetTradePrice)
    {
      foundValue = true;
      res += "VariableCabinetTradePrice";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayOrderQty::tag: {
    FIX::DayOrderQty::Value value(val);
    res = "DayOrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayCumQty::tag: {
    FIX::DayCumQty::Value value(val);
    res = "DayCumQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayAvgPx::tag: {
    FIX::DayAvgPx::Value value(val);
    res = "DayAvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::GTBookingInst::tag: {
    FIX::GTBookingInst::Value value(val);
    res = "GTBookingInst = ";
    if(value.val == FIX::GTBookingInst::valBookOutAllTradesOnDayOfExecution)
    {
      foundValue = true;
      res += "BookOutAllTradesOnDayOfExecution";
    }
    if(value.val == FIX::GTBookingInst::valAccumulateExecutionsUntilOrderIsFilledOrExpires)
    {
      foundValue = true;
      res += "AccumulateExecutionsUntilOrderIsFilledOrExpires";
    }
    if(value.val == FIX::GTBookingInst::valAccumulateUntilVerballyNotifiedOtherwise)
    {
      foundValue = true;
      res += "AccumulateUntilVerballyNotifiedOtherwise";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoStrikes::tag: {
    FIX::NoStrikes::Value value(val);
    res = "NoStrikes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListStatusType::tag: {
    FIX::ListStatusType::Value value(val);
    res = "ListStatusType = ";
    if(value.val == FIX::ListStatusType::valAck)
    {
      foundValue = true;
      res += "Ack";
    }
    if(value.val == FIX::ListStatusType::valResponse)
    {
      foundValue = true;
      res += "Response";
    }
    if(value.val == FIX::ListStatusType::valTimed)
    {
      foundValue = true;
      res += "Timed";
    }
    if(value.val == FIX::ListStatusType::valExecStarted)
    {
      foundValue = true;
      res += "ExecStarted";
    }
    if(value.val == FIX::ListStatusType::valAllDone)
    {
      foundValue = true;
      res += "AllDone";
    }
    if(value.val == FIX::ListStatusType::valAlert)
    {
      foundValue = true;
      res += "Alert";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetGrossInd::tag: {
    FIX::NetGrossInd::Value value(val);
    res = "NetGrossInd = ";
    if(value.val == FIX::NetGrossInd::valNet)
    {
      foundValue = true;
      res += "Net";
    }
    if(value.val == FIX::NetGrossInd::valGross)
    {
      foundValue = true;
      res += "Gross";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListOrderStatus::tag: {
    FIX::ListOrderStatus::Value value(val);
    res = "ListOrderStatus = ";
    if(value.val == FIX::ListOrderStatus::valInBiddingProcess)
    {
      foundValue = true;
      res += "InBiddingProcess";
    }
    if(value.val == FIX::ListOrderStatus::valReceivedForExecution)
    {
      foundValue = true;
      res += "ReceivedForExecution";
    }
    if(value.val == FIX::ListOrderStatus::valExecuting)
    {
      foundValue = true;
      res += "Executing";
    }
    if(value.val == FIX::ListOrderStatus::valCanceling)
    {
      foundValue = true;
      res += "Canceling";
    }
    if(value.val == FIX::ListOrderStatus::valAlert)
    {
      foundValue = true;
      res += "Alert";
    }
    if(value.val == FIX::ListOrderStatus::valAllDone)
    {
      foundValue = true;
      res += "AllDone";
    }
    if(value.val == FIX::ListOrderStatus::valReject)
    {
      foundValue = true;
      res += "Reject";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExpireDate::tag: {
    FIX::ExpireDate::Value value(val);
    res = "ExpireDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListExecInstType::tag: {
    FIX::ListExecInstType::Value value(val);
    res = "ListExecInstType = ";
    if(value.val == FIX::ListExecInstType::valImmediate)
    {
      foundValue = true;
      res += "Immediate";
    }
    if(value.val == FIX::ListExecInstType::valWaitForExecuteInstruction)
    {
      foundValue = true;
      res += "WaitForExecuteInstruction";
    }
    if(value.val == FIX::ListExecInstType::valExchangeOrswitchCIVOrderSellDriven)
    {
      foundValue = true;
      res += "ExchangeOrswitchCIVOrderSellDriven";
    }
    if(value.val == FIX::ListExecInstType::valExchangeOrswitchCIVOrderBuyDrivenCashTopUp)
    {
      foundValue = true;
      res += "ExchangeOrswitchCIVOrderBuyDrivenCashTopUp";
    }
    if(value.val == FIX::ListExecInstType::valExchangeOrswitchCIVOrderBuyDrivenCashWithdraw)
    {
      foundValue = true;
      res += "ExchangeOrswitchCIVOrderBuyDrivenCashWithdraw";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CxlRejResponseTo::tag: {
    FIX::CxlRejResponseTo::Value value(val);
    res = "CxlRejResponseTo = ";
    if(value.val == FIX::CxlRejResponseTo::valOrderCancelRequest)
    {
      foundValue = true;
      res += "OrderCancelRequest";
    }
    if(value.val == FIX::CxlRejResponseTo::valOrderCancelOrReplaceRequest)
    {
      foundValue = true;
      res += "OrderCancelOrReplaceRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCouponRate::tag: {
    FIX::UnderlyingCouponRate::Value value(val);
    res = "UnderlyingCouponRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingContractMultiplier::tag: {
    FIX::UnderlyingContractMultiplier::Value value(val);
    res = "UnderlyingContractMultiplier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraTradeQty::tag: {
    FIX::ContraTradeQty::Value value(val);
    res = "ContraTradeQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraTradeTime::tag: {
    FIX::ContraTradeTime::Value value(val);
    res = "ContraTradeTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingFirm::tag: {
    FIX::ClearingFirm::Value value(val);
    res = "ClearingFirm = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingAccount::tag: {
    FIX::ClearingAccount::Value value(val);
    res = "ClearingAccount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LiquidityNumSecurities::tag: {
    FIX::LiquidityNumSecurities::Value value(val);
    res = "LiquidityNumSecurities = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MultiLegReportingType::tag: {
    FIX::MultiLegReportingType::Value value(val);
    res = "MultiLegReportingType = ";
    if(value.val == FIX::MultiLegReportingType::valSingleSecurity)
    {
      foundValue = true;
      res += "SingleSecurity";
    }
    if(value.val == FIX::MultiLegReportingType::valIndividualLegOfAMultiLegSecurity)
    {
      foundValue = true;
      res += "IndividualLegOfAMultiLegSecurity";
    }
    if(value.val == FIX::MultiLegReportingType::valMultiLegSecurity)
    {
      foundValue = true;
      res += "MultiLegSecurity";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StrikeTime::tag: {
    FIX::StrikeTime::Value value(val);
    res = "StrikeTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ListStatusText::tag: {
    FIX::ListStatusText::Value value(val);
    res = "ListStatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListStatusTextLen::tag: {
    FIX::EncodedListStatusTextLen::Value value(val);
    res = "EncodedListStatusTextLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedListStatusText::tag: {
    FIX::EncodedListStatusText::Value value(val);
    res = "EncodedListStatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartyIDSource::tag: {
    FIX::PartyIDSource::Value value(val);
    res = "PartyIDSource = ";
    if(value.val == FIX::PartyIDSource::valBICBankIdentificationCodeSwiftManagedCodeISO9362)
    {
      foundValue = true;
      res += "BICBankIdentificationCodeSwiftManagedCodeISO9362";
    }
    if(value.val == FIX::PartyIDSource::valGenerallyAcceptedMarketParticipantIdentifier)
    {
      foundValue = true;
      res += "GenerallyAcceptedMarketParticipantIdentifier";
    }
    if(value.val == FIX::PartyIDSource::valProprietaryOrCustomCode)
    {
      foundValue = true;
      res += "ProprietaryOrCustomCode";
    }
    if(value.val == FIX::PartyIDSource::valISOCountryCode)
    {
      foundValue = true;
      res += "ISOCountryCode";
    }
    if(value.val == FIX::PartyIDSource::valSettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode)
    {
      foundValue = true;
      res += "SettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode";
    }
    if(value.val == FIX::PartyIDSource::valMICISO0383MarketIdentifierCode)
    {
      foundValue = true;
      res += "MICISO0383MarketIdentifierCode";
    }
    if(value.val == FIX::PartyIDSource::valCSDParticipantOrmemberCode)
    {
      foundValue = true;
      res += "CSDParticipantOrmemberCode";
    }
    if(value.val == FIX::PartyIDSource::valKoreanInvestorID)
    {
      foundValue = true;
      res += "KoreanInvestorID";
    }
    if(value.val == FIX::PartyIDSource::valTaiwaneseQualifiedForeignInvestorIDQFIIOrFID)
    {
      foundValue = true;
      res += "TaiwaneseQualifiedForeignInvestorIDQFIIOrFID";
    }
    if(value.val == FIX::PartyIDSource::valTaiwaneseTradingAccount)
    {
      foundValue = true;
      res += "TaiwaneseTradingAccount";
    }
    if(value.val == FIX::PartyIDSource::valMalaysianCentralDepositoryMCDNumber)
    {
      foundValue = true;
      res += "MalaysianCentralDepositoryMCDNumber";
    }
    if(value.val == FIX::PartyIDSource::valChineseBShare)
    {
      foundValue = true;
      res += "ChineseBShare";
    }
    if(value.val == FIX::PartyIDSource::valUKNationalInsuranceOrPensionNumber)
    {
      foundValue = true;
      res += "UKNationalInsuranceOrPensionNumber";
    }
    if(value.val == FIX::PartyIDSource::valUSSocialSecurityNumber)
    {
      foundValue = true;
      res += "USSocialSecurityNumber";
    }
    if(value.val == FIX::PartyIDSource::valUSEmployerIdentificationNumber)
    {
      foundValue = true;
      res += "USEmployerIdentificationNumber";
    }
    if(value.val == FIX::PartyIDSource::valAustralianBusinessNumber)
    {
      foundValue = true;
      res += "AustralianBusinessNumber";
    }
    if(value.val == FIX::PartyIDSource::valAustralianTaxFileNumber)
    {
      foundValue = true;
      res += "AustralianTaxFileNumber";
    }
    if(value.val == FIX::PartyIDSource::valDirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC)
    {
      foundValue = true;
      res += "DirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartyID::tag: {
    FIX::PartyID::Value value(val);
    res = "PartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalVolumeTradedDate::tag: {
    FIX::TotalVolumeTradedDate::Value value(val);
    res = "TotalVolumeTradedDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalVolumeTrade::tag: {
    FIX::TotalVolumeTrade::Value value(val);
    res = "TotalVolumeTrade = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetChgPrevDay::tag: {
    FIX::NetChgPrevDay::Value value(val);
    res = "NetChgPrevDay = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartyRole::tag: {
    FIX::PartyRole::Value value(val);
    res = "PartyRole = ";
    if(value.val == FIX::PartyRole::valExecutingFirm)
    {
      foundValue = true;
      res += "ExecutingFirm";
    }
    if(value.val == FIX::PartyRole::valBrokerOfCredit)
    {
      foundValue = true;
      res += "BrokerOfCredit";
    }
    if(value.val == FIX::PartyRole::valClientID)
    {
      foundValue = true;
      res += "ClientID";
    }
    if(value.val == FIX::PartyRole::valClearingFirm)
    {
      foundValue = true;
      res += "ClearingFirm";
    }
    if(value.val == FIX::PartyRole::valInvestorID)
    {
      foundValue = true;
      res += "InvestorID";
    }
    if(value.val == FIX::PartyRole::valIntroducingFirm)
    {
      foundValue = true;
      res += "IntroducingFirm";
    }
    if(value.val == FIX::PartyRole::valEnteringFirm)
    {
      foundValue = true;
      res += "EnteringFirm";
    }
    if(value.val == FIX::PartyRole::valLocateOrLendingFirm)
    {
      foundValue = true;
      res += "LocateOrLendingFirm";
    }
    if(value.val == FIX::PartyRole::valFundManagerClientID)
    {
      foundValue = true;
      res += "FundManagerClientID";
    }
    if(value.val == FIX::PartyRole::valSettlementLocation)
    {
      foundValue = true;
      res += "SettlementLocation";
    }
    if(value.val == FIX::PartyRole::valOrderOriginationTrader)
    {
      foundValue = true;
      res += "OrderOriginationTrader";
    }
    if(value.val == FIX::PartyRole::valExecutingTrader)
    {
      foundValue = true;
      res += "ExecutingTrader";
    }
    if(value.val == FIX::PartyRole::valOrderOriginationFirm)
    {
      foundValue = true;
      res += "OrderOriginationFirm";
    }
    if(value.val == FIX::PartyRole::valGiveupClearingFirm)
    {
      foundValue = true;
      res += "GiveupClearingFirm";
    }
    if(value.val == FIX::PartyRole::valCorrespondantClearingFirm)
    {
      foundValue = true;
      res += "CorrespondantClearingFirm";
    }
    if(value.val == FIX::PartyRole::valExecutingSystem)
    {
      foundValue = true;
      res += "ExecutingSystem";
    }
    if(value.val == FIX::PartyRole::valContraFirm)
    {
      foundValue = true;
      res += "ContraFirm";
    }
    if(value.val == FIX::PartyRole::valContraClearingFirm)
    {
      foundValue = true;
      res += "ContraClearingFirm";
    }
    if(value.val == FIX::PartyRole::valSponsoringFirm)
    {
      foundValue = true;
      res += "SponsoringFirm";
    }
    if(value.val == FIX::PartyRole::valUnderlyingContraFirm)
    {
      foundValue = true;
      res += "UnderlyingContraFirm";
    }
    if(value.val == FIX::PartyRole::valClearingOrganization)
    {
      foundValue = true;
      res += "ClearingOrganization";
    }
    if(value.val == FIX::PartyRole::valExchange)
    {
      foundValue = true;
      res += "Exchange";
    }
    if(value.val == FIX::PartyRole::valCustomerAccount)
    {
      foundValue = true;
      res += "CustomerAccount";
    }
    if(value.val == FIX::PartyRole::valCorrespondentClearingOrganization)
    {
      foundValue = true;
      res += "CorrespondentClearingOrganization";
    }
    if(value.val == FIX::PartyRole::valCorrespondentBroker)
    {
      foundValue = true;
      res += "CorrespondentBroker";
    }
    if(value.val == FIX::PartyRole::valBuyerOrSeller)
    {
      foundValue = true;
      res += "BuyerOrSeller";
    }
    if(value.val == FIX::PartyRole::valCustodian)
    {
      foundValue = true;
      res += "Custodian";
    }
    if(value.val == FIX::PartyRole::valIntermediary)
    {
      foundValue = true;
      res += "Intermediary";
    }
    if(value.val == FIX::PartyRole::valAgent)
    {
      foundValue = true;
      res += "Agent";
    }
    if(value.val == FIX::PartyRole::valSubCustodian)
    {
      foundValue = true;
      res += "SubCustodian";
    }
    if(value.val == FIX::PartyRole::valBeneficiary)
    {
      foundValue = true;
      res += "Beneficiary";
    }
    if(value.val == FIX::PartyRole::valInterestedParty)
    {
      foundValue = true;
      res += "InterestedParty";
    }
    if(value.val == FIX::PartyRole::valRegulatoryBody)
    {
      foundValue = true;
      res += "RegulatoryBody";
    }
    if(value.val == FIX::PartyRole::valLiquidityProvider)
    {
      foundValue = true;
      res += "LiquidityProvider";
    }
    if(value.val == FIX::PartyRole::valEnteringTrader)
    {
      foundValue = true;
      res += "EnteringTrader";
    }
    if(value.val == FIX::PartyRole::valContraTrader)
    {
      foundValue = true;
      res += "ContraTrader";
    }
    if(value.val == FIX::PartyRole::valPositionAccount)
    {
      foundValue = true;
      res += "PositionAccount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPartyIDs::tag: {
    FIX::NoPartyIDs::Value value(val);
    res = "NoPartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSecurityAltID::tag: {
    FIX::NoSecurityAltID::Value value(val);
    res = "NoSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityAltID::tag: {
    FIX::SecurityAltID::Value value(val);
    res = "SecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityAltIDSource::tag: {
    FIX::SecurityAltIDSource::Value value(val);
    res = "SecurityAltIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoUnderlyingSecurityAltID::tag: {
    FIX::NoUnderlyingSecurityAltID::Value value(val);
    res = "NoUnderlyingSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityAltID::tag: {
    FIX::UnderlyingSecurityAltID::Value value(val);
    res = "UnderlyingSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecurityAltIDSource::tag: {
    FIX::UnderlyingSecurityAltIDSource::Value value(val);
    res = "UnderlyingSecurityAltIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Product::tag: {
    FIX::Product::Value value(val);
    res = "Product = ";
    if(value.val == FIX::Product::valAGENCY)
    {
      foundValue = true;
      res += "AGENCY";
    }
    if(value.val == FIX::Product::valCOMMODITY)
    {
      foundValue = true;
      res += "COMMODITY";
    }
    if(value.val == FIX::Product::valCORPORATE)
    {
      foundValue = true;
      res += "CORPORATE";
    }
    if(value.val == FIX::Product::valCURRENCY)
    {
      foundValue = true;
      res += "CURRENCY";
    }
    if(value.val == FIX::Product::valEQUITY)
    {
      foundValue = true;
      res += "EQUITY";
    }
    if(value.val == FIX::Product::valGOVERNMENT)
    {
      foundValue = true;
      res += "GOVERNMENT";
    }
    if(value.val == FIX::Product::valINDEX)
    {
      foundValue = true;
      res += "INDEX";
    }
    if(value.val == FIX::Product::valLOAN)
    {
      foundValue = true;
      res += "LOAN";
    }
    if(value.val == FIX::Product::valMONEYMARKET)
    {
      foundValue = true;
      res += "MONEYMARKET";
    }
    if(value.val == FIX::Product::valMORTGAGE)
    {
      foundValue = true;
      res += "MORTGAGE";
    }
    if(value.val == FIX::Product::valMUNICIPAL)
    {
      foundValue = true;
      res += "MUNICIPAL";
    }
    if(value.val == FIX::Product::valOTHER)
    {
      foundValue = true;
      res += "OTHER";
    }
    if(value.val == FIX::Product::valFINANCING)
    {
      foundValue = true;
      res += "FINANCING";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CFICode::tag: {
    FIX::CFICode::Value value(val);
    res = "CFICode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingProduct::tag: {
    FIX::UnderlyingProduct::Value value(val);
    res = "UnderlyingProduct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCFICode::tag: {
    FIX::UnderlyingCFICode::Value value(val);
    res = "UnderlyingCFICode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TestMessageIndicator::tag: {
    FIX::TestMessageIndicator::Value value(val);
    res = "TestMessageIndicator = ";
    if(value.val == FIX::TestMessageIndicator::valTrue)
    {
      foundValue = true;
      res += "True";
    }
    if(value.val == FIX::TestMessageIndicator::valFalse)
    {
      foundValue = true;
      res += "False";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuantityType::tag: {
    FIX::QuantityType::Value value(val);
    res = "QuantityType = ";
    if(value.val == FIX::QuantityType::valSHARES)
    {
      foundValue = true;
      res += "SHARES";
    }
    if(value.val == FIX::QuantityType::valBONDS)
    {
      foundValue = true;
      res += "BONDS";
    }
    if(value.val == FIX::QuantityType::valCURRENTFACE)
    {
      foundValue = true;
      res += "CURRENTFACE";
    }
    if(value.val == FIX::QuantityType::valORIGINALFACE)
    {
      foundValue = true;
      res += "ORIGINALFACE";
    }
    if(value.val == FIX::QuantityType::valCURRENCY)
    {
      foundValue = true;
      res += "CURRENCY";
    }
    if(value.val == FIX::QuantityType::valCONTRACTS)
    {
      foundValue = true;
      res += "CONTRACTS";
    }
    if(value.val == FIX::QuantityType::valOTHER)
    {
      foundValue = true;
      res += "OTHER";
    }
    if(value.val == FIX::QuantityType::valPAR)
    {
      foundValue = true;
      res += "PAR";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BookingRefID::tag: {
    FIX::BookingRefID::Value value(val);
    res = "BookingRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::IndividualAllocID::tag: {
    FIX::IndividualAllocID::Value value(val);
    res = "IndividualAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoundingDirection::tag: {
    FIX::RoundingDirection::Value value(val);
    res = "RoundingDirection = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoundingModulus::tag: {
    FIX::RoundingModulus::Value value(val);
    res = "RoundingModulus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CountryOfIssue::tag: {
    FIX::CountryOfIssue::Value value(val);
    res = "CountryOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StateOrProvinceOfIssue::tag: {
    FIX::StateOrProvinceOfIssue::Value value(val);
    res = "StateOrProvinceOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LocaleOfIssue::tag: {
    FIX::LocaleOfIssue::Value value(val);
    res = "LocaleOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoRegistDtls::tag: {
    FIX::NoRegistDtls::Value value(val);
    res = "NoRegistDtls = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MailingDtls::tag: {
    FIX::MailingDtls::Value value(val);
    res = "MailingDtls = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InvestorCountryOfResidence::tag: {
    FIX::InvestorCountryOfResidence::Value value(val);
    res = "InvestorCountryOfResidence = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentRef::tag: {
    FIX::PaymentRef::Value value(val);
    res = "PaymentRef = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DistribPaymentMethod::tag: {
    FIX::DistribPaymentMethod::Value value(val);
    res = "DistribPaymentMethod = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribCurr::tag: {
    FIX::CashDistribCurr::Value value(val);
    res = "CashDistribCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CommCurrency::tag: {
    FIX::CommCurrency::Value value(val);
    res = "CommCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CancellationRights::tag: {
    FIX::CancellationRights::Value value(val);
    res = "CancellationRights = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MoneyLaunderingStatus::tag: {
    FIX::MoneyLaunderingStatus::Value value(val);
    res = "MoneyLaunderingStatus = ";
    if(value.val == FIX::MoneyLaunderingStatus::valPassed)
    {
      foundValue = true;
      res += "Passed";
    }
    if(value.val == FIX::MoneyLaunderingStatus::valNotChecked)
    {
      foundValue = true;
      res += "NotChecked";
    }
    if(value.val == FIX::MoneyLaunderingStatus::valExemptBelowTheLimit)
    {
      foundValue = true;
      res += "ExemptBelowTheLimit";
    }
    if(value.val == FIX::MoneyLaunderingStatus::valExemptClientMoneyTypeExemption)
    {
      foundValue = true;
      res += "ExemptClientMoneyTypeExemption";
    }
    if(value.val == FIX::MoneyLaunderingStatus::valExemptAuthorisedCreditOrFinancialInstitution)
    {
      foundValue = true;
      res += "ExemptAuthorisedCreditOrFinancialInstitution";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MailingInst::tag: {
    FIX::MailingInst::Value value(val);
    res = "MailingInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TransBkdTime::tag: {
    FIX::TransBkdTime::Value value(val);
    res = "TransBkdTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecPriceType::tag: {
    FIX::ExecPriceType::Value value(val);
    res = "ExecPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecPriceAdjustment::tag: {
    FIX::ExecPriceAdjustment::Value value(val);
    res = "ExecPriceAdjustment = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DateOfBirth::tag: {
    FIX::DateOfBirth::Value value(val);
    res = "DateOfBirth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportTransType::tag: {
    FIX::TradeReportTransType::Value value(val);
    res = "TradeReportTransType = ";
    if(value.val == FIX::TradeReportTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::TradeReportTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(value.val == FIX::TradeReportTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value.val == FIX::TradeReportTransType::valRelease)
    {
      foundValue = true;
      res += "Release";
    }
    if(value.val == FIX::TradeReportTransType::valReverse)
    {
      foundValue = true;
      res += "Reverse";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardHolderName::tag: {
    FIX::CardHolderName::Value value(val);
    res = "CardHolderName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardNumber::tag: {
    FIX::CardNumber::Value value(val);
    res = "CardNumber = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardExpDate::tag: {
    FIX::CardExpDate::Value value(val);
    res = "CardExpDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardIssNum::tag: {
    FIX::CardIssNum::Value value(val);
    res = "CardIssNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentMethod::tag: {
    FIX::PaymentMethod::Value value(val);
    res = "PaymentMethod = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistAcctType::tag: {
    FIX::RegistAcctType::Value value(val);
    res = "RegistAcctType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Designation::tag: {
    FIX::Designation::Value value(val);
    res = "Designation = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TaxAdvantageType::tag: {
    FIX::TaxAdvantageType::Value value(val);
    res = "TaxAdvantageType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistRejReasonText::tag: {
    FIX::RegistRejReasonText::Value value(val);
    res = "RegistRejReasonText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::FundRenewWaiv::tag: {
    FIX::FundRenewWaiv::Value value(val);
    res = "FundRenewWaiv = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentName::tag: {
    FIX::CashDistribAgentName::Value value(val);
    res = "CashDistribAgentName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentCode::tag: {
    FIX::CashDistribAgentCode::Value value(val);
    res = "CashDistribAgentCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentAcctNumber::tag: {
    FIX::CashDistribAgentAcctNumber::Value value(val);
    res = "CashDistribAgentAcctNumber = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribPayRef::tag: {
    FIX::CashDistribPayRef::Value value(val);
    res = "CashDistribPayRef = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashDistribAgentAcctName::tag: {
    FIX::CashDistribAgentAcctName::Value value(val);
    res = "CashDistribAgentAcctName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CardStartDate::tag: {
    FIX::CardStartDate::Value value(val);
    res = "CardStartDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentDate::tag: {
    FIX::PaymentDate::Value value(val);
    res = "PaymentDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PaymentRemitterID::tag: {
    FIX::PaymentRemitterID::Value value(val);
    res = "PaymentRemitterID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistStatus::tag: {
    FIX::RegistStatus::Value value(val);
    res = "RegistStatus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistRejReasonCode::tag: {
    FIX::RegistRejReasonCode::Value value(val);
    res = "RegistRejReasonCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistRefID::tag: {
    FIX::RegistRefID::Value value(val);
    res = "RegistRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistDtls::tag: {
    FIX::RegistDtls::Value value(val);
    res = "RegistDtls = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoDistribInsts::tag: {
    FIX::NoDistribInsts::Value value(val);
    res = "NoDistribInsts = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistEmail::tag: {
    FIX::RegistEmail::Value value(val);
    res = "RegistEmail = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DistribPercentage::tag: {
    FIX::DistribPercentage::Value value(val);
    res = "DistribPercentage = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistID::tag: {
    FIX::RegistID::Value value(val);
    res = "RegistID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RegistTransType::tag: {
    FIX::RegistTransType::Value value(val);
    res = "RegistTransType = ";
    if(value.val == FIX::RegistTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::RegistTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value.val == FIX::RegistTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExecValuationPoint::tag: {
    FIX::ExecValuationPoint::Value value(val);
    res = "ExecValuationPoint = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderPercent::tag: {
    FIX::OrderPercent::Value value(val);
    res = "OrderPercent = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OwnershipType::tag: {
    FIX::OwnershipType::Value value(val);
    res = "OwnershipType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoContAmts::tag: {
    FIX::NoContAmts::Value value(val);
    res = "NoContAmts = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContAmtType::tag: {
    FIX::ContAmtType::Value value(val);
    res = "ContAmtType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContAmtValue::tag: {
    FIX::ContAmtValue::Value value(val);
    res = "ContAmtValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContAmtCurr::tag: {
    FIX::ContAmtCurr::Value value(val);
    res = "ContAmtCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OwnerType::tag: {
    FIX::OwnerType::Value value(val);
    res = "OwnerType = ";
    if(value.val == FIX::OwnerType::valIndividualInvestor)
    {
      foundValue = true;
      res += "IndividualInvestor";
    }
    if(value.val == FIX::OwnerType::valPublicCompany)
    {
      foundValue = true;
      res += "PublicCompany";
    }
    if(value.val == FIX::OwnerType::valPrivateCompany)
    {
      foundValue = true;
      res += "PrivateCompany";
    }
    if(value.val == FIX::OwnerType::valIndividualTrustee)
    {
      foundValue = true;
      res += "IndividualTrustee";
    }
    if(value.val == FIX::OwnerType::valCompanyTrustee)
    {
      foundValue = true;
      res += "CompanyTrustee";
    }
    if(value.val == FIX::OwnerType::valPensionPlan)
    {
      foundValue = true;
      res += "PensionPlan";
    }
    if(value.val == FIX::OwnerType::valCustodianUnderGiftsToMinorsAct)
    {
      foundValue = true;
      res += "CustodianUnderGiftsToMinorsAct";
    }
    if(value.val == FIX::OwnerType::valTrusts)
    {
      foundValue = true;
      res += "Trusts";
    }
    if(value.val == FIX::OwnerType::valFiduciaries)
    {
      foundValue = true;
      res += "Fiduciaries";
    }
    if(value.val == FIX::OwnerType::valNetworkingSubAccount)
    {
      foundValue = true;
      res += "NetworkingSubAccount";
    }
    if(value.val == FIX::OwnerType::valNonProfitOrganization)
    {
      foundValue = true;
      res += "NonProfitOrganization";
    }
    if(value.val == FIX::OwnerType::valCorporateBody)
    {
      foundValue = true;
      res += "CorporateBody";
    }
    if(value.val == FIX::OwnerType::valNominee)
    {
      foundValue = true;
      res += "Nominee";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartySubID::tag: {
    FIX::PartySubID::Value value(val);
    res = "PartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartyID::tag: {
    FIX::NestedPartyID::Value value(val);
    res = "NestedPartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartyIDSource::tag: {
    FIX::NestedPartyIDSource::Value value(val);
    res = "NestedPartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryClOrdID::tag: {
    FIX::SecondaryClOrdID::Value value(val);
    res = "SecondaryClOrdID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryExecID::tag: {
    FIX::SecondaryExecID::Value value(val);
    res = "SecondaryExecID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderCapacity::tag: {
    FIX::OrderCapacity::Value value(val);
    res = "OrderCapacity = ";
    if(value.val == FIX::OrderCapacity::valAgency)
    {
      foundValue = true;
      res += "Agency";
    }
    if(value.val == FIX::OrderCapacity::valProprietary)
    {
      foundValue = true;
      res += "Proprietary";
    }
    if(value.val == FIX::OrderCapacity::valIndividual)
    {
      foundValue = true;
      res += "Individual";
    }
    if(value.val == FIX::OrderCapacity::valPrincipal)
    {
      foundValue = true;
      res += "Principal";
    }
    if(value.val == FIX::OrderCapacity::valRisklessPrincipal)
    {
      foundValue = true;
      res += "RisklessPrincipal";
    }
    if(value.val == FIX::OrderCapacity::valAgentForOtherMember)
    {
      foundValue = true;
      res += "AgentForOtherMember";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderRestrictions::tag: {
    FIX::OrderRestrictions::Value value(val);
    res = "OrderRestrictions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassCancelRequestType::tag: {
    FIX::MassCancelRequestType::Value value(val);
    res = "MassCancelRequestType = ";
    if(value.val == FIX::MassCancelRequestType::valCancelOrdersForASecurity)
    {
      foundValue = true;
      res += "CancelOrdersForASecurity";
    }
    if(value.val == FIX::MassCancelRequestType::valCancelOrdersForAnUnderlyingSecurity)
    {
      foundValue = true;
      res += "CancelOrdersForAnUnderlyingSecurity";
    }
    if(value.val == FIX::MassCancelRequestType::valCancelOrdersForAProduct)
    {
      foundValue = true;
      res += "CancelOrdersForAProduct";
    }
    if(value.val == FIX::MassCancelRequestType::valCancelOrdersForACFICode)
    {
      foundValue = true;
      res += "CancelOrdersForACFICode";
    }
    if(value.val == FIX::MassCancelRequestType::valCancelOrdersForASecurityType)
    {
      foundValue = true;
      res += "CancelOrdersForASecurityType";
    }
    if(value.val == FIX::MassCancelRequestType::valCancelOrdersForATradingSession)
    {
      foundValue = true;
      res += "CancelOrdersForATradingSession";
    }
    if(value.val == FIX::MassCancelRequestType::valCancelAllOrders)
    {
      foundValue = true;
      res += "CancelAllOrders";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassCancelResponse::tag: {
    FIX::MassCancelResponse::Value value(val);
    res = "MassCancelResponse = ";
    if(value.val == FIX::MassCancelResponse::valCancelRequestRejectedSeeMassCancelRejectReason)
    {
      foundValue = true;
      res += "CancelRequestRejectedSeeMassCancelRejectReason";
    }
    if(value.val == FIX::MassCancelResponse::valCancelOrdersForASecurity)
    {
      foundValue = true;
      res += "CancelOrdersForASecurity";
    }
    if(value.val == FIX::MassCancelResponse::valCancelOrdersForAnUnderlyingSecurity)
    {
      foundValue = true;
      res += "CancelOrdersForAnUnderlyingSecurity";
    }
    if(value.val == FIX::MassCancelResponse::valCancelOrdersForAProduct)
    {
      foundValue = true;
      res += "CancelOrdersForAProduct";
    }
    if(value.val == FIX::MassCancelResponse::valCancelOrdersForACFICode)
    {
      foundValue = true;
      res += "CancelOrdersForACFICode";
    }
    if(value.val == FIX::MassCancelResponse::valCancelOrdersForASecurityType)
    {
      foundValue = true;
      res += "CancelOrdersForASecurityType";
    }
    if(value.val == FIX::MassCancelResponse::valCancelOrdersForATradingSession)
    {
      foundValue = true;
      res += "CancelOrdersForATradingSession";
    }
    if(value.val == FIX::MassCancelResponse::valCancelAllOrders)
    {
      foundValue = true;
      res += "CancelAllOrders";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassCancelRejectReason::tag: {
    FIX::MassCancelRejectReason::Value value(val);
    res = "MassCancelRejectReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalAffectedOrders::tag: {
    FIX::TotalAffectedOrders::Value value(val);
    res = "TotalAffectedOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoAffectedOrders::tag: {
    FIX::NoAffectedOrders::Value value(val);
    res = "NoAffectedOrders = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AffectedOrderID::tag: {
    FIX::AffectedOrderID::Value value(val);
    res = "AffectedOrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AffectedSecondaryOrderID::tag: {
    FIX::AffectedSecondaryOrderID::Value value(val);
    res = "AffectedSecondaryOrderID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteType::tag: {
    FIX::QuoteType::Value value(val);
    res = "QuoteType = ";
    if(value.val == FIX::QuoteType::valIndicative)
    {
      foundValue = true;
      res += "Indicative";
    }
    if(value.val == FIX::QuoteType::valTradeable)
    {
      foundValue = true;
      res += "Tradeable";
    }
    if(value.val == FIX::QuoteType::valRestrictedTradeable)
    {
      foundValue = true;
      res += "RestrictedTradeable";
    }
    if(value.val == FIX::QuoteType::valCounter)
    {
      foundValue = true;
      res += "Counter";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartyRole::tag: {
    FIX::NestedPartyRole::Value value(val);
    res = "NestedPartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNestedPartyIDs::tag: {
    FIX::NoNestedPartyIDs::Value value(val);
    res = "NoNestedPartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalAccruedInterestAmt::tag: {
    FIX::TotalAccruedInterestAmt::Value value(val);
    res = "TotalAccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityDate::tag: {
    FIX::MaturityDate::Value value(val);
    res = "MaturityDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingMaturityDate::tag: {
    FIX::UnderlyingMaturityDate::Value value(val);
    res = "UnderlyingMaturityDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InstrRegistry::tag: {
    FIX::InstrRegistry::Value value(val);
    res = "InstrRegistry = ";
    if(!strcmp(value.val, FIX::InstrRegistry::valBankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords))
    {
      foundValue = true;
      res += "BankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords";
    }
    if(!strcmp(value.val, FIX::InstrRegistry::valZPhysicalOrBearer))
    {
      foundValue = true;
      res += "ZPhysicalOrBearer";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashMargin::tag: {
    FIX::CashMargin::Value value(val);
    res = "CashMargin = ";
    if(value.val == FIX::CashMargin::valCash)
    {
      foundValue = true;
      res += "Cash";
    }
    if(value.val == FIX::CashMargin::valMarginOpen)
    {
      foundValue = true;
      res += "MarginOpen";
    }
    if(value.val == FIX::CashMargin::valMarginClose)
    {
      foundValue = true;
      res += "MarginClose";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartySubID::tag: {
    FIX::NestedPartySubID::Value value(val);
    res = "NestedPartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Scope::tag: {
    FIX::Scope::Value value(val);
    res = "Scope = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MDImplicitDelete::tag: {
    FIX::MDImplicitDelete::Value value(val);
    res = "MDImplicitDelete = ";
    if(value.val == FIX::MDImplicitDelete::valClientHasResponsibilityForImplicitlyDeletingBidsOrOffers)
    {
      foundValue = true;
      res += "ClientHasResponsibilityForImplicitlyDeletingBidsOrOffers";
    }
    if(value.val == FIX::MDImplicitDelete::valServerMustSendAnExplicitDeleteForBidsOrOffers)
    {
      foundValue = true;
      res += "ServerMustSendAnExplicitDeleteForBidsOrOffers";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossID::tag: {
    FIX::CrossID::Value value(val);
    res = "CrossID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossType::tag: {
    FIX::CrossType::Value value(val);
    res = "CrossType = ";
    if(value.val == FIX::CrossType::valCrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner)
    {
      foundValue = true;
      res += "CrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner";
    }
    if(value.val == FIX::CrossType::valCrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled)
    {
      foundValue = true;
      res += "CrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled";
    }
    if(value.val == FIX::CrossType::valCrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions)
    {
      foundValue = true;
      res += "CrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions";
    }
    if(value.val == FIX::CrossType::valCrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist)
    {
      foundValue = true;
      res += "CrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CrossPrioritization::tag: {
    FIX::CrossPrioritization::Value value(val);
    res = "CrossPrioritization = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigCrossID::tag: {
    FIX::OrigCrossID::Value value(val);
    res = "OrigCrossID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSides::tag: {
    FIX::NoSides::Value value(val);
    res = "NoSides = ";
    if(value.val == FIX::NoSides::valOneSide)
    {
      foundValue = true;
      res += "OneSide";
    }
    if(value.val == FIX::NoSides::valBothSides)
    {
      foundValue = true;
      res += "BothSides";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Username::tag: {
    FIX::Username::Value value(val);
    res = "Username = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Password::tag: {
    FIX::Password::Value value(val);
    res = "Password = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegs::tag: {
    FIX::NoLegs::Value value(val);
    res = "NoLegs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCurrency::tag: {
    FIX::LegCurrency::Value value(val);
    res = "LegCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoSecurityTypes::tag: {
    FIX::TotNoSecurityTypes::Value value(val);
    res = "TotNoSecurityTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSecurityTypes::tag: {
    FIX::NoSecurityTypes::Value value(val);
    res = "NoSecurityTypes = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityListRequestType::tag: {
    FIX::SecurityListRequestType::Value value(val);
    res = "SecurityListRequestType = ";
    if(value.val == FIX::SecurityListRequestType::valSymbol)
    {
      foundValue = true;
      res += "Symbol";
    }
    if(value.val == FIX::SecurityListRequestType::valSecurityTypeAndOrCFICode)
    {
      foundValue = true;
      res += "SecurityTypeAndOrCFICode";
    }
    if(value.val == FIX::SecurityListRequestType::valProduct)
    {
      foundValue = true;
      res += "Product";
    }
    if(value.val == FIX::SecurityListRequestType::valTradingSessionID)
    {
      foundValue = true;
      res += "TradingSessionID";
    }
    if(value.val == FIX::SecurityListRequestType::valAllSecurities)
    {
      foundValue = true;
      res += "AllSecurities";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecurityRequestResult::tag: {
    FIX::SecurityRequestResult::Value value(val);
    res = "SecurityRequestResult = ";
    if(value.val == FIX::SecurityRequestResult::valValidRequest)
    {
      foundValue = true;
      res += "ValidRequest";
    }
    if(value.val == FIX::SecurityRequestResult::valInvalidOrUnsupportedRequest)
    {
      foundValue = true;
      res += "InvalidOrUnsupportedRequest";
    }
    if(value.val == FIX::SecurityRequestResult::valNoInstrumentsFoundThatMatchSelectionCriteria)
    {
      foundValue = true;
      res += "NoInstrumentsFoundThatMatchSelectionCriteria";
    }
    if(value.val == FIX::SecurityRequestResult::valNotAuthorizedToRetrieveInstrumentData)
    {
      foundValue = true;
      res += "NotAuthorizedToRetrieveInstrumentData";
    }
    if(value.val == FIX::SecurityRequestResult::valInstrumentDataTemporarilyUnavailable)
    {
      foundValue = true;
      res += "InstrumentDataTemporarilyUnavailable";
    }
    if(value.val == FIX::SecurityRequestResult::valRequestForInstrumentDataNotSupported)
    {
      foundValue = true;
      res += "RequestForInstrumentDataNotSupported";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::RoundLot::tag: {
    FIX::RoundLot::Value value(val);
    res = "RoundLot = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinTradeVol::tag: {
    FIX::MinTradeVol::Value value(val);
    res = "MinTradeVol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MultiLegRptTypeReq::tag: {
    FIX::MultiLegRptTypeReq::Value value(val);
    res = "MultiLegRptTypeReq = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPositionEffect::tag: {
    FIX::LegPositionEffect::Value value(val);
    res = "LegPositionEffect = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCoveredOrUncovered::tag: {
    FIX::LegCoveredOrUncovered::Value value(val);
    res = "LegCoveredOrUncovered = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPrice::tag: {
    FIX::LegPrice::Value value(val);
    res = "LegPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradSesStatusRejReason::tag: {
    FIX::TradSesStatusRejReason::Value value(val);
    res = "TradSesStatusRejReason = ";
    if(value.val == FIX::TradSesStatusRejReason::valUnknownOrInvalidTradingSessionID)
    {
      foundValue = true;
      res += "UnknownOrInvalidTradingSessionID";
    }
    if(value.val == FIX::TradSesStatusRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestID::tag: {
    FIX::TradeRequestID::Value value(val);
    res = "TradeRequestID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestType::tag: {
    FIX::TradeRequestType::Value value(val);
    res = "TradeRequestType = ";
    if(value.val == FIX::TradeRequestType::valAllTrades)
    {
      foundValue = true;
      res += "AllTrades";
    }
    if(value.val == FIX::TradeRequestType::valMatchedTradesMatchingCriteriaProvidedOnRequest)
    {
      foundValue = true;
      res += "MatchedTradesMatchingCriteriaProvidedOnRequest";
    }
    if(value.val == FIX::TradeRequestType::valUnmatchedTradesThatMatchCriteria)
    {
      foundValue = true;
      res += "UnmatchedTradesThatMatchCriteria";
    }
    if(value.val == FIX::TradeRequestType::valUnreportedTradesThatMatchCriteria)
    {
      foundValue = true;
      res += "UnreportedTradesThatMatchCriteria";
    }
    if(value.val == FIX::TradeRequestType::valAdvisoriesThatMatchCriteria)
    {
      foundValue = true;
      res += "AdvisoriesThatMatchCriteria";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PreviouslyReported::tag: {
    FIX::PreviouslyReported::Value value(val);
    res = "PreviouslyReported = ";
    if(value.val == FIX::PreviouslyReported::valPreviouslyReportedToCounterparty)
    {
      foundValue = true;
      res += "PreviouslyReportedToCounterparty";
    }
    if(value.val == FIX::PreviouslyReported::valNotReportedToCounterparty)
    {
      foundValue = true;
      res += "NotReportedToCounterparty";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportID::tag: {
    FIX::TradeReportID::Value value(val);
    res = "TradeReportID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportRefID::tag: {
    FIX::TradeReportRefID::Value value(val);
    res = "TradeReportRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MatchStatus::tag: {
    FIX::MatchStatus::Value value(val);
    res = "MatchStatus = ";
    if(value.val == FIX::MatchStatus::valComparedMatchedOrAffirmed)
    {
      foundValue = true;
      res += "ComparedMatchedOrAffirmed";
    }
    if(value.val == FIX::MatchStatus::valUncomparedUnmatchedOrUnaffirmed)
    {
      foundValue = true;
      res += "UncomparedUnmatchedOrUnaffirmed";
    }
    if(value.val == FIX::MatchStatus::valAdvisoryOrAlert)
    {
      foundValue = true;
      res += "AdvisoryOrAlert";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::MatchType::tag: {
    FIX::MatchType::Value value(val);
    res = "MatchType = ";
    if(!strcmp(value.val, FIX::MatchType::valExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime))
    {
      foundValue = true;
      res += "ExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime";
    }
    if(!strcmp(value.val, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges";
    }
    if(!strcmp(value.val, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime";
    }
    if(!strcmp(value.val, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges";
    }
    if(!strcmp(value.val, FIX::MatchType::valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime))
    {
      foundValue = true;
      res += "ExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime";
    }
    if(!strcmp(value.val, FIX::MatchType::valComparedRecordsResultingFromStampedAdvisoriesOrSpecialist))
    {
      foundValue = true;
      res += "ComparedRecordsResultingFromStampedAdvisoriesOrSpecialist";
    }
    if(!strcmp(value.val, FIX::MatchType::valSummarizedMatchUsingAToA1))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA1";
    }
    if(!strcmp(value.val, FIX::MatchType::valSummarizedMatchUsingAToA2))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA2";
    }
    if(!strcmp(value.val, FIX::MatchType::valSummarizedMatchUsingAToA3))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA3";
    }
    if(!strcmp(value.val, FIX::MatchType::valSummarizedMatchUsingAToA4))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA4";
    }
    if(!strcmp(value.val, FIX::MatchType::valSummarizedMatchUsingAToA5))
    {
      foundValue = true;
      res += "SummarizedMatchUsingAToA5";
    }
    if(!strcmp(value.val, FIX::MatchType::valExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator))
    {
      foundValue = true;
      res += "ExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator";
    }
    if(!strcmp(value.val, FIX::MatchType::valSummarizedMatchMinusBadgesAndTimes))
    {
      foundValue = true;
      res += "SummarizedMatchMinusBadgesAndTimes";
    }
    if(!strcmp(value.val, FIX::MatchType::valOCSLockedIn))
    {
      foundValue = true;
      res += "OCSLockedIn";
    }
    if(!strcmp(value.val, FIX::MatchType::valACTMMatch))
    {
      foundValue = true;
      res += "ACTMMatch";
    }
    if(!strcmp(value.val, FIX::MatchType::valACTM2Match))
    {
      foundValue = true;
      res += "ACTM2Match";
    }
    if(!strcmp(value.val, FIX::MatchType::valACTAcceptedTrade))
    {
      foundValue = true;
      res += "ACTAcceptedTrade";
    }
    if(!strcmp(value.val, FIX::MatchType::valACTDefaultTrade))
    {
      foundValue = true;
      res += "ACTDefaultTrade";
    }
    if(!strcmp(value.val, FIX::MatchType::valACTDefaultAfterM2))
    {
      foundValue = true;
      res += "ACTDefaultAfterM2";
    }
    if(!strcmp(value.val, FIX::MatchType::valACTM6Match))
    {
      foundValue = true;
      res += "ACTM6Match";
    }
    if(!strcmp(value.val, FIX::MatchType::valNonACT))
    {
      foundValue = true;
      res += "NonACT";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OddLot::tag: {
    FIX::OddLot::Value value(val);
    res = "OddLot = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoClearingInstructions::tag: {
    FIX::NoClearingInstructions::Value value(val);
    res = "NoClearingInstructions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingInstruction::tag: {
    FIX::ClearingInstruction::Value value(val);
    res = "ClearingInstruction = ";
    if(value.val == FIX::ClearingInstruction::valProcessNormally)
    {
      foundValue = true;
      res += "ProcessNormally";
    }
    if(value.val == FIX::ClearingInstruction::valExcludeFromAllNetting)
    {
      foundValue = true;
      res += "ExcludeFromAllNetting";
    }
    if(value.val == FIX::ClearingInstruction::valBilateralNettingOnly)
    {
      foundValue = true;
      res += "BilateralNettingOnly";
    }
    if(value.val == FIX::ClearingInstruction::valExClearing)
    {
      foundValue = true;
      res += "ExClearing";
    }
    if(value.val == FIX::ClearingInstruction::valSpecialTrade)
    {
      foundValue = true;
      res += "SpecialTrade";
    }
    if(value.val == FIX::ClearingInstruction::valMultilateralNetting)
    {
      foundValue = true;
      res += "MultilateralNetting";
    }
    if(value.val == FIX::ClearingInstruction::valClearAgainstCentralCounterparty)
    {
      foundValue = true;
      res += "ClearAgainstCentralCounterparty";
    }
    if(value.val == FIX::ClearingInstruction::valExcludeFromCentralCounterparty)
    {
      foundValue = true;
      res += "ExcludeFromCentralCounterparty";
    }
    if(value.val == FIX::ClearingInstruction::valManualMode)
    {
      foundValue = true;
      res += "ManualMode";
    }
    if(value.val == FIX::ClearingInstruction::valAutomaticPostingMode)
    {
      foundValue = true;
      res += "AutomaticPostingMode";
    }
    if(value.val == FIX::ClearingInstruction::valAutomaticGiveUpMode)
    {
      foundValue = true;
      res += "AutomaticGiveUpMode";
    }
    if(value.val == FIX::ClearingInstruction::valQualifiedServiceRepresentativeQSR)
    {
      foundValue = true;
      res += "QualifiedServiceRepresentativeQSR";
    }
    if(value.val == FIX::ClearingInstruction::valCustomerTrade)
    {
      foundValue = true;
      res += "CustomerTrade";
    }
    if(value.val == FIX::ClearingInstruction::valSelfClearing)
    {
      foundValue = true;
      res += "SelfClearing";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeInputSource::tag: {
    FIX::TradeInputSource::Value value(val);
    res = "TradeInputSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeInputDevice::tag: {
    FIX::TradeInputDevice::Value value(val);
    res = "TradeInputDevice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoDates::tag: {
    FIX::NoDates::Value value(val);
    res = "NoDates = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AccountType::tag: {
    FIX::AccountType::Value value(val);
    res = "AccountType = ";
    if(value.val == FIX::AccountType::valAccountIsCarriedOnCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnCustomerSideOfBooks";
    }
    if(value.val == FIX::AccountType::valAccountIsCarriedOnNonCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooks";
    }
    if(value.val == FIX::AccountType::valHouseTrader)
    {
      foundValue = true;
      res += "HouseTrader";
    }
    if(value.val == FIX::AccountType::valFloorTrader)
    {
      foundValue = true;
      res += "FloorTrader";
    }
    if(value.val == FIX::AccountType::valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined";
    }
    if(value.val == FIX::AccountType::valAccountIsHouseTraderAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsHouseTraderAndIsCrossMargined";
    }
    if(value.val == FIX::AccountType::valJointBackofficeAccount)
    {
      foundValue = true;
      res += "JointBackofficeAccount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CustOrderCapacity::tag: {
    FIX::CustOrderCapacity::Value value(val);
    res = "CustOrderCapacity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClOrdLinkID::tag: {
    FIX::ClOrdLinkID::Value value(val);
    res = "ClOrdLinkID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassStatusReqID::tag: {
    FIX::MassStatusReqID::Value value(val);
    res = "MassStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MassStatusReqType::tag: {
    FIX::MassStatusReqType::Value value(val);
    res = "MassStatusReqType = ";
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForASecurity)
    {
      foundValue = true;
      res += "StatusForOrdersForASecurity";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForAnUnderlyingSecurity)
    {
      foundValue = true;
      res += "StatusForOrdersForAnUnderlyingSecurity";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForAProduct)
    {
      foundValue = true;
      res += "StatusForOrdersForAProduct";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForACFICode)
    {
      foundValue = true;
      res += "StatusForOrdersForACFICode";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForASecurityType)
    {
      foundValue = true;
      res += "StatusForOrdersForASecurityType";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForATradingSession)
    {
      foundValue = true;
      res += "StatusForOrdersForATradingSession";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForAllOrders)
    {
      foundValue = true;
      res += "StatusForAllOrders";
    }
    if(value.val == FIX::MassStatusReqType::valStatusForOrdersForAPartyID)
    {
      foundValue = true;
      res += "StatusForOrdersForAPartyID";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigOrdModTime::tag: {
    FIX::OrigOrdModTime::Value value(val);
    res = "OrigOrdModTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSettlType::tag: {
    FIX::LegSettlType::Value value(val);
    res = "LegSettlType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSettlDate::tag: {
    FIX::LegSettlDate::Value value(val);
    res = "LegSettlDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DayBookingInst::tag: {
    FIX::DayBookingInst::Value value(val);
    res = "DayBookingInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BookingUnit::tag: {
    FIX::BookingUnit::Value value(val);
    res = "BookingUnit = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PreallocMethod::tag: {
    FIX::PreallocMethod::Value value(val);
    res = "PreallocMethod = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCountryOfIssue::tag: {
    FIX::UnderlyingCountryOfIssue::Value value(val);
    res = "UnderlyingCountryOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStateOrProvinceOfIssue::tag: {
    FIX::UnderlyingStateOrProvinceOfIssue::Value value(val);
    res = "UnderlyingStateOrProvinceOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingLocaleOfIssue::tag: {
    FIX::UnderlyingLocaleOfIssue::Value value(val);
    res = "UnderlyingLocaleOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingInstrRegistry::tag: {
    FIX::UnderlyingInstrRegistry::Value value(val);
    res = "UnderlyingInstrRegistry = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCountryOfIssue::tag: {
    FIX::LegCountryOfIssue::Value value(val);
    res = "LegCountryOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStateOrProvinceOfIssue::tag: {
    FIX::LegStateOrProvinceOfIssue::Value value(val);
    res = "LegStateOrProvinceOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegLocaleOfIssue::tag: {
    FIX::LegLocaleOfIssue::Value value(val);
    res = "LegLocaleOfIssue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegInstrRegistry::tag: {
    FIX::LegInstrRegistry::Value value(val);
    res = "LegInstrRegistry = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSymbol::tag: {
    FIX::LegSymbol::Value value(val);
    res = "LegSymbol = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSymbolSfx::tag: {
    FIX::LegSymbolSfx::Value value(val);
    res = "LegSymbolSfx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityID::tag: {
    FIX::LegSecurityID::Value value(val);
    res = "LegSecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityIDSource::tag: {
    FIX::LegSecurityIDSource::Value value(val);
    res = "LegSecurityIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegSecurityAltID::tag: {
    FIX::NoLegSecurityAltID::Value value(val);
    res = "NoLegSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityAltID::tag: {
    FIX::LegSecurityAltID::Value value(val);
    res = "LegSecurityAltID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityAltIDSource::tag: {
    FIX::LegSecurityAltIDSource::Value value(val);
    res = "LegSecurityAltIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegProduct::tag: {
    FIX::LegProduct::Value value(val);
    res = "LegProduct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCFICode::tag: {
    FIX::LegCFICode::Value value(val);
    res = "LegCFICode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityType::tag: {
    FIX::LegSecurityType::Value value(val);
    res = "LegSecurityType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegMaturityMonthYear::tag: {
    FIX::LegMaturityMonthYear::Value value(val);
    res = "LegMaturityMonthYear = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegMaturityDate::tag: {
    FIX::LegMaturityDate::Value value(val);
    res = "LegMaturityDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStrikePrice::tag: {
    FIX::LegStrikePrice::Value value(val);
    res = "LegStrikePrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegOptAttribute::tag: {
    FIX::LegOptAttribute::Value value(val);
    res = "LegOptAttribute = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegContractMultiplier::tag: {
    FIX::LegContractMultiplier::Value value(val);
    res = "LegContractMultiplier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegCouponRate::tag: {
    FIX::LegCouponRate::Value value(val);
    res = "LegCouponRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityExchange::tag: {
    FIX::LegSecurityExchange::Value value(val);
    res = "LegSecurityExchange = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIssuer::tag: {
    FIX::LegIssuer::Value value(val);
    res = "LegIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegIssuerLen::tag: {
    FIX::EncodedLegIssuerLen::Value value(val);
    res = "EncodedLegIssuerLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegIssuer::tag: {
    FIX::EncodedLegIssuer::Value value(val);
    res = "EncodedLegIssuer = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecurityDesc::tag: {
    FIX::LegSecurityDesc::Value value(val);
    res = "LegSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegSecurityDescLen::tag: {
    FIX::EncodedLegSecurityDescLen::Value value(val);
    res = "EncodedLegSecurityDescLen = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EncodedLegSecurityDesc::tag: {
    FIX::EncodedLegSecurityDesc::Value value(val);
    res = "EncodedLegSecurityDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRatioQty::tag: {
    FIX::LegRatioQty::Value value(val);
    res = "LegRatioQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSide::tag: {
    FIX::LegSide::Value value(val);
    res = "LegSide = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradingSessionSubID::tag: {
    FIX::TradingSessionSubID::Value value(val);
    res = "TradingSessionSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocType::tag: {
    FIX::AllocType::Value value(val);
    res = "AllocType = ";
    if(value.val == FIX::AllocType::valCalculated)
    {
      foundValue = true;
      res += "Calculated";
    }
    if(value.val == FIX::AllocType::valPreliminary)
    {
      foundValue = true;
      res += "Preliminary";
    }
    if(value.val == FIX::AllocType::valSellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "SellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney";
    }
    if(value.val == FIX::AllocType::valSellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney)
    {
      foundValue = true;
      res += "SellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney";
    }
    if(value.val == FIX::AllocType::valReadyToBookSingleOrder)
    {
      foundValue = true;
      res += "ReadyToBookSingleOrder";
    }
    if(value.val == FIX::AllocType::valBuysideReadyToBookCombinedSetOfOrders)
    {
      foundValue = true;
      res += "BuysideReadyToBookCombinedSetOfOrders";
    }
    if(value.val == FIX::AllocType::valWarehouseInstruction)
    {
      foundValue = true;
      res += "WarehouseInstruction";
    }
    if(value.val == FIX::AllocType::valRequestToIntermediary)
    {
      foundValue = true;
      res += "RequestToIntermediary";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoHops::tag: {
    FIX::NoHops::Value value(val);
    res = "NoHops = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HopCompID::tag: {
    FIX::HopCompID::Value value(val);
    res = "HopCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HopSendingTime::tag: {
    FIX::HopSendingTime::Value value(val);
    res = "HopSendingTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::HopRefID::tag: {
    FIX::HopRefID::Value value(val);
    res = "HopRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MidPx::tag: {
    FIX::MidPx::Value value(val);
    res = "MidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidYield::tag: {
    FIX::BidYield::Value value(val);
    res = "BidYield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MidYield::tag: {
    FIX::MidYield::Value value(val);
    res = "MidYield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferYield::tag: {
    FIX::OfferYield::Value value(val);
    res = "OfferYield = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingFeeIndicator::tag: {
    FIX::ClearingFeeIndicator::Value value(val);
    res = "ClearingFeeIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::WorkingIndicator::tag: {
    FIX::WorkingIndicator::Value value(val);
    res = "WorkingIndicator = ";
    if(value.val == FIX::WorkingIndicator::valOrderIsCurrentlyBeingWorked)
    {
      foundValue = true;
      res += "OrderIsCurrentlyBeingWorked";
    }
    if(value.val == FIX::WorkingIndicator::valOrderHasBeenAcceptedButNotYetInAWorkingState)
    {
      foundValue = true;
      res += "OrderHasBeenAcceptedButNotYetInAWorkingState";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegLastPx::tag: {
    FIX::LegLastPx::Value value(val);
    res = "LegLastPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriorityIndicator::tag: {
    FIX::PriorityIndicator::Value value(val);
    res = "PriorityIndicator = ";
    if(value.val == FIX::PriorityIndicator::valPriorityUnchanged)
    {
      foundValue = true;
      res += "PriorityUnchanged";
    }
    if(value.val == FIX::PriorityIndicator::valLostPriorityAsResultOfOrderChange)
    {
      foundValue = true;
      res += "LostPriorityAsResultOfOrderChange";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriceImprovement::tag: {
    FIX::PriceImprovement::Value value(val);
    res = "PriceImprovement = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Price2::tag: {
    FIX::Price2::Value value(val);
    res = "Price2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastForwardPoints2::tag: {
    FIX::LastForwardPoints2::Value value(val);
    res = "LastForwardPoints2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BidForwardPoints2::tag: {
    FIX::BidForwardPoints2::Value value(val);
    res = "BidForwardPoints2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OfferForwardPoints2::tag: {
    FIX::OfferForwardPoints2::Value value(val);
    res = "OfferForwardPoints2 = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RFQReqID::tag: {
    FIX::RFQReqID::Value value(val);
    res = "RFQReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MktBidPx::tag: {
    FIX::MktBidPx::Value value(val);
    res = "MktBidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MktOfferPx::tag: {
    FIX::MktOfferPx::Value value(val);
    res = "MktOfferPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinBidSize::tag: {
    FIX::MinBidSize::Value value(val);
    res = "MinBidSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MinOfferSize::tag: {
    FIX::MinOfferSize::Value value(val);
    res = "MinOfferSize = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteStatusReqID::tag: {
    FIX::QuoteStatusReqID::Value value(val);
    res = "QuoteStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegalConfirm::tag: {
    FIX::LegalConfirm::Value value(val);
    res = "LegalConfirm = ";
    if(value.val == FIX::LegalConfirm::valLegalConfirm)
    {
      foundValue = true;
      res += "LegalConfirm";
    }
    if(value.val == FIX::LegalConfirm::valDoesNotConstituteALegalConfirm)
    {
      foundValue = true;
      res += "DoesNotConstituteALegalConfirm";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingLastPx::tag: {
    FIX::UnderlyingLastPx::Value value(val);
    res = "UnderlyingLastPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingLastQty::tag: {
    FIX::UnderlyingLastQty::Value value(val);
    res = "UnderlyingLastQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecDefStatus::tag: {
    FIX::SecDefStatus::Value value(val);
    res = "SecDefStatus = ";
    if(value.val == FIX::SecDefStatus::valPendingApproval)
    {
      foundValue = true;
      res += "PendingApproval";
    }
    if(value.val == FIX::SecDefStatus::valApproved)
    {
      foundValue = true;
      res += "Approved";
    }
    if(value.val == FIX::SecDefStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value.val == FIX::SecDefStatus::valUnauthorizedRequest)
    {
      foundValue = true;
      res += "UnauthorizedRequest";
    }
    if(value.val == FIX::SecDefStatus::valInvalidDefinitionRequest)
    {
      foundValue = true;
      res += "InvalidDefinitionRequest";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegRefID::tag: {
    FIX::LegRefID::Value value(val);
    res = "LegRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraLegRefID::tag: {
    FIX::ContraLegRefID::Value value(val);
    res = "ContraLegRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrBidFxRate::tag: {
    FIX::SettlCurrBidFxRate::Value value(val);
    res = "SettlCurrBidFxRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlCurrOfferFxRate::tag: {
    FIX::SettlCurrOfferFxRate::Value value(val);
    res = "SettlCurrOfferFxRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRequestRejectReason::tag: {
    FIX::QuoteRequestRejectReason::Value value(val);
    res = "QuoteRequestRejectReason = ";
    if(value.val == FIX::QuoteRequestRejectReason::valUnknownSymbol)
    {
      foundValue = true;
      res += "UnknownSymbol";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valExchangeSecurityClosed)
    {
      foundValue = true;
      res += "ExchangeSecurityClosed";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valQuoteRequestExceedsLimit)
    {
      foundValue = true;
      res += "QuoteRequestExceedsLimit";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valTooLateToEnter)
    {
      foundValue = true;
      res += "TooLateToEnter";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valInvalidPrice)
    {
      foundValue = true;
      res += "InvalidPrice";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valNotAuthorizedToRequestQuote)
    {
      foundValue = true;
      res += "NotAuthorizedToRequestQuote";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valNoMatchForInquiry)
    {
      foundValue = true;
      res += "NoMatchForInquiry";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valNoMarketForInstrument)
    {
      foundValue = true;
      res += "NoMarketForInstrument";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valNoInventory)
    {
      foundValue = true;
      res += "NoInventory";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valPass)
    {
      foundValue = true;
      res += "Pass";
    }
    if(value.val == FIX::QuoteRequestRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideComplianceID::tag: {
    FIX::SideComplianceID::Value value(val);
    res = "SideComplianceID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AcctIDSource::tag: {
    FIX::AcctIDSource::Value value(val);
    res = "AcctIDSource = ";
    if(value.val == FIX::AcctIDSource::valBIC)
    {
      foundValue = true;
      res += "BIC";
    }
    if(value.val == FIX::AcctIDSource::valSIDCode)
    {
      foundValue = true;
      res += "SIDCode";
    }
    if(value.val == FIX::AcctIDSource::valTFM)
    {
      foundValue = true;
      res += "TFM";
    }
    if(value.val == FIX::AcctIDSource::valOMGEO)
    {
      foundValue = true;
      res += "OMGEO";
    }
    if(value.val == FIX::AcctIDSource::valDTCCCode)
    {
      foundValue = true;
      res += "DTCCCode";
    }
    if(value.val == FIX::AcctIDSource::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAcctIDSource::tag: {
    FIX::AllocAcctIDSource::Value value(val);
    res = "AllocAcctIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkPrice::tag: {
    FIX::BenchmarkPrice::Value value(val);
    res = "BenchmarkPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkPriceType::tag: {
    FIX::BenchmarkPriceType::Value value(val);
    res = "BenchmarkPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmID::tag: {
    FIX::ConfirmID::Value value(val);
    res = "ConfirmID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmStatus::tag: {
    FIX::ConfirmStatus::Value value(val);
    res = "ConfirmStatus = ";
    if(value.val == FIX::ConfirmStatus::valReceived)
    {
      foundValue = true;
      res += "Received";
    }
    if(value.val == FIX::ConfirmStatus::valMismatchedAccount)
    {
      foundValue = true;
      res += "MismatchedAccount";
    }
    if(value.val == FIX::ConfirmStatus::valMissingSettlementInstructions)
    {
      foundValue = true;
      res += "MissingSettlementInstructions";
    }
    if(value.val == FIX::ConfirmStatus::valConfirmed)
    {
      foundValue = true;
      res += "Confirmed";
    }
    if(value.val == FIX::ConfirmStatus::valRequestRejected)
    {
      foundValue = true;
      res += "RequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmTransType::tag: {
    FIX::ConfirmTransType::Value value(val);
    res = "ConfirmTransType = ";
    if(value.val == FIX::ConfirmTransType::valNew)
    {
      foundValue = true;
      res += "New";
    }
    if(value.val == FIX::ConfirmTransType::valReplace)
    {
      foundValue = true;
      res += "Replace";
    }
    if(value.val == FIX::ConfirmTransType::valCancel)
    {
      foundValue = true;
      res += "Cancel";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContractSettlMonth::tag: {
    FIX::ContractSettlMonth::Value value(val);
    res = "ContractSettlMonth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliveryForm::tag: {
    FIX::DeliveryForm::Value value(val);
    res = "DeliveryForm = ";
    if(value.val == FIX::DeliveryForm::valBookEntryTheDefault)
    {
      foundValue = true;
      res += "BookEntryTheDefault";
    }
    if(value.val == FIX::DeliveryForm::valBearer)
    {
      foundValue = true;
      res += "Bearer";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastParPx::tag: {
    FIX::LastParPx::Value value(val);
    res = "LastParPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegAllocs::tag: {
    FIX::NoLegAllocs::Value value(val);
    res = "NoLegAllocs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegAllocAccount::tag: {
    FIX::LegAllocAccount::Value value(val);
    res = "LegAllocAccount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIndividualAllocID::tag: {
    FIX::LegIndividualAllocID::Value value(val);
    res = "LegIndividualAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegAllocQty::tag: {
    FIX::LegAllocQty::Value value(val);
    res = "LegAllocQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegAllocAcctIDSource::tag: {
    FIX::LegAllocAcctIDSource::Value value(val);
    res = "LegAllocAcctIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSettlCurrency::tag: {
    FIX::LegSettlCurrency::Value value(val);
    res = "LegSettlCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkCurveCurrency::tag: {
    FIX::LegBenchmarkCurveCurrency::Value value(val);
    res = "LegBenchmarkCurveCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkCurveName::tag: {
    FIX::LegBenchmarkCurveName::Value value(val);
    res = "LegBenchmarkCurveName = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkCurvePoint::tag: {
    FIX::LegBenchmarkCurvePoint::Value value(val);
    res = "LegBenchmarkCurvePoint = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkPrice::tag: {
    FIX::LegBenchmarkPrice::Value value(val);
    res = "LegBenchmarkPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBenchmarkPriceType::tag: {
    FIX::LegBenchmarkPriceType::Value value(val);
    res = "LegBenchmarkPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegBidPx::tag: {
    FIX::LegBidPx::Value value(val);
    res = "LegBidPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegIOIQty::tag: {
    FIX::LegIOIQty::Value value(val);
    res = "LegIOIQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoLegStipulations::tag: {
    FIX::NoLegStipulations::Value value(val);
    res = "NoLegStipulations = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegOfferPx::tag: {
    FIX::LegOfferPx::Value value(val);
    res = "LegOfferPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegOrderQty::tag: {
    FIX::LegOrderQty::Value value(val);
    res = "LegOrderQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPriceType::tag: {
    FIX::LegPriceType::Value value(val);
    res = "LegPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegQty::tag: {
    FIX::LegQty::Value value(val);
    res = "LegQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStipulationType::tag: {
    FIX::LegStipulationType::Value value(val);
    res = "LegStipulationType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStipulationValue::tag: {
    FIX::LegStipulationValue::Value value(val);
    res = "LegStipulationValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSwapType::tag: {
    FIX::LegSwapType::Value value(val);
    res = "LegSwapType = ";
    if(value.val == FIX::LegSwapType::valParForPar)
    {
      foundValue = true;
      res += "ParForPar";
    }
    if(value.val == FIX::LegSwapType::valModifiedDuration)
    {
      foundValue = true;
      res += "ModifiedDuration";
    }
    if(value.val == FIX::LegSwapType::valRisk)
    {
      foundValue = true;
      res += "Risk";
    }
    if(value.val == FIX::LegSwapType::valProceeds)
    {
      foundValue = true;
      res += "Proceeds";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::Pool::tag: {
    FIX::Pool::Value value(val);
    res = "Pool = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuotePriceType::tag: {
    FIX::QuotePriceType::Value value(val);
    res = "QuotePriceType = ";
    if(value.val == FIX::QuotePriceType::valPercent)
    {
      foundValue = true;
      res += "Percent";
    }
    if(value.val == FIX::QuotePriceType::valPerShare)
    {
      foundValue = true;
      res += "PerShare";
    }
    if(value.val == FIX::QuotePriceType::valFixedAmount)
    {
      foundValue = true;
      res += "FixedAmount";
    }
    if(value.val == FIX::QuotePriceType::valDiscountPercentagePointsBelowPar)
    {
      foundValue = true;
      res += "DiscountPercentagePointsBelowPar";
    }
    if(value.val == FIX::QuotePriceType::valPremiumPercentagePointsOverPar)
    {
      foundValue = true;
      res += "PremiumPercentagePointsOverPar";
    }
    if(value.val == FIX::QuotePriceType::valBasisPointsRelativeToBenchmark)
    {
      foundValue = true;
      res += "BasisPointsRelativeToBenchmark";
    }
    if(value.val == FIX::QuotePriceType::valTEDPrice)
    {
      foundValue = true;
      res += "TEDPrice";
    }
    if(value.val == FIX::QuotePriceType::valTEDYield)
    {
      foundValue = true;
      res += "TEDYield";
    }
    if(value.val == FIX::QuotePriceType::valYieldSpread)
    {
      foundValue = true;
      res += "YieldSpread";
    }
    if(value.val == FIX::QuotePriceType::valYield)
    {
      foundValue = true;
      res += "Yield";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRespID::tag: {
    FIX::QuoteRespID::Value value(val);
    res = "QuoteRespID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteRespType::tag: {
    FIX::QuoteRespType::Value value(val);
    res = "QuoteRespType = ";
    if(value.val == FIX::QuoteRespType::valHitOrLift)
    {
      foundValue = true;
      res += "HitOrLift";
    }
    if(value.val == FIX::QuoteRespType::valCounter)
    {
      foundValue = true;
      res += "Counter";
    }
    if(value.val == FIX::QuoteRespType::valExpired)
    {
      foundValue = true;
      res += "Expired";
    }
    if(value.val == FIX::QuoteRespType::valCover)
    {
      foundValue = true;
      res += "Cover";
    }
    if(value.val == FIX::QuoteRespType::valDoneAway)
    {
      foundValue = true;
      res += "DoneAway";
    }
    if(value.val == FIX::QuoteRespType::valPass)
    {
      foundValue = true;
      res += "Pass";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QuoteQualifier::tag: {
    FIX::QuoteQualifier::Value value(val);
    res = "QuoteQualifier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldRedemptionDate::tag: {
    FIX::YieldRedemptionDate::Value value(val);
    res = "YieldRedemptionDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldRedemptionPrice::tag: {
    FIX::YieldRedemptionPrice::Value value(val);
    res = "YieldRedemptionPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldRedemptionPriceType::tag: {
    FIX::YieldRedemptionPriceType::Value value(val);
    res = "YieldRedemptionPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkSecurityID::tag: {
    FIX::BenchmarkSecurityID::Value value(val);
    res = "BenchmarkSecurityID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ReversalIndicator::tag: {
    FIX::ReversalIndicator::Value value(val);
    res = "ReversalIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::YieldCalcDate::tag: {
    FIX::YieldCalcDate::Value value(val);
    res = "YieldCalcDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPositions::tag: {
    FIX::NoPositions::Value value(val);
    res = "NoPositions = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosType::tag: {
    FIX::PosType::Value value(val);
    res = "PosType = ";
    if(!strcmp(value.val, FIX::PosType::valTransactionQuantity))
    {
      foundValue = true;
      res += "TransactionQuantity";
    }
    if(!strcmp(value.val, FIX::PosType::valIntraSpreadQty))
    {
      foundValue = true;
      res += "IntraSpreadQty";
    }
    if(!strcmp(value.val, FIX::PosType::valInterSpreadQty))
    {
      foundValue = true;
      res += "InterSpreadQty";
    }
    if(!strcmp(value.val, FIX::PosType::valEndOfDayQty))
    {
      foundValue = true;
      res += "EndOfDayQty";
    }
    if(!strcmp(value.val, FIX::PosType::valStartOfDayQty))
    {
      foundValue = true;
      res += "StartOfDayQty";
    }
    if(!strcmp(value.val, FIX::PosType::valOptionExerciseQty))
    {
      foundValue = true;
      res += "OptionExerciseQty";
    }
    if(!strcmp(value.val, FIX::PosType::valOptionAssignment))
    {
      foundValue = true;
      res += "OptionAssignment";
    }
    if(!strcmp(value.val, FIX::PosType::valTransactionFromExercise))
    {
      foundValue = true;
      res += "TransactionFromExercise";
    }
    if(!strcmp(value.val, FIX::PosType::valTransactionFromAssignment))
    {
      foundValue = true;
      res += "TransactionFromAssignment";
    }
    if(!strcmp(value.val, FIX::PosType::valPitTradeQty))
    {
      foundValue = true;
      res += "PitTradeQty";
    }
    if(!strcmp(value.val, FIX::PosType::valTransferTradeQty))
    {
      foundValue = true;
      res += "TransferTradeQty";
    }
    if(!strcmp(value.val, FIX::PosType::valElectronicTradeQty))
    {
      foundValue = true;
      res += "ElectronicTradeQty";
    }
    if(!strcmp(value.val, FIX::PosType::valAllocationTradeQty))
    {
      foundValue = true;
      res += "AllocationTradeQty";
    }
    if(!strcmp(value.val, FIX::PosType::valAdjustmentQty))
    {
      foundValue = true;
      res += "AdjustmentQty";
    }
    if(!strcmp(value.val, FIX::PosType::valAsOfTradeQty))
    {
      foundValue = true;
      res += "AsOfTradeQty";
    }
    if(!strcmp(value.val, FIX::PosType::valDeliveryQty))
    {
      foundValue = true;
      res += "DeliveryQty";
    }
    if(!strcmp(value.val, FIX::PosType::valTotalTransactionQty))
    {
      foundValue = true;
      res += "TotalTransactionQty";
    }
    if(!strcmp(value.val, FIX::PosType::valCrossMarginQty))
    {
      foundValue = true;
      res += "CrossMarginQty";
    }
    if(!strcmp(value.val, FIX::PosType::valIntegralSplit))
    {
      foundValue = true;
      res += "IntegralSplit";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::LongQty::tag: {
    FIX::LongQty::Value value(val);
    res = "LongQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ShortQty::tag: {
    FIX::ShortQty::Value value(val);
    res = "ShortQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosQtyStatus::tag: {
    FIX::PosQtyStatus::Value value(val);
    res = "PosQtyStatus = ";
    if(value.val == FIX::PosQtyStatus::valSubmitted)
    {
      foundValue = true;
      res += "Submitted";
    }
    if(value.val == FIX::PosQtyStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::PosQtyStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosAmtType::tag: {
    FIX::PosAmtType::Value value(val);
    res = "PosAmtType = ";
    if(!strcmp(value.val, FIX::PosAmtType::valFinalMarkToMarketAmount))
    {
      foundValue = true;
      res += "FinalMarkToMarketAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valIncrementalMarkToMarketAmount))
    {
      foundValue = true;
      res += "IncrementalMarkToMarketAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valTradeVariationAmount))
    {
      foundValue = true;
      res += "TradeVariationAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valStartOfDayMarkToMarketAmount))
    {
      foundValue = true;
      res += "StartOfDayMarkToMarketAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valPremiumAmount))
    {
      foundValue = true;
      res += "PremiumAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valCashResidualAmount))
    {
      foundValue = true;
      res += "CashResidualAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valCashAmount))
    {
      foundValue = true;
      res += "CashAmount";
    }
    if(!strcmp(value.val, FIX::PosAmtType::valValueAdjustedAmount))
    {
      foundValue = true;
      res += "ValueAdjustedAmount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosAmt::tag: {
    FIX::PosAmt::Value value(val);
    res = "PosAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosTransType::tag: {
    FIX::PosTransType::Value value(val);
    res = "PosTransType = ";
    if(value.val == FIX::PosTransType::valExercise)
    {
      foundValue = true;
      res += "Exercise";
    }
    if(value.val == FIX::PosTransType::valDoNotExercise)
    {
      foundValue = true;
      res += "DoNotExercise";
    }
    if(value.val == FIX::PosTransType::valPositionAdjustment)
    {
      foundValue = true;
      res += "PositionAdjustment";
    }
    if(value.val == FIX::PosTransType::valPositionChangeSubmissionOrMarginDisposition)
    {
      foundValue = true;
      res += "PositionChangeSubmissionOrMarginDisposition";
    }
    if(value.val == FIX::PosTransType::valPledge)
    {
      foundValue = true;
      res += "Pledge";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqID::tag: {
    FIX::PosReqID::Value value(val);
    res = "PosReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoUnderlyings::tag: {
    FIX::NoUnderlyings::Value value(val);
    res = "NoUnderlyings = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintAction::tag: {
    FIX::PosMaintAction::Value value(val);
    res = "PosMaintAction = ";
    if(value.val == FIX::PosMaintAction::valNewUsedToIncrementTheOverallTransactionQuantity)
    {
      foundValue = true;
      res += "NewUsedToIncrementTheOverallTransactionQuantity";
    }
    if(value.val == FIX::PosMaintAction::valReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId)
    {
      foundValue = true;
      res += "ReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId";
    }
    if(value.val == FIX::PosMaintAction::valCancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId)
    {
      foundValue = true;
      res += "CancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrigPosReqRefID::tag: {
    FIX::OrigPosReqRefID::Value value(val);
    res = "OrigPosReqRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintRptRefID::tag: {
    FIX::PosMaintRptRefID::Value value(val);
    res = "PosMaintRptRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ClearingBusinessDate::tag: {
    FIX::ClearingBusinessDate::Value value(val);
    res = "ClearingBusinessDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlSessID::tag: {
    FIX::SettlSessID::Value value(val);
    res = "SettlSessID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlSessSubID::tag: {
    FIX::SettlSessSubID::Value value(val);
    res = "SettlSessSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AdjustmentType::tag: {
    FIX::AdjustmentType::Value value(val);
    res = "AdjustmentType = ";
    if(value.val == FIX::AdjustmentType::valProcessRequestAsMarginDisposition)
    {
      foundValue = true;
      res += "ProcessRequestAsMarginDisposition";
    }
    if(value.val == FIX::AdjustmentType::valDeltaPlus)
    {
      foundValue = true;
      res += "DeltaPlus";
    }
    if(value.val == FIX::AdjustmentType::valDeltaMinus)
    {
      foundValue = true;
      res += "DeltaMinus";
    }
    if(value.val == FIX::AdjustmentType::valFinal)
    {
      foundValue = true;
      res += "Final";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ContraryInstructionIndicator::tag: {
    FIX::ContraryInstructionIndicator::Value value(val);
    res = "ContraryInstructionIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriorSpreadIndicator::tag: {
    FIX::PriorSpreadIndicator::Value value(val);
    res = "PriorSpreadIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintRptID::tag: {
    FIX::PosMaintRptID::Value value(val);
    res = "PosMaintRptID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintStatus::tag: {
    FIX::PosMaintStatus::Value value(val);
    res = "PosMaintStatus = ";
    if(value.val == FIX::PosMaintStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::PosMaintStatus::valAcceptedWithWarnings)
    {
      foundValue = true;
      res += "AcceptedWithWarnings";
    }
    if(value.val == FIX::PosMaintStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value.val == FIX::PosMaintStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value.val == FIX::PosMaintStatus::valCompletedWithWarnings)
    {
      foundValue = true;
      res += "CompletedWithWarnings";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosMaintResult::tag: {
    FIX::PosMaintResult::Value value(val);
    res = "PosMaintResult = ";
    if(value.val == FIX::PosMaintResult::valSuccessfulCompletionNoWarningsOrErrors)
    {
      foundValue = true;
      res += "SuccessfulCompletionNoWarningsOrErrors";
    }
    if(value.val == FIX::PosMaintResult::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(value.val == FIX::PosMaintResult::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqType::tag: {
    FIX::PosReqType::Value value(val);
    res = "PosReqType = ";
    if(value.val == FIX::PosReqType::valPositions)
    {
      foundValue = true;
      res += "Positions";
    }
    if(value.val == FIX::PosReqType::valTrades)
    {
      foundValue = true;
      res += "Trades";
    }
    if(value.val == FIX::PosReqType::valExercises)
    {
      foundValue = true;
      res += "Exercises";
    }
    if(value.val == FIX::PosReqType::valAssignments)
    {
      foundValue = true;
      res += "Assignments";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ResponseTransportType::tag: {
    FIX::ResponseTransportType::Value value(val);
    res = "ResponseTransportType = ";
    if(value.val == FIX::ResponseTransportType::valInbandTransportTheRequestWasSentOver)
    {
      foundValue = true;
      res += "InbandTransportTheRequestWasSentOver";
    }
    if(value.val == FIX::ResponseTransportType::valOutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME)
    {
      foundValue = true;
      res += "OutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ResponseDestination::tag: {
    FIX::ResponseDestination::Value value(val);
    res = "ResponseDestination = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalNumPosReports::tag: {
    FIX::TotalNumPosReports::Value value(val);
    res = "TotalNumPosReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqResult::tag: {
    FIX::PosReqResult::Value value(val);
    res = "PosReqResult = ";
    if(value.val == FIX::PosReqResult::valValidRequest)
    {
      foundValue = true;
      res += "ValidRequest";
    }
    if(value.val == FIX::PosReqResult::valInvalidOrUnsupportedRequest)
    {
      foundValue = true;
      res += "InvalidOrUnsupportedRequest";
    }
    if(value.val == FIX::PosReqResult::valNoPositionsFoundThatMatchCriteria)
    {
      foundValue = true;
      res += "NoPositionsFoundThatMatchCriteria";
    }
    if(value.val == FIX::PosReqResult::valNotAuthorizedToRequestPositions)
    {
      foundValue = true;
      res += "NotAuthorizedToRequestPositions";
    }
    if(value.val == FIX::PosReqResult::valRequestForPositionNotSupported)
    {
      foundValue = true;
      res += "RequestForPositionNotSupported";
    }
    if(value.val == FIX::PosReqResult::valOtheruseText)
    {
      foundValue = true;
      res += "OtheruseText";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PosReqStatus::tag: {
    FIX::PosReqStatus::Value value(val);
    res = "PosReqStatus = ";
    if(value.val == FIX::PosReqStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value.val == FIX::PosReqStatus::valCompletedWithWarnings)
    {
      foundValue = true;
      res += "CompletedWithWarnings";
    }
    if(value.val == FIX::PosReqStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPrice::tag: {
    FIX::SettlPrice::Value value(val);
    res = "SettlPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPriceType::tag: {
    FIX::SettlPriceType::Value value(val);
    res = "SettlPriceType = ";
    if(value.val == FIX::SettlPriceType::valFinal)
    {
      foundValue = true;
      res += "Final";
    }
    if(value.val == FIX::SettlPriceType::valTheoretical)
    {
      foundValue = true;
      res += "Theoretical";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSettlPrice::tag: {
    FIX::UnderlyingSettlPrice::Value value(val);
    res = "UnderlyingSettlPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSettlPriceType::tag: {
    FIX::UnderlyingSettlPriceType::Value value(val);
    res = "UnderlyingSettlPriceType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriorSettlPrice::tag: {
    FIX::PriorSettlPrice::Value value(val);
    res = "PriorSettlPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoQuoteQualifiers::tag: {
    FIX::NoQuoteQualifiers::Value value(val);
    res = "NoQuoteQualifiers = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocSettlCurrency::tag: {
    FIX::AllocSettlCurrency::Value value(val);
    res = "AllocSettlCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocSettlCurrAmt::tag: {
    FIX::AllocSettlCurrAmt::Value value(val);
    res = "AllocSettlCurrAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InterestAtMaturity::tag: {
    FIX::InterestAtMaturity::Value value(val);
    res = "InterestAtMaturity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegDatedDate::tag: {
    FIX::LegDatedDate::Value value(val);
    res = "LegDatedDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegPool::tag: {
    FIX::LegPool::Value value(val);
    res = "LegPool = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocInterestAtMaturity::tag: {
    FIX::AllocInterestAtMaturity::Value value(val);
    res = "AllocInterestAtMaturity = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAccruedInterestAmt::tag: {
    FIX::AllocAccruedInterestAmt::Value value(val);
    res = "AllocAccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliveryDate::tag: {
    FIX::DeliveryDate::Value value(val);
    res = "DeliveryDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AssignmentMethod::tag: {
    FIX::AssignmentMethod::Value value(val);
    res = "AssignmentMethod = ";
    if(value.val == FIX::AssignmentMethod::valRandom)
    {
      foundValue = true;
      res += "Random";
    }
    if(value.val == FIX::AssignmentMethod::valProRata)
    {
      foundValue = true;
      res += "ProRata";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AssignmentUnit::tag: {
    FIX::AssignmentUnit::Value value(val);
    res = "AssignmentUnit = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OpenInterest::tag: {
    FIX::OpenInterest::Value value(val);
    res = "OpenInterest = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExerciseMethod::tag: {
    FIX::ExerciseMethod::Value value(val);
    res = "ExerciseMethod = ";
    if(value.val == FIX::ExerciseMethod::valAutomatic)
    {
      foundValue = true;
      res += "Automatic";
    }
    if(value.val == FIX::ExerciseMethod::valManual)
    {
      foundValue = true;
      res += "Manual";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNumTradeReports::tag: {
    FIX::TotNumTradeReports::Value value(val);
    res = "TotNumTradeReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestResult::tag: {
    FIX::TradeRequestResult::Value value(val);
    res = "TradeRequestResult = ";
    if(value.val == FIX::TradeRequestResult::valSuccessful)
    {
      foundValue = true;
      res += "Successful";
    }
    if(value.val == FIX::TradeRequestResult::valInvalidOrUnknownInstrument)
    {
      foundValue = true;
      res += "InvalidOrUnknownInstrument";
    }
    if(value.val == FIX::TradeRequestResult::valInvalidTypeOfTradeRequested)
    {
      foundValue = true;
      res += "InvalidTypeOfTradeRequested";
    }
    if(value.val == FIX::TradeRequestResult::valInvalidParties)
    {
      foundValue = true;
      res += "InvalidParties";
    }
    if(value.val == FIX::TradeRequestResult::valInvalidTransportTypeRequested)
    {
      foundValue = true;
      res += "InvalidTransportTypeRequested";
    }
    if(value.val == FIX::TradeRequestResult::valInvalidDestinationRequested)
    {
      foundValue = true;
      res += "InvalidDestinationRequested";
    }
    if(value.val == FIX::TradeRequestResult::valTradeRequestTypeNotSupported)
    {
      foundValue = true;
      res += "TradeRequestTypeNotSupported";
    }
    if(value.val == FIX::TradeRequestResult::valUnauthorizedForTradeCaptureReportRequest)
    {
      foundValue = true;
      res += "UnauthorizedForTradeCaptureReportRequest";
    }
    if(value.val == FIX::TradeRequestResult::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeRequestStatus::tag: {
    FIX::TradeRequestStatus::Value value(val);
    res = "TradeRequestStatus = ";
    if(value.val == FIX::TradeRequestStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::TradeRequestStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value.val == FIX::TradeRequestStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportRejectReason::tag: {
    FIX::TradeReportRejectReason::Value value(val);
    res = "TradeReportRejectReason = ";
    if(value.val == FIX::TradeReportRejectReason::valSuccessful)
    {
      foundValue = true;
      res += "Successful";
    }
    if(value.val == FIX::TradeReportRejectReason::valInvalidPartyInformation)
    {
      foundValue = true;
      res += "InvalidPartyInformation";
    }
    if(value.val == FIX::TradeReportRejectReason::valUnknownInstrument)
    {
      foundValue = true;
      res += "UnknownInstrument";
    }
    if(value.val == FIX::TradeReportRejectReason::valUnauthorizedToReportTrades)
    {
      foundValue = true;
      res += "UnauthorizedToReportTrades";
    }
    if(value.val == FIX::TradeReportRejectReason::valInvalidTradeType)
    {
      foundValue = true;
      res += "InvalidTradeType";
    }
    if(value.val == FIX::TradeReportRejectReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SideMultiLegReportingType::tag: {
    FIX::SideMultiLegReportingType::Value value(val);
    res = "SideMultiLegReportingType = ";
    if(value.val == FIX::SideMultiLegReportingType::valSingleSecurity)
    {
      foundValue = true;
      res += "SingleSecurity";
    }
    if(value.val == FIX::SideMultiLegReportingType::valIndividualLegOfAMultiLegSecurity)
    {
      foundValue = true;
      res += "IndividualLegOfAMultiLegSecurity";
    }
    if(value.val == FIX::SideMultiLegReportingType::valMultiLegSecurity)
    {
      foundValue = true;
      res += "MultiLegSecurity";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPosAmt::tag: {
    FIX::NoPosAmt::Value value(val);
    res = "NoPosAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AutoAcceptIndicator::tag: {
    FIX::AutoAcceptIndicator::Value value(val);
    res = "AutoAcceptIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocReportID::tag: {
    FIX::AllocReportID::Value value(val);
    res = "AllocReportID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested2PartyIDs::tag: {
    FIX::NoNested2PartyIDs::Value value(val);
    res = "NoNested2PartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartyID::tag: {
    FIX::Nested2PartyID::Value value(val);
    res = "Nested2PartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartyIDSource::tag: {
    FIX::Nested2PartyIDSource::Value value(val);
    res = "Nested2PartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartyRole::tag: {
    FIX::Nested2PartyRole::Value value(val);
    res = "Nested2PartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartySubID::tag: {
    FIX::Nested2PartySubID::Value value(val);
    res = "Nested2PartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::BenchmarkSecurityIDSource::tag: {
    FIX::BenchmarkSecurityIDSource::Value value(val);
    res = "BenchmarkSecurityIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecuritySubType::tag: {
    FIX::SecuritySubType::Value value(val);
    res = "SecuritySubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingSecuritySubType::tag: {
    FIX::UnderlyingSecuritySubType::Value value(val);
    res = "UnderlyingSecuritySubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegSecuritySubType::tag: {
    FIX::LegSecuritySubType::Value value(val);
    res = "LegSecuritySubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllowableOneSidednessPct::tag: {
    FIX::AllowableOneSidednessPct::Value value(val);
    res = "AllowableOneSidednessPct = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllowableOneSidednessValue::tag: {
    FIX::AllowableOneSidednessValue::Value value(val);
    res = "AllowableOneSidednessValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllowableOneSidednessCurr::tag: {
    FIX::AllowableOneSidednessCurr::Value value(val);
    res = "AllowableOneSidednessCurr = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoTrdRegTimestamps::tag: {
    FIX::NoTrdRegTimestamps::Value value(val);
    res = "NoTrdRegTimestamps = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRegTimestamp::tag: {
    FIX::TrdRegTimestamp::Value value(val);
    res = "TrdRegTimestamp = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRegTimestampType::tag: {
    FIX::TrdRegTimestampType::Value value(val);
    res = "TrdRegTimestampType = ";
    if(value.val == FIX::TrdRegTimestampType::valExecutionTime)
    {
      foundValue = true;
      res += "ExecutionTime";
    }
    if(value.val == FIX::TrdRegTimestampType::valTimeIn)
    {
      foundValue = true;
      res += "TimeIn";
    }
    if(value.val == FIX::TrdRegTimestampType::valTimeOut)
    {
      foundValue = true;
      res += "TimeOut";
    }
    if(value.val == FIX::TrdRegTimestampType::valBrokerReceipt)
    {
      foundValue = true;
      res += "BrokerReceipt";
    }
    if(value.val == FIX::TrdRegTimestampType::valBrokerExecution)
    {
      foundValue = true;
      res += "BrokerExecution";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRegTimestampOrigin::tag: {
    FIX::TrdRegTimestampOrigin::Value value(val);
    res = "TrdRegTimestampOrigin = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmRefID::tag: {
    FIX::ConfirmRefID::Value value(val);
    res = "ConfirmRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmType::tag: {
    FIX::ConfirmType::Value value(val);
    res = "ConfirmType = ";
    if(value.val == FIX::ConfirmType::valStatus)
    {
      foundValue = true;
      res += "Status";
    }
    if(value.val == FIX::ConfirmType::valConfirmation)
    {
      foundValue = true;
      res += "Confirmation";
    }
    if(value.val == FIX::ConfirmType::valConfirmationRequestRejected)
    {
      foundValue = true;
      res += "ConfirmationRequestRejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmRejReason::tag: {
    FIX::ConfirmRejReason::Value value(val);
    res = "ConfirmRejReason = ";
    if(value.val == FIX::ConfirmRejReason::valMismatchedAccount)
    {
      foundValue = true;
      res += "MismatchedAccount";
    }
    if(value.val == FIX::ConfirmRejReason::valMissingSettlementInstructions)
    {
      foundValue = true;
      res += "MissingSettlementInstructions";
    }
    if(value.val == FIX::ConfirmRejReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::BookingType::tag: {
    FIX::BookingType::Value value(val);
    res = "BookingType = ";
    if(value.val == FIX::BookingType::valRegularBooking)
    {
      foundValue = true;
      res += "RegularBooking";
    }
    if(value.val == FIX::BookingType::valCFD)
    {
      foundValue = true;
      res += "CFD";
    }
    if(value.val == FIX::BookingType::valTotalReturnSwap)
    {
      foundValue = true;
      res += "TotalReturnSwap";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::IndividualAllocRejCode::tag: {
    FIX::IndividualAllocRejCode::Value value(val);
    res = "IndividualAllocRejCode = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstMsgID::tag: {
    FIX::SettlInstMsgID::Value value(val);
    res = "SettlInstMsgID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSettlInst::tag: {
    FIX::NoSettlInst::Value value(val);
    res = "NoSettlInst = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastUpdateTime::tag: {
    FIX::LastUpdateTime::Value value(val);
    res = "LastUpdateTime = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocSettlInstType::tag: {
    FIX::AllocSettlInstType::Value value(val);
    res = "AllocSettlInstType = ";
    if(value.val == FIX::AllocSettlInstType::valUseDefaultInstructions)
    {
      foundValue = true;
      res += "UseDefaultInstructions";
    }
    if(value.val == FIX::AllocSettlInstType::valDeriveFromParametersProvided)
    {
      foundValue = true;
      res += "DeriveFromParametersProvided";
    }
    if(value.val == FIX::AllocSettlInstType::valFullDetailsProvided)
    {
      foundValue = true;
      res += "FullDetailsProvided";
    }
    if(value.val == FIX::AllocSettlInstType::valSSIDbIdsProvided)
    {
      foundValue = true;
      res += "SSIDbIdsProvided";
    }
    if(value.val == FIX::AllocSettlInstType::valPhoneForInstructions)
    {
      foundValue = true;
      res += "PhoneForInstructions";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSettlPartyIDs::tag: {
    FIX::NoSettlPartyIDs::Value value(val);
    res = "NoSettlPartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartyID::tag: {
    FIX::SettlPartyID::Value value(val);
    res = "SettlPartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartyIDSource::tag: {
    FIX::SettlPartyIDSource::Value value(val);
    res = "SettlPartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartyRole::tag: {
    FIX::SettlPartyRole::Value value(val);
    res = "SettlPartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartySubID::tag: {
    FIX::SettlPartySubID::Value value(val);
    res = "SettlPartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlPartySubIDType::tag: {
    FIX::SettlPartySubIDType::Value value(val);
    res = "SettlPartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DlvyInstType::tag: {
    FIX::DlvyInstType::Value value(val);
    res = "DlvyInstType = ";
    if(value.val == FIX::DlvyInstType::valSecurities)
    {
      foundValue = true;
      res += "Securities";
    }
    if(value.val == FIX::DlvyInstType::valCash)
    {
      foundValue = true;
      res += "Cash";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TerminationType::tag: {
    FIX::TerminationType::Value value(val);
    res = "TerminationType = ";
    if(value.val == FIX::TerminationType::valOvernight)
    {
      foundValue = true;
      res += "Overnight";
    }
    if(value.val == FIX::TerminationType::valTerm)
    {
      foundValue = true;
      res += "Term";
    }
    if(value.val == FIX::TerminationType::valFlexible)
    {
      foundValue = true;
      res += "Flexible";
    }
    if(value.val == FIX::TerminationType::valOpen)
    {
      foundValue = true;
      res += "Open";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NextExpectedMsgSeqNum::tag: {
    FIX::NextExpectedMsgSeqNum::Value value(val);
    res = "NextExpectedMsgSeqNum = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrdStatusReqID::tag: {
    FIX::OrdStatusReqID::Value value(val);
    res = "OrdStatusReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstReqID::tag: {
    FIX::SettlInstReqID::Value value(val);
    res = "SettlInstReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SettlInstReqRejCode::tag: {
    FIX::SettlInstReqRejCode::Value value(val);
    res = "SettlInstReqRejCode = ";
    if(value.val == FIX::SettlInstReqRejCode::valUnableToProcessRequest)
    {
      foundValue = true;
      res += "UnableToProcessRequest";
    }
    if(value.val == FIX::SettlInstReqRejCode::valUnknownAccount)
    {
      foundValue = true;
      res += "UnknownAccount";
    }
    if(value.val == FIX::SettlInstReqRejCode::valNoMatchingSettlementInstructionsFound)
    {
      foundValue = true;
      res += "NoMatchingSettlementInstructionsFound";
    }
    if(value.val == FIX::SettlInstReqRejCode::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryAllocID::tag: {
    FIX::SecondaryAllocID::Value value(val);
    res = "SecondaryAllocID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocReportType::tag: {
    FIX::AllocReportType::Value value(val);
    res = "AllocReportType = ";
    if(value.val == FIX::AllocReportType::valSellsideCalculatedUsingPreliminary)
    {
      foundValue = true;
      res += "SellsideCalculatedUsingPreliminary";
    }
    if(value.val == FIX::AllocReportType::valSellsideCalculatedWithoutPreliminary)
    {
      foundValue = true;
      res += "SellsideCalculatedWithoutPreliminary";
    }
    if(value.val == FIX::AllocReportType::valWarehouseRecap)
    {
      foundValue = true;
      res += "WarehouseRecap";
    }
    if(value.val == FIX::AllocReportType::valRequestToIntermediary)
    {
      foundValue = true;
      res += "RequestToIntermediary";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocReportRefID::tag: {
    FIX::AllocReportRefID::Value value(val);
    res = "AllocReportRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocCancReplaceReason::tag: {
    FIX::AllocCancReplaceReason::Value value(val);
    res = "AllocCancReplaceReason = ";
    if(value.val == FIX::AllocCancReplaceReason::valOriginalDetailsIncompleteOrIncorrect)
    {
      foundValue = true;
      res += "OriginalDetailsIncompleteOrIncorrect";
    }
    if(value.val == FIX::AllocCancReplaceReason::valChangeInUnderlyingOrderDetails)
    {
      foundValue = true;
      res += "ChangeInUnderlyingOrderDetails";
    }
    if(value.val == FIX::AllocCancReplaceReason::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CopyMsgIndicator::tag: {
    FIX::CopyMsgIndicator::Value value(val);
    res = "CopyMsgIndicator = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocAccountType::tag: {
    FIX::AllocAccountType::Value value(val);
    res = "AllocAccountType = ";
    if(value.val == FIX::AllocAccountType::valAccountIsCarriedOnCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnCustomerSideOfBooks";
    }
    if(value.val == FIX::AllocAccountType::valAccountIsCarriedOnNonCustomerSideOfBooks)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooks";
    }
    if(value.val == FIX::AllocAccountType::valHouseTrader)
    {
      foundValue = true;
      res += "HouseTrader";
    }
    if(value.val == FIX::AllocAccountType::valFloorTrader)
    {
      foundValue = true;
      res += "FloorTrader";
    }
    if(value.val == FIX::AllocAccountType::valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined";
    }
    if(value.val == FIX::AllocAccountType::valAccountIsHouseTraderAndIsCrossMargined)
    {
      foundValue = true;
      res += "AccountIsHouseTraderAndIsCrossMargined";
    }
    if(value.val == FIX::AllocAccountType::valJointBackofficeAccount)
    {
      foundValue = true;
      res += "JointBackofficeAccount";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderAvgPx::tag: {
    FIX::OrderAvgPx::Value value(val);
    res = "OrderAvgPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderBookingQty::tag: {
    FIX::OrderBookingQty::Value value(val);
    res = "OrderBookingQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoSettlPartySubIDs::tag: {
    FIX::NoSettlPartySubIDs::Value value(val);
    res = "NoSettlPartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoPartySubIDs::tag: {
    FIX::NoPartySubIDs::Value value(val);
    res = "NoPartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PartySubIDType::tag: {
    FIX::PartySubIDType::Value value(val);
    res = "PartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNestedPartySubIDs::tag: {
    FIX::NoNestedPartySubIDs::Value value(val);
    res = "NoNestedPartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NestedPartySubIDType::tag: {
    FIX::NestedPartySubIDType::Value value(val);
    res = "NestedPartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested2PartySubIDs::tag: {
    FIX::NoNested2PartySubIDs::Value value(val);
    res = "NoNested2PartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested2PartySubIDType::tag: {
    FIX::Nested2PartySubIDType::Value value(val);
    res = "Nested2PartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocIntermedReqType::tag: {
    FIX::AllocIntermedReqType::Value value(val);
    res = "AllocIntermedReqType = ";
    if(value.val == FIX::AllocIntermedReqType::valPendingAccept)
    {
      foundValue = true;
      res += "PendingAccept";
    }
    if(value.val == FIX::AllocIntermedReqType::valPendingRelease)
    {
      foundValue = true;
      res += "PendingRelease";
    }
    if(value.val == FIX::AllocIntermedReqType::valPendingReversal)
    {
      foundValue = true;
      res += "PendingReversal";
    }
    if(value.val == FIX::AllocIntermedReqType::valAccept)
    {
      foundValue = true;
      res += "Accept";
    }
    if(value.val == FIX::AllocIntermedReqType::valBlockLevelReject)
    {
      foundValue = true;
      res += "BlockLevelReject";
    }
    if(value.val == FIX::AllocIntermedReqType::valAccountLevelReject)
    {
      foundValue = true;
      res += "AccountLevelReject";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingPx::tag: {
    FIX::UnderlyingPx::Value value(val);
    res = "UnderlyingPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PriceDelta::tag: {
    FIX::PriceDelta::Value value(val);
    res = "PriceDelta = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueMax::tag: {
    FIX::ApplQueueMax::Value value(val);
    res = "ApplQueueMax = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueDepth::tag: {
    FIX::ApplQueueDepth::Value value(val);
    res = "ApplQueueDepth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueResolution::tag: {
    FIX::ApplQueueResolution::Value value(val);
    res = "ApplQueueResolution = ";
    if(value.val == FIX::ApplQueueResolution::valNoActionTaken)
    {
      foundValue = true;
      res += "NoActionTaken";
    }
    if(value.val == FIX::ApplQueueResolution::valQueueFlushed)
    {
      foundValue = true;
      res += "QueueFlushed";
    }
    if(value.val == FIX::ApplQueueResolution::valOverlayLast)
    {
      foundValue = true;
      res += "OverlayLast";
    }
    if(value.val == FIX::ApplQueueResolution::valEndSession)
    {
      foundValue = true;
      res += "EndSession";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ApplQueueAction::tag: {
    FIX::ApplQueueAction::Value value(val);
    res = "ApplQueueAction = ";
    if(value.val == FIX::ApplQueueAction::valNoActionTaken)
    {
      foundValue = true;
      res += "NoActionTaken";
    }
    if(value.val == FIX::ApplQueueAction::valQueueFlushed)
    {
      foundValue = true;
      res += "QueueFlushed";
    }
    if(value.val == FIX::ApplQueueAction::valOverlayLast)
    {
      foundValue = true;
      res += "OverlayLast";
    }
    if(value.val == FIX::ApplQueueAction::valEndSession)
    {
      foundValue = true;
      res += "EndSession";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoAltMDSource::tag: {
    FIX::NoAltMDSource::Value value(val);
    res = "NoAltMDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AltMDSourceID::tag: {
    FIX::AltMDSourceID::Value value(val);
    res = "AltMDSourceID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryTradeReportID::tag: {
    FIX::SecondaryTradeReportID::Value value(val);
    res = "SecondaryTradeReportID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgPxIndicator::tag: {
    FIX::AvgPxIndicator::Value value(val);
    res = "AvgPxIndicator = ";
    if(value.val == FIX::AvgPxIndicator::valNoAveragePricing)
    {
      foundValue = true;
      res += "NoAveragePricing";
    }
    if(value.val == FIX::AvgPxIndicator::valTradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID)
    {
      foundValue = true;
      res += "TradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID";
    }
    if(value.val == FIX::AvgPxIndicator::valLastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID)
    {
      foundValue = true;
      res += "LastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeLinkID::tag: {
    FIX::TradeLinkID::Value value(val);
    res = "TradeLinkID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderInputDevice::tag: {
    FIX::OrderInputDevice::Value value(val);
    res = "OrderInputDevice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingTradingSessionID::tag: {
    FIX::UnderlyingTradingSessionID::Value value(val);
    res = "UnderlyingTradingSessionID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingTradingSessionSubID::tag: {
    FIX::UnderlyingTradingSessionSubID::Value value(val);
    res = "UnderlyingTradingSessionSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeLegRefID::tag: {
    FIX::TradeLegRefID::Value value(val);
    res = "TradeLegRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExchangeRule::tag: {
    FIX::ExchangeRule::Value value(val);
    res = "ExchangeRule = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeAllocIndicator::tag: {
    FIX::TradeAllocIndicator::Value value(val);
    res = "TradeAllocIndicator = ";
    if(value.val == FIX::TradeAllocIndicator::valAllocationNotRequired)
    {
      foundValue = true;
      res += "AllocationNotRequired";
    }
    if(value.val == FIX::TradeAllocIndicator::valAllocationRequiredgiveUpTradeAllocationInformationNotProvided)
    {
      foundValue = true;
      res += "AllocationRequiredgiveUpTradeAllocationInformationNotProvided";
    }
    if(value.val == FIX::TradeAllocIndicator::valUseAllocationProvidedWithTheTrade)
    {
      foundValue = true;
      res += "UseAllocationProvidedWithTheTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ExpirationCycle::tag: {
    FIX::ExpirationCycle::Value value(val);
    res = "ExpirationCycle = ";
    if(value.val == FIX::ExpirationCycle::valExpireOnTradingSessionClose)
    {
      foundValue = true;
      res += "ExpireOnTradingSessionClose";
    }
    if(value.val == FIX::ExpirationCycle::valExpireOnTradingSessionOpen)
    {
      foundValue = true;
      res += "ExpireOnTradingSessionOpen";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdType::tag: {
    FIX::TrdType::Value value(val);
    res = "TrdType = ";
    if(value.val == FIX::TrdType::valRegularTrade)
    {
      foundValue = true;
      res += "RegularTrade";
    }
    if(value.val == FIX::TrdType::valBlockTrade)
    {
      foundValue = true;
      res += "BlockTrade";
    }
    if(value.val == FIX::TrdType::valEFP)
    {
      foundValue = true;
      res += "EFP";
    }
    if(value.val == FIX::TrdType::valTransfer)
    {
      foundValue = true;
      res += "Transfer";
    }
    if(value.val == FIX::TrdType::valLateTrade)
    {
      foundValue = true;
      res += "LateTrade";
    }
    if(value.val == FIX::TrdType::valTTrade)
    {
      foundValue = true;
      res += "TTrade";
    }
    if(value.val == FIX::TrdType::valWeightedAveragePriceTrade)
    {
      foundValue = true;
      res += "WeightedAveragePriceTrade";
    }
    if(value.val == FIX::TrdType::valBunchedTrade)
    {
      foundValue = true;
      res += "BunchedTrade";
    }
    if(value.val == FIX::TrdType::valLateBunchedTrade)
    {
      foundValue = true;
      res += "LateBunchedTrade";
    }
    if(value.val == FIX::TrdType::valPriorReferencePriceTrade)
    {
      foundValue = true;
      res += "PriorReferencePriceTrade";
    }
    if(value.val == FIX::TrdType::valAfterHoursTrade)
    {
      foundValue = true;
      res += "AfterHoursTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdSubType::tag: {
    FIX::TrdSubType::Value value(val);
    res = "TrdSubType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TransferReason::tag: {
    FIX::TransferReason::Value value(val);
    res = "TransferReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AsgnReqID::tag: {
    FIX::AsgnReqID::Value value(val);
    res = "AsgnReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNumAssignmentReports::tag: {
    FIX::TotNumAssignmentReports::Value value(val);
    res = "TotNumAssignmentReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AsgnRptID::tag: {
    FIX::AsgnRptID::Value value(val);
    res = "AsgnRptID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ThresholdAmount::tag: {
    FIX::ThresholdAmount::Value value(val);
    res = "ThresholdAmount = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegMoveType::tag: {
    FIX::PegMoveType::Value value(val);
    res = "PegMoveType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegOffsetType::tag: {
    FIX::PegOffsetType::Value value(val);
    res = "PegOffsetType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegLimitType::tag: {
    FIX::PegLimitType::Value value(val);
    res = "PegLimitType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegRoundDirection::tag: {
    FIX::PegRoundDirection::Value value(val);
    res = "PegRoundDirection = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PeggedPrice::tag: {
    FIX::PeggedPrice::Value value(val);
    res = "PeggedPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PegScope::tag: {
    FIX::PegScope::Value value(val);
    res = "PegScope = ";
    if(value.val == FIX::PegScope::valLocal)
    {
      foundValue = true;
      res += "Local";
    }
    if(value.val == FIX::PegScope::valNational)
    {
      foundValue = true;
      res += "National";
    }
    if(value.val == FIX::PegScope::valGlobal)
    {
      foundValue = true;
      res += "Global";
    }
    if(value.val == FIX::PegScope::valNationalExcludingLocal)
    {
      foundValue = true;
      res += "NationalExcludingLocal";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionMoveType::tag: {
    FIX::DiscretionMoveType::Value value(val);
    res = "DiscretionMoveType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionOffsetType::tag: {
    FIX::DiscretionOffsetType::Value value(val);
    res = "DiscretionOffsetType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionLimitType::tag: {
    FIX::DiscretionLimitType::Value value(val);
    res = "DiscretionLimitType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionRoundDirection::tag: {
    FIX::DiscretionRoundDirection::Value value(val);
    res = "DiscretionRoundDirection = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionPrice::tag: {
    FIX::DiscretionPrice::Value value(val);
    res = "DiscretionPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DiscretionScope::tag: {
    FIX::DiscretionScope::Value value(val);
    res = "DiscretionScope = ";
    if(value.val == FIX::DiscretionScope::valLocal)
    {
      foundValue = true;
      res += "Local";
    }
    if(value.val == FIX::DiscretionScope::valNational)
    {
      foundValue = true;
      res += "National";
    }
    if(value.val == FIX::DiscretionScope::valGlobal)
    {
      foundValue = true;
      res += "Global";
    }
    if(value.val == FIX::DiscretionScope::valNationalExcludingLocal)
    {
      foundValue = true;
      res += "NationalExcludingLocal";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetStrategy::tag: {
    FIX::TargetStrategy::Value value(val);
    res = "TargetStrategy = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetStrategyParameters::tag: {
    FIX::TargetStrategyParameters::Value value(val);
    res = "TargetStrategyParameters = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ParticipationRate::tag: {
    FIX::ParticipationRate::Value value(val);
    res = "ParticipationRate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TargetStrategyPerformance::tag: {
    FIX::TargetStrategyPerformance::Value value(val);
    res = "TargetStrategyPerformance = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastLiquidityInd::tag: {
    FIX::LastLiquidityInd::Value value(val);
    res = "LastLiquidityInd = ";
    if(value.val == FIX::LastLiquidityInd::valAddedLiquidity)
    {
      foundValue = true;
      res += "AddedLiquidity";
    }
    if(value.val == FIX::LastLiquidityInd::valRemovedLiquidity)
    {
      foundValue = true;
      res += "RemovedLiquidity";
    }
    if(value.val == FIX::LastLiquidityInd::valLiquidityRoutedOut)
    {
      foundValue = true;
      res += "LiquidityRoutedOut";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::PublishTrdIndicator::tag: {
    FIX::PublishTrdIndicator::Value value(val);
    res = "PublishTrdIndicator = ";
    if(value.val == FIX::PublishTrdIndicator::valReportTrade)
    {
      foundValue = true;
      res += "ReportTrade";
    }
    if(value.val == FIX::PublishTrdIndicator::valDoNotReportTrade)
    {
      foundValue = true;
      res += "DoNotReportTrade";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::ShortSaleReason::tag: {
    FIX::ShortSaleReason::Value value(val);
    res = "ShortSaleReason = ";
    if(value.val == FIX::ShortSaleReason::valDealerSoldShort)
    {
      foundValue = true;
      res += "DealerSoldShort";
    }
    if(value.val == FIX::ShortSaleReason::valDealerSoldShortExempt)
    {
      foundValue = true;
      res += "DealerSoldShortExempt";
    }
    if(value.val == FIX::ShortSaleReason::valSellingCustomerSoldShort)
    {
      foundValue = true;
      res += "SellingCustomerSoldShort";
    }
    if(value.val == FIX::ShortSaleReason::valSellingCustomerSoldShortExempt)
    {
      foundValue = true;
      res += "SellingCustomerSoldShortExempt";
    }
    if(value.val == FIX::ShortSaleReason::valQualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort)
    {
      foundValue = true;
      res += "QualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort";
    }
    if(value.val == FIX::ShortSaleReason::valQSROrAGUContraSideSoldShortExempt)
    {
      foundValue = true;
      res += "QSROrAGUContraSideSoldShortExempt";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::QtyType::tag: {
    FIX::QtyType::Value value(val);
    res = "QtyType = ";
    if(value.val == FIX::QtyType::valUnits)
    {
      foundValue = true;
      res += "Units";
    }
    if(value.val == FIX::QtyType::valContractsIfUsedShouldSpecifyContractMultiplier)
    {
      foundValue = true;
      res += "ContractsIfUsedShouldSpecifyContractMultiplier";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryTrdType::tag: {
    FIX::SecondaryTrdType::Value value(val);
    res = "SecondaryTrdType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TradeReportType::tag: {
    FIX::TradeReportType::Value value(val);
    res = "TradeReportType = ";
    if(value.val == FIX::TradeReportType::valSubmit)
    {
      foundValue = true;
      res += "Submit";
    }
    if(value.val == FIX::TradeReportType::valAlleged)
    {
      foundValue = true;
      res += "Alleged";
    }
    if(value.val == FIX::TradeReportType::valAccept)
    {
      foundValue = true;
      res += "Accept";
    }
    if(value.val == FIX::TradeReportType::valDecline)
    {
      foundValue = true;
      res += "Decline";
    }
    if(value.val == FIX::TradeReportType::valAddendum)
    {
      foundValue = true;
      res += "Addendum";
    }
    if(value.val == FIX::TradeReportType::valNoOrWas)
    {
      foundValue = true;
      res += "NoOrWas";
    }
    if(value.val == FIX::TradeReportType::valTradeReportCancel)
    {
      foundValue = true;
      res += "TradeReportCancel";
    }
    if(value.val == FIX::TradeReportType::valLockedInTradeBreak)
    {
      foundValue = true;
      res += "LockedInTradeBreak";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AllocNoOrdersType::tag: {
    FIX::AllocNoOrdersType::Value value(val);
    res = "AllocNoOrdersType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SharedCommission::tag: {
    FIX::SharedCommission::Value value(val);
    res = "SharedCommission = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ConfirmReqID::tag: {
    FIX::ConfirmReqID::Value value(val);
    res = "ConfirmReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AvgParPx::tag: {
    FIX::AvgParPx::Value value(val);
    res = "AvgParPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::ReportedPx::tag: {
    FIX::ReportedPx::Value value(val);
    res = "ReportedPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoCapacities::tag: {
    FIX::NoCapacities::Value value(val);
    res = "NoCapacities = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::OrderCapacityQty::tag: {
    FIX::OrderCapacityQty::Value value(val);
    res = "OrderCapacityQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoEvents::tag: {
    FIX::NoEvents::Value value(val);
    res = "NoEvents = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventType::tag: {
    FIX::EventType::Value value(val);
    res = "EventType = ";
    if(value.val == FIX::EventType::valPut)
    {
      foundValue = true;
      res += "Put";
    }
    if(value.val == FIX::EventType::valCall)
    {
      foundValue = true;
      res += "Call";
    }
    if(value.val == FIX::EventType::valTender)
    {
      foundValue = true;
      res += "Tender";
    }
    if(value.val == FIX::EventType::valSinkingFundCall)
    {
      foundValue = true;
      res += "SinkingFundCall";
    }
    if(value.val == FIX::EventType::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventDate::tag: {
    FIX::EventDate::Value value(val);
    res = "EventDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventPx::tag: {
    FIX::EventPx::Value value(val);
    res = "EventPx = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EventText::tag: {
    FIX::EventText::Value value(val);
    res = "EventText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::PctAtRisk::tag: {
    FIX::PctAtRisk::Value value(val);
    res = "PctAtRisk = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoInstrAttrib::tag: {
    FIX::NoInstrAttrib::Value value(val);
    res = "NoInstrAttrib = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InstrAttribType::tag: {
    FIX::InstrAttribType::Value value(val);
    res = "InstrAttribType = ";
    if(value.val == FIX::InstrAttribType::valFlat)
    {
      foundValue = true;
      res += "Flat";
    }
    if(value.val == FIX::InstrAttribType::valZeroCoupon)
    {
      foundValue = true;
      res += "ZeroCoupon";
    }
    if(value.val == FIX::InstrAttribType::valInterestBearing)
    {
      foundValue = true;
      res += "InterestBearing";
    }
    if(value.val == FIX::InstrAttribType::valNoPeriodicPayments)
    {
      foundValue = true;
      res += "NoPeriodicPayments";
    }
    if(value.val == FIX::InstrAttribType::valVariableRate)
    {
      foundValue = true;
      res += "VariableRate";
    }
    if(value.val == FIX::InstrAttribType::valLessFeeForPut)
    {
      foundValue = true;
      res += "LessFeeForPut";
    }
    if(value.val == FIX::InstrAttribType::valSteppedCoupon)
    {
      foundValue = true;
      res += "SteppedCoupon";
    }
    if(value.val == FIX::InstrAttribType::valCouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "CouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field";
    }
    if(value.val == FIX::InstrAttribType::valWhenAndIfIssued)
    {
      foundValue = true;
      res += "WhenAndIfIssued";
    }
    if(value.val == FIX::InstrAttribType::valOriginalIssueDiscount)
    {
      foundValue = true;
      res += "OriginalIssueDiscount";
    }
    if(value.val == FIX::InstrAttribType::valCallablePuttable)
    {
      foundValue = true;
      res += "CallablePuttable";
    }
    if(value.val == FIX::InstrAttribType::valEscrowedToMaturity)
    {
      foundValue = true;
      res += "EscrowedToMaturity";
    }
    if(value.val == FIX::InstrAttribType::valEscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "EscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field";
    }
    if(value.val == FIX::InstrAttribType::valPrerefunded)
    {
      foundValue = true;
      res += "Prerefunded";
    }
    if(value.val == FIX::InstrAttribType::valInDefault)
    {
      foundValue = true;
      res += "InDefault";
    }
    if(value.val == FIX::InstrAttribType::valUnrated)
    {
      foundValue = true;
      res += "Unrated";
    }
    if(value.val == FIX::InstrAttribType::valTaxable)
    {
      foundValue = true;
      res += "Taxable";
    }
    if(value.val == FIX::InstrAttribType::valIndexed)
    {
      foundValue = true;
      res += "Indexed";
    }
    if(value.val == FIX::InstrAttribType::valSubjectToAlternativeMinimumTax)
    {
      foundValue = true;
      res += "SubjectToAlternativeMinimumTax";
    }
    if(value.val == FIX::InstrAttribType::valOriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "OriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field";
    }
    if(value.val == FIX::InstrAttribType::valCallableBelowMaturityValue)
    {
      foundValue = true;
      res += "CallableBelowMaturityValue";
    }
    if(value.val == FIX::InstrAttribType::valCallableWithoutNoticeByMailToHolderUnlessRegistered)
    {
      foundValue = true;
      res += "CallableWithoutNoticeByMailToHolderUnlessRegistered";
    }
    if(value.val == FIX::InstrAttribType::valTextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field)
    {
      foundValue = true;
      res += "TextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::InstrAttribValue::tag: {
    FIX::InstrAttribValue::Value value(val);
    res = "InstrAttribValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DatedDate::tag: {
    FIX::DatedDate::Value value(val);
    res = "DatedDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::InterestAccrualDate::tag: {
    FIX::InterestAccrualDate::Value value(val);
    res = "InterestAccrualDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CPProgram::tag: {
    FIX::CPProgram::Value value(val);
    res = "CPProgram = ";
    if(value.val == FIX::CPProgram::val3a)
    {
      foundValue = true;
      res += "3a";
    }
    if(value.val == FIX::CPProgram::val4)
    {
      foundValue = true;
      res += "4";
    }
    if(value.val == FIX::CPProgram::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CPRegType::tag: {
    FIX::CPRegType::Value value(val);
    res = "CPRegType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCPProgram::tag: {
    FIX::UnderlyingCPProgram::Value value(val);
    res = "UnderlyingCPProgram = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCPRegType::tag: {
    FIX::UnderlyingCPRegType::Value value(val);
    res = "UnderlyingCPRegType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingQty::tag: {
    FIX::UnderlyingQty::Value value(val);
    res = "UnderlyingQty = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdMatchID::tag: {
    FIX::TrdMatchID::Value value(val);
    res = "TrdMatchID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::SecondaryTradeReportRefID::tag: {
    FIX::SecondaryTradeReportRefID::Value value(val);
    res = "SecondaryTradeReportRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingDirtyPrice::tag: {
    FIX::UnderlyingDirtyPrice::Value value(val);
    res = "UnderlyingDirtyPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingEndPrice::tag: {
    FIX::UnderlyingEndPrice::Value value(val);
    res = "UnderlyingEndPrice = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStartValue::tag: {
    FIX::UnderlyingStartValue::Value value(val);
    res = "UnderlyingStartValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingCurrentValue::tag: {
    FIX::UnderlyingCurrentValue::Value value(val);
    res = "UnderlyingCurrentValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingEndValue::tag: {
    FIX::UnderlyingEndValue::Value value(val);
    res = "UnderlyingEndValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoUnderlyingStips::tag: {
    FIX::NoUnderlyingStips::Value value(val);
    res = "NoUnderlyingStips = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStipType::tag: {
    FIX::UnderlyingStipType::Value value(val);
    res = "UnderlyingStipType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStipValue::tag: {
    FIX::UnderlyingStipValue::Value value(val);
    res = "UnderlyingStipValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MaturityNetMoney::tag: {
    FIX::MaturityNetMoney::Value value(val);
    res = "MaturityNetMoney = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MiscFeeBasis::tag: {
    FIX::MiscFeeBasis::Value value(val);
    res = "MiscFeeBasis = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNoAllocs::tag: {
    FIX::TotNoAllocs::Value value(val);
    res = "TotNoAllocs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastFragment::tag: {
    FIX::LastFragment::Value value(val);
    res = "LastFragment = ";
    if(value.val == FIX::LastFragment::valLastMessage)
    {
      foundValue = true;
      res += "LastMessage";
    }
    if(value.val == FIX::LastFragment::valNotLastMessage)
    {
      foundValue = true;
      res += "NotLastMessage";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollReqID::tag: {
    FIX::CollReqID::Value value(val);
    res = "CollReqID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnReason::tag: {
    FIX::CollAsgnReason::Value value(val);
    res = "CollAsgnReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryQualifier::tag: {
    FIX::CollInquiryQualifier::Value value(val);
    res = "CollInquiryQualifier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoTrades::tag: {
    FIX::NoTrades::Value value(val);
    res = "NoTrades = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MarginRatio::tag: {
    FIX::MarginRatio::Value value(val);
    res = "MarginRatio = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::MarginExcess::tag: {
    FIX::MarginExcess::Value value(val);
    res = "MarginExcess = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotalNetValue::tag: {
    FIX::TotalNetValue::Value value(val);
    res = "TotalNetValue = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CashOutstanding::tag: {
    FIX::CashOutstanding::Value value(val);
    res = "CashOutstanding = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnID::tag: {
    FIX::CollAsgnID::Value value(val);
    res = "CollAsgnID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnTransType::tag: {
    FIX::CollAsgnTransType::Value value(val);
    res = "CollAsgnTransType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollRespID::tag: {
    FIX::CollRespID::Value value(val);
    res = "CollRespID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnRespType::tag: {
    FIX::CollAsgnRespType::Value value(val);
    res = "CollAsgnRespType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnRejectReason::tag: {
    FIX::CollAsgnRejectReason::Value value(val);
    res = "CollAsgnRejectReason = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAsgnRefID::tag: {
    FIX::CollAsgnRefID::Value value(val);
    res = "CollAsgnRefID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollRptID::tag: {
    FIX::CollRptID::Value value(val);
    res = "CollRptID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryID::tag: {
    FIX::CollInquiryID::Value value(val);
    res = "CollInquiryID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollStatus::tag: {
    FIX::CollStatus::Value value(val);
    res = "CollStatus = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TotNumReports::tag: {
    FIX::TotNumReports::Value value(val);
    res = "TotNumReports = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastRptRequested::tag: {
    FIX::LastRptRequested::Value value(val);
    res = "LastRptRequested = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementDesc::tag: {
    FIX::AgreementDesc::Value value(val);
    res = "AgreementDesc = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementID::tag: {
    FIX::AgreementID::Value value(val);
    res = "AgreementID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementDate::tag: {
    FIX::AgreementDate::Value value(val);
    res = "AgreementDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StartDate::tag: {
    FIX::StartDate::Value value(val);
    res = "StartDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndDate::tag: {
    FIX::EndDate::Value value(val);
    res = "EndDate = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::AgreementCurrency::tag: {
    FIX::AgreementCurrency::Value value(val);
    res = "AgreementCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::DeliveryType::tag: {
    FIX::DeliveryType::Value value(val);
    res = "DeliveryType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndAccruedInterestAmt::tag: {
    FIX::EndAccruedInterestAmt::Value value(val);
    res = "EndAccruedInterestAmt = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StartCash::tag: {
    FIX::StartCash::Value value(val);
    res = "StartCash = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::EndCash::tag: {
    FIX::EndCash::Value value(val);
    res = "EndCash = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserRequestID::tag: {
    FIX::UserRequestID::Value value(val);
    res = "UserRequestID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserRequestType::tag: {
    FIX::UserRequestType::Value value(val);
    res = "UserRequestType = ";
    if(value.val == FIX::UserRequestType::valLogOnUser)
    {
      foundValue = true;
      res += "LogOnUser";
    }
    if(value.val == FIX::UserRequestType::valLogOffUser)
    {
      foundValue = true;
      res += "LogOffUser";
    }
    if(value.val == FIX::UserRequestType::valChangePasswordForUser)
    {
      foundValue = true;
      res += "ChangePasswordForUser";
    }
    if(value.val == FIX::UserRequestType::valRequestIndividualUserStatus)
    {
      foundValue = true;
      res += "RequestIndividualUserStatus";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NewPassword::tag: {
    FIX::NewPassword::Value value(val);
    res = "NewPassword = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserStatus::tag: {
    FIX::UserStatus::Value value(val);
    res = "UserStatus = ";
    if(value.val == FIX::UserStatus::valLoggedIn)
    {
      foundValue = true;
      res += "LoggedIn";
    }
    if(value.val == FIX::UserStatus::valNotLoggedIn)
    {
      foundValue = true;
      res += "NotLoggedIn";
    }
    if(value.val == FIX::UserStatus::valUserNotRecognised)
    {
      foundValue = true;
      res += "UserNotRecognised";
    }
    if(value.val == FIX::UserStatus::valPasswordIncorrect)
    {
      foundValue = true;
      res += "PasswordIncorrect";
    }
    if(value.val == FIX::UserStatus::valPasswordChanged)
    {
      foundValue = true;
      res += "PasswordChanged";
    }
    if(value.val == FIX::UserStatus::valOther)
    {
      foundValue = true;
      res += "Other";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UserStatusText::tag: {
    FIX::UserStatusText::Value value(val);
    res = "UserStatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::StatusValue::tag: {
    FIX::StatusValue::Value value(val);
    res = "StatusValue = ";
    if(value.val == FIX::StatusValue::valConnected)
    {
      foundValue = true;
      res += "Connected";
    }
    if(value.val == FIX::StatusValue::valNotConnectedDownExpectedUp)
    {
      foundValue = true;
      res += "NotConnectedDownExpectedUp";
    }
    if(value.val == FIX::StatusValue::valNotConnectedDownExpectedDown)
    {
      foundValue = true;
      res += "NotConnectedDownExpectedDown";
    }
    if(value.val == FIX::StatusValue::valInProcess)
    {
      foundValue = true;
      res += "InProcess";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StatusText::tag: {
    FIX::StatusText::Value value(val);
    res = "StatusText = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefCompID::tag: {
    FIX::RefCompID::Value value(val);
    res = "RefCompID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::RefSubID::tag: {
    FIX::RefSubID::Value value(val);
    res = "RefSubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkResponseID::tag: {
    FIX::NetworkResponseID::Value value(val);
    res = "NetworkResponseID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkRequestID::tag: {
    FIX::NetworkRequestID::Value value(val);
    res = "NetworkRequestID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LastNetworkResponseID::tag: {
    FIX::LastNetworkResponseID::Value value(val);
    res = "LastNetworkResponseID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkRequestType::tag: {
    FIX::NetworkRequestType::Value value(val);
    res = "NetworkRequestType = ";
    if(value.val == FIX::NetworkRequestType::valSnapshot)
    {
      foundValue = true;
      res += "Snapshot";
    }
    if(value.val == FIX::NetworkRequestType::valSubscribe)
    {
      foundValue = true;
      res += "Subscribe";
    }
    if(value.val == FIX::NetworkRequestType::valStopSubscribing)
    {
      foundValue = true;
      res += "StopSubscribing";
    }
    if(value.val == FIX::NetworkRequestType::valLevelOfDetailThenNoCompIDsBecomesRequired)
    {
      foundValue = true;
      res += "LevelOfDetailThenNoCompIDsBecomesRequired";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoCompIDs::tag: {
    FIX::NoCompIDs::Value value(val);
    res = "NoCompIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NetworkStatusResponseType::tag: {
    FIX::NetworkStatusResponseType::Value value(val);
    res = "NetworkStatusResponseType = ";
    if(value.val == FIX::NetworkStatusResponseType::valFull)
    {
      foundValue = true;
      res += "Full";
    }
    if(value.val == FIX::NetworkStatusResponseType::valIncrementalUpdate)
    {
      foundValue = true;
      res += "IncrementalUpdate";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoCollInquiryQualifier::tag: {
    FIX::NoCollInquiryQualifier::Value value(val);
    res = "NoCollInquiryQualifier = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TrdRptStatus::tag: {
    FIX::TrdRptStatus::Value value(val);
    res = "TrdRptStatus = ";
    if(value.val == FIX::TrdRptStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::TrdRptStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::AffirmStatus::tag: {
    FIX::AffirmStatus::Value value(val);
    res = "AffirmStatus = ";
    if(value.val == FIX::AffirmStatus::valReceived)
    {
      foundValue = true;
      res += "Received";
    }
    if(value.val == FIX::AffirmStatus::valConfirmRejectedIeNotAffirmed)
    {
      foundValue = true;
      res += "ConfirmRejectedIeNotAffirmed";
    }
    if(value.val == FIX::AffirmStatus::valAffirmed)
    {
      foundValue = true;
      res += "Affirmed";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::UnderlyingStrikeCurrency::tag: {
    FIX::UnderlyingStrikeCurrency::Value value(val);
    res = "UnderlyingStrikeCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegStrikeCurrency::tag: {
    FIX::LegStrikeCurrency::Value value(val);
    res = "LegStrikeCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::TimeBracket::tag: {
    FIX::TimeBracket::Value value(val);
    res = "TimeBracket = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollAction::tag: {
    FIX::CollAction::Value value(val);
    res = "CollAction = ";
    if(value.val == FIX::CollAction::valRetain)
    {
      foundValue = true;
      res += "Retain";
    }
    if(value.val == FIX::CollAction::valAdd)
    {
      foundValue = true;
      res += "Add";
    }
    if(value.val == FIX::CollAction::valRemove)
    {
      foundValue = true;
      res += "Remove";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryStatus::tag: {
    FIX::CollInquiryStatus::Value value(val);
    res = "CollInquiryStatus = ";
    if(value.val == FIX::CollInquiryStatus::valAccepted)
    {
      foundValue = true;
      res += "Accepted";
    }
    if(value.val == FIX::CollInquiryStatus::valAcceptedWithWarnings)
    {
      foundValue = true;
      res += "AcceptedWithWarnings";
    }
    if(value.val == FIX::CollInquiryStatus::valCompleted)
    {
      foundValue = true;
      res += "Completed";
    }
    if(value.val == FIX::CollInquiryStatus::valCompletedWithWarnings)
    {
      foundValue = true;
      res += "CompletedWithWarnings";
    }
    if(value.val == FIX::CollInquiryStatus::valRejected)
    {
      foundValue = true;
      res += "Rejected";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::CollInquiryResult::tag: {
    FIX::CollInquiryResult::Value value(val);
    res = "CollInquiryResult = ";
    if(value.val == FIX::CollInquiryResult::valSuccessful)
    {
      foundValue = true;
      res += "Successful";
    }
    if(value.val == FIX::CollInquiryResult::valInvalidOrUnknownInstrument)
    {
      foundValue = true;
      res += "InvalidOrUnknownInstrument";
    }
    if(value.val == FIX::CollInquiryResult::valInvalidOrUnknownCollateralType)
    {
      foundValue = true;
      res += "InvalidOrUnknownCollateralType";
    }
    if(value.val == FIX::CollInquiryResult::valInvalidParties)
    {
      foundValue = true;
      res += "InvalidParties";
    }
    if(value.val == FIX::CollInquiryResult::valInvalidTransportTypeRequested)
    {
      foundValue = true;
      res += "InvalidTransportTypeRequested";
    }
    if(value.val == FIX::CollInquiryResult::valInvalidDestinationRequested)
    {
      foundValue = true;
      res += "InvalidDestinationRequested";
    }
    if(value.val == FIX::CollInquiryResult::valNoCollateralFoundForTheTradeSpecified)
    {
      foundValue = true;
      res += "NoCollateralFoundForTheTradeSpecified";
    }
    if(value.val == FIX::CollInquiryResult::valNoCollateralFoundForTheOrderSpecified)
    {
      foundValue = true;
      res += "NoCollateralFoundForTheOrderSpecified";
    }
    if(value.val == FIX::CollInquiryResult::valCollateralInquiryTypeNotSupported)
    {
      foundValue = true;
      res += "CollateralInquiryTypeNotSupported";
    }
    if(value.val == FIX::CollInquiryResult::valUnauthorizedForCollateralInquiry)
    {
      foundValue = true;
      res += "UnauthorizedForCollateralInquiry";
    }
    if(value.val == FIX::CollInquiryResult::valOtherfurtherInformationInText)
    {
      foundValue = true;
      res += "OtherfurtherInformationInText";
    }
    if(!foundValue)
      res += val;
  }break;

  case FIX::StrikeCurrency::tag: {
    FIX::StrikeCurrency::Value value(val);
    res = "StrikeCurrency = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested3PartyIDs::tag: {
    FIX::NoNested3PartyIDs::Value value(val);
    res = "NoNested3PartyIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartyID::tag: {
    FIX::Nested3PartyID::Value value(val);
    res = "Nested3PartyID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartyIDSource::tag: {
    FIX::Nested3PartyIDSource::Value value(val);
    res = "Nested3PartyIDSource = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartyRole::tag: {
    FIX::Nested3PartyRole::Value value(val);
    res = "Nested3PartyRole = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::NoNested3PartySubIDs::tag: {
    FIX::NoNested3PartySubIDs::Value value(val);
    res = "NoNested3PartySubIDs = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartySubID::tag: {
    FIX::Nested3PartySubID::Value value(val);
    res = "Nested3PartySubID = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::Nested3PartySubIDType::tag: {
    FIX::Nested3PartySubIDType::Value value(val);
    res = "Nested3PartySubIDType = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegContractSettlMonth::tag: {
    FIX::LegContractSettlMonth::Value value(val);
    res = "LegContractSettlMonth = ";
    if(!foundValue)
      res += val;
  }break;

  case FIX::LegInterestAccrualDate::tag: {
    FIX::LegInterestAccrualDate::Value value(val);
    res = "LegInterestAccrualDate = ";
    if(!foundValue)
      res += val;
  }break;

}
return res;
}
} //namespace FIX
