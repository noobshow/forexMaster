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
return "";
}
} //namespace FIX
