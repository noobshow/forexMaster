
// This file has been automatically generated via fixGen/dic2Code.py
// On base of fixGen/fixDictionary1.0.txt fix dictionary
#pragma once

#include <string>
#include "Types.hpp"

namespace FIX
{
std::string toHuman(int tag, const char* val);

struct Account
{
  constexpr static const int tag = 1;
  constexpr static const char* name = "Account";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AdvId
{
  constexpr static const int tag = 2;
  constexpr static const char* name = "AdvId";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AdvRefID
{
  constexpr static const int tag = 3;
  constexpr static const char* name = "AdvRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AdvSide
{
  constexpr static const int tag = 4;
  constexpr static const char* name = "AdvSide";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valBuy = 'B';
  constexpr static const char valSell = 'S';
  constexpr static const char valCross = 'X';
  constexpr static const char valTrade = 'T';

  constexpr static const char* tagValBuy = "4=B";
  constexpr static const char* tagValSell = "4=S";
  constexpr static const char* tagValCross = "4=X";
  constexpr static const char* tagValTrade = "4=T";

};

struct AdvTransType
{
  constexpr static const int tag = 5;
  constexpr static const char* name = "AdvTransType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valNew = "N";
  constexpr static const char* valCancel = "C";
  constexpr static const char* valReplace = "R";

  constexpr static const char* tagValNew = "5=N";
  constexpr static const char* tagValCancel = "5=C";
  constexpr static const char* tagValReplace = "5=R";

};

struct AvgPx
{
  constexpr static const int tag = 6;
  constexpr static const char* name = "AvgPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct BeginSeqNo
{
  constexpr static const int tag = 7;
  constexpr static const char* name = "BeginSeqNo";

  static writeableTagVal<Int> tagVal(int data);

};

struct BeginString
{
  constexpr static const int tag = 8;
  constexpr static const char* name = "BeginString";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valFIX44 = "FIX.4.4";

  constexpr static const char* tagValFIX44 = "8=FIX.4.4";

};

struct BodyLength
{
  constexpr static const int tag = 9;
  constexpr static const char* name = "BodyLength";

  static writeableTagVal<Int> tagVal(int data);

};

struct CheckSum
{
  constexpr static const int tag = 10;
  constexpr static const char* name = "CheckSum";

  static writeableTagVal<Int> tagVal(int data);

};

struct ClOrdID
{
  constexpr static const int tag = 11;
  constexpr static const char* name = "ClOrdID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Commission
{
  constexpr static const int tag = 12;
  constexpr static const char* name = "Commission";

  static writeableTagVal<Float> tagVal(float data);

};

struct CommType
{
  constexpr static const int tag = 13;
  constexpr static const char* name = "CommType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valPerUnit = '1';
  constexpr static const char valPercentage = '2';
  constexpr static const char valAbsolute = '3';
  constexpr static const char valPercentageWaivedCashDiscount = '4';
  constexpr static const char valPercentageWaivedEnhancedUnits = '5';
  constexpr static const char valPointsPerBondOrOrContractSupplyContractMultiplier = '6';

  constexpr static const char* tagValPerUnit = "13=1";
  constexpr static const char* tagValPercentage = "13=2";
  constexpr static const char* tagValAbsolute = "13=3";
  constexpr static const char* tagValPercentageWaivedCashDiscount = "13=4";
  constexpr static const char* tagValPercentageWaivedEnhancedUnits = "13=5";
  constexpr static const char* tagValPointsPerBondOrOrContractSupplyContractMultiplier = "13=6";

};

struct CumQty
{
  constexpr static const int tag = 14;
  constexpr static const char* name = "CumQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct Currency
{
  constexpr static const int tag = 15;
  constexpr static const char* name = "Currency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct EndSeqNo
{
  constexpr static const int tag = 16;
  constexpr static const char* name = "EndSeqNo";

  static writeableTagVal<Int> tagVal(int data);

};

struct ExecID
{
  constexpr static const int tag = 17;
  constexpr static const char* name = "ExecID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ExecInst
{
  constexpr static const int tag = 18;
  constexpr static const char* name = "ExecInst";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valNotHeld = "1";
  constexpr static const char* valWork = "2";
  constexpr static const char* valGoAlong = "3";
  constexpr static const char* valOverTheDay = "4";
  constexpr static const char* valHeld = "5";
  constexpr static const char* valParticipateDontInitiate = "6";
  constexpr static const char* valStrictScale = "7";
  constexpr static const char* valTryToScale = "8";
  constexpr static const char* valStayOnBidside = "9";
  constexpr static const char* valStayOnOfferside = "0";
  constexpr static const char* valNoCross = "A";
  constexpr static const char* valOKToCross = "B";
  constexpr static const char* valCallFirst = "C";
  constexpr static const char* valPercentOfVolume = "D";
  constexpr static const char* valDoNotIncreaseDNI = "E";
  constexpr static const char* valDoNotReduceDNR = "F";
  constexpr static const char* valAllOrNoneAON = "G";
  constexpr static const char* valReinstateOnSystemFailure = "H";
  constexpr static const char* valInstitutionsOnly = "I";
  constexpr static const char* valReinstateOnTradingHalt = "J";
  constexpr static const char* valCancelOnTradingHalt = "K";
  constexpr static const char* valLastPeg = "L";
  constexpr static const char* valMidPricePeg = "M";
  constexpr static const char* valNonNegotiable = "N";
  constexpr static const char* valOpeningPeg = "O";
  constexpr static const char* valMarketPeg = "P";
  constexpr static const char* valCancelOnSystemFailure = "Q";
  constexpr static const char* valPrimaryPeg = "R";
  constexpr static const char* valSuspend = "S";
  constexpr static const char* valFixedPegToLocalBestBidOrOfferAtTimeOfOrder = "T";
  constexpr static const char* valCustomerDisplayInstruction = "U";
  constexpr static const char* valNetting = "V";
  constexpr static const char* valPegToVWAP = "W";
  constexpr static const char* valTradeAlong = "X";
  constexpr static const char* valTryToStop = "Y";
  constexpr static const char* valCancelIfNotBest = "Z";
  constexpr static const char* valTrailingStopPeg = "a";
  constexpr static const char* valStrictLimit = "b";
  constexpr static const char* valIgnorePriceValidityChecks = "c";
  constexpr static const char* valPegToLimitPrice = "d";
  constexpr static const char* valWorkToTargetStrategy = "e";

  constexpr static const char* tagValNotHeld = "18=1";
  constexpr static const char* tagValWork = "18=2";
  constexpr static const char* tagValGoAlong = "18=3";
  constexpr static const char* tagValOverTheDay = "18=4";
  constexpr static const char* tagValHeld = "18=5";
  constexpr static const char* tagValParticipateDontInitiate = "18=6";
  constexpr static const char* tagValStrictScale = "18=7";
  constexpr static const char* tagValTryToScale = "18=8";
  constexpr static const char* tagValStayOnBidside = "18=9";
  constexpr static const char* tagValStayOnOfferside = "18=0";
  constexpr static const char* tagValNoCross = "18=A";
  constexpr static const char* tagValOKToCross = "18=B";
  constexpr static const char* tagValCallFirst = "18=C";
  constexpr static const char* tagValPercentOfVolume = "18=D";
  constexpr static const char* tagValDoNotIncreaseDNI = "18=E";
  constexpr static const char* tagValDoNotReduceDNR = "18=F";
  constexpr static const char* tagValAllOrNoneAON = "18=G";
  constexpr static const char* tagValReinstateOnSystemFailure = "18=H";
  constexpr static const char* tagValInstitutionsOnly = "18=I";
  constexpr static const char* tagValReinstateOnTradingHalt = "18=J";
  constexpr static const char* tagValCancelOnTradingHalt = "18=K";
  constexpr static const char* tagValLastPeg = "18=L";
  constexpr static const char* tagValMidPricePeg = "18=M";
  constexpr static const char* tagValNonNegotiable = "18=N";
  constexpr static const char* tagValOpeningPeg = "18=O";
  constexpr static const char* tagValMarketPeg = "18=P";
  constexpr static const char* tagValCancelOnSystemFailure = "18=Q";
  constexpr static const char* tagValPrimaryPeg = "18=R";
  constexpr static const char* tagValSuspend = "18=S";
  constexpr static const char* tagValFixedPegToLocalBestBidOrOfferAtTimeOfOrder = "18=T";
  constexpr static const char* tagValCustomerDisplayInstruction = "18=U";
  constexpr static const char* tagValNetting = "18=V";
  constexpr static const char* tagValPegToVWAP = "18=W";
  constexpr static const char* tagValTradeAlong = "18=X";
  constexpr static const char* tagValTryToStop = "18=Y";
  constexpr static const char* tagValCancelIfNotBest = "18=Z";
  constexpr static const char* tagValTrailingStopPeg = "18=a";
  constexpr static const char* tagValStrictLimit = "18=b";
  constexpr static const char* tagValIgnorePriceValidityChecks = "18=c";
  constexpr static const char* tagValPegToLimitPrice = "18=d";
  constexpr static const char* tagValWorkToTargetStrategy = "18=e";

};

struct ExecRefID
{
  constexpr static const int tag = 19;
  constexpr static const char* name = "ExecRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ExecTransType
{
  constexpr static const int tag = 20;
  constexpr static const char* name = "ExecTransType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valCancel = '1';
  constexpr static const char valCorrect = '2';
  constexpr static const char valStatus = '3';

  constexpr static const char* tagValNew = "20=0";
  constexpr static const char* tagValCancel = "20=1";
  constexpr static const char* tagValCorrect = "20=2";
  constexpr static const char* tagValStatus = "20=3";

};

struct HandlInst
{
  constexpr static const int tag = 21;
  constexpr static const char* name = "HandlInst";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valAutomatedExecutionOrderPrivateNoBrokerIntervention = '1';
  constexpr static const char valAutomatedExecutionOrderPublicBrokerInterventionOK = '2';
  constexpr static const char valManualOrderBestExecution = '3';

  constexpr static const char* tagValAutomatedExecutionOrderPrivateNoBrokerIntervention = "21=1";
  constexpr static const char* tagValAutomatedExecutionOrderPublicBrokerInterventionOK = "21=2";
  constexpr static const char* tagValManualOrderBestExecution = "21=3";

};

struct SecurityIDSource
{
  constexpr static const int tag = 22;
  constexpr static const char* name = "SecurityIDSource";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valCUSIP = "1";
  constexpr static const char* valSEDOL = "2";
  constexpr static const char* valQUIK = "3";
  constexpr static const char* valISINNumber = "4";
  constexpr static const char* valRICCode = "5";
  constexpr static const char* valISOCurrencyCode = "6";
  constexpr static const char* valISOCountryCode = "7";
  constexpr static const char* valExchangeSymbol = "8";
  constexpr static const char* valConsolidatedTapeAssociationCTASymbol = "9";
  constexpr static const char* valBloombergSymbol = "A";
  constexpr static const char* valWertpapier = "B";
  constexpr static const char* valDutch = "C";
  constexpr static const char* valValoren = "D";
  constexpr static const char* valSicovam = "E";
  constexpr static const char* valBelgian = "F";
  constexpr static const char* valCommon = "G";
  constexpr static const char* valClearingHouseOrClearingOrganization = "H";
  constexpr static const char* valISDAOrFpMLProductSpecification = "I";
  constexpr static const char* valOptionsPriceReportingAuthority = "J";

  constexpr static const char* tagValCUSIP = "22=1";
  constexpr static const char* tagValSEDOL = "22=2";
  constexpr static const char* tagValQUIK = "22=3";
  constexpr static const char* tagValISINNumber = "22=4";
  constexpr static const char* tagValRICCode = "22=5";
  constexpr static const char* tagValISOCurrencyCode = "22=6";
  constexpr static const char* tagValISOCountryCode = "22=7";
  constexpr static const char* tagValExchangeSymbol = "22=8";
  constexpr static const char* tagValConsolidatedTapeAssociationCTASymbol = "22=9";
  constexpr static const char* tagValBloombergSymbol = "22=A";
  constexpr static const char* tagValWertpapier = "22=B";
  constexpr static const char* tagValDutch = "22=C";
  constexpr static const char* tagValValoren = "22=D";
  constexpr static const char* tagValSicovam = "22=E";
  constexpr static const char* tagValBelgian = "22=F";
  constexpr static const char* tagValCommon = "22=G";
  constexpr static const char* tagValClearingHouseOrClearingOrganization = "22=H";
  constexpr static const char* tagValISDAOrFpMLProductSpecification = "22=I";
  constexpr static const char* tagValOptionsPriceReportingAuthority = "22=J";

};

struct IOIID
{
  constexpr static const int tag = 23;
  constexpr static const char* name = "IOIID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct IOIOthSv
{
  constexpr static const int tag = 24;
  constexpr static const char* name = "IOIOthSv";

  static writeableTagVal<Char> tagVal(char data);

};

struct IOIQltyInd
{
  constexpr static const int tag = 25;
  constexpr static const char* name = "IOIQltyInd";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valLow = 'L';
  constexpr static const char valMedium = 'M';
  constexpr static const char valHigh = 'H';

  constexpr static const char* tagValLow = "25=L";
  constexpr static const char* tagValMedium = "25=M";
  constexpr static const char* tagValHigh = "25=H";

};

struct IOIRefID
{
  constexpr static const int tag = 26;
  constexpr static const char* name = "IOIRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct IOIQty
{
  constexpr static const int tag = 27;
  constexpr static const char* name = "IOIQty";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valZero = "0";
  constexpr static const char* valSmall = "S";
  constexpr static const char* valMedium = "M";
  constexpr static const char* valLarge = "L";

  constexpr static const char* tagValZero = "27=0";
  constexpr static const char* tagValSmall = "27=S";
  constexpr static const char* tagValMedium = "27=M";
  constexpr static const char* tagValLarge = "27=L";

};

struct IOITransType
{
  constexpr static const int tag = 28;
  constexpr static const char* name = "IOITransType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = 'N';
  constexpr static const char valCancel = 'C';
  constexpr static const char valReplace = 'R';

  constexpr static const char* tagValNew = "28=N";
  constexpr static const char* tagValCancel = "28=C";
  constexpr static const char* tagValReplace = "28=R";

};

struct LastCapacity
{
  constexpr static const int tag = 29;
  constexpr static const char* name = "LastCapacity";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valAgent = '1';
  constexpr static const char valCrossAsAgent = '2';
  constexpr static const char valCrossAsPrincipal = '3';
  constexpr static const char valPrincipal = '4';

  constexpr static const char* tagValAgent = "29=1";
  constexpr static const char* tagValCrossAsAgent = "29=2";
  constexpr static const char* tagValCrossAsPrincipal = "29=3";
  constexpr static const char* tagValPrincipal = "29=4";

};

struct LastMkt
{
  constexpr static const int tag = 30;
  constexpr static const char* name = "LastMkt";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LastPx
{
  constexpr static const int tag = 31;
  constexpr static const char* name = "LastPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct LastQty
{
  constexpr static const int tag = 32;
  constexpr static const char* name = "LastQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoLinesOfText
{
  constexpr static const int tag = 33;
  constexpr static const char* name = "NoLinesOfText";

  static writeableTagVal<Int> tagVal(int data);

};

struct MsgSeqNum
{
  constexpr static const int tag = 34;
  constexpr static const char* name = "MsgSeqNum";

  static writeableTagVal<Int> tagVal(int data);

};

struct MsgType
{
  constexpr static const int tag = 35;
  constexpr static const char* name = "MsgType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valHeartbeat = "0";
  constexpr static const char* valTestRequest = "1";
  constexpr static const char* valResendRequest = "2";
  constexpr static const char* valReject = "3";
  constexpr static const char* valSequenceReset = "4";
  constexpr static const char* valLogout = "5";
  constexpr static const char* valIndicationOfInterest = "6";
  constexpr static const char* valAdvertisement = "7";
  constexpr static const char* valExecutionReport = "8";
  constexpr static const char* valOrderCancelReject = "9";
  constexpr static const char* valLogon = "A";
  constexpr static const char* valNews = "B";
  constexpr static const char* valEmail = "C";
  constexpr static const char* valOrderSingle = "D";
  constexpr static const char* valOrderList = "E";
  constexpr static const char* valOrderCancelRequest = "F";
  constexpr static const char* valOrderCancelOrReplaceRequest = "G";
  constexpr static const char* valOrderStatusRequest = "H";
  constexpr static const char* valAllocationInstruction = "J";
  constexpr static const char* valListCancelRequest = "K";
  constexpr static const char* valListExecute = "L";
  constexpr static const char* valListStatusRequest = "M";
  constexpr static const char* valListStatus = "N";
  constexpr static const char* valAllocationInstructionAck = "P";
  constexpr static const char* valDontKnowTrade = "Q";
  constexpr static const char* valQuoteRequest = "R";
  constexpr static const char* valQuote = "S";
  constexpr static const char* valSettlementInstructions = "T";
  constexpr static const char* valMarketDataRequest = "V";
  constexpr static const char* valMarketDataSnapshotOrFullRefresh = "W";
  constexpr static const char* valMarketDataIncrementalRefresh = "X";
  constexpr static const char* valMarketDataRequestReject = "Y";
  constexpr static const char* valQuoteCancel = "Z";
  constexpr static const char* valQuoteStatusRequest = "a";
  constexpr static const char* valMassQuoteAcknowledgement = "b";
  constexpr static const char* valSecurityDefinitionRequest = "c";
  constexpr static const char* valSecurityDefinition = "d";
  constexpr static const char* valSecurityStatusRequest = "e";
  constexpr static const char* valSecurityStatus = "f";
  constexpr static const char* valTradingSessionStatusRequest = "g";
  constexpr static const char* valTradingSessionStatus = "h";
  constexpr static const char* valMassQuote = "i";
  constexpr static const char* valBusinessMessageReject = "j";
  constexpr static const char* valBidRequest = "k";
  constexpr static const char* valBidResponse = "l";
  constexpr static const char* valListStrikePrice = "m";
  constexpr static const char* valXMLMessage = "n";
  constexpr static const char* valRegistrationInstructions = "o";
  constexpr static const char* valRegistrationInstructionsResponse = "p";
  constexpr static const char* valOrderMassCancelRequest = "q";
  constexpr static const char* valOrderMassCancelReport = "r";
  constexpr static const char* valNewOrderCross = "s";
  constexpr static const char* valCrossOrderCancelOrReplaceRequest = "t";
  constexpr static const char* valCrossOrderCancelRequest = "u";
  constexpr static const char* valSecurityTypeRequest = "v";
  constexpr static const char* valSecurityTypes = "w";
  constexpr static const char* valSecurityListRequest = "x";
  constexpr static const char* valSecurityList = "y";
  constexpr static const char* valDerivativeSecurityListRequest = "z";
  constexpr static const char* valDerivativeSecurityList = "AA";
  constexpr static const char* valNewOrderMultileg = "AB";
  constexpr static const char* valMultilegOrderCancelOrReplace = "AC";
  constexpr static const char* valTradeCaptureReportRequest = "AD";
  constexpr static const char* valTradeCaptureReport = "AE";
  constexpr static const char* valOrderMassStatusRequest = "AF";
  constexpr static const char* valQuoteRequestReject = "AG";
  constexpr static const char* valRFQRequest = "AH";
  constexpr static const char* valQuoteStatusReport = "AI";
  constexpr static const char* valQuoteResponse = "AJ";
  constexpr static const char* valConfirmation = "AK";
  constexpr static const char* valPositionMaintenanceRequest = "AL";
  constexpr static const char* valPositionMaintenanceReport = "AM";
  constexpr static const char* valRequestForPositions = "AN";
  constexpr static const char* valRequestForPositionsAck = "AO";
  constexpr static const char* valPositionReport = "AP";
  constexpr static const char* valTradeCaptureReportRequestAck = "AQ";
  constexpr static const char* valTradeCaptureReportAck = "AR";
  constexpr static const char* valAllocationReport = "AS";
  constexpr static const char* valAllocationReportAck = "AT";
  constexpr static const char* valConfirmationAck = "AU";
  constexpr static const char* valSettlementInstructionRequest = "AV";
  constexpr static const char* valAssignmentReport = "AW";
  constexpr static const char* valCollateralRequest = "AX";
  constexpr static const char* valCollateralAssignment = "AY";
  constexpr static const char* valCollateralResponse = "AZ";
  constexpr static const char* valCollateralReport = "BA";
  constexpr static const char* valCollateralInquiry = "BB";
  constexpr static const char* valNetworkCounterpartySystemStatusRequest = "BC";
  constexpr static const char* valNetworkCounterpartySystemStatusResponse = "BD";
  constexpr static const char* valUserRequest = "BE";
  constexpr static const char* valUserResponse = "BF";
  constexpr static const char* valCollateralInquiryAck = "BG";
  constexpr static const char* valConfirmationRequest = "BH";

  constexpr static const char* tagValHeartbeat = "35=0";
  constexpr static const char* tagValTestRequest = "35=1";
  constexpr static const char* tagValResendRequest = "35=2";
  constexpr static const char* tagValReject = "35=3";
  constexpr static const char* tagValSequenceReset = "35=4";
  constexpr static const char* tagValLogout = "35=5";
  constexpr static const char* tagValIndicationOfInterest = "35=6";
  constexpr static const char* tagValAdvertisement = "35=7";
  constexpr static const char* tagValExecutionReport = "35=8";
  constexpr static const char* tagValOrderCancelReject = "35=9";
  constexpr static const char* tagValLogon = "35=A";
  constexpr static const char* tagValNews = "35=B";
  constexpr static const char* tagValEmail = "35=C";
  constexpr static const char* tagValOrderSingle = "35=D";
  constexpr static const char* tagValOrderList = "35=E";
  constexpr static const char* tagValOrderCancelRequest = "35=F";
  constexpr static const char* tagValOrderCancelOrReplaceRequest = "35=G";
  constexpr static const char* tagValOrderStatusRequest = "35=H";
  constexpr static const char* tagValAllocationInstruction = "35=J";
  constexpr static const char* tagValListCancelRequest = "35=K";
  constexpr static const char* tagValListExecute = "35=L";
  constexpr static const char* tagValListStatusRequest = "35=M";
  constexpr static const char* tagValListStatus = "35=N";
  constexpr static const char* tagValAllocationInstructionAck = "35=P";
  constexpr static const char* tagValDontKnowTrade = "35=Q";
  constexpr static const char* tagValQuoteRequest = "35=R";
  constexpr static const char* tagValQuote = "35=S";
  constexpr static const char* tagValSettlementInstructions = "35=T";
  constexpr static const char* tagValMarketDataRequest = "35=V";
  constexpr static const char* tagValMarketDataSnapshotOrFullRefresh = "35=W";
  constexpr static const char* tagValMarketDataIncrementalRefresh = "35=X";
  constexpr static const char* tagValMarketDataRequestReject = "35=Y";
  constexpr static const char* tagValQuoteCancel = "35=Z";
  constexpr static const char* tagValQuoteStatusRequest = "35=a";
  constexpr static const char* tagValMassQuoteAcknowledgement = "35=b";
  constexpr static const char* tagValSecurityDefinitionRequest = "35=c";
  constexpr static const char* tagValSecurityDefinition = "35=d";
  constexpr static const char* tagValSecurityStatusRequest = "35=e";
  constexpr static const char* tagValSecurityStatus = "35=f";
  constexpr static const char* tagValTradingSessionStatusRequest = "35=g";
  constexpr static const char* tagValTradingSessionStatus = "35=h";
  constexpr static const char* tagValMassQuote = "35=i";
  constexpr static const char* tagValBusinessMessageReject = "35=j";
  constexpr static const char* tagValBidRequest = "35=k";
  constexpr static const char* tagValBidResponse = "35=l";
  constexpr static const char* tagValListStrikePrice = "35=m";
  constexpr static const char* tagValXMLMessage = "35=n";
  constexpr static const char* tagValRegistrationInstructions = "35=o";
  constexpr static const char* tagValRegistrationInstructionsResponse = "35=p";
  constexpr static const char* tagValOrderMassCancelRequest = "35=q";
  constexpr static const char* tagValOrderMassCancelReport = "35=r";
  constexpr static const char* tagValNewOrderCross = "35=s";
  constexpr static const char* tagValCrossOrderCancelOrReplaceRequest = "35=t";
  constexpr static const char* tagValCrossOrderCancelRequest = "35=u";
  constexpr static const char* tagValSecurityTypeRequest = "35=v";
  constexpr static const char* tagValSecurityTypes = "35=w";
  constexpr static const char* tagValSecurityListRequest = "35=x";
  constexpr static const char* tagValSecurityList = "35=y";
  constexpr static const char* tagValDerivativeSecurityListRequest = "35=z";
  constexpr static const char* tagValDerivativeSecurityList = "35=AA";
  constexpr static const char* tagValNewOrderMultileg = "35=AB";
  constexpr static const char* tagValMultilegOrderCancelOrReplace = "35=AC";
  constexpr static const char* tagValTradeCaptureReportRequest = "35=AD";
  constexpr static const char* tagValTradeCaptureReport = "35=AE";
  constexpr static const char* tagValOrderMassStatusRequest = "35=AF";
  constexpr static const char* tagValQuoteRequestReject = "35=AG";
  constexpr static const char* tagValRFQRequest = "35=AH";
  constexpr static const char* tagValQuoteStatusReport = "35=AI";
  constexpr static const char* tagValQuoteResponse = "35=AJ";
  constexpr static const char* tagValConfirmation = "35=AK";
  constexpr static const char* tagValPositionMaintenanceRequest = "35=AL";
  constexpr static const char* tagValPositionMaintenanceReport = "35=AM";
  constexpr static const char* tagValRequestForPositions = "35=AN";
  constexpr static const char* tagValRequestForPositionsAck = "35=AO";
  constexpr static const char* tagValPositionReport = "35=AP";
  constexpr static const char* tagValTradeCaptureReportRequestAck = "35=AQ";
  constexpr static const char* tagValTradeCaptureReportAck = "35=AR";
  constexpr static const char* tagValAllocationReport = "35=AS";
  constexpr static const char* tagValAllocationReportAck = "35=AT";
  constexpr static const char* tagValConfirmationAck = "35=AU";
  constexpr static const char* tagValSettlementInstructionRequest = "35=AV";
  constexpr static const char* tagValAssignmentReport = "35=AW";
  constexpr static const char* tagValCollateralRequest = "35=AX";
  constexpr static const char* tagValCollateralAssignment = "35=AY";
  constexpr static const char* tagValCollateralResponse = "35=AZ";
  constexpr static const char* tagValCollateralReport = "35=BA";
  constexpr static const char* tagValCollateralInquiry = "35=BB";
  constexpr static const char* tagValNetworkCounterpartySystemStatusRequest = "35=BC";
  constexpr static const char* tagValNetworkCounterpartySystemStatusResponse = "35=BD";
  constexpr static const char* tagValUserRequest = "35=BE";
  constexpr static const char* tagValUserResponse = "35=BF";
  constexpr static const char* tagValCollateralInquiryAck = "35=BG";
  constexpr static const char* tagValConfirmationRequest = "35=BH";

};

struct NewSeqNo
{
  constexpr static const int tag = 36;
  constexpr static const char* name = "NewSeqNo";

  static writeableTagVal<Int> tagVal(int data);

};

struct OrderID
{
  constexpr static const int tag = 37;
  constexpr static const char* name = "OrderID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OrderQty
{
  constexpr static const int tag = 38;
  constexpr static const char* name = "OrderQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct OrdStatus
{
  constexpr static const int tag = 39;
  constexpr static const char* name = "OrdStatus";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valPartiallyFilled = '1';
  constexpr static const char valFilled = '2';
  constexpr static const char valDoneForDay = '3';
  constexpr static const char valCanceled = '4';
  constexpr static const char valReplaced = '5';
  constexpr static const char valPendingCancel = '6';
  constexpr static const char valStopped = '7';
  constexpr static const char valRejected = '8';
  constexpr static const char valSuspended = '9';
  constexpr static const char valPendingNew = 'A';
  constexpr static const char valCalculated = 'B';
  constexpr static const char valExpired = 'C';
  constexpr static const char valAcceptedForBidding = 'D';
  constexpr static const char valPendingReplace = 'E';

  constexpr static const char* tagValNew = "39=0";
  constexpr static const char* tagValPartiallyFilled = "39=1";
  constexpr static const char* tagValFilled = "39=2";
  constexpr static const char* tagValDoneForDay = "39=3";
  constexpr static const char* tagValCanceled = "39=4";
  constexpr static const char* tagValReplaced = "39=5";
  constexpr static const char* tagValPendingCancel = "39=6";
  constexpr static const char* tagValStopped = "39=7";
  constexpr static const char* tagValRejected = "39=8";
  constexpr static const char* tagValSuspended = "39=9";
  constexpr static const char* tagValPendingNew = "39=A";
  constexpr static const char* tagValCalculated = "39=B";
  constexpr static const char* tagValExpired = "39=C";
  constexpr static const char* tagValAcceptedForBidding = "39=D";
  constexpr static const char* tagValPendingReplace = "39=E";

};

struct OrdType
{
  constexpr static const int tag = 40;
  constexpr static const char* name = "OrdType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valMarket = '1';
  constexpr static const char valLimit = '2';
  constexpr static const char valStop = '3';
  constexpr static const char valStopLimit = '4';
  constexpr static const char valMarketOnClose = '5';
  constexpr static const char valWithOrWithout = '6';
  constexpr static const char valLimitOrBetter = '7';
  constexpr static const char valLimitWithOrWithout = '8';
  constexpr static const char valOnBasis = '9';
  constexpr static const char valOnClose = 'A';
  constexpr static const char valLimitOnClose = 'B';
  constexpr static const char valForexMarket = 'C';
  constexpr static const char valPreviouslyQuoted = 'D';
  constexpr static const char valPreviouslyIndicated = 'E';
  constexpr static const char valForexLimit = 'F';
  constexpr static const char valForexSwap = 'G';
  constexpr static const char valForexPreviouslyQuoted = 'H';
  constexpr static const char valFunari = 'I';
  constexpr static const char valMarketIfTouched = 'J';
  constexpr static const char valMarketWithLeftoverAsLimit = 'K';
  constexpr static const char valPreviousFundValuationPointHistoricPricing = 'L';
  constexpr static const char valNextFundValuationPointForwardPricing = 'M';
  constexpr static const char valPegged = 'P';

  constexpr static const char* tagValMarket = "40=1";
  constexpr static const char* tagValLimit = "40=2";
  constexpr static const char* tagValStop = "40=3";
  constexpr static const char* tagValStopLimit = "40=4";
  constexpr static const char* tagValMarketOnClose = "40=5";
  constexpr static const char* tagValWithOrWithout = "40=6";
  constexpr static const char* tagValLimitOrBetter = "40=7";
  constexpr static const char* tagValLimitWithOrWithout = "40=8";
  constexpr static const char* tagValOnBasis = "40=9";
  constexpr static const char* tagValOnClose = "40=A";
  constexpr static const char* tagValLimitOnClose = "40=B";
  constexpr static const char* tagValForexMarket = "40=C";
  constexpr static const char* tagValPreviouslyQuoted = "40=D";
  constexpr static const char* tagValPreviouslyIndicated = "40=E";
  constexpr static const char* tagValForexLimit = "40=F";
  constexpr static const char* tagValForexSwap = "40=G";
  constexpr static const char* tagValForexPreviouslyQuoted = "40=H";
  constexpr static const char* tagValFunari = "40=I";
  constexpr static const char* tagValMarketIfTouched = "40=J";
  constexpr static const char* tagValMarketWithLeftoverAsLimit = "40=K";
  constexpr static const char* tagValPreviousFundValuationPointHistoricPricing = "40=L";
  constexpr static const char* tagValNextFundValuationPointForwardPricing = "40=M";
  constexpr static const char* tagValPegged = "40=P";

};

struct OrigClOrdID
{
  constexpr static const int tag = 41;
  constexpr static const char* name = "OrigClOrdID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OrigTime
{
  constexpr static const int tag = 42;
  constexpr static const char* name = "OrigTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct PossDupFlag
{
  constexpr static const int tag = 43;
  constexpr static const char* name = "PossDupFlag";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valPossibleDuplicate = true;
  constexpr static const bool valOriginalTransmission = false;

  constexpr static const char* tagValPossibleDuplicate = "43=Y";
  constexpr static const char* tagValOriginalTransmission = "43=N";

};

struct Price
{
  constexpr static const int tag = 44;
  constexpr static const char* name = "Price";

  static writeableTagVal<Float> tagVal(float data);

};

struct RefSeqNum
{
  constexpr static const int tag = 45;
  constexpr static const char* name = "RefSeqNum";

  static writeableTagVal<Int> tagVal(int data);

};

struct RelatdSy
{
  constexpr static const int tag = 46;
  constexpr static const char* name = "RelatdSy";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Rule80A
{
  constexpr static const int tag = 47;
  constexpr static const char* name = "Rule80A";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valAgencySingleOrder = 'A';
  constexpr static const char valShortExemptTransactionAType = 'B';
  constexpr static const char valProgramOrderNonIndexArbForMemberFirmOrorg = 'C';
  constexpr static const char valProgramOrderIndexArbForMemberFirmOrorg = 'D';
  constexpr static const char valShortExemptTransactionForPrincipal = 'E';
  constexpr static const char valShortExemptTransactionWType = 'F';
  constexpr static const char valShortExemptTransactionIType = 'H';
  constexpr static const char valIndividualInvestorSingleOrder = 'I';
  constexpr static const char valProgramOrderIndexArbForIndividualCustomer = 'J';
  constexpr static const char valProgramOrderNonIndexArbForIndividualCustomer = 'K';
  constexpr static const char valShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade = 'L';
  constexpr static const char valProgramOrderIndexArbForOtherMember = 'M';
  constexpr static const char valProgramOrderNonIndexArbForOtherMember = 'N';
  constexpr static const char valProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember = 'O';
  constexpr static const char valPrincipal = 'P';
  constexpr static const char valTransactionsForTheAccountOfANonMembercompetingMarketMaker = 'R';
  constexpr static const char valSpecialistTrades = 'S';
  constexpr static const char valTransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker = 'T';
  constexpr static const char valProgramOrderIndexArbForOtherAgency = 'U';
  constexpr static const char valAllOtherOrdersAsAgentForOtherMember = 'W';
  constexpr static const char valShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade = 'X';
  constexpr static const char valProgramOrderNonIndexArbForOtherAgency = 'Y';
  constexpr static const char valShortExemptTransactionForNonMemberCompetingMarketMaker = 'Z';

  constexpr static const char* tagValAgencySingleOrder = "47=A";
  constexpr static const char* tagValShortExemptTransactionAType = "47=B";
  constexpr static const char* tagValProgramOrderNonIndexArbForMemberFirmOrorg = "47=C";
  constexpr static const char* tagValProgramOrderIndexArbForMemberFirmOrorg = "47=D";
  constexpr static const char* tagValShortExemptTransactionForPrincipal = "47=E";
  constexpr static const char* tagValShortExemptTransactionWType = "47=F";
  constexpr static const char* tagValShortExemptTransactionIType = "47=H";
  constexpr static const char* tagValIndividualInvestorSingleOrder = "47=I";
  constexpr static const char* tagValProgramOrderIndexArbForIndividualCustomer = "47=J";
  constexpr static const char* tagValProgramOrderNonIndexArbForIndividualCustomer = "47=K";
  constexpr static const char* tagValShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade = "47=L";
  constexpr static const char* tagValProgramOrderIndexArbForOtherMember = "47=M";
  constexpr static const char* tagValProgramOrderNonIndexArbForOtherMember = "47=N";
  constexpr static const char* tagValProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember = "47=O";
  constexpr static const char* tagValPrincipal = "47=P";
  constexpr static const char* tagValTransactionsForTheAccountOfANonMembercompetingMarketMaker = "47=R";
  constexpr static const char* tagValSpecialistTrades = "47=S";
  constexpr static const char* tagValTransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker = "47=T";
  constexpr static const char* tagValProgramOrderIndexArbForOtherAgency = "47=U";
  constexpr static const char* tagValAllOtherOrdersAsAgentForOtherMember = "47=W";
  constexpr static const char* tagValShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade = "47=X";
  constexpr static const char* tagValProgramOrderNonIndexArbForOtherAgency = "47=Y";
  constexpr static const char* tagValShortExemptTransactionForNonMemberCompetingMarketMaker = "47=Z";

};

struct SecurityID
{
  constexpr static const int tag = 48;
  constexpr static const char* name = "SecurityID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SenderCompID
{
  constexpr static const int tag = 49;
  constexpr static const char* name = "SenderCompID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SenderSubID
{
  constexpr static const int tag = 50;
  constexpr static const char* name = "SenderSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SendingDat
{
  constexpr static const int tag = 51;
  constexpr static const char* name = "SendingDat";

  static writeableTagVal<Date> tagVal(Date data);

};

struct SendingTime
{
  constexpr static const int tag = 52;
  constexpr static const char* name = "SendingTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct Quantity
{
  constexpr static const int tag = 53;
  constexpr static const char* name = "Quantity";

  static writeableTagVal<Float> tagVal(float data);

};

struct Side
{
  constexpr static const int tag = 54;
  constexpr static const char* name = "Side";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valBuy = '1';
  constexpr static const char valSell = '2';
  constexpr static const char valBuyMinus = '3';
  constexpr static const char valSellPlus = '4';
  constexpr static const char valSellShort = '5';
  constexpr static const char valSellShortExempt = '6';
  constexpr static const char valUndisclosed = '7';
  constexpr static const char valCross = '8';
  constexpr static const char valCrossShort = '9';
  constexpr static const char valCrossShortExempt = 'A';
  constexpr static const char valAsDefined = 'B';
  constexpr static const char valOpposite = 'C';
  constexpr static const char valSubscribe = 'D';
  constexpr static const char valRedeem = 'E';
  constexpr static const char valLend = 'F';
  constexpr static const char valBorrow = 'G';

  constexpr static const char* tagValBuy = "54=1";
  constexpr static const char* tagValSell = "54=2";
  constexpr static const char* tagValBuyMinus = "54=3";
  constexpr static const char* tagValSellPlus = "54=4";
  constexpr static const char* tagValSellShort = "54=5";
  constexpr static const char* tagValSellShortExempt = "54=6";
  constexpr static const char* tagValUndisclosed = "54=7";
  constexpr static const char* tagValCross = "54=8";
  constexpr static const char* tagValCrossShort = "54=9";
  constexpr static const char* tagValCrossShortExempt = "54=A";
  constexpr static const char* tagValAsDefined = "54=B";
  constexpr static const char* tagValOpposite = "54=C";
  constexpr static const char* tagValSubscribe = "54=D";
  constexpr static const char* tagValRedeem = "54=E";
  constexpr static const char* tagValLend = "54=F";
  constexpr static const char* tagValBorrow = "54=G";

};

struct Symbol
{
  constexpr static const int tag = 55;
  constexpr static const char* name = "Symbol";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TargetCompID
{
  constexpr static const int tag = 56;
  constexpr static const char* name = "TargetCompID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TargetSubID
{
  constexpr static const int tag = 57;
  constexpr static const char* name = "TargetSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Text
{
  constexpr static const int tag = 58;
  constexpr static const char* name = "Text";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TimeInForce
{
  constexpr static const int tag = 59;
  constexpr static const char* name = "TimeInForce";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valDay = '0';
  constexpr static const char valGoodTillCancel = '1';
  constexpr static const char valAtTheOpening = '2';
  constexpr static const char valImmediateOrCancel = '3';
  constexpr static const char valFillOrKill = '4';
  constexpr static const char valGoodTillCrossing = '5';
  constexpr static const char valGoodTillDate = '6';
  constexpr static const char valAtTheClose = '7';

  constexpr static const char* tagValDay = "59=0";
  constexpr static const char* tagValGoodTillCancel = "59=1";
  constexpr static const char* tagValAtTheOpening = "59=2";
  constexpr static const char* tagValImmediateOrCancel = "59=3";
  constexpr static const char* tagValFillOrKill = "59=4";
  constexpr static const char* tagValGoodTillCrossing = "59=5";
  constexpr static const char* tagValGoodTillDate = "59=6";
  constexpr static const char* tagValAtTheClose = "59=7";

};

struct TransactTime
{
  constexpr static const int tag = 60;
  constexpr static const char* name = "TransactTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct Urgency
{
  constexpr static const int tag = 61;
  constexpr static const char* name = "Urgency";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNormal = '0';
  constexpr static const char valFlash = '1';
  constexpr static const char valBackground = '2';

  constexpr static const char* tagValNormal = "61=0";
  constexpr static const char* tagValFlash = "61=1";
  constexpr static const char* tagValBackground = "61=2";

};

struct ValidUntilTime
{
  constexpr static const int tag = 62;
  constexpr static const char* name = "ValidUntilTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct SettlType
{
  constexpr static const int tag = 63;
  constexpr static const char* name = "SettlType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valRegular = '0';
  constexpr static const char valCash = '1';
  constexpr static const char valNextDay = '2';
  constexpr static const char valTplus2 = '3';
  constexpr static const char valTplus3 = '4';
  constexpr static const char valTplus4 = '5';
  constexpr static const char valFuture = '6';
  constexpr static const char valWhenAndIfIssued = '7';
  constexpr static const char valSellersOption = '8';
  constexpr static const char valTplus5 = '9';
  constexpr static const char valTplusRemovedInFIX44Use2NextDay = 'A';

  constexpr static const char* tagValRegular = "63=0";
  constexpr static const char* tagValCash = "63=1";
  constexpr static const char* tagValNextDay = "63=2";
  constexpr static const char* tagValTplus2 = "63=3";
  constexpr static const char* tagValTplus3 = "63=4";
  constexpr static const char* tagValTplus4 = "63=5";
  constexpr static const char* tagValFuture = "63=6";
  constexpr static const char* tagValWhenAndIfIssued = "63=7";
  constexpr static const char* tagValSellersOption = "63=8";
  constexpr static const char* tagValTplus5 = "63=9";
  constexpr static const char* tagValTplusRemovedInFIX44Use2NextDay = "63=A";

};

struct SettlDate
{
  constexpr static const int tag = 64;
  constexpr static const char* name = "SettlDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct SymbolSfx
{
  constexpr static const int tag = 65;
  constexpr static const char* name = "SymbolSfx";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valWhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN = "WI";
  constexpr static const char* valAEUCPWithLumpSumInterestRatherThanDiscountPrice = "CD";

  constexpr static const char* tagValWhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN = "65=WI";
  constexpr static const char* tagValAEUCPWithLumpSumInterestRatherThanDiscountPrice = "65=CD";

};

struct ListID
{
  constexpr static const int tag = 66;
  constexpr static const char* name = "ListID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ListSeqNo
{
  constexpr static const int tag = 67;
  constexpr static const char* name = "ListSeqNo";

  static writeableTagVal<Int> tagVal(int data);

};

struct TotNoOrders
{
  constexpr static const int tag = 68;
  constexpr static const char* name = "TotNoOrders";

  static writeableTagVal<Int> tagVal(int data);

};

struct ListExecInst
{
  constexpr static const int tag = 69;
  constexpr static const char* name = "ListExecInst";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocID
{
  constexpr static const int tag = 70;
  constexpr static const char* name = "AllocID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocTransType
{
  constexpr static const int tag = 71;
  constexpr static const char* name = "AllocTransType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valReplace = '1';
  constexpr static const char valCancel = '2';
  constexpr static const char valPreliminarywithoutMiscFeesAndNetMoney = '3';
  constexpr static const char valCalculatedIncludesMiscFeesAndNetMoney = '4';
  constexpr static const char valCalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney = '5';

  constexpr static const char* tagValNew = "71=0";
  constexpr static const char* tagValReplace = "71=1";
  constexpr static const char* tagValCancel = "71=2";
  constexpr static const char* tagValPreliminarywithoutMiscFeesAndNetMoney = "71=3";
  constexpr static const char* tagValCalculatedIncludesMiscFeesAndNetMoney = "71=4";
  constexpr static const char* tagValCalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney = "71=5";

};

struct RefAllocID
{
  constexpr static const int tag = 72;
  constexpr static const char* name = "RefAllocID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoOrders
{
  constexpr static const int tag = 73;
  constexpr static const char* name = "NoOrders";

  static writeableTagVal<Int> tagVal(int data);

};

struct AvgPxPrecision
{
  constexpr static const int tag = 74;
  constexpr static const char* name = "AvgPxPrecision";

  static writeableTagVal<Int> tagVal(int data);

};

struct TradeDate
{
  constexpr static const int tag = 75;
  constexpr static const char* name = "TradeDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct ExecBroker
{
  constexpr static const int tag = 76;
  constexpr static const char* name = "ExecBroker";

  static writeableTagVal<String> tagVal(const char* data);

};

struct PositionEffect
{
  constexpr static const int tag = 77;
  constexpr static const char* name = "PositionEffect";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valOpen = 'O';
  constexpr static const char valClose = 'C';
  constexpr static const char valRolled = 'R';
  constexpr static const char valFIFO = 'F';

  constexpr static const char* tagValOpen = "77=O";
  constexpr static const char* tagValClose = "77=C";
  constexpr static const char* tagValRolled = "77=R";
  constexpr static const char* tagValFIFO = "77=F";

};

struct NoAllocs
{
  constexpr static const int tag = 78;
  constexpr static const char* name = "NoAllocs";

  static writeableTagVal<Int> tagVal(int data);

};

struct AllocAccount
{
  constexpr static const int tag = 79;
  constexpr static const char* name = "AllocAccount";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocQty
{
  constexpr static const int tag = 80;
  constexpr static const char* name = "AllocQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct ProcessCode
{
  constexpr static const int tag = 81;
  constexpr static const char* name = "ProcessCode";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valRegular = '0';
  constexpr static const char valSoftDollar = '1';
  constexpr static const char valStepIn = '2';
  constexpr static const char valStepOut = '3';
  constexpr static const char valSoftDollarStepIn = '4';
  constexpr static const char valSoftDollarStepOut = '5';
  constexpr static const char valPlanSponsor = '6';

  constexpr static const char* tagValRegular = "81=0";
  constexpr static const char* tagValSoftDollar = "81=1";
  constexpr static const char* tagValStepIn = "81=2";
  constexpr static const char* tagValStepOut = "81=3";
  constexpr static const char* tagValSoftDollarStepIn = "81=4";
  constexpr static const char* tagValSoftDollarStepOut = "81=5";
  constexpr static const char* tagValPlanSponsor = "81=6";

};

struct NoRpts
{
  constexpr static const int tag = 82;
  constexpr static const char* name = "NoRpts";

  static writeableTagVal<Int> tagVal(int data);

};

struct RptSeq
{
  constexpr static const int tag = 83;
  constexpr static const char* name = "RptSeq";

  static writeableTagVal<Int> tagVal(int data);

};

struct CxlQty
{
  constexpr static const int tag = 84;
  constexpr static const char* name = "CxlQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoDlvyInst
{
  constexpr static const int tag = 85;
  constexpr static const char* name = "NoDlvyInst";

  static writeableTagVal<Int> tagVal(int data);

};

struct DlvyInst
{
  constexpr static const int tag = 86;
  constexpr static const char* name = "DlvyInst";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocStatus
{
  constexpr static const int tag = 87;
  constexpr static const char* name = "AllocStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccepted = 0;
  constexpr static const int valBlockLevelReject = 1;
  constexpr static const int valAccountLevelReject = 2;
  constexpr static const int valReceived = 3;
  constexpr static const int valIncomplete = 4;
  constexpr static const int valRejectedByIntermediary = 5;

  constexpr static const char* tagValAccepted = "87=0";
  constexpr static const char* tagValBlockLevelReject = "87=1";
  constexpr static const char* tagValAccountLevelReject = "87=2";
  constexpr static const char* tagValReceived = "87=3";
  constexpr static const char* tagValIncomplete = "87=4";
  constexpr static const char* tagValRejectedByIntermediary = "87=5";

};

struct AllocRejCode
{
  constexpr static const int tag = 88;
  constexpr static const char* name = "AllocRejCode";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnknownAccount = 0;
  constexpr static const int valIncorrectQuantity = 1;
  constexpr static const int valIncorrectAveragePrice = 2;
  constexpr static const int valUnknownExecutingBrokerMnemonic = 3;
  constexpr static const int valCommissionDifference = 4;
  constexpr static const int valUnknownOrderID = 5;
  constexpr static const int valUnknownListID = 6;
  constexpr static const int valOther = 7;
  constexpr static const int valIncorrectAllocatedQuantity = 8;
  constexpr static const int valCalculationDifference = 9;
  constexpr static const int valUnknownOrStaleExecID = 0;
  constexpr static const int valMismatchedDataValue = 1;
  constexpr static const int valUnknownClOrdID = 2;
  constexpr static const int valWarehouseRequestRejected = 3;

  constexpr static const char* tagValUnknownAccount = "88=0";
  constexpr static const char* tagValIncorrectQuantity = "88=1";
  constexpr static const char* tagValIncorrectAveragePrice = "88=2";
  constexpr static const char* tagValUnknownExecutingBrokerMnemonic = "88=3";
  constexpr static const char* tagValCommissionDifference = "88=4";
  constexpr static const char* tagValUnknownOrderID = "88=5";
  constexpr static const char* tagValUnknownListID = "88=6";
  constexpr static const char* tagValOther = "88=7";
  constexpr static const char* tagValIncorrectAllocatedQuantity = "88=8";
  constexpr static const char* tagValCalculationDifference = "88=9";
  constexpr static const char* tagValUnknownOrStaleExecID = "88=0";
  constexpr static const char* tagValMismatchedDataValue = "88=1";
  constexpr static const char* tagValUnknownClOrdID = "88=2";
  constexpr static const char* tagValWarehouseRequestRejected = "88=3";

};

struct Signature
{
  constexpr static const int tag = 89;
  constexpr static const char* name = "Signature";

  static writeableTagVal<Data> tagVal(Data data);

};

struct SecureDataLen
{
  constexpr static const int tag = 90;
  constexpr static const char* name = "SecureDataLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct SecureData
{
  constexpr static const int tag = 91;
  constexpr static const char* name = "SecureData";

  static writeableTagVal<Data> tagVal(Data data);

};

struct BrokerOfCredit
{
  constexpr static const int tag = 92;
  constexpr static const char* name = "BrokerOfCredit";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SignatureLength
{
  constexpr static const int tag = 93;
  constexpr static const char* name = "SignatureLength";

  static writeableTagVal<Int> tagVal(int data);

};

struct EmailType
{
  constexpr static const int tag = 94;
  constexpr static const char* name = "EmailType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valReply = '1';
  constexpr static const char valAdminReply = '2';

  constexpr static const char* tagValNew = "94=0";
  constexpr static const char* tagValReply = "94=1";
  constexpr static const char* tagValAdminReply = "94=2";

};

struct RawDataLength
{
  constexpr static const int tag = 95;
  constexpr static const char* name = "RawDataLength";

  static writeableTagVal<Int> tagVal(int data);

};

struct RawData
{
  constexpr static const int tag = 96;
  constexpr static const char* name = "RawData";

  static writeableTagVal<Data> tagVal(Data data);

};

struct PossResend
{
  constexpr static const int tag = 97;
  constexpr static const char* name = "PossResend";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valPossibleResend = true;
  constexpr static const bool valOriginalTransmission = false;

  constexpr static const char* tagValPossibleResend = "97=Y";
  constexpr static const char* tagValOriginalTransmission = "97=N";

};

struct EncryptMethod
{
  constexpr static const int tag = 98;
  constexpr static const char* name = "EncryptMethod";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNoneOrOther = 0;
  constexpr static const int valPKCS = 1;
  constexpr static const int valDES = 2;
  constexpr static const int valPKCSOrDES = 3;
  constexpr static const int valPGPOrDES = 4;
  constexpr static const int valPGPOrDESMD5 = 5;
  constexpr static const int valPEMOrDESMD5 = 6;

  constexpr static const char* tagValNoneOrOther = "98=0";
  constexpr static const char* tagValPKCS = "98=1";
  constexpr static const char* tagValDES = "98=2";
  constexpr static const char* tagValPKCSOrDES = "98=3";
  constexpr static const char* tagValPGPOrDES = "98=4";
  constexpr static const char* tagValPGPOrDESMD5 = "98=5";
  constexpr static const char* tagValPEMOrDESMD5 = "98=6";

};

struct StopPx
{
  constexpr static const int tag = 99;
  constexpr static const char* name = "StopPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct ExDestination
{
  constexpr static const int tag = 100;
  constexpr static const char* name = "ExDestination";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CxlRejReason
{
  constexpr static const int tag = 102;
  constexpr static const char* name = "CxlRejReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valTooLateToCancel = 0;
  constexpr static const int valUnknownOrder = 1;
  constexpr static const int valBrokerOrExchangeOption = 2;
  constexpr static const int valOrderAlreadyInPendingCancelOrPendingReplaceStatus = 3;
  constexpr static const int valUnableToProcessOrderMassCancelRequest = 4;
  constexpr static const int valOrigOrdModTime586DidNotMatchLastTransactTime60OfOrder = 5;
  constexpr static const int valDuplicateClOrdIDReceived = 6;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValTooLateToCancel = "102=0";
  constexpr static const char* tagValUnknownOrder = "102=1";
  constexpr static const char* tagValBrokerOrExchangeOption = "102=2";
  constexpr static const char* tagValOrderAlreadyInPendingCancelOrPendingReplaceStatus = "102=3";
  constexpr static const char* tagValUnableToProcessOrderMassCancelRequest = "102=4";
  constexpr static const char* tagValOrigOrdModTime586DidNotMatchLastTransactTime60OfOrder = "102=5";
  constexpr static const char* tagValDuplicateClOrdIDReceived = "102=6";
  constexpr static const char* tagValOther = "102=99";

};

struct OrdRejReason
{
  constexpr static const int tag = 103;
  constexpr static const char* name = "OrdRejReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valBrokerOrExchangeOption = 0;
  constexpr static const int valUnknownSymbol = 1;
  constexpr static const int valExchangeClosed = 2;
  constexpr static const int valOrderExceedsLimit = 3;
  constexpr static const int valTooLateToEnter = 4;
  constexpr static const int valUnknownOrder = 5;
  constexpr static const int valDuplicateOrderegDupeClOrdID = 6;
  constexpr static const int valDuplicateOfAVerballyCommunicatedOrder = 7;
  constexpr static const int valStaleOrder = 8;
  constexpr static const int valTradeAlongRequired = 9;
  constexpr static const int valInvalidInvestorID = 0;
  constexpr static const int valUnsupportedOrderCharacteristic2SurveillenceOption = 1;
  constexpr static const int valIncorrectQuantity = 3;
  constexpr static const int valIncorrectAllocatedQuantity = 4;
  constexpr static const int valUnknownAccount = 5;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValBrokerOrExchangeOption = "103=0";
  constexpr static const char* tagValUnknownSymbol = "103=1";
  constexpr static const char* tagValExchangeClosed = "103=2";
  constexpr static const char* tagValOrderExceedsLimit = "103=3";
  constexpr static const char* tagValTooLateToEnter = "103=4";
  constexpr static const char* tagValUnknownOrder = "103=5";
  constexpr static const char* tagValDuplicateOrderegDupeClOrdID = "103=6";
  constexpr static const char* tagValDuplicateOfAVerballyCommunicatedOrder = "103=7";
  constexpr static const char* tagValStaleOrder = "103=8";
  constexpr static const char* tagValTradeAlongRequired = "103=9";
  constexpr static const char* tagValInvalidInvestorID = "103=0";
  constexpr static const char* tagValUnsupportedOrderCharacteristic2SurveillenceOption = "103=1";
  constexpr static const char* tagValIncorrectQuantity = "103=3";
  constexpr static const char* tagValIncorrectAllocatedQuantity = "103=4";
  constexpr static const char* tagValUnknownAccount = "103=5";
  constexpr static const char* tagValOther = "103=99";

};

struct IOIQualifier
{
  constexpr static const int tag = 104;
  constexpr static const char* name = "IOIQualifier";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valAllOrNone = 'A';
  constexpr static const char valMarketOnCloseMOC = 'B';
  constexpr static const char valAtTheClose = 'C';
  constexpr static const char valVWAP = 'D';
  constexpr static const char valInTouchWith = 'I';
  constexpr static const char valLimit = 'L';
  constexpr static const char valMoreBehind = 'M';
  constexpr static const char valAtTheOpen = 'O';
  constexpr static const char valTakingAPosition = 'P';
  constexpr static const char valAtTheMarket = 'Q';
  constexpr static const char valReadyToTrade = 'R';
  constexpr static const char valPortfolioShown = 'S';
  constexpr static const char valThroughTheDay = 'T';
  constexpr static const char valVersus = 'V';
  constexpr static const char valIndicationWorkingAway = 'W';
  constexpr static const char valCrossingOpportunity = 'X';
  constexpr static const char valAtTheMidpoint = 'Y';
  constexpr static const char valPreOpen = 'Z';

  constexpr static const char* tagValAllOrNone = "104=A";
  constexpr static const char* tagValMarketOnCloseMOC = "104=B";
  constexpr static const char* tagValAtTheClose = "104=C";
  constexpr static const char* tagValVWAP = "104=D";
  constexpr static const char* tagValInTouchWith = "104=I";
  constexpr static const char* tagValLimit = "104=L";
  constexpr static const char* tagValMoreBehind = "104=M";
  constexpr static const char* tagValAtTheOpen = "104=O";
  constexpr static const char* tagValTakingAPosition = "104=P";
  constexpr static const char* tagValAtTheMarket = "104=Q";
  constexpr static const char* tagValReadyToTrade = "104=R";
  constexpr static const char* tagValPortfolioShown = "104=S";
  constexpr static const char* tagValThroughTheDay = "104=T";
  constexpr static const char* tagValVersus = "104=V";
  constexpr static const char* tagValIndicationWorkingAway = "104=W";
  constexpr static const char* tagValCrossingOpportunity = "104=X";
  constexpr static const char* tagValAtTheMidpoint = "104=Y";
  constexpr static const char* tagValPreOpen = "104=Z";

};

struct WaveNo
{
  constexpr static const int tag = 105;
  constexpr static const char* name = "WaveNo";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Issuer
{
  constexpr static const int tag = 106;
  constexpr static const char* name = "Issuer";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecurityDesc
{
  constexpr static const int tag = 107;
  constexpr static const char* name = "SecurityDesc";

  static writeableTagVal<String> tagVal(const char* data);

};

struct HeartBtInt
{
  constexpr static const int tag = 108;
  constexpr static const char* name = "HeartBtInt";

  static writeableTagVal<Int> tagVal(int data);

};

struct ClientID
{
  constexpr static const int tag = 109;
  constexpr static const char* name = "ClientID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MinQty
{
  constexpr static const int tag = 110;
  constexpr static const char* name = "MinQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct MaxFloor
{
  constexpr static const int tag = 111;
  constexpr static const char* name = "MaxFloor";

  static writeableTagVal<Float> tagVal(float data);

};

struct TestReqID
{
  constexpr static const int tag = 112;
  constexpr static const char* name = "TestReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ReportToExch
{
  constexpr static const int tag = 113;
  constexpr static const char* name = "ReportToExch";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valIndicatesThatPartyReceivingMessageMustReportTrade = true;
  constexpr static const bool valIndicatesThatPartySendingMessageWillReportTrade = false;

  constexpr static const char* tagValIndicatesThatPartyReceivingMessageMustReportTrade = "113=Y";
  constexpr static const char* tagValIndicatesThatPartySendingMessageWillReportTrade = "113=N";

};

struct LocateReqd
{
  constexpr static const int tag = 114;
  constexpr static const char* name = "LocateReqd";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valIndicatesTheBrokerIsResponsibleForLocatingTheStock = true;
  constexpr static const bool valIndicatesTheBrokerIsNotRequiredToLocate = false;

  constexpr static const char* tagValIndicatesTheBrokerIsResponsibleForLocatingTheStock = "114=Y";
  constexpr static const char* tagValIndicatesTheBrokerIsNotRequiredToLocate = "114=N";

};

struct OnBehalfOfCompID
{
  constexpr static const int tag = 115;
  constexpr static const char* name = "OnBehalfOfCompID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OnBehalfOfSubID
{
  constexpr static const int tag = 116;
  constexpr static const char* name = "OnBehalfOfSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuoteID
{
  constexpr static const int tag = 117;
  constexpr static const char* name = "QuoteID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NetMoney
{
  constexpr static const int tag = 118;
  constexpr static const char* name = "NetMoney";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlCurrAmt
{
  constexpr static const int tag = 119;
  constexpr static const char* name = "SettlCurrAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlCurrency
{
  constexpr static const int tag = 120;
  constexpr static const char* name = "SettlCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ForexReq
{
  constexpr static const int tag = 121;
  constexpr static const char* name = "ForexReq";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valExecuteForexAfterSecurityTrade = true;
  constexpr static const bool valDoNotExecuteForexAfterSecurityTrade = false;

  constexpr static const char* tagValExecuteForexAfterSecurityTrade = "121=Y";
  constexpr static const char* tagValDoNotExecuteForexAfterSecurityTrade = "121=N";

};

struct OrigSendingTime
{
  constexpr static const int tag = 122;
  constexpr static const char* name = "OrigSendingTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct GapFillFlag
{
  constexpr static const int tag = 123;
  constexpr static const char* name = "GapFillFlag";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valGapFillMessageMsgSeqNumFieldValid = true;
  constexpr static const bool valSequenceResetIgnoreMsgSeqNum = false;

  constexpr static const char* tagValGapFillMessageMsgSeqNumFieldValid = "123=Y";
  constexpr static const char* tagValSequenceResetIgnoreMsgSeqNum = "123=N";

};

struct NoExecs
{
  constexpr static const int tag = 124;
  constexpr static const char* name = "NoExecs";

  static writeableTagVal<Int> tagVal(int data);

};

struct CxlTyp
{
  constexpr static const int tag = 125;
  constexpr static const char* name = "CxlTyp";

  static writeableTagVal<Char> tagVal(char data);

};

struct ExpireTime
{
  constexpr static const int tag = 126;
  constexpr static const char* name = "ExpireTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct DKReason
{
  constexpr static const int tag = 127;
  constexpr static const char* name = "DKReason";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valUnknownSymbol = 'A';
  constexpr static const char valWrongSide = 'B';
  constexpr static const char valQuantityExceedsOrder = 'C';
  constexpr static const char valNoMatchingOrder = 'D';
  constexpr static const char valPriceExceedsLimit = 'E';
  constexpr static const char valCalculationDifference = 'F';
  constexpr static const char valOther = 'Z';

  constexpr static const char* tagValUnknownSymbol = "127=A";
  constexpr static const char* tagValWrongSide = "127=B";
  constexpr static const char* tagValQuantityExceedsOrder = "127=C";
  constexpr static const char* tagValNoMatchingOrder = "127=D";
  constexpr static const char* tagValPriceExceedsLimit = "127=E";
  constexpr static const char* tagValCalculationDifference = "127=F";
  constexpr static const char* tagValOther = "127=Z";

};

struct DeliverToCompID
{
  constexpr static const int tag = 128;
  constexpr static const char* name = "DeliverToCompID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DeliverToSubID
{
  constexpr static const int tag = 129;
  constexpr static const char* name = "DeliverToSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct IOINaturalFlag
{
  constexpr static const int tag = 130;
  constexpr static const char* name = "IOINaturalFlag";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valNatural = true;
  constexpr static const bool valNotNatural = false;

  constexpr static const char* tagValNatural = "130=Y";
  constexpr static const char* tagValNotNatural = "130=N";

};

struct QuoteReqID
{
  constexpr static const int tag = 131;
  constexpr static const char* name = "QuoteReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct BidPx
{
  constexpr static const int tag = 132;
  constexpr static const char* name = "BidPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct OfferPx
{
  constexpr static const int tag = 133;
  constexpr static const char* name = "OfferPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct BidSize
{
  constexpr static const int tag = 134;
  constexpr static const char* name = "BidSize";

  static writeableTagVal<Float> tagVal(float data);

};

struct OfferSize
{
  constexpr static const int tag = 135;
  constexpr static const char* name = "OfferSize";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoMiscFees
{
  constexpr static const int tag = 136;
  constexpr static const char* name = "NoMiscFees";

  static writeableTagVal<Int> tagVal(int data);

};

struct MiscFeeAmt
{
  constexpr static const int tag = 137;
  constexpr static const char* name = "MiscFeeAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct MiscFeeCurr
{
  constexpr static const int tag = 138;
  constexpr static const char* name = "MiscFeeCurr";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MiscFeeType
{
  constexpr static const int tag = 139;
  constexpr static const char* name = "MiscFeeType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valRegulatory = '1';
  constexpr static const char valTax = '2';
  constexpr static const char valLocalCommission = '3';
  constexpr static const char valExchangeFees = '4';
  constexpr static const char valStamp = '5';
  constexpr static const char valLevy = '6';
  constexpr static const char valOther = '7';
  constexpr static const char valMarkup = '8';
  constexpr static const char valConsumptionTax = '9';
  constexpr static const char valPerTransaction = '0';
  constexpr static const char valConversion = '1';
  constexpr static const char valAgent = '2';

  constexpr static const char* tagValRegulatory = "139=1";
  constexpr static const char* tagValTax = "139=2";
  constexpr static const char* tagValLocalCommission = "139=3";
  constexpr static const char* tagValExchangeFees = "139=4";
  constexpr static const char* tagValStamp = "139=5";
  constexpr static const char* tagValLevy = "139=6";
  constexpr static const char* tagValOther = "139=7";
  constexpr static const char* tagValMarkup = "139=8";
  constexpr static const char* tagValConsumptionTax = "139=9";
  constexpr static const char* tagValPerTransaction = "139=0";
  constexpr static const char* tagValConversion = "139=1";
  constexpr static const char* tagValAgent = "139=2";

};

struct PrevClosePx
{
  constexpr static const int tag = 140;
  constexpr static const char* name = "PrevClosePx";

  static writeableTagVal<Float> tagVal(float data);

};

struct ResetSeqNumFlag
{
  constexpr static const int tag = 141;
  constexpr static const char* name = "ResetSeqNumFlag";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valYesResetSequenceNumbers = true;
  constexpr static const bool valNo = false;

  constexpr static const char* tagValYesResetSequenceNumbers = "141=Y";
  constexpr static const char* tagValNo = "141=N";

};

struct SenderLocationID
{
  constexpr static const int tag = 142;
  constexpr static const char* name = "SenderLocationID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TargetLocationID
{
  constexpr static const int tag = 143;
  constexpr static const char* name = "TargetLocationID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OnBehalfOfLocationID
{
  constexpr static const int tag = 144;
  constexpr static const char* name = "OnBehalfOfLocationID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DeliverToLocationID
{
  constexpr static const int tag = 145;
  constexpr static const char* name = "DeliverToLocationID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoRelatedSym
{
  constexpr static const int tag = 146;
  constexpr static const char* name = "NoRelatedSym";

  static writeableTagVal<Int> tagVal(int data);

};

struct Subject
{
  constexpr static const int tag = 147;
  constexpr static const char* name = "Subject";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Headline
{
  constexpr static const int tag = 148;
  constexpr static const char* name = "Headline";

  static writeableTagVal<String> tagVal(const char* data);

};

struct URLLink
{
  constexpr static const int tag = 149;
  constexpr static const char* name = "URLLink";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ExecType
{
  constexpr static const int tag = 150;
  constexpr static const char* name = "ExecType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valPartialFill = '1';
  constexpr static const char valFill = '2';
  constexpr static const char valDoneForDay = '3';
  constexpr static const char valCanceled = '4';
  constexpr static const char valReplace = '5';
  constexpr static const char valPendingCancel = '6';
  constexpr static const char valStopped = '7';
  constexpr static const char valRejected = '8';
  constexpr static const char valSuspended = '9';
  constexpr static const char valPendingNew = 'A';
  constexpr static const char valCalculated = 'B';
  constexpr static const char valExpired = 'C';
  constexpr static const char valRestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason = 'D';
  constexpr static const char valPendingReplace = 'E';
  constexpr static const char valTrade = 'F';
  constexpr static const char valTradeCorrectformerlyAnExecTransType = 'G';
  constexpr static const char valTradeCancel = 'H';
  constexpr static const char valOrderStatus = 'I';

  constexpr static const char* tagValNew = "150=0";
  constexpr static const char* tagValPartialFill = "150=1";
  constexpr static const char* tagValFill = "150=2";
  constexpr static const char* tagValDoneForDay = "150=3";
  constexpr static const char* tagValCanceled = "150=4";
  constexpr static const char* tagValReplace = "150=5";
  constexpr static const char* tagValPendingCancel = "150=6";
  constexpr static const char* tagValStopped = "150=7";
  constexpr static const char* tagValRejected = "150=8";
  constexpr static const char* tagValSuspended = "150=9";
  constexpr static const char* tagValPendingNew = "150=A";
  constexpr static const char* tagValCalculated = "150=B";
  constexpr static const char* tagValExpired = "150=C";
  constexpr static const char* tagValRestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason = "150=D";
  constexpr static const char* tagValPendingReplace = "150=E";
  constexpr static const char* tagValTrade = "150=F";
  constexpr static const char* tagValTradeCorrectformerlyAnExecTransType = "150=G";
  constexpr static const char* tagValTradeCancel = "150=H";
  constexpr static const char* tagValOrderStatus = "150=I";

};

struct LeavesQty
{
  constexpr static const int tag = 151;
  constexpr static const char* name = "LeavesQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct CashOrderQty
{
  constexpr static const int tag = 152;
  constexpr static const char* name = "CashOrderQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct AllocAvgPx
{
  constexpr static const int tag = 153;
  constexpr static const char* name = "AllocAvgPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct AllocNetMoney
{
  constexpr static const int tag = 154;
  constexpr static const char* name = "AllocNetMoney";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlCurrFxRate
{
  constexpr static const int tag = 155;
  constexpr static const char* name = "SettlCurrFxRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlCurrFxRateCalc
{
  constexpr static const int tag = 156;
  constexpr static const char* name = "SettlCurrFxRateCalc";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valMultiply = 'M';
  constexpr static const char valDivide = 'D';

  constexpr static const char* tagValMultiply = "156=M";
  constexpr static const char* tagValDivide = "156=D";

};

struct NumDaysInterest
{
  constexpr static const int tag = 157;
  constexpr static const char* name = "NumDaysInterest";

  static writeableTagVal<Int> tagVal(int data);

};

struct AccruedInterestRate
{
  constexpr static const int tag = 158;
  constexpr static const char* name = "AccruedInterestRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct AccruedInterestAmt
{
  constexpr static const int tag = 159;
  constexpr static const char* name = "AccruedInterestAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlInstMode
{
  constexpr static const int tag = 160;
  constexpr static const char* name = "SettlInstMode";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valDefault = '0';
  constexpr static const char valStandingInstructionsProvided = '1';
  constexpr static const char valSpecificAllocationAccountOverriding = '2';
  constexpr static const char valSpecificAllocationAccountStanding = '3';
  constexpr static const char valSpecificOrderForASingleAccount = '4';
  constexpr static const char valRequestReject = '5';

  constexpr static const char* tagValDefault = "160=0";
  constexpr static const char* tagValStandingInstructionsProvided = "160=1";
  constexpr static const char* tagValSpecificAllocationAccountOverriding = "160=2";
  constexpr static const char* tagValSpecificAllocationAccountStanding = "160=3";
  constexpr static const char* tagValSpecificOrderForASingleAccount = "160=4";
  constexpr static const char* tagValRequestReject = "160=5";

};

struct AllocText
{
  constexpr static const int tag = 161;
  constexpr static const char* name = "AllocText";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlInstID
{
  constexpr static const int tag = 162;
  constexpr static const char* name = "SettlInstID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlInstTransType
{
  constexpr static const int tag = 163;
  constexpr static const char* name = "SettlInstTransType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = 'N';
  constexpr static const char valCancel = 'C';
  constexpr static const char valReplace = 'R';
  constexpr static const char valRestate = 'T';

  constexpr static const char* tagValNew = "163=N";
  constexpr static const char* tagValCancel = "163=C";
  constexpr static const char* tagValReplace = "163=R";
  constexpr static const char* tagValRestate = "163=T";

};

struct EmailThreadID
{
  constexpr static const int tag = 164;
  constexpr static const char* name = "EmailThreadID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlInstSource
{
  constexpr static const int tag = 165;
  constexpr static const char* name = "SettlInstSource";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valBrokersInstructions = '1';
  constexpr static const char valInstitutionsInstructions = '2';
  constexpr static const char valInvestor = '3';

  constexpr static const char* tagValBrokersInstructions = "165=1";
  constexpr static const char* tagValInstitutionsInstructions = "165=2";
  constexpr static const char* tagValInvestor = "165=3";

};

struct SettlLocation
{
  constexpr static const int tag = 166;
  constexpr static const char* name = "SettlLocation";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valCEDEL = "CED";
  constexpr static const char* valDepositoryTrustCompany = "DTC";
  constexpr static const char* valEuroclear = "EUR";
  constexpr static const char* valFederalBookEntry = "FED";
  constexpr static const char* valPhysical = "PNY";
  constexpr static const char* valParticipantTrustCompany = "PTC";

  constexpr static const char* tagValCEDEL = "166=CED";
  constexpr static const char* tagValDepositoryTrustCompany = "166=DTC";
  constexpr static const char* tagValEuroclear = "166=EUR";
  constexpr static const char* tagValFederalBookEntry = "166=FED";
  constexpr static const char* tagValPhysical = "166=PNY";
  constexpr static const char* tagValParticipantTrustCompany = "166=PTC";

};

struct SecurityType
{
  constexpr static const int tag = 167;
  constexpr static const char* name = "SecurityType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct EffectiveTime
{
  constexpr static const int tag = 168;
  constexpr static const char* name = "EffectiveTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct StandInstDbType
{
  constexpr static const int tag = 169;
  constexpr static const char* name = "StandInstDbType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valOther = 0;
  constexpr static const int valDTCSID = 1;
  constexpr static const int valThomsonALERT = 2;
  constexpr static const int valAGlobalCustodianStandInstDbName = 3;
  constexpr static const int valAccountNet = 4;

  constexpr static const char* tagValOther = "169=0";
  constexpr static const char* tagValDTCSID = "169=1";
  constexpr static const char* tagValThomsonALERT = "169=2";
  constexpr static const char* tagValAGlobalCustodianStandInstDbName = "169=3";
  constexpr static const char* tagValAccountNet = "169=4";

};

struct StandInstDbName
{
  constexpr static const int tag = 170;
  constexpr static const char* name = "StandInstDbName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct StandInstDbID
{
  constexpr static const int tag = 171;
  constexpr static const char* name = "StandInstDbID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlDeliveryType
{
  constexpr static const int tag = 172;
  constexpr static const char* name = "SettlDeliveryType";

  static writeableTagVal<Int> tagVal(int data);

};

struct SettlDepositoryCode
{
  constexpr static const int tag = 173;
  constexpr static const char* name = "SettlDepositoryCode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlBrkrCode
{
  constexpr static const int tag = 174;
  constexpr static const char* name = "SettlBrkrCode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlInstCode
{
  constexpr static const int tag = 175;
  constexpr static const char* name = "SettlInstCode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySettlAgentName
{
  constexpr static const int tag = 176;
  constexpr static const char* name = "SecuritySettlAgentName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySettlAgentCode
{
  constexpr static const int tag = 177;
  constexpr static const char* name = "SecuritySettlAgentCode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySettlAgentAcctNum
{
  constexpr static const int tag = 178;
  constexpr static const char* name = "SecuritySettlAgentAcctNum";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySettlAgentAcctName
{
  constexpr static const int tag = 179;
  constexpr static const char* name = "SecuritySettlAgentAcctName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySettlAgentContactName
{
  constexpr static const int tag = 180;
  constexpr static const char* name = "SecuritySettlAgentContactName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySettlAgentContactPhone
{
  constexpr static const int tag = 181;
  constexpr static const char* name = "SecuritySettlAgentContactPhone";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashSettlAgentName
{
  constexpr static const int tag = 182;
  constexpr static const char* name = "CashSettlAgentName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashSettlAgentCode
{
  constexpr static const int tag = 183;
  constexpr static const char* name = "CashSettlAgentCode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashSettlAgentAcctNum
{
  constexpr static const int tag = 184;
  constexpr static const char* name = "CashSettlAgentAcctNum";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashSettlAgentAcctName
{
  constexpr static const int tag = 185;
  constexpr static const char* name = "CashSettlAgentAcctName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashSettlAgentContactName
{
  constexpr static const int tag = 186;
  constexpr static const char* name = "CashSettlAgentContactName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashSettlAgentContactPhone
{
  constexpr static const int tag = 187;
  constexpr static const char* name = "CashSettlAgentContactPhone";

  static writeableTagVal<String> tagVal(const char* data);

};

struct BidSpotRate
{
  constexpr static const int tag = 188;
  constexpr static const char* name = "BidSpotRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct BidForwardPoints
{
  constexpr static const int tag = 189;
  constexpr static const char* name = "BidForwardPoints";

  static writeableTagVal<Float> tagVal(float data);

};

struct OfferSpotRate
{
  constexpr static const int tag = 190;
  constexpr static const char* name = "OfferSpotRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct OfferForwardPoints
{
  constexpr static const int tag = 191;
  constexpr static const char* name = "OfferForwardPoints";

  static writeableTagVal<Float> tagVal(float data);

};

struct OrderQty2
{
  constexpr static const int tag = 192;
  constexpr static const char* name = "OrderQty2";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlDate2
{
  constexpr static const int tag = 193;
  constexpr static const char* name = "SettlDate2";

  static writeableTagVal<Date> tagVal(Date data);

};

struct LastSpotRate
{
  constexpr static const int tag = 194;
  constexpr static const char* name = "LastSpotRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct LastForwardPoints
{
  constexpr static const int tag = 195;
  constexpr static const char* name = "LastForwardPoints";

  static writeableTagVal<Float> tagVal(float data);

};

struct AllocLinkID
{
  constexpr static const int tag = 196;
  constexpr static const char* name = "AllocLinkID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocLinkType
{
  constexpr static const int tag = 197;
  constexpr static const char* name = "AllocLinkType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valFOrXNetting = 0;
  constexpr static const int valFOrXSwap = 1;

  constexpr static const char* tagValFOrXNetting = "197=0";
  constexpr static const char* tagValFOrXSwap = "197=1";

};

struct SecondaryOrderID
{
  constexpr static const int tag = 198;
  constexpr static const char* name = "SecondaryOrderID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoIOIQualifiers
{
  constexpr static const int tag = 199;
  constexpr static const char* name = "NoIOIQualifiers";

  static writeableTagVal<Int> tagVal(int data);

};

struct MaturityMonthYear
{
  constexpr static const int tag = 200;
  constexpr static const char* name = "MaturityMonthYear";

  static writeableTagVal<MonthYear> tagVal(MonthYear data);

};

struct PutOrCall
{
  constexpr static const int tag = 201;
  constexpr static const char* name = "PutOrCall";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPut = 0;
  constexpr static const int valCall = 1;

  constexpr static const char* tagValPut = "201=0";
  constexpr static const char* tagValCall = "201=1";

};

struct StrikePrice
{
  constexpr static const int tag = 202;
  constexpr static const char* name = "StrikePrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct CoveredOrUncovered
{
  constexpr static const int tag = 203;
  constexpr static const char* name = "CoveredOrUncovered";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCovered = 0;
  constexpr static const int valUncovered = 1;

  constexpr static const char* tagValCovered = "203=0";
  constexpr static const char* tagValUncovered = "203=1";

};

struct CustomerOrFirm
{
  constexpr static const int tag = 204;
  constexpr static const char* name = "CustomerOrFirm";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCustomer = 0;
  constexpr static const int valFirm = 1;

  constexpr static const char* tagValCustomer = "204=0";
  constexpr static const char* tagValFirm = "204=1";

};

struct MaturityDay
{
  constexpr static const int tag = 205;
  constexpr static const char* name = "MaturityDay";

  static writeableTagVal<Int> tagVal(int data);

};

struct OptAttribute
{
  constexpr static const int tag = 206;
  constexpr static const char* name = "OptAttribute";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valLong = 'L';
  constexpr static const char valShort = 'S';
  constexpr static const char valZero = '0';
  constexpr static const char valOne = '1';
  constexpr static const char valTwo = '2';
  constexpr static const char valThree = '3';
  constexpr static const char valFour = '4';
  constexpr static const char valFive = '5';
  constexpr static const char valSix = '6';
  constexpr static const char valSeven = '7';
  constexpr static const char valEight = '8';
  constexpr static const char valNine = '9';

  constexpr static const char* tagValLong = "206=L";
  constexpr static const char* tagValShort = "206=S";
  constexpr static const char* tagValZero = "206=0";
  constexpr static const char* tagValOne = "206=1";
  constexpr static const char* tagValTwo = "206=2";
  constexpr static const char* tagValThree = "206=3";
  constexpr static const char* tagValFour = "206=4";
  constexpr static const char* tagValFive = "206=5";
  constexpr static const char* tagValSix = "206=6";
  constexpr static const char* tagValSeven = "206=7";
  constexpr static const char* tagValEight = "206=8";
  constexpr static const char* tagValNine = "206=9";

};

struct SecurityExchange
{
  constexpr static const int tag = 207;
  constexpr static const char* name = "SecurityExchange";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NotifyBrokerOfCredit
{
  constexpr static const int tag = 208;
  constexpr static const char* name = "NotifyBrokerOfCredit";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valDetailsShouldBeCommunicated = true;
  constexpr static const bool valDetailsShouldNotBeCommunicated = false;

  constexpr static const char* tagValDetailsShouldBeCommunicated = "208=Y";
  constexpr static const char* tagValDetailsShouldNotBeCommunicated = "208=N";

};

struct AllocHandlInst
{
  constexpr static const int tag = 209;
  constexpr static const char* name = "AllocHandlInst";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valMatch = 1;
  constexpr static const int valForward = 2;
  constexpr static const int valForwardAndMatch = 3;

  constexpr static const char* tagValMatch = "209=1";
  constexpr static const char* tagValForward = "209=2";
  constexpr static const char* tagValForwardAndMatch = "209=3";

};

struct MaxShow
{
  constexpr static const int tag = 210;
  constexpr static const char* name = "MaxShow";

  static writeableTagVal<Float> tagVal(float data);

};

struct PegOffsetValue
{
  constexpr static const int tag = 211;
  constexpr static const char* name = "PegOffsetValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct XmlDataLen
{
  constexpr static const int tag = 212;
  constexpr static const char* name = "XmlDataLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct XmlData
{
  constexpr static const int tag = 213;
  constexpr static const char* name = "XmlData";

  static writeableTagVal<Data> tagVal(Data data);

};

struct SettlInstRefID
{
  constexpr static const int tag = 214;
  constexpr static const char* name = "SettlInstRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoRoutingIDs
{
  constexpr static const int tag = 215;
  constexpr static const char* name = "NoRoutingIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct RoutingType
{
  constexpr static const int tag = 216;
  constexpr static const char* name = "RoutingType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valTargetFirm = 1;
  constexpr static const int valTargetList = 2;
  constexpr static const int valBlockFirm = 3;
  constexpr static const int valBlockList = 4;

  constexpr static const char* tagValTargetFirm = "216=1";
  constexpr static const char* tagValTargetList = "216=2";
  constexpr static const char* tagValBlockFirm = "216=3";
  constexpr static const char* tagValBlockList = "216=4";

};

struct RoutingID
{
  constexpr static const int tag = 217;
  constexpr static const char* name = "RoutingID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Spread
{
  constexpr static const int tag = 218;
  constexpr static const char* name = "Spread";

  static writeableTagVal<Float> tagVal(float data);

};

struct Benchmark
{
  constexpr static const int tag = 219;
  constexpr static const char* name = "Benchmark";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valCURVE = '1';
  constexpr static const char val5YR = '2';
  constexpr static const char valOLD5 = '3';
  constexpr static const char val0YR = '4';
  constexpr static const char valOLD0 = '5';
  constexpr static const char val30YR = '6';
  constexpr static const char valOLD30 = '7';
  constexpr static const char val3MOLIBOR = '8';
  constexpr static const char val6MOLIBOR = '9';

  constexpr static const char* tagValCURVE = "219=1";
  constexpr static const char* tagVal5YR = "219=2";
  constexpr static const char* tagValOLD5 = "219=3";
  constexpr static const char* tagVal0YR = "219=4";
  constexpr static const char* tagValOLD0 = "219=5";
  constexpr static const char* tagVal30YR = "219=6";
  constexpr static const char* tagValOLD30 = "219=7";
  constexpr static const char* tagVal3MOLIBOR = "219=8";
  constexpr static const char* tagVal6MOLIBOR = "219=9";

};

struct BenchmarkCurveCurrency
{
  constexpr static const int tag = 220;
  constexpr static const char* name = "BenchmarkCurveCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct BenchmarkCurveName
{
  constexpr static const int tag = 221;
  constexpr static const char* name = "BenchmarkCurveName";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valLondonInterBankOffers = "LIBOR";

  constexpr static const char* tagValLondonInterBankOffers = "221=LIBOR";

};

struct BenchmarkCurvePoint
{
  constexpr static const int tag = 222;
  constexpr static const char* name = "BenchmarkCurvePoint";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CouponRate
{
  constexpr static const int tag = 223;
  constexpr static const char* name = "CouponRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct CouponPaymentDate
{
  constexpr static const int tag = 224;
  constexpr static const char* name = "CouponPaymentDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct IssueDate
{
  constexpr static const int tag = 225;
  constexpr static const char* name = "IssueDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct RepurchaseTerm
{
  constexpr static const int tag = 226;
  constexpr static const char* name = "RepurchaseTerm";

  static writeableTagVal<Int> tagVal(int data);

};

struct RepurchaseRate
{
  constexpr static const int tag = 227;
  constexpr static const char* name = "RepurchaseRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct Factor
{
  constexpr static const int tag = 228;
  constexpr static const char* name = "Factor";

  static writeableTagVal<Float> tagVal(float data);

};

struct TradeOriginationDate
{
  constexpr static const int tag = 229;
  constexpr static const char* name = "TradeOriginationDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct ExDate
{
  constexpr static const int tag = 230;
  constexpr static const char* name = "ExDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct ContractMultiplier
{
  constexpr static const int tag = 231;
  constexpr static const char* name = "ContractMultiplier";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoStipulations
{
  constexpr static const int tag = 232;
  constexpr static const char* name = "NoStipulations";

  static writeableTagVal<Int> tagVal(int data);

};

struct StipulationType
{
  constexpr static const int tag = 233;
  constexpr static const char* name = "StipulationType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct StipulationValue
{
  constexpr static const int tag = 234;
  constexpr static const char* name = "StipulationValue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct YieldType
{
  constexpr static const int tag = 235;
  constexpr static const char* name = "YieldType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valAfterTaxYield = "AFTERTAX";
  constexpr static const char* valAnnualYield = "ANNUAL";
  constexpr static const char* valYieldAtIssue = "ATISSUE";
  constexpr static const char* valYieldToAverageMaturity = "AVGMATURITY";
  constexpr static const char* valBookYield = "BOOK";
  constexpr static const char* valYieldToNextCall = "CALL";
  constexpr static const char* valYieldChangeSinceClose = "CHANGE";
  constexpr static const char* valClosingYield = "CLOSE";
  constexpr static const char* valCompoundYield = "COMPOUND";
  constexpr static const char* valCurrentYield = "CURRENT";
  constexpr static const char* valTrueGrossYield = "GROSS";
  constexpr static const char* valGovernmentEquivalentYield = "GOVTEQUIV";
  constexpr static const char* valYieldWithInflationAssumption = "INFLATION";
  constexpr static const char* valInverseFloaterBondYield = "INVERSEFLOATER";
  constexpr static const char* valMostRecentClosingYield = "LASTCLOSE";
  constexpr static const char* valClosingYieldMostRecentMonth = "LASTMONTH";
  constexpr static const char* valClosingYieldMostRecentQuarter = "LASTQUARTER";
  constexpr static const char* valClosingYieldMostRecentYear = "LASTYEAR";
  constexpr static const char* valYieldToLongestAverageLife = "LONGAVGLIFE";
  constexpr static const char* valMarkToMarketYield = "MARK";
  constexpr static const char* valYieldToMaturity = "MATURITY";
  constexpr static const char* valYieldToNextRefund = "NEXTREFUND";
  constexpr static const char* valOpenAverageYield = "OPENAVG";
  constexpr static const char* valYieldToNextPut = "PUT";
  constexpr static const char* valPreviousCloseYield = "PREVCLOSE";
  constexpr static const char* valProceedsYield = "PROCEEDS";
  constexpr static const char* valSemiAnnualYield = "SEMIANNUAL";
  constexpr static const char* valYieldToShortestAverageLife = "SHORTAVGLIFE";
  constexpr static const char* valSimpleYield = "SIMPLE";
  constexpr static const char* valTaxEquivalentYield = "TAXEQUIV";
  constexpr static const char* valYieldToTenderDate = "TENDER";
  constexpr static const char* valTrueYield = "TRUE";
  constexpr static const char* valYieldValueOfOr32 = "VALUE/32";
  constexpr static const char* valYieldToWorst = "WORST";

  constexpr static const char* tagValAfterTaxYield = "235=AFTERTAX";
  constexpr static const char* tagValAnnualYield = "235=ANNUAL";
  constexpr static const char* tagValYieldAtIssue = "235=ATISSUE";
  constexpr static const char* tagValYieldToAverageMaturity = "235=AVGMATURITY";
  constexpr static const char* tagValBookYield = "235=BOOK";
  constexpr static const char* tagValYieldToNextCall = "235=CALL";
  constexpr static const char* tagValYieldChangeSinceClose = "235=CHANGE";
  constexpr static const char* tagValClosingYield = "235=CLOSE";
  constexpr static const char* tagValCompoundYield = "235=COMPOUND";
  constexpr static const char* tagValCurrentYield = "235=CURRENT";
  constexpr static const char* tagValTrueGrossYield = "235=GROSS";
  constexpr static const char* tagValGovernmentEquivalentYield = "235=GOVTEQUIV";
  constexpr static const char* tagValYieldWithInflationAssumption = "235=INFLATION";
  constexpr static const char* tagValInverseFloaterBondYield = "235=INVERSEFLOATER";
  constexpr static const char* tagValMostRecentClosingYield = "235=LASTCLOSE";
  constexpr static const char* tagValClosingYieldMostRecentMonth = "235=LASTMONTH";
  constexpr static const char* tagValClosingYieldMostRecentQuarter = "235=LASTQUARTER";
  constexpr static const char* tagValClosingYieldMostRecentYear = "235=LASTYEAR";
  constexpr static const char* tagValYieldToLongestAverageLife = "235=LONGAVGLIFE";
  constexpr static const char* tagValMarkToMarketYield = "235=MARK";
  constexpr static const char* tagValYieldToMaturity = "235=MATURITY";
  constexpr static const char* tagValYieldToNextRefund = "235=NEXTREFUND";
  constexpr static const char* tagValOpenAverageYield = "235=OPENAVG";
  constexpr static const char* tagValYieldToNextPut = "235=PUT";
  constexpr static const char* tagValPreviousCloseYield = "235=PREVCLOSE";
  constexpr static const char* tagValProceedsYield = "235=PROCEEDS";
  constexpr static const char* tagValSemiAnnualYield = "235=SEMIANNUAL";
  constexpr static const char* tagValYieldToShortestAverageLife = "235=SHORTAVGLIFE";
  constexpr static const char* tagValSimpleYield = "235=SIMPLE";
  constexpr static const char* tagValTaxEquivalentYield = "235=TAXEQUIV";
  constexpr static const char* tagValYieldToTenderDate = "235=TENDER";
  constexpr static const char* tagValTrueYield = "235=TRUE";
  constexpr static const char* tagValYieldValueOfOr32 = "235=VALUE/32";
  constexpr static const char* tagValYieldToWorst = "235=WORST";

};

struct Yield
{
  constexpr static const int tag = 236;
  constexpr static const char* name = "Yield";

  static writeableTagVal<Float> tagVal(float data);

};

struct TotalTakedown
{
  constexpr static const int tag = 237;
  constexpr static const char* name = "TotalTakedown";

  static writeableTagVal<Float> tagVal(float data);

};

struct Concession
{
  constexpr static const int tag = 238;
  constexpr static const char* name = "Concession";

  static writeableTagVal<Float> tagVal(float data);

};

struct RepoCollateralSecurityType
{
  constexpr static const int tag = 239;
  constexpr static const char* name = "RepoCollateralSecurityType";

  static writeableTagVal<Int> tagVal(int data);

};

struct RedemptionDate
{
  constexpr static const int tag = 240;
  constexpr static const char* name = "RedemptionDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct UnderlyingCouponPaymentDate
{
  constexpr static const int tag = 241;
  constexpr static const char* name = "UnderlyingCouponPaymentDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct UnderlyingIssueDate
{
  constexpr static const int tag = 242;
  constexpr static const char* name = "UnderlyingIssueDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct UnderlyingRepoCollateralSecurityType
{
  constexpr static const int tag = 243;
  constexpr static const char* name = "UnderlyingRepoCollateralSecurityType";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingRepurchaseTerm
{
  constexpr static const int tag = 244;
  constexpr static const char* name = "UnderlyingRepurchaseTerm";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingRepurchaseRate
{
  constexpr static const int tag = 245;
  constexpr static const char* name = "UnderlyingRepurchaseRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingFactor
{
  constexpr static const int tag = 246;
  constexpr static const char* name = "UnderlyingFactor";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingRedemptionDate
{
  constexpr static const int tag = 247;
  constexpr static const char* name = "UnderlyingRedemptionDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct LegCouponPaymentDate
{
  constexpr static const int tag = 248;
  constexpr static const char* name = "LegCouponPaymentDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct LegIssueDate
{
  constexpr static const int tag = 249;
  constexpr static const char* name = "LegIssueDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct LegRepoCollateralSecurityType
{
  constexpr static const int tag = 250;
  constexpr static const char* name = "LegRepoCollateralSecurityType";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegRepurchaseTerm
{
  constexpr static const int tag = 251;
  constexpr static const char* name = "LegRepurchaseTerm";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegRepurchaseRate
{
  constexpr static const int tag = 252;
  constexpr static const char* name = "LegRepurchaseRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegFactor
{
  constexpr static const int tag = 253;
  constexpr static const char* name = "LegFactor";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegRedemptionDate
{
  constexpr static const int tag = 254;
  constexpr static const char* name = "LegRedemptionDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct CreditRating
{
  constexpr static const int tag = 255;
  constexpr static const char* name = "CreditRating";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingCreditRating
{
  constexpr static const int tag = 256;
  constexpr static const char* name = "UnderlyingCreditRating";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegCreditRating
{
  constexpr static const int tag = 257;
  constexpr static const char* name = "LegCreditRating";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradedFlatSwitch
{
  constexpr static const int tag = 258;
  constexpr static const char* name = "TradedFlatSwitch";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valTradedFlat = true;
  constexpr static const bool valNotTradedFlat = false;

  constexpr static const char* tagValTradedFlat = "258=Y";
  constexpr static const char* tagValNotTradedFlat = "258=N";

};

struct BasisFeatureDate
{
  constexpr static const int tag = 259;
  constexpr static const char* name = "BasisFeatureDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct BasisFeaturePrice
{
  constexpr static const int tag = 260;
  constexpr static const char* name = "BasisFeaturePrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct MDReqID
{
  constexpr static const int tag = 262;
  constexpr static const char* name = "MDReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SubscriptionRequestType
{
  constexpr static const int tag = 263;
  constexpr static const char* name = "SubscriptionRequestType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valSnapshot = '0';
  constexpr static const char valSnapshotplusUpdates = '1';
  constexpr static const char valDisablePreviousSnapshotplusUpdateRequest = '2';

  constexpr static const char* tagValSnapshot = "263=0";
  constexpr static const char* tagValSnapshotplusUpdates = "263=1";
  constexpr static const char* tagValDisablePreviousSnapshotplusUpdateRequest = "263=2";

};

struct MarketDepth
{
  constexpr static const int tag = 264;
  constexpr static const char* name = "MarketDepth";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valFullBook = 0;
  constexpr static const int valTopOfBook = 1;

  constexpr static const char* tagValFullBook = "264=0";
  constexpr static const char* tagValTopOfBook = "264=1";

};

struct MDUpdateType
{
  constexpr static const int tag = 265;
  constexpr static const char* name = "MDUpdateType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valFullRefresh = 0;
  constexpr static const int valIncrementalRefresh = 1;

  constexpr static const char* tagValFullRefresh = "265=0";
  constexpr static const char* tagValIncrementalRefresh = "265=1";

};

struct AggregatedBook
{
  constexpr static const int tag = 266;
  constexpr static const char* name = "AggregatedBook";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valOneBookEntryPerSidePerPrice = true;
  constexpr static const bool valMultipleEntriesPerSidePerPriceAllowed = false;

  constexpr static const char* tagValOneBookEntryPerSidePerPrice = "266=Y";
  constexpr static const char* tagValMultipleEntriesPerSidePerPriceAllowed = "266=N";

};

struct NoMDEntryTypes
{
  constexpr static const int tag = 267;
  constexpr static const char* name = "NoMDEntryTypes";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoMDEntries
{
  constexpr static const int tag = 268;
  constexpr static const char* name = "NoMDEntries";

  static writeableTagVal<Int> tagVal(int data);

};

struct MDEntryType
{
  constexpr static const int tag = 269;
  constexpr static const char* name = "MDEntryType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valBid = '0';
  constexpr static const char valOffer = '1';
  constexpr static const char valTrade = '2';
  constexpr static const char valIndexValue = '3';
  constexpr static const char valOpeningPrice = '4';
  constexpr static const char valClosingPrice = '5';
  constexpr static const char valSettlementPrice = '6';
  constexpr static const char valTradingSessionHighPrice = '7';
  constexpr static const char valTradingSessionLowPrice = '8';
  constexpr static const char valTradingSessionVWAPPrice = '9';
  constexpr static const char valImbalance = 'A';
  constexpr static const char valTradeVolume = 'B';
  constexpr static const char valOpenInterest = 'C';

  constexpr static const char* tagValBid = "269=0";
  constexpr static const char* tagValOffer = "269=1";
  constexpr static const char* tagValTrade = "269=2";
  constexpr static const char* tagValIndexValue = "269=3";
  constexpr static const char* tagValOpeningPrice = "269=4";
  constexpr static const char* tagValClosingPrice = "269=5";
  constexpr static const char* tagValSettlementPrice = "269=6";
  constexpr static const char* tagValTradingSessionHighPrice = "269=7";
  constexpr static const char* tagValTradingSessionLowPrice = "269=8";
  constexpr static const char* tagValTradingSessionVWAPPrice = "269=9";
  constexpr static const char* tagValImbalance = "269=A";
  constexpr static const char* tagValTradeVolume = "269=B";
  constexpr static const char* tagValOpenInterest = "269=C";

};

struct MDEntryPx
{
  constexpr static const int tag = 270;
  constexpr static const char* name = "MDEntryPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct MDEntrySize
{
  constexpr static const int tag = 271;
  constexpr static const char* name = "MDEntrySize";

  static writeableTagVal<Float> tagVal(float data);

};

struct MDEntryDate
{
  constexpr static const int tag = 272;
  constexpr static const char* name = "MDEntryDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct MDEntryTime
{
  constexpr static const int tag = 273;
  constexpr static const char* name = "MDEntryTime";

  static writeableTagVal<Time> tagVal(Time data);

};

struct TickDirection
{
  constexpr static const int tag = 274;
  constexpr static const char* name = "TickDirection";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valPlusTick = '0';
  constexpr static const char valZeroPlusTick = '1';
  constexpr static const char valMinusTick = '2';
  constexpr static const char valZeroMinusTick = '3';

  constexpr static const char* tagValPlusTick = "274=0";
  constexpr static const char* tagValZeroPlusTick = "274=1";
  constexpr static const char* tagValMinusTick = "274=2";
  constexpr static const char* tagValZeroMinusTick = "274=3";

};

struct MDMkt
{
  constexpr static const int tag = 275;
  constexpr static const char* name = "MDMkt";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuoteCondition
{
  constexpr static const int tag = 276;
  constexpr static const char* name = "QuoteCondition";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valOpenOrActive = "A";
  constexpr static const char* valClosedOrInactive = "B";
  constexpr static const char* valExchangeBest = "C";
  constexpr static const char* valConsolidatedBest = "D";
  constexpr static const char* valLocked = "E";
  constexpr static const char* valCrossed = "F";
  constexpr static const char* valDepth = "G";
  constexpr static const char* valFastTrading = "H";
  constexpr static const char* valNonFirm = "I";

  constexpr static const char* tagValOpenOrActive = "276=A";
  constexpr static const char* tagValClosedOrInactive = "276=B";
  constexpr static const char* tagValExchangeBest = "276=C";
  constexpr static const char* tagValConsolidatedBest = "276=D";
  constexpr static const char* tagValLocked = "276=E";
  constexpr static const char* tagValCrossed = "276=F";
  constexpr static const char* tagValDepth = "276=G";
  constexpr static const char* tagValFastTrading = "276=H";
  constexpr static const char* tagValNonFirm = "276=I";

};

struct TradeCondition
{
  constexpr static const int tag = 277;
  constexpr static const char* name = "TradeCondition";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valCashonlyMarket = "A";
  constexpr static const char* valAveragePriceTrade = "B";
  constexpr static const char* valCashTrade = "C";
  constexpr static const char* valNextDayonlyMarket = "D";
  constexpr static const char* valOpeningOrReopeningTradeDetail = "E";
  constexpr static const char* valIntradayTradeDetail = "F";
  constexpr static const char* valRule27Trade = "G";
  constexpr static const char* valRule55Trade = "H";
  constexpr static const char* valSoldLast = "I";
  constexpr static const char* valNextDayTrade = "J";
  constexpr static const char* valOpened = "K";
  constexpr static const char* valSeller = "L";
  constexpr static const char* valSold = "M";
  constexpr static const char* valStoppedStock = "N";
  constexpr static const char* valImbalanceMoreBuyers = "P";
  constexpr static const char* valImbalanceMoreSellers = "Q";
  constexpr static const char* valOpeningPrice = "R";

  constexpr static const char* tagValCashonlyMarket = "277=A";
  constexpr static const char* tagValAveragePriceTrade = "277=B";
  constexpr static const char* tagValCashTrade = "277=C";
  constexpr static const char* tagValNextDayonlyMarket = "277=D";
  constexpr static const char* tagValOpeningOrReopeningTradeDetail = "277=E";
  constexpr static const char* tagValIntradayTradeDetail = "277=F";
  constexpr static const char* tagValRule27Trade = "277=G";
  constexpr static const char* tagValRule55Trade = "277=H";
  constexpr static const char* tagValSoldLast = "277=I";
  constexpr static const char* tagValNextDayTrade = "277=J";
  constexpr static const char* tagValOpened = "277=K";
  constexpr static const char* tagValSeller = "277=L";
  constexpr static const char* tagValSold = "277=M";
  constexpr static const char* tagValStoppedStock = "277=N";
  constexpr static const char* tagValImbalanceMoreBuyers = "277=P";
  constexpr static const char* tagValImbalanceMoreSellers = "277=Q";
  constexpr static const char* tagValOpeningPrice = "277=R";

};

struct MDEntryID
{
  constexpr static const int tag = 278;
  constexpr static const char* name = "MDEntryID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MDUpdateAction
{
  constexpr static const int tag = 279;
  constexpr static const char* name = "MDUpdateAction";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valChange = '1';
  constexpr static const char valDelete = '2';

  constexpr static const char* tagValNew = "279=0";
  constexpr static const char* tagValChange = "279=1";
  constexpr static const char* tagValDelete = "279=2";

};

struct MDEntryRefID
{
  constexpr static const int tag = 280;
  constexpr static const char* name = "MDEntryRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MDReqRejReason
{
  constexpr static const int tag = 281;
  constexpr static const char* name = "MDReqRejReason";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valUnknownSymbol = '0';
  constexpr static const char valDuplicateMDReqID = '1';
  constexpr static const char valInsufficientBandwidth = '2';
  constexpr static const char valInsufficientPermissions = '3';
  constexpr static const char valUnsupportedSubscriptionRequestType = '4';
  constexpr static const char valUnsupportedMarketDepth = '5';
  constexpr static const char valUnsupportedMDUpdateType = '6';
  constexpr static const char valUnsupportedAggregatedBook = '7';
  constexpr static const char valUnsupportedMDEntryType = '8';
  constexpr static const char valUnsupportedTradingSessionID = '9';
  constexpr static const char valUnsupportedScope = 'A';
  constexpr static const char valUnsupportedOpenCloseSettleFlag = 'B';
  constexpr static const char valUnsupportedMDImplicitDelete = 'C';

  constexpr static const char* tagValUnknownSymbol = "281=0";
  constexpr static const char* tagValDuplicateMDReqID = "281=1";
  constexpr static const char* tagValInsufficientBandwidth = "281=2";
  constexpr static const char* tagValInsufficientPermissions = "281=3";
  constexpr static const char* tagValUnsupportedSubscriptionRequestType = "281=4";
  constexpr static const char* tagValUnsupportedMarketDepth = "281=5";
  constexpr static const char* tagValUnsupportedMDUpdateType = "281=6";
  constexpr static const char* tagValUnsupportedAggregatedBook = "281=7";
  constexpr static const char* tagValUnsupportedMDEntryType = "281=8";
  constexpr static const char* tagValUnsupportedTradingSessionID = "281=9";
  constexpr static const char* tagValUnsupportedScope = "281=A";
  constexpr static const char* tagValUnsupportedOpenCloseSettleFlag = "281=B";
  constexpr static const char* tagValUnsupportedMDImplicitDelete = "281=C";

};

struct MDEntryOriginator
{
  constexpr static const int tag = 282;
  constexpr static const char* name = "MDEntryOriginator";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LocationID
{
  constexpr static const int tag = 283;
  constexpr static const char* name = "LocationID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DeskID
{
  constexpr static const int tag = 284;
  constexpr static const char* name = "DeskID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DeleteReason
{
  constexpr static const int tag = 285;
  constexpr static const char* name = "DeleteReason";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valCancelationOrTradeBust = '0';
  constexpr static const char valError = '1';

  constexpr static const char* tagValCancelationOrTradeBust = "285=0";
  constexpr static const char* tagValError = "285=1";

};

struct OpenCloseSettlFlag
{
  constexpr static const int tag = 286;
  constexpr static const char* name = "OpenCloseSettlFlag";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valDailyOpenOrCloseOrSettlementEntry = "0";
  constexpr static const char* valSessionOpenOrCloseOrSettlementEntry = "1";
  constexpr static const char* valDeliverySettlementEntry = "2";
  constexpr static const char* valExpectedEntry = "3";
  constexpr static const char* valEntryFromPreviousBusinessDay = "4";
  constexpr static const char* valTheoreticalPriceValue = "5";

  constexpr static const char* tagValDailyOpenOrCloseOrSettlementEntry = "286=0";
  constexpr static const char* tagValSessionOpenOrCloseOrSettlementEntry = "286=1";
  constexpr static const char* tagValDeliverySettlementEntry = "286=2";
  constexpr static const char* tagValExpectedEntry = "286=3";
  constexpr static const char* tagValEntryFromPreviousBusinessDay = "286=4";
  constexpr static const char* tagValTheoreticalPriceValue = "286=5";

};

struct SellerDays
{
  constexpr static const int tag = 287;
  constexpr static const char* name = "SellerDays";

  static writeableTagVal<Int> tagVal(int data);

};

struct MDEntryBuyer
{
  constexpr static const int tag = 288;
  constexpr static const char* name = "MDEntryBuyer";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MDEntrySeller
{
  constexpr static const int tag = 289;
  constexpr static const char* name = "MDEntrySeller";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MDEntryPositionNo
{
  constexpr static const int tag = 290;
  constexpr static const char* name = "MDEntryPositionNo";

  static writeableTagVal<Int> tagVal(int data);

};

struct FinancialStatus
{
  constexpr static const int tag = 291;
  constexpr static const char* name = "FinancialStatus";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valBankrupt = "1";
  constexpr static const char* valPendingDelisting = "2";

  constexpr static const char* tagValBankrupt = "291=1";
  constexpr static const char* tagValPendingDelisting = "291=2";

};

struct CorporateAction
{
  constexpr static const int tag = 292;
  constexpr static const char* name = "CorporateAction";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valExDividend = "A";
  constexpr static const char* valExDistribution = "B";
  constexpr static const char* valExRights = "C";
  constexpr static const char* valNew = "D";
  constexpr static const char* valExInterest = "E";

  constexpr static const char* tagValExDividend = "292=A";
  constexpr static const char* tagValExDistribution = "292=B";
  constexpr static const char* tagValExRights = "292=C";
  constexpr static const char* tagValNew = "292=D";
  constexpr static const char* tagValExInterest = "292=E";

};

struct DefBidSize
{
  constexpr static const int tag = 293;
  constexpr static const char* name = "DefBidSize";

  static writeableTagVal<Float> tagVal(float data);

};

struct DefOfferSize
{
  constexpr static const int tag = 294;
  constexpr static const char* name = "DefOfferSize";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoQuoteEntries
{
  constexpr static const int tag = 295;
  constexpr static const char* name = "NoQuoteEntries";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoQuoteSets
{
  constexpr static const int tag = 296;
  constexpr static const char* name = "NoQuoteSets";

  static writeableTagVal<Int> tagVal(int data);

};

struct QuoteStatus
{
  constexpr static const int tag = 297;
  constexpr static const char* name = "QuoteStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccepted = 0;
  constexpr static const int valCanceledForSymbol = 1;
  constexpr static const int valCanceledForSecurityType = 2;
  constexpr static const int valCanceledForUnderlying = 3;
  constexpr static const int valCanceledAll = 4;
  constexpr static const int valRejected = 5;
  constexpr static const int valRemovedFromMarket = 6;
  constexpr static const int valExpired = 7;
  constexpr static const int valQuery = 8;
  constexpr static const int valQuoteNotFound = 9;
  constexpr static const int valPending = 0;
  constexpr static const int valPass = 1;
  constexpr static const int valLockedMarketWarning = 2;
  constexpr static const int valCrossMarketWarning = 3;
  constexpr static const int valCanceledDueToLockMarket = 4;
  constexpr static const int valCanceledDueToCrossMarket = 5;

  constexpr static const char* tagValAccepted = "297=0";
  constexpr static const char* tagValCanceledForSymbol = "297=1";
  constexpr static const char* tagValCanceledForSecurityType = "297=2";
  constexpr static const char* tagValCanceledForUnderlying = "297=3";
  constexpr static const char* tagValCanceledAll = "297=4";
  constexpr static const char* tagValRejected = "297=5";
  constexpr static const char* tagValRemovedFromMarket = "297=6";
  constexpr static const char* tagValExpired = "297=7";
  constexpr static const char* tagValQuery = "297=8";
  constexpr static const char* tagValQuoteNotFound = "297=9";
  constexpr static const char* tagValPending = "297=0";
  constexpr static const char* tagValPass = "297=1";
  constexpr static const char* tagValLockedMarketWarning = "297=2";
  constexpr static const char* tagValCrossMarketWarning = "297=3";
  constexpr static const char* tagValCanceledDueToLockMarket = "297=4";
  constexpr static const char* tagValCanceledDueToCrossMarket = "297=5";

};

struct QuoteCancelType
{
  constexpr static const int tag = 298;
  constexpr static const char* name = "QuoteCancelType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCancelForSymbol = 1;
  constexpr static const int valCancelForSecurityType = 2;
  constexpr static const int valCancelForUnderlyingSymbol = 3;
  constexpr static const int valCancelAllQuotes = 4;

  constexpr static const char* tagValCancelForSymbol = "298=1";
  constexpr static const char* tagValCancelForSecurityType = "298=2";
  constexpr static const char* tagValCancelForUnderlyingSymbol = "298=3";
  constexpr static const char* tagValCancelAllQuotes = "298=4";

};

struct QuoteEntryID
{
  constexpr static const int tag = 299;
  constexpr static const char* name = "QuoteEntryID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuoteRejectReason
{
  constexpr static const int tag = 300;
  constexpr static const char* name = "QuoteRejectReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnknownSymbol = 1;
  constexpr static const int valExchangeSecurityClosed = 2;
  constexpr static const int valQuoteRequestExceedsLimit = 3;
  constexpr static const int valTooLateToEnter = 4;
  constexpr static const int valUnknownQuote = 5;
  constexpr static const int valDuplicateQuote = 6;
  constexpr static const int valInvalidBidOraskSpread = 7;
  constexpr static const int valInvalidPrice = 8;
  constexpr static const int valNotAuthorizedToQuoteSecurity = 9;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValUnknownSymbol = "300=1";
  constexpr static const char* tagValExchangeSecurityClosed = "300=2";
  constexpr static const char* tagValQuoteRequestExceedsLimit = "300=3";
  constexpr static const char* tagValTooLateToEnter = "300=4";
  constexpr static const char* tagValUnknownQuote = "300=5";
  constexpr static const char* tagValDuplicateQuote = "300=6";
  constexpr static const char* tagValInvalidBidOraskSpread = "300=7";
  constexpr static const char* tagValInvalidPrice = "300=8";
  constexpr static const char* tagValNotAuthorizedToQuoteSecurity = "300=9";
  constexpr static const char* tagValOther = "300=99";

};

struct QuoteResponseLevel
{
  constexpr static const int tag = 301;
  constexpr static const char* name = "QuoteResponseLevel";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNoAcknowledgement = 0;
  constexpr static const int valAcknowledgeOnlyNegativeOrErroneousQuotes = 1;
  constexpr static const int valAcknowledgeEachQuoteMessages = 2;

  constexpr static const char* tagValNoAcknowledgement = "301=0";
  constexpr static const char* tagValAcknowledgeOnlyNegativeOrErroneousQuotes = "301=1";
  constexpr static const char* tagValAcknowledgeEachQuoteMessages = "301=2";

};

struct QuoteSetID
{
  constexpr static const int tag = 302;
  constexpr static const char* name = "QuoteSetID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuoteRequestType
{
  constexpr static const int tag = 303;
  constexpr static const char* name = "QuoteRequestType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valManual = 1;
  constexpr static const int valAutomatic = 2;

  constexpr static const char* tagValManual = "303=1";
  constexpr static const char* tagValAutomatic = "303=2";

};

struct TotNoQuoteEntries
{
  constexpr static const int tag = 304;
  constexpr static const char* name = "TotNoQuoteEntries";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingSecurityIDSource
{
  constexpr static const int tag = 305;
  constexpr static const char* name = "UnderlyingSecurityIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingIssuer
{
  constexpr static const int tag = 306;
  constexpr static const char* name = "UnderlyingIssuer";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSecurityDesc
{
  constexpr static const int tag = 307;
  constexpr static const char* name = "UnderlyingSecurityDesc";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSecurityExchange
{
  constexpr static const int tag = 308;
  constexpr static const char* name = "UnderlyingSecurityExchange";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSecurityID
{
  constexpr static const int tag = 309;
  constexpr static const char* name = "UnderlyingSecurityID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSecurityType
{
  constexpr static const int tag = 310;
  constexpr static const char* name = "UnderlyingSecurityType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valFederalGovernmentOrTreasury = "TREASURY";
  constexpr static const char* valStateProvinceRegionEtc = "PROVINCE";
  constexpr static const char* valFederalAgency = "AGENCY";
  constexpr static const char* valMortgagePassthrough = "MORTGAGE";
  constexpr static const char* valCommercialPaper = "CP";
  constexpr static const char* valCorporate = "CORP";
  constexpr static const char* valEquity = "EQUITY";
  constexpr static const char* valSupraNationalAgency = "SUPRA";

  constexpr static const char* tagValFederalGovernmentOrTreasury = "310=TREASURY";
  constexpr static const char* tagValStateProvinceRegionEtc = "310=PROVINCE";
  constexpr static const char* tagValFederalAgency = "310=AGENCY";
  constexpr static const char* tagValMortgagePassthrough = "310=MORTGAGE";
  constexpr static const char* tagValCommercialPaper = "310=CP";
  constexpr static const char* tagValCorporate = "310=CORP";
  constexpr static const char* tagValEquity = "310=EQUITY";
  constexpr static const char* tagValSupraNationalAgency = "310=SUPRA";

};

struct UnderlyingSymbol
{
  constexpr static const int tag = 311;
  constexpr static const char* name = "UnderlyingSymbol";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSymbolSfx
{
  constexpr static const int tag = 312;
  constexpr static const char* name = "UnderlyingSymbolSfx";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingMaturityMonthYear
{
  constexpr static const int tag = 313;
  constexpr static const char* name = "UnderlyingMaturityMonthYear";

  static writeableTagVal<MonthYear> tagVal(MonthYear data);

};

struct UnderlyingMaturityDay
{
  constexpr static const int tag = 314;
  constexpr static const char* name = "UnderlyingMaturityDay";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingPutOrCall
{
  constexpr static const int tag = 315;
  constexpr static const char* name = "UnderlyingPutOrCall";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingStrikePrice
{
  constexpr static const int tag = 316;
  constexpr static const char* name = "UnderlyingStrikePrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingOptAttribute
{
  constexpr static const int tag = 317;
  constexpr static const char* name = "UnderlyingOptAttribute";

  static writeableTagVal<Char> tagVal(char data);

};

struct UnderlyingCurrency
{
  constexpr static const int tag = 318;
  constexpr static const char* name = "UnderlyingCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RatioQty
{
  constexpr static const int tag = 319;
  constexpr static const char* name = "RatioQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct SecurityReqID
{
  constexpr static const int tag = 320;
  constexpr static const char* name = "SecurityReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecurityRequestType
{
  constexpr static const int tag = 321;
  constexpr static const char* name = "SecurityRequestType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valRequestSecurityIdentityAndSpecifications = 0;
  constexpr static const int valRequestSecurityIdentityForTheSpecificationsProvided = 1;
  constexpr static const int valRequestListSecurityTypes = 2;
  constexpr static const int valRequestListSecurities = 3;

  constexpr static const char* tagValRequestSecurityIdentityAndSpecifications = "321=0";
  constexpr static const char* tagValRequestSecurityIdentityForTheSpecificationsProvided = "321=1";
  constexpr static const char* tagValRequestListSecurityTypes = "321=2";
  constexpr static const char* tagValRequestListSecurities = "321=3";

};

struct SecurityResponseID
{
  constexpr static const int tag = 322;
  constexpr static const char* name = "SecurityResponseID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecurityResponseType
{
  constexpr static const int tag = 323;
  constexpr static const char* name = "SecurityResponseType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAcceptSecurityProposalAsIs = 1;
  constexpr static const int valAcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage = 2;
  constexpr static const int valListOfSecurityTypesReturnedPerRequest = 3;
  constexpr static const int valListOfSecuritiesReturnedPerRequest = 4;
  constexpr static const int valRejectSecurityProposal = 5;
  constexpr static const int valCanNotMatchSelectionCriteria = 6;

  constexpr static const char* tagValAcceptSecurityProposalAsIs = "323=1";
  constexpr static const char* tagValAcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage = "323=2";
  constexpr static const char* tagValListOfSecurityTypesReturnedPerRequest = "323=3";
  constexpr static const char* tagValListOfSecuritiesReturnedPerRequest = "323=4";
  constexpr static const char* tagValRejectSecurityProposal = "323=5";
  constexpr static const char* tagValCanNotMatchSelectionCriteria = "323=6";

};

struct SecurityStatusReqID
{
  constexpr static const int tag = 324;
  constexpr static const char* name = "SecurityStatusReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnsolicitedIndicator
{
  constexpr static const int tag = 325;
  constexpr static const char* name = "UnsolicitedIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valMessageIsBeingSentUnsolicited = true;
  constexpr static const bool valMessageIsBeingSentAsAResultOfAPriorRequest = false;

  constexpr static const char* tagValMessageIsBeingSentUnsolicited = "325=Y";
  constexpr static const char* tagValMessageIsBeingSentAsAResultOfAPriorRequest = "325=N";

};

struct SecurityTradingStatus
{
  constexpr static const int tag = 326;
  constexpr static const char* name = "SecurityTradingStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valOpeningDelay = 1;
  constexpr static const int valTradingHalt = 2;
  constexpr static const int valResume = 3;
  constexpr static const int valNoOpenOrNoResume = 4;
  constexpr static const int valPriceIndication = 5;
  constexpr static const int valTradingRangeIndication = 6;
  constexpr static const int valMarketImbalanceBuy = 7;
  constexpr static const int valMarketImbalanceSell = 8;
  constexpr static const int valMarketOnCloseImbalanceBuy = 9;
  constexpr static const int valMarketOnCloseImbalanceSell = 0;
  constexpr static const int valNoMarketImbalance = 2;
  constexpr static const int valNoMarketOnCloseImbalance = 3;
  constexpr static const int valITSPreOpening = 4;
  constexpr static const int valNewPriceIndication = 5;
  constexpr static const int valTradeDisseminationTime = 6;
  constexpr static const int valReadyToTrade = 7;
  constexpr static const int valNotAvailableForTrading = 8;
  constexpr static const int valNotTradedOnThisMarket = 9;
  constexpr static const int valUnknownOrInvalid = 20;
  constexpr static const int valPreOpen = 2;
  constexpr static const int valOpeningRotation = 22;
  constexpr static const int valFastMarket = 23;

  constexpr static const char* tagValOpeningDelay = "326=1";
  constexpr static const char* tagValTradingHalt = "326=2";
  constexpr static const char* tagValResume = "326=3";
  constexpr static const char* tagValNoOpenOrNoResume = "326=4";
  constexpr static const char* tagValPriceIndication = "326=5";
  constexpr static const char* tagValTradingRangeIndication = "326=6";
  constexpr static const char* tagValMarketImbalanceBuy = "326=7";
  constexpr static const char* tagValMarketImbalanceSell = "326=8";
  constexpr static const char* tagValMarketOnCloseImbalanceBuy = "326=9";
  constexpr static const char* tagValMarketOnCloseImbalanceSell = "326=0";
  constexpr static const char* tagValNoMarketImbalance = "326=2";
  constexpr static const char* tagValNoMarketOnCloseImbalance = "326=3";
  constexpr static const char* tagValITSPreOpening = "326=4";
  constexpr static const char* tagValNewPriceIndication = "326=5";
  constexpr static const char* tagValTradeDisseminationTime = "326=6";
  constexpr static const char* tagValReadyToTrade = "326=7";
  constexpr static const char* tagValNotAvailableForTrading = "326=8";
  constexpr static const char* tagValNotTradedOnThisMarket = "326=9";
  constexpr static const char* tagValUnknownOrInvalid = "326=20";
  constexpr static const char* tagValPreOpen = "326=2";
  constexpr static const char* tagValOpeningRotation = "326=22";
  constexpr static const char* tagValFastMarket = "326=23";

};

struct HaltReason
{
  constexpr static const int tag = 327;
  constexpr static const char* name = "HaltReason";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valOrderImbalance = 'I';
  constexpr static const char valEquipmentChangeover = 'X';
  constexpr static const char valNewsPending = 'P';
  constexpr static const char valNewsDissemination = 'D';
  constexpr static const char valOrderInflux = 'E';
  constexpr static const char valAdditionalInformation = 'M';

  constexpr static const char* tagValOrderImbalance = "327=I";
  constexpr static const char* tagValEquipmentChangeover = "327=X";
  constexpr static const char* tagValNewsPending = "327=P";
  constexpr static const char* tagValNewsDissemination = "327=D";
  constexpr static const char* tagValOrderInflux = "327=E";
  constexpr static const char* tagValAdditionalInformation = "327=M";

};

struct InViewOfCommon
{
  constexpr static const int tag = 328;
  constexpr static const char* name = "InViewOfCommon";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valHaltWasDueToCommonStockBeingHalted = true;
  constexpr static const bool valHaltWasNotRelatedToAHaltOfTheCommonStock = false;

  constexpr static const char* tagValHaltWasDueToCommonStockBeingHalted = "328=Y";
  constexpr static const char* tagValHaltWasNotRelatedToAHaltOfTheCommonStock = "328=N";

};

struct DueToRelated
{
  constexpr static const int tag = 329;
  constexpr static const char* name = "DueToRelated";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valHaltWasDueToRelatedSecurityBeingHalted = true;
  constexpr static const bool valHaltWasNotRelatedToAHaltOfTheRelatedSecurity = false;

  constexpr static const char* tagValHaltWasDueToRelatedSecurityBeingHalted = "329=Y";
  constexpr static const char* tagValHaltWasNotRelatedToAHaltOfTheRelatedSecurity = "329=N";

};

struct BuyVolume
{
  constexpr static const int tag = 330;
  constexpr static const char* name = "BuyVolume";

  static writeableTagVal<Float> tagVal(float data);

};

struct SellVolume
{
  constexpr static const int tag = 331;
  constexpr static const char* name = "SellVolume";

  static writeableTagVal<Float> tagVal(float data);

};

struct HighPx
{
  constexpr static const int tag = 332;
  constexpr static const char* name = "HighPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct LowPx
{
  constexpr static const int tag = 333;
  constexpr static const char* name = "LowPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct Adjustment
{
  constexpr static const int tag = 334;
  constexpr static const char* name = "Adjustment";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCancel = 1;
  constexpr static const int valError = 2;
  constexpr static const int valCorrection = 3;

  constexpr static const char* tagValCancel = "334=1";
  constexpr static const char* tagValError = "334=2";
  constexpr static const char* tagValCorrection = "334=3";

};

struct TradSesReqID
{
  constexpr static const int tag = 335;
  constexpr static const char* name = "TradSesReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradingSessionID
{
  constexpr static const int tag = 336;
  constexpr static const char* name = "TradingSessionID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ContraTrader
{
  constexpr static const int tag = 337;
  constexpr static const char* name = "ContraTrader";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradSesMethod
{
  constexpr static const int tag = 338;
  constexpr static const char* name = "TradSesMethod";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valElectronic = 1;
  constexpr static const int valOpenOutcry = 2;
  constexpr static const int valTwoParty = 3;

  constexpr static const char* tagValElectronic = "338=1";
  constexpr static const char* tagValOpenOutcry = "338=2";
  constexpr static const char* tagValTwoParty = "338=3";

};

struct TradSesMode
{
  constexpr static const int tag = 339;
  constexpr static const char* name = "TradSesMode";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valTesting = 1;
  constexpr static const int valSimulated = 2;
  constexpr static const int valProduction = 3;

  constexpr static const char* tagValTesting = "339=1";
  constexpr static const char* tagValSimulated = "339=2";
  constexpr static const char* tagValProduction = "339=3";

};

struct TradSesStatus
{
  constexpr static const int tag = 340;
  constexpr static const char* name = "TradSesStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnknown = 0;
  constexpr static const int valHalted = 1;
  constexpr static const int valOpen = 2;
  constexpr static const int valClosed = 3;
  constexpr static const int valPreOpen = 4;
  constexpr static const int valPreClose = 5;
  constexpr static const int valRequestRejected = 6;

  constexpr static const char* tagValUnknown = "340=0";
  constexpr static const char* tagValHalted = "340=1";
  constexpr static const char* tagValOpen = "340=2";
  constexpr static const char* tagValClosed = "340=3";
  constexpr static const char* tagValPreOpen = "340=4";
  constexpr static const char* tagValPreClose = "340=5";
  constexpr static const char* tagValRequestRejected = "340=6";

};

struct TradSesStartTime
{
  constexpr static const int tag = 341;
  constexpr static const char* name = "TradSesStartTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct TradSesOpenTime
{
  constexpr static const int tag = 342;
  constexpr static const char* name = "TradSesOpenTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct TradSesPreCloseTime
{
  constexpr static const int tag = 343;
  constexpr static const char* name = "TradSesPreCloseTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct TradSesCloseTime
{
  constexpr static const int tag = 344;
  constexpr static const char* name = "TradSesCloseTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct TradSesEndTime
{
  constexpr static const int tag = 345;
  constexpr static const char* name = "TradSesEndTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct NumberOfOrders
{
  constexpr static const int tag = 346;
  constexpr static const char* name = "NumberOfOrders";

  static writeableTagVal<Int> tagVal(int data);

};

struct MessageEncoding
{
  constexpr static const int tag = 347;
  constexpr static const char* name = "MessageEncoding";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* val2022JP = "ISO";
  constexpr static const char* valJP = "EUC";
  constexpr static const char* valUTF8 = "UTF";

  constexpr static const char* tagVal2022JP = "347=ISO";
  constexpr static const char* tagValJP = "347=EUC";
  constexpr static const char* tagValUTF8 = "347=UTF";

};

struct EncodedIssuerLen
{
  constexpr static const int tag = 348;
  constexpr static const char* name = "EncodedIssuerLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedIssuer
{
  constexpr static const int tag = 349;
  constexpr static const char* name = "EncodedIssuer";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedSecurityDescLen
{
  constexpr static const int tag = 350;
  constexpr static const char* name = "EncodedSecurityDescLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedSecurityDesc
{
  constexpr static const int tag = 351;
  constexpr static const char* name = "EncodedSecurityDesc";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedListExecInstLen
{
  constexpr static const int tag = 352;
  constexpr static const char* name = "EncodedListExecInstLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedListExecInst
{
  constexpr static const int tag = 353;
  constexpr static const char* name = "EncodedListExecInst";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedTextLen
{
  constexpr static const int tag = 354;
  constexpr static const char* name = "EncodedTextLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedText
{
  constexpr static const int tag = 355;
  constexpr static const char* name = "EncodedText";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedSubjectLen
{
  constexpr static const int tag = 356;
  constexpr static const char* name = "EncodedSubjectLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedSubject
{
  constexpr static const int tag = 357;
  constexpr static const char* name = "EncodedSubject";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedHeadlineLen
{
  constexpr static const int tag = 358;
  constexpr static const char* name = "EncodedHeadlineLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedHeadline
{
  constexpr static const int tag = 359;
  constexpr static const char* name = "EncodedHeadline";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedAllocTextLen
{
  constexpr static const int tag = 360;
  constexpr static const char* name = "EncodedAllocTextLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedAllocText
{
  constexpr static const int tag = 361;
  constexpr static const char* name = "EncodedAllocText";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedUnderlyingIssuerLen
{
  constexpr static const int tag = 362;
  constexpr static const char* name = "EncodedUnderlyingIssuerLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedUnderlyingIssuer
{
  constexpr static const int tag = 363;
  constexpr static const char* name = "EncodedUnderlyingIssuer";

  static writeableTagVal<Data> tagVal(Data data);

};

struct EncodedUnderlyingSecurityDescLen
{
  constexpr static const int tag = 364;
  constexpr static const char* name = "EncodedUnderlyingSecurityDescLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedUnderlyingSecurityDesc
{
  constexpr static const int tag = 365;
  constexpr static const char* name = "EncodedUnderlyingSecurityDesc";

  static writeableTagVal<Data> tagVal(Data data);

};

struct AllocPrice
{
  constexpr static const int tag = 366;
  constexpr static const char* name = "AllocPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct QuoteSetValidUntilTime
{
  constexpr static const int tag = 367;
  constexpr static const char* name = "QuoteSetValidUntilTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct QuoteEntryRejectReason
{
  constexpr static const int tag = 368;
  constexpr static const char* name = "QuoteEntryRejectReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnknownSymbol = 1;
  constexpr static const int valExchangeSecurityClosed = 2;
  constexpr static const int valQuoteExceedsLimit = 3;
  constexpr static const int valTooLateToEnter = 4;
  constexpr static const int valUnknownQuote = 5;
  constexpr static const int valDuplicateQuote = 6;
  constexpr static const int valInvalidBidOraskSpread = 7;
  constexpr static const int valInvalidPrice = 8;
  constexpr static const int valNotAuthorizedToQuoteSecurity = 9;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValUnknownSymbol = "368=1";
  constexpr static const char* tagValExchangeSecurityClosed = "368=2";
  constexpr static const char* tagValQuoteExceedsLimit = "368=3";
  constexpr static const char* tagValTooLateToEnter = "368=4";
  constexpr static const char* tagValUnknownQuote = "368=5";
  constexpr static const char* tagValDuplicateQuote = "368=6";
  constexpr static const char* tagValInvalidBidOraskSpread = "368=7";
  constexpr static const char* tagValInvalidPrice = "368=8";
  constexpr static const char* tagValNotAuthorizedToQuoteSecurity = "368=9";
  constexpr static const char* tagValOther = "368=99";

};

struct LastMsgSeqNumProcessed
{
  constexpr static const int tag = 369;
  constexpr static const char* name = "LastMsgSeqNumProcessed";

  static writeableTagVal<Int> tagVal(int data);

};

struct OnBehalfOfSendingTime
{
  constexpr static const int tag = 370;
  constexpr static const char* name = "OnBehalfOfSendingTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct RefTagID
{
  constexpr static const int tag = 371;
  constexpr static const char* name = "RefTagID";

  static writeableTagVal<Int> tagVal(int data);

};

struct RefMsgType
{
  constexpr static const int tag = 372;
  constexpr static const char* name = "RefMsgType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SessionRejectReason
{
  constexpr static const int tag = 373;
  constexpr static const char* name = "SessionRejectReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valInvalidTagNumber = 0;
  constexpr static const int valRequiredTagMissing = 1;
  constexpr static const int valTagNotDefinedForThisMessageType = 2;
  constexpr static const int valUndefinedTag = 3;
  constexpr static const int valTagSpecifiedWithoutAValue = 4;
  constexpr static const int valValueIsIncorrectoutOfRangeForThisTag = 5;
  constexpr static const int valIncorrectDataFormatForValue = 6;
  constexpr static const int valDecryptionProblem = 7;
  constexpr static const int valSignatureProblem = 8;
  constexpr static const int valCompIDProblem = 9;
  constexpr static const int valSendingTimeAccuracyProblem = 0;
  constexpr static const int valInvalidMsgType = 1;
  constexpr static const int valXMLValidationError = 2;
  constexpr static const int valTagAppearsMoreThanOnce = 3;
  constexpr static const int valTagSpecifiedOutOfRequiredOrder = 4;
  constexpr static const int valRepeatingGroupFieldsOutOfOrder = 5;
  constexpr static const int valIncorrectNumInGroupCountForRepeatingGroup = 6;
  constexpr static const int valNondataValueIncludesFieldDelimiter = 7;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValInvalidTagNumber = "373=0";
  constexpr static const char* tagValRequiredTagMissing = "373=1";
  constexpr static const char* tagValTagNotDefinedForThisMessageType = "373=2";
  constexpr static const char* tagValUndefinedTag = "373=3";
  constexpr static const char* tagValTagSpecifiedWithoutAValue = "373=4";
  constexpr static const char* tagValValueIsIncorrectoutOfRangeForThisTag = "373=5";
  constexpr static const char* tagValIncorrectDataFormatForValue = "373=6";
  constexpr static const char* tagValDecryptionProblem = "373=7";
  constexpr static const char* tagValSignatureProblem = "373=8";
  constexpr static const char* tagValCompIDProblem = "373=9";
  constexpr static const char* tagValSendingTimeAccuracyProblem = "373=0";
  constexpr static const char* tagValInvalidMsgType = "373=1";
  constexpr static const char* tagValXMLValidationError = "373=2";
  constexpr static const char* tagValTagAppearsMoreThanOnce = "373=3";
  constexpr static const char* tagValTagSpecifiedOutOfRequiredOrder = "373=4";
  constexpr static const char* tagValRepeatingGroupFieldsOutOfOrder = "373=5";
  constexpr static const char* tagValIncorrectNumInGroupCountForRepeatingGroup = "373=6";
  constexpr static const char* tagValNondataValueIncludesFieldDelimiter = "373=7";
  constexpr static const char* tagValOther = "373=99";

};

struct BidRequestTransType
{
  constexpr static const int tag = 374;
  constexpr static const char* name = "BidRequestTransType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = 'N';
  constexpr static const char valCancel = 'C';

  constexpr static const char* tagValNew = "374=N";
  constexpr static const char* tagValCancel = "374=C";

};

struct ContraBroker
{
  constexpr static const int tag = 375;
  constexpr static const char* name = "ContraBroker";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ComplianceID
{
  constexpr static const int tag = 376;
  constexpr static const char* name = "ComplianceID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SolicitedFlag
{
  constexpr static const int tag = 377;
  constexpr static const char* name = "SolicitedFlag";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valWasSolcitied = true;
  constexpr static const bool valWasNotSolicited = false;

  constexpr static const char* tagValWasSolcitied = "377=Y";
  constexpr static const char* tagValWasNotSolicited = "377=N";

};

struct ExecRestatementReason
{
  constexpr static const int tag = 378;
  constexpr static const char* name = "ExecRestatementReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valGTCorporateAction = 0;
  constexpr static const int valGTRenewalOrRestatement = 1;
  constexpr static const int valVerbalChange = 2;
  constexpr static const int valRepricingOfOrder = 3;
  constexpr static const int valBrokerOption = 4;
  constexpr static const int valPartialDeclineOfOrderQty = 5;
  constexpr static const int valCancelOnTradingHalt = 6;
  constexpr static const int valCancelOnSystemFailure = 7;
  constexpr static const int valMarketExchangeOption = 8;
  constexpr static const int valCanceledNotBest = 9;
  constexpr static const int valWarehouseRecap = 0;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValGTCorporateAction = "378=0";
  constexpr static const char* tagValGTRenewalOrRestatement = "378=1";
  constexpr static const char* tagValVerbalChange = "378=2";
  constexpr static const char* tagValRepricingOfOrder = "378=3";
  constexpr static const char* tagValBrokerOption = "378=4";
  constexpr static const char* tagValPartialDeclineOfOrderQty = "378=5";
  constexpr static const char* tagValCancelOnTradingHalt = "378=6";
  constexpr static const char* tagValCancelOnSystemFailure = "378=7";
  constexpr static const char* tagValMarketExchangeOption = "378=8";
  constexpr static const char* tagValCanceledNotBest = "378=9";
  constexpr static const char* tagValWarehouseRecap = "378=0";
  constexpr static const char* tagValOther = "378=99";

};

struct BusinessRejectRefID
{
  constexpr static const int tag = 379;
  constexpr static const char* name = "BusinessRejectRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct BusinessRejectReason
{
  constexpr static const int tag = 380;
  constexpr static const char* name = "BusinessRejectReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valOther = 0;
  constexpr static const int valUnkownID = 1;
  constexpr static const int valUnknownSecurity = 2;
  constexpr static const int valUnsupportedMessageType = 3;
  constexpr static const int valApplicationNotAvailable = 4;
  constexpr static const int valConditionallyRequiredFieldMissing = 5;
  constexpr static const int valNotAuthorized = 6;
  constexpr static const int valDeliverToFirmNotAvailableAtThisTime = 7;

  constexpr static const char* tagValOther = "380=0";
  constexpr static const char* tagValUnkownID = "380=1";
  constexpr static const char* tagValUnknownSecurity = "380=2";
  constexpr static const char* tagValUnsupportedMessageType = "380=3";
  constexpr static const char* tagValApplicationNotAvailable = "380=4";
  constexpr static const char* tagValConditionallyRequiredFieldMissing = "380=5";
  constexpr static const char* tagValNotAuthorized = "380=6";
  constexpr static const char* tagValDeliverToFirmNotAvailableAtThisTime = "380=7";

};

struct GrossTradeAmt
{
  constexpr static const int tag = 381;
  constexpr static const char* name = "GrossTradeAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoContraBrokers
{
  constexpr static const int tag = 382;
  constexpr static const char* name = "NoContraBrokers";

  static writeableTagVal<Int> tagVal(int data);

};

struct MaxMessageSize
{
  constexpr static const int tag = 383;
  constexpr static const char* name = "MaxMessageSize";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoMsgTypes
{
  constexpr static const int tag = 384;
  constexpr static const char* name = "NoMsgTypes";

  static writeableTagVal<Int> tagVal(int data);

};

struct MsgDirection
{
  constexpr static const int tag = 385;
  constexpr static const char* name = "MsgDirection";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valSend = 'S';
  constexpr static const char valReceive = 'R';

  constexpr static const char* tagValSend = "385=S";
  constexpr static const char* tagValReceive = "385=R";

};

struct NoTradingSessions
{
  constexpr static const int tag = 386;
  constexpr static const char* name = "NoTradingSessions";

  static writeableTagVal<Int> tagVal(int data);

};

struct TotalVolumeTraded
{
  constexpr static const int tag = 387;
  constexpr static const char* name = "TotalVolumeTraded";

  static writeableTagVal<Float> tagVal(float data);

};

struct DiscretionInst
{
  constexpr static const int tag = 388;
  constexpr static const char* name = "DiscretionInst";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valRelatedToDisplayedPrice = '0';
  constexpr static const char valRelatedToMarketPrice = '1';
  constexpr static const char valRelatedToPrimaryPrice = '2';
  constexpr static const char valRelatedToLocalPrimaryPrice = '3';
  constexpr static const char valRelatedToMidpointPrice = '4';
  constexpr static const char valRelatedToLastTradePrice = '5';
  constexpr static const char valRelatedToVWAP = '6';

  constexpr static const char* tagValRelatedToDisplayedPrice = "388=0";
  constexpr static const char* tagValRelatedToMarketPrice = "388=1";
  constexpr static const char* tagValRelatedToPrimaryPrice = "388=2";
  constexpr static const char* tagValRelatedToLocalPrimaryPrice = "388=3";
  constexpr static const char* tagValRelatedToMidpointPrice = "388=4";
  constexpr static const char* tagValRelatedToLastTradePrice = "388=5";
  constexpr static const char* tagValRelatedToVWAP = "388=6";

};

struct DiscretionOffsetValue
{
  constexpr static const int tag = 389;
  constexpr static const char* name = "DiscretionOffsetValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct BidID
{
  constexpr static const int tag = 390;
  constexpr static const char* name = "BidID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ClientBidID
{
  constexpr static const int tag = 391;
  constexpr static const char* name = "ClientBidID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ListName
{
  constexpr static const int tag = 392;
  constexpr static const char* name = "ListName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TotNoRelatedSym
{
  constexpr static const int tag = 393;
  constexpr static const char* name = "TotNoRelatedSym";

  static writeableTagVal<Int> tagVal(int data);

};

struct BidType
{
  constexpr static const int tag = 394;
  constexpr static const char* name = "BidType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNonDisclosedStyle = 1;
  constexpr static const int valDisclosedStyle = 2;
  constexpr static const int valNoBiddingProcess = 3;

  constexpr static const char* tagValNonDisclosedStyle = "394=1";
  constexpr static const char* tagValDisclosedStyle = "394=2";
  constexpr static const char* tagValNoBiddingProcess = "394=3";

};

struct NumTickets
{
  constexpr static const int tag = 395;
  constexpr static const char* name = "NumTickets";

  static writeableTagVal<Int> tagVal(int data);

};

struct SideValue1
{
  constexpr static const int tag = 396;
  constexpr static const char* name = "SideValue1";

  static writeableTagVal<Float> tagVal(float data);

};

struct SideValue2
{
  constexpr static const int tag = 397;
  constexpr static const char* name = "SideValue2";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoBidDescriptors
{
  constexpr static const int tag = 398;
  constexpr static const char* name = "NoBidDescriptors";

  static writeableTagVal<Int> tagVal(int data);

};

struct BidDescriptorType
{
  constexpr static const int tag = 399;
  constexpr static const char* name = "BidDescriptorType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSector = 1;
  constexpr static const int valCountry = 2;
  constexpr static const int valIndex = 3;

  constexpr static const char* tagValSector = "399=1";
  constexpr static const char* tagValCountry = "399=2";
  constexpr static const char* tagValIndex = "399=3";

};

struct BidDescriptor
{
  constexpr static const int tag = 400;
  constexpr static const char* name = "BidDescriptor";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SideValueInd
{
  constexpr static const int tag = 401;
  constexpr static const char* name = "SideValueInd";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSideValue = 1;
  constexpr static const int valSideValue2 = 2;

  constexpr static const char* tagValSideValue = "401=1";
  constexpr static const char* tagValSideValue2 = "401=2";

};

struct LiquidityPctLow
{
  constexpr static const int tag = 402;
  constexpr static const char* name = "LiquidityPctLow";

  static writeableTagVal<Float> tagVal(float data);

};

struct LiquidityPctHigh
{
  constexpr static const int tag = 403;
  constexpr static const char* name = "LiquidityPctHigh";

  static writeableTagVal<Float> tagVal(float data);

};

struct LiquidityValue
{
  constexpr static const int tag = 404;
  constexpr static const char* name = "LiquidityValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct EFPTrackingError
{
  constexpr static const int tag = 405;
  constexpr static const char* name = "EFPTrackingError";

  static writeableTagVal<Float> tagVal(float data);

};

struct FairValue
{
  constexpr static const int tag = 406;
  constexpr static const char* name = "FairValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct OutsideIndexPct
{
  constexpr static const int tag = 407;
  constexpr static const char* name = "OutsideIndexPct";

  static writeableTagVal<Float> tagVal(float data);

};

struct ValueOfFutures
{
  constexpr static const int tag = 408;
  constexpr static const char* name = "ValueOfFutures";

  static writeableTagVal<Float> tagVal(float data);

};

struct LiquidityIndType
{
  constexpr static const int tag = 409;
  constexpr static const char* name = "LiquidityIndType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int val5dayMovingAverage = 1;
  constexpr static const int val20DayMovingAverage = 2;
  constexpr static const int valNormalMarketSize = 3;
  constexpr static const int valOther = 4;

  constexpr static const char* tagVal5dayMovingAverage = "409=1";
  constexpr static const char* tagVal20DayMovingAverage = "409=2";
  constexpr static const char* tagValNormalMarketSize = "409=3";
  constexpr static const char* tagValOther = "409=4";

};

struct WtAverageLiquidity
{
  constexpr static const int tag = 410;
  constexpr static const char* name = "WtAverageLiquidity";

  static writeableTagVal<Float> tagVal(float data);

};

struct ExchangeForPhysical
{
  constexpr static const int tag = 411;
  constexpr static const char* name = "ExchangeForPhysical";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valTrue = true;
  constexpr static const bool valFalse = false;

  constexpr static const char* tagValTrue = "411=Y";
  constexpr static const char* tagValFalse = "411=N";

};

struct OutMainCntryUIndex
{
  constexpr static const int tag = 412;
  constexpr static const char* name = "OutMainCntryUIndex";

  static writeableTagVal<Float> tagVal(float data);

};

struct CrossPercent
{
  constexpr static const int tag = 413;
  constexpr static const char* name = "CrossPercent";

  static writeableTagVal<Float> tagVal(float data);

};

struct ProgRptReqs
{
  constexpr static const int tag = 414;
  constexpr static const char* name = "ProgRptReqs";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valBuySideExplicitlyRequestsStatus = 1;
  constexpr static const int valSellSidePeriodicallySendsStatus = 2;
  constexpr static const int valRealTimeExecutionReports = 3;

  constexpr static const char* tagValBuySideExplicitlyRequestsStatus = "414=1";
  constexpr static const char* tagValSellSidePeriodicallySendsStatus = "414=2";
  constexpr static const char* tagValRealTimeExecutionReports = "414=3";

};

struct ProgPeriodInterval
{
  constexpr static const int tag = 415;
  constexpr static const char* name = "ProgPeriodInterval";

  static writeableTagVal<Int> tagVal(int data);

};

struct IncTaxInd
{
  constexpr static const int tag = 416;
  constexpr static const char* name = "IncTaxInd";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNet = 1;
  constexpr static const int valGross = 2;

  constexpr static const char* tagValNet = "416=1";
  constexpr static const char* tagValGross = "416=2";

};

struct NumBidders
{
  constexpr static const int tag = 417;
  constexpr static const char* name = "NumBidders";

  static writeableTagVal<Int> tagVal(int data);

};

struct BidTradeType
{
  constexpr static const int tag = 418;
  constexpr static const char* name = "BidTradeType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valRiskTrade = 'R';
  constexpr static const char valVWAPGuarantee = 'G';
  constexpr static const char valAgency = 'A';
  constexpr static const char valGuaranteedClose = 'J';

  constexpr static const char* tagValRiskTrade = "418=R";
  constexpr static const char* tagValVWAPGuarantee = "418=G";
  constexpr static const char* tagValAgency = "418=A";
  constexpr static const char* tagValGuaranteedClose = "418=J";

};

struct BasisPxType
{
  constexpr static const int tag = 419;
  constexpr static const char* name = "BasisPxType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valClosingPriceAtMorningSession = '2';
  constexpr static const char valClosingPrice = '3';
  constexpr static const char valCurrentPrice = '4';
  constexpr static const char valSQ = '5';
  constexpr static const char valVWAPThroughADay = '6';
  constexpr static const char valVWAPThroughAMorningSession = '7';
  constexpr static const char valVWAPThroughAnAfternoonSession = '8';
  constexpr static const char valVWAPThroughADayExceptYORI = '9';
  constexpr static const char valVWAPThroughAMorningSessionExceptYORI = 'A';
  constexpr static const char valVWAPThroughAnAfternoonSessionExceptYORI = 'B';
  constexpr static const char valStrike = 'C';
  constexpr static const char valOpen = 'D';
  constexpr static const char valOthers = 'Z';

  constexpr static const char* tagValClosingPriceAtMorningSession = "419=2";
  constexpr static const char* tagValClosingPrice = "419=3";
  constexpr static const char* tagValCurrentPrice = "419=4";
  constexpr static const char* tagValSQ = "419=5";
  constexpr static const char* tagValVWAPThroughADay = "419=6";
  constexpr static const char* tagValVWAPThroughAMorningSession = "419=7";
  constexpr static const char* tagValVWAPThroughAnAfternoonSession = "419=8";
  constexpr static const char* tagValVWAPThroughADayExceptYORI = "419=9";
  constexpr static const char* tagValVWAPThroughAMorningSessionExceptYORI = "419=A";
  constexpr static const char* tagValVWAPThroughAnAfternoonSessionExceptYORI = "419=B";
  constexpr static const char* tagValStrike = "419=C";
  constexpr static const char* tagValOpen = "419=D";
  constexpr static const char* tagValOthers = "419=Z";

};

struct NoBidComponents
{
  constexpr static const int tag = 420;
  constexpr static const char* name = "NoBidComponents";

  static writeableTagVal<Int> tagVal(int data);

};

struct Country
{
  constexpr static const int tag = 421;
  constexpr static const char* name = "Country";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TotNoStrikes
{
  constexpr static const int tag = 422;
  constexpr static const char* name = "TotNoStrikes";

  static writeableTagVal<Int> tagVal(int data);

};

struct PriceType
{
  constexpr static const int tag = 423;
  constexpr static const char* name = "PriceType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPercentageegPercentOfPar = 1;
  constexpr static const int valPerUnit = 2;
  constexpr static const int valFixedAmount = 3;
  constexpr static const int valDiscountPercentagePointsBelowPar = 4;
  constexpr static const int valPremiumPercentagePointsOverPar = 5;
  constexpr static const int valSpread = 6;
  constexpr static const int valTEDPrice = 7;
  constexpr static const int valTEDYield = 8;
  constexpr static const int valYield = 9;
  constexpr static const int valFixedCabinetTradePrice = 0;
  constexpr static const int valVariableCabinetTradePrice = 1;

  constexpr static const char* tagValPercentageegPercentOfPar = "423=1";
  constexpr static const char* tagValPerUnit = "423=2";
  constexpr static const char* tagValFixedAmount = "423=3";
  constexpr static const char* tagValDiscountPercentagePointsBelowPar = "423=4";
  constexpr static const char* tagValPremiumPercentagePointsOverPar = "423=5";
  constexpr static const char* tagValSpread = "423=6";
  constexpr static const char* tagValTEDPrice = "423=7";
  constexpr static const char* tagValTEDYield = "423=8";
  constexpr static const char* tagValYield = "423=9";
  constexpr static const char* tagValFixedCabinetTradePrice = "423=0";
  constexpr static const char* tagValVariableCabinetTradePrice = "423=1";

};

struct DayOrderQty
{
  constexpr static const int tag = 424;
  constexpr static const char* name = "DayOrderQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct DayCumQty
{
  constexpr static const int tag = 425;
  constexpr static const char* name = "DayCumQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct DayAvgPx
{
  constexpr static const int tag = 426;
  constexpr static const char* name = "DayAvgPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct GTBookingInst
{
  constexpr static const int tag = 427;
  constexpr static const char* name = "GTBookingInst";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valBookOutAllTradesOnDayOfExecution = 0;
  constexpr static const int valAccumulateExecutionsUntilOrderIsFilledOrExpires = 1;
  constexpr static const int valAccumulateUntilVerballyNotifiedOtherwise = 2;

  constexpr static const char* tagValBookOutAllTradesOnDayOfExecution = "427=0";
  constexpr static const char* tagValAccumulateExecutionsUntilOrderIsFilledOrExpires = "427=1";
  constexpr static const char* tagValAccumulateUntilVerballyNotifiedOtherwise = "427=2";

};

struct NoStrikes
{
  constexpr static const int tag = 428;
  constexpr static const char* name = "NoStrikes";

  static writeableTagVal<Int> tagVal(int data);

};

struct ListStatusType
{
  constexpr static const int tag = 429;
  constexpr static const char* name = "ListStatusType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAck = 1;
  constexpr static const int valResponse = 2;
  constexpr static const int valTimed = 3;
  constexpr static const int valExecStarted = 4;
  constexpr static const int valAllDone = 5;
  constexpr static const int valAlert = 6;

  constexpr static const char* tagValAck = "429=1";
  constexpr static const char* tagValResponse = "429=2";
  constexpr static const char* tagValTimed = "429=3";
  constexpr static const char* tagValExecStarted = "429=4";
  constexpr static const char* tagValAllDone = "429=5";
  constexpr static const char* tagValAlert = "429=6";

};

struct NetGrossInd
{
  constexpr static const int tag = 430;
  constexpr static const char* name = "NetGrossInd";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNet = 1;
  constexpr static const int valGross = 2;

  constexpr static const char* tagValNet = "430=1";
  constexpr static const char* tagValGross = "430=2";

};

struct ListOrderStatus
{
  constexpr static const int tag = 431;
  constexpr static const char* name = "ListOrderStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valInBiddingProcess = 1;
  constexpr static const int valReceivedForExecution = 2;
  constexpr static const int valExecuting = 3;
  constexpr static const int valCanceling = 4;
  constexpr static const int valAlert = 5;
  constexpr static const int valAllDone = 6;
  constexpr static const int valReject = 7;

  constexpr static const char* tagValInBiddingProcess = "431=1";
  constexpr static const char* tagValReceivedForExecution = "431=2";
  constexpr static const char* tagValExecuting = "431=3";
  constexpr static const char* tagValCanceling = "431=4";
  constexpr static const char* tagValAlert = "431=5";
  constexpr static const char* tagValAllDone = "431=6";
  constexpr static const char* tagValReject = "431=7";

};

struct ExpireDate
{
  constexpr static const int tag = 432;
  constexpr static const char* name = "ExpireDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct ListExecInstType
{
  constexpr static const int tag = 433;
  constexpr static const char* name = "ListExecInstType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valImmediate = '1';
  constexpr static const char valWaitForExecuteInstruction = '2';
  constexpr static const char valExchangeOrswitchCIVOrderSellDriven = '3';
  constexpr static const char valExchangeOrswitchCIVOrderBuyDrivenCashTopUp = '4';
  constexpr static const char valExchangeOrswitchCIVOrderBuyDrivenCashWithdraw = '5';

  constexpr static const char* tagValImmediate = "433=1";
  constexpr static const char* tagValWaitForExecuteInstruction = "433=2";
  constexpr static const char* tagValExchangeOrswitchCIVOrderSellDriven = "433=3";
  constexpr static const char* tagValExchangeOrswitchCIVOrderBuyDrivenCashTopUp = "433=4";
  constexpr static const char* tagValExchangeOrswitchCIVOrderBuyDrivenCashWithdraw = "433=5";

};

struct CxlRejResponseTo
{
  constexpr static const int tag = 434;
  constexpr static const char* name = "CxlRejResponseTo";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valOrderCancelRequest = '1';
  constexpr static const char valOrderCancelOrReplaceRequest = '2';

  constexpr static const char* tagValOrderCancelRequest = "434=1";
  constexpr static const char* tagValOrderCancelOrReplaceRequest = "434=2";

};

struct UnderlyingCouponRate
{
  constexpr static const int tag = 435;
  constexpr static const char* name = "UnderlyingCouponRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingContractMultiplier
{
  constexpr static const int tag = 436;
  constexpr static const char* name = "UnderlyingContractMultiplier";

  static writeableTagVal<Float> tagVal(float data);

};

struct ContraTradeQty
{
  constexpr static const int tag = 437;
  constexpr static const char* name = "ContraTradeQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct ContraTradeTime
{
  constexpr static const int tag = 438;
  constexpr static const char* name = "ContraTradeTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct ClearingFirm
{
  constexpr static const int tag = 439;
  constexpr static const char* name = "ClearingFirm";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ClearingAccount
{
  constexpr static const int tag = 440;
  constexpr static const char* name = "ClearingAccount";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LiquidityNumSecurities
{
  constexpr static const int tag = 441;
  constexpr static const char* name = "LiquidityNumSecurities";

  static writeableTagVal<Int> tagVal(int data);

};

struct MultiLegReportingType
{
  constexpr static const int tag = 442;
  constexpr static const char* name = "MultiLegReportingType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valSingleSecurity = '1';
  constexpr static const char valIndividualLegOfAMultiLegSecurity = '2';
  constexpr static const char valMultiLegSecurity = '3';

  constexpr static const char* tagValSingleSecurity = "442=1";
  constexpr static const char* tagValIndividualLegOfAMultiLegSecurity = "442=2";
  constexpr static const char* tagValMultiLegSecurity = "442=3";

};

struct StrikeTime
{
  constexpr static const int tag = 443;
  constexpr static const char* name = "StrikeTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct ListStatusText
{
  constexpr static const int tag = 444;
  constexpr static const char* name = "ListStatusText";

  static writeableTagVal<String> tagVal(const char* data);

};

struct EncodedListStatusTextLen
{
  constexpr static const int tag = 445;
  constexpr static const char* name = "EncodedListStatusTextLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedListStatusText
{
  constexpr static const int tag = 446;
  constexpr static const char* name = "EncodedListStatusText";

  static writeableTagVal<Data> tagVal(Data data);

};

struct PartyIDSource
{
  constexpr static const int tag = 447;
  constexpr static const char* name = "PartyIDSource";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valBICBankIdentificationCodeSwiftManagedCodeISO9362 = 'B';
  constexpr static const char valGenerallyAcceptedMarketParticipantIdentifier = 'C';
  constexpr static const char valProprietaryOrCustomCode = 'D';
  constexpr static const char valISOCountryCode = 'E';
  constexpr static const char valSettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode = 'F';
  constexpr static const char valMICISO0383MarketIdentifierCode = 'G';
  constexpr static const char valCSDParticipantOrmemberCode = 'H';
  constexpr static const char valKoreanInvestorID = '1';
  constexpr static const char valTaiwaneseQualifiedForeignInvestorIDQFIIOrFID = '2';
  constexpr static const char valTaiwaneseTradingAccount = '3';
  constexpr static const char valMalaysianCentralDepositoryMCDNumber = '4';
  constexpr static const char valChineseBShare = '5';
  constexpr static const char valUKNationalInsuranceOrPensionNumber = '6';
  constexpr static const char valUSSocialSecurityNumber = '7';
  constexpr static const char valUSEmployerIdentificationNumber = '8';
  constexpr static const char valAustralianBusinessNumber = '9';
  constexpr static const char valAustralianTaxFileNumber = 'A';
  constexpr static const char valDirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC = 'I';

  constexpr static const char* tagValBICBankIdentificationCodeSwiftManagedCodeISO9362 = "447=B";
  constexpr static const char* tagValGenerallyAcceptedMarketParticipantIdentifier = "447=C";
  constexpr static const char* tagValProprietaryOrCustomCode = "447=D";
  constexpr static const char* tagValISOCountryCode = "447=E";
  constexpr static const char* tagValSettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode = "447=F";
  constexpr static const char* tagValMICISO0383MarketIdentifierCode = "447=G";
  constexpr static const char* tagValCSDParticipantOrmemberCode = "447=H";
  constexpr static const char* tagValKoreanInvestorID = "447=1";
  constexpr static const char* tagValTaiwaneseQualifiedForeignInvestorIDQFIIOrFID = "447=2";
  constexpr static const char* tagValTaiwaneseTradingAccount = "447=3";
  constexpr static const char* tagValMalaysianCentralDepositoryMCDNumber = "447=4";
  constexpr static const char* tagValChineseBShare = "447=5";
  constexpr static const char* tagValUKNationalInsuranceOrPensionNumber = "447=6";
  constexpr static const char* tagValUSSocialSecurityNumber = "447=7";
  constexpr static const char* tagValUSEmployerIdentificationNumber = "447=8";
  constexpr static const char* tagValAustralianBusinessNumber = "447=9";
  constexpr static const char* tagValAustralianTaxFileNumber = "447=A";
  constexpr static const char* tagValDirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC = "447=I";

};

struct PartyID
{
  constexpr static const int tag = 448;
  constexpr static const char* name = "PartyID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TotalVolumeTradedDate
{
  constexpr static const int tag = 449;
  constexpr static const char* name = "TotalVolumeTradedDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct TotalVolumeTrade
{
  constexpr static const int tag = 450;
  constexpr static const char* name = "TotalVolumeTrade";

  static writeableTagVal<Time> tagVal(Time data);

};

struct NetChgPrevDay
{
  constexpr static const int tag = 451;
  constexpr static const char* name = "NetChgPrevDay";

  static writeableTagVal<Float> tagVal(float data);

};

struct PartyRole
{
  constexpr static const int tag = 452;
  constexpr static const char* name = "PartyRole";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valExecutingFirm = 1;
  constexpr static const int valBrokerOfCredit = 2;
  constexpr static const int valClientID = 3;
  constexpr static const int valClearingFirm = 4;
  constexpr static const int valInvestorID = 5;
  constexpr static const int valIntroducingFirm = 6;
  constexpr static const int valEnteringFirm = 7;
  constexpr static const int valLocateOrLendingFirm = 8;
  constexpr static const int valFundManagerClientID = 9;
  constexpr static const int valSettlementLocation = 0;
  constexpr static const int valOrderOriginationTrader = 1;
  constexpr static const int valExecutingTrader = 2;
  constexpr static const int valOrderOriginationFirm = 3;
  constexpr static const int valGiveupClearingFirm = 4;
  constexpr static const int valCorrespondantClearingFirm = 5;
  constexpr static const int valExecutingSystem = 6;
  constexpr static const int valContraFirm = 7;
  constexpr static const int valContraClearingFirm = 8;
  constexpr static const int valSponsoringFirm = 9;
  constexpr static const int valUnderlyingContraFirm = 20;
  constexpr static const int valClearingOrganization = 2;
  constexpr static const int valExchange = 22;
  constexpr static const int valCustomerAccount = 24;
  constexpr static const int valCorrespondentClearingOrganization = 25;
  constexpr static const int valCorrespondentBroker = 26;
  constexpr static const int valBuyerOrSeller = 27;
  constexpr static const int valCustodian = 28;
  constexpr static const int valIntermediary = 29;
  constexpr static const int valAgent = 30;
  constexpr static const int valSubCustodian = 3;
  constexpr static const int valBeneficiary = 32;
  constexpr static const int valInterestedParty = 33;
  constexpr static const int valRegulatoryBody = 34;
  constexpr static const int valLiquidityProvider = 35;
  constexpr static const int valEnteringTrader = 36;
  constexpr static const int valContraTrader = 37;
  constexpr static const int valPositionAccount = 38;

  constexpr static const char* tagValExecutingFirm = "452=1";
  constexpr static const char* tagValBrokerOfCredit = "452=2";
  constexpr static const char* tagValClientID = "452=3";
  constexpr static const char* tagValClearingFirm = "452=4";
  constexpr static const char* tagValInvestorID = "452=5";
  constexpr static const char* tagValIntroducingFirm = "452=6";
  constexpr static const char* tagValEnteringFirm = "452=7";
  constexpr static const char* tagValLocateOrLendingFirm = "452=8";
  constexpr static const char* tagValFundManagerClientID = "452=9";
  constexpr static const char* tagValSettlementLocation = "452=0";
  constexpr static const char* tagValOrderOriginationTrader = "452=1";
  constexpr static const char* tagValExecutingTrader = "452=2";
  constexpr static const char* tagValOrderOriginationFirm = "452=3";
  constexpr static const char* tagValGiveupClearingFirm = "452=4";
  constexpr static const char* tagValCorrespondantClearingFirm = "452=5";
  constexpr static const char* tagValExecutingSystem = "452=6";
  constexpr static const char* tagValContraFirm = "452=7";
  constexpr static const char* tagValContraClearingFirm = "452=8";
  constexpr static const char* tagValSponsoringFirm = "452=9";
  constexpr static const char* tagValUnderlyingContraFirm = "452=20";
  constexpr static const char* tagValClearingOrganization = "452=2";
  constexpr static const char* tagValExchange = "452=22";
  constexpr static const char* tagValCustomerAccount = "452=24";
  constexpr static const char* tagValCorrespondentClearingOrganization = "452=25";
  constexpr static const char* tagValCorrespondentBroker = "452=26";
  constexpr static const char* tagValBuyerOrSeller = "452=27";
  constexpr static const char* tagValCustodian = "452=28";
  constexpr static const char* tagValIntermediary = "452=29";
  constexpr static const char* tagValAgent = "452=30";
  constexpr static const char* tagValSubCustodian = "452=3";
  constexpr static const char* tagValBeneficiary = "452=32";
  constexpr static const char* tagValInterestedParty = "452=33";
  constexpr static const char* tagValRegulatoryBody = "452=34";
  constexpr static const char* tagValLiquidityProvider = "452=35";
  constexpr static const char* tagValEnteringTrader = "452=36";
  constexpr static const char* tagValContraTrader = "452=37";
  constexpr static const char* tagValPositionAccount = "452=38";

};

struct NoPartyIDs
{
  constexpr static const int tag = 453;
  constexpr static const char* name = "NoPartyIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoSecurityAltID
{
  constexpr static const int tag = 454;
  constexpr static const char* name = "NoSecurityAltID";

  static writeableTagVal<Int> tagVal(int data);

};

struct SecurityAltID
{
  constexpr static const int tag = 455;
  constexpr static const char* name = "SecurityAltID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecurityAltIDSource
{
  constexpr static const int tag = 456;
  constexpr static const char* name = "SecurityAltIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoUnderlyingSecurityAltID
{
  constexpr static const int tag = 457;
  constexpr static const char* name = "NoUnderlyingSecurityAltID";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingSecurityAltID
{
  constexpr static const int tag = 458;
  constexpr static const char* name = "UnderlyingSecurityAltID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSecurityAltIDSource
{
  constexpr static const int tag = 459;
  constexpr static const char* name = "UnderlyingSecurityAltIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Product
{
  constexpr static const int tag = 460;
  constexpr static const char* name = "Product";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAGENCY = 1;
  constexpr static const int valCOMMODITY = 2;
  constexpr static const int valCORPORATE = 3;
  constexpr static const int valCURRENCY = 4;
  constexpr static const int valEQUITY = 5;
  constexpr static const int valGOVERNMENT = 6;
  constexpr static const int valINDEX = 7;
  constexpr static const int valLOAN = 8;
  constexpr static const int valMONEYMARKET = 9;
  constexpr static const int valMORTGAGE = 10;
  constexpr static const int valMUNICIPAL = 11;
  constexpr static const int valOTHER = 12;
  constexpr static const int valFINANCING = 13;

  constexpr static const char* tagValAGENCY = "460=1";
  constexpr static const char* tagValCOMMODITY = "460=2";
  constexpr static const char* tagValCORPORATE = "460=3";
  constexpr static const char* tagValCURRENCY = "460=4";
  constexpr static const char* tagValEQUITY = "460=5";
  constexpr static const char* tagValGOVERNMENT = "460=6";
  constexpr static const char* tagValINDEX = "460=7";
  constexpr static const char* tagValLOAN = "460=8";
  constexpr static const char* tagValMONEYMARKET = "460=9";
  constexpr static const char* tagValMORTGAGE = "460=10";
  constexpr static const char* tagValMUNICIPAL = "460=11";
  constexpr static const char* tagValOTHER = "460=12";
  constexpr static const char* tagValFINANCING = "460=13";

};

struct CFICode
{
  constexpr static const int tag = 461;
  constexpr static const char* name = "CFICode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingProduct
{
  constexpr static const int tag = 462;
  constexpr static const char* name = "UnderlyingProduct";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingCFICode
{
  constexpr static const int tag = 463;
  constexpr static const char* name = "UnderlyingCFICode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TestMessageIndicator
{
  constexpr static const int tag = 464;
  constexpr static const char* name = "TestMessageIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valTrue = true;
  constexpr static const bool valFalse = false;

  constexpr static const char* tagValTrue = "464=Y";
  constexpr static const char* tagValFalse = "464=N";

};

struct QuantityType
{
  constexpr static const int tag = 465;
  constexpr static const char* name = "QuantityType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSHARES = 1;
  constexpr static const int valBONDS = 2;
  constexpr static const int valCURRENTFACE = 3;
  constexpr static const int valORIGINALFACE = 4;
  constexpr static const int valCURRENCY = 5;
  constexpr static const int valCONTRACTS = 6;
  constexpr static const int valOTHER = 7;
  constexpr static const int valPAR = 8;

  constexpr static const char* tagValSHARES = "465=1";
  constexpr static const char* tagValBONDS = "465=2";
  constexpr static const char* tagValCURRENTFACE = "465=3";
  constexpr static const char* tagValORIGINALFACE = "465=4";
  constexpr static const char* tagValCURRENCY = "465=5";
  constexpr static const char* tagValCONTRACTS = "465=6";
  constexpr static const char* tagValOTHER = "465=7";
  constexpr static const char* tagValPAR = "465=8";

};

struct BookingRefID
{
  constexpr static const int tag = 466;
  constexpr static const char* name = "BookingRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct IndividualAllocID
{
  constexpr static const int tag = 467;
  constexpr static const char* name = "IndividualAllocID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RoundingDirection
{
  constexpr static const int tag = 468;
  constexpr static const char* name = "RoundingDirection";

  static writeableTagVal<Char> tagVal(char data);

};

struct RoundingModulus
{
  constexpr static const int tag = 469;
  constexpr static const char* name = "RoundingModulus";

  static writeableTagVal<Float> tagVal(float data);

};

struct CountryOfIssue
{
  constexpr static const int tag = 470;
  constexpr static const char* name = "CountryOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct StateOrProvinceOfIssue
{
  constexpr static const int tag = 471;
  constexpr static const char* name = "StateOrProvinceOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LocaleOfIssue
{
  constexpr static const int tag = 472;
  constexpr static const char* name = "LocaleOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoRegistDtls
{
  constexpr static const int tag = 473;
  constexpr static const char* name = "NoRegistDtls";

  static writeableTagVal<Int> tagVal(int data);

};

struct MailingDtls
{
  constexpr static const int tag = 474;
  constexpr static const char* name = "MailingDtls";

  static writeableTagVal<String> tagVal(const char* data);

};

struct InvestorCountryOfResidence
{
  constexpr static const int tag = 475;
  constexpr static const char* name = "InvestorCountryOfResidence";

  static writeableTagVal<String> tagVal(const char* data);

};

struct PaymentRef
{
  constexpr static const int tag = 476;
  constexpr static const char* name = "PaymentRef";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DistribPaymentMethod
{
  constexpr static const int tag = 477;
  constexpr static const char* name = "DistribPaymentMethod";

  static writeableTagVal<Int> tagVal(int data);

};

struct CashDistribCurr
{
  constexpr static const int tag = 478;
  constexpr static const char* name = "CashDistribCurr";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CommCurrency
{
  constexpr static const int tag = 479;
  constexpr static const char* name = "CommCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CancellationRights
{
  constexpr static const int tag = 480;
  constexpr static const char* name = "CancellationRights";

  static writeableTagVal<Char> tagVal(char data);

};

struct MoneyLaunderingStatus
{
  constexpr static const int tag = 481;
  constexpr static const char* name = "MoneyLaunderingStatus";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valPassed = 'Y';
  constexpr static const char valNotChecked = 'N';
  constexpr static const char valExemptBelowTheLimit = '1';
  constexpr static const char valExemptClientMoneyTypeExemption = '2';
  constexpr static const char valExemptAuthorisedCreditOrFinancialInstitution = '3';

  constexpr static const char* tagValPassed = "481=Y";
  constexpr static const char* tagValNotChecked = "481=N";
  constexpr static const char* tagValExemptBelowTheLimit = "481=1";
  constexpr static const char* tagValExemptClientMoneyTypeExemption = "481=2";
  constexpr static const char* tagValExemptAuthorisedCreditOrFinancialInstitution = "481=3";

};

struct MailingInst
{
  constexpr static const int tag = 482;
  constexpr static const char* name = "MailingInst";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TransBkdTime
{
  constexpr static const int tag = 483;
  constexpr static const char* name = "TransBkdTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct ExecPriceType
{
  constexpr static const int tag = 484;
  constexpr static const char* name = "ExecPriceType";

  static writeableTagVal<Char> tagVal(char data);

};

struct ExecPriceAdjustment
{
  constexpr static const int tag = 485;
  constexpr static const char* name = "ExecPriceAdjustment";

  static writeableTagVal<Float> tagVal(float data);

};

struct DateOfBirth
{
  constexpr static const int tag = 486;
  constexpr static const char* name = "DateOfBirth";

  static writeableTagVal<Date> tagVal(Date data);

};

struct TradeReportTransType
{
  constexpr static const int tag = 487;
  constexpr static const char* name = "TradeReportTransType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNew = 0;
  constexpr static const int valCancel = 1;
  constexpr static const int valReplace = 2;
  constexpr static const int valRelease = 3;
  constexpr static const int valReverse = 4;

  constexpr static const char* tagValNew = "487=0";
  constexpr static const char* tagValCancel = "487=1";
  constexpr static const char* tagValReplace = "487=2";
  constexpr static const char* tagValRelease = "487=3";
  constexpr static const char* tagValReverse = "487=4";

};

struct CardHolderName
{
  constexpr static const int tag = 488;
  constexpr static const char* name = "CardHolderName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CardNumber
{
  constexpr static const int tag = 489;
  constexpr static const char* name = "CardNumber";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CardExpDate
{
  constexpr static const int tag = 490;
  constexpr static const char* name = "CardExpDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct CardIssNum
{
  constexpr static const int tag = 491;
  constexpr static const char* name = "CardIssNum";

  static writeableTagVal<String> tagVal(const char* data);

};

struct PaymentMethod
{
  constexpr static const int tag = 492;
  constexpr static const char* name = "PaymentMethod";

  static writeableTagVal<Int> tagVal(int data);

};

struct RegistAcctType
{
  constexpr static const int tag = 493;
  constexpr static const char* name = "RegistAcctType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Designation
{
  constexpr static const int tag = 494;
  constexpr static const char* name = "Designation";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TaxAdvantageType
{
  constexpr static const int tag = 495;
  constexpr static const char* name = "TaxAdvantageType";

  static writeableTagVal<Int> tagVal(int data);

};

struct RegistRejReasonText
{
  constexpr static const int tag = 496;
  constexpr static const char* name = "RegistRejReasonText";

  static writeableTagVal<String> tagVal(const char* data);

};

struct FundRenewWaiv
{
  constexpr static const int tag = 497;
  constexpr static const char* name = "FundRenewWaiv";

  static writeableTagVal<Char> tagVal(char data);

};

struct CashDistribAgentName
{
  constexpr static const int tag = 498;
  constexpr static const char* name = "CashDistribAgentName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashDistribAgentCode
{
  constexpr static const int tag = 499;
  constexpr static const char* name = "CashDistribAgentCode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashDistribAgentAcctNumber
{
  constexpr static const int tag = 500;
  constexpr static const char* name = "CashDistribAgentAcctNumber";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashDistribPayRef
{
  constexpr static const int tag = 501;
  constexpr static const char* name = "CashDistribPayRef";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CashDistribAgentAcctName
{
  constexpr static const int tag = 502;
  constexpr static const char* name = "CashDistribAgentAcctName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CardStartDate
{
  constexpr static const int tag = 503;
  constexpr static const char* name = "CardStartDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct PaymentDate
{
  constexpr static const int tag = 504;
  constexpr static const char* name = "PaymentDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct PaymentRemitterID
{
  constexpr static const int tag = 505;
  constexpr static const char* name = "PaymentRemitterID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RegistStatus
{
  constexpr static const int tag = 506;
  constexpr static const char* name = "RegistStatus";

  static writeableTagVal<Char> tagVal(char data);

};

struct RegistRejReasonCode
{
  constexpr static const int tag = 507;
  constexpr static const char* name = "RegistRejReasonCode";

  static writeableTagVal<Int> tagVal(int data);

};

struct RegistRefID
{
  constexpr static const int tag = 508;
  constexpr static const char* name = "RegistRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RegistDtls
{
  constexpr static const int tag = 509;
  constexpr static const char* name = "RegistDtls";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoDistribInsts
{
  constexpr static const int tag = 510;
  constexpr static const char* name = "NoDistribInsts";

  static writeableTagVal<Int> tagVal(int data);

};

struct RegistEmail
{
  constexpr static const int tag = 511;
  constexpr static const char* name = "RegistEmail";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DistribPercentage
{
  constexpr static const int tag = 512;
  constexpr static const char* name = "DistribPercentage";

  static writeableTagVal<Float> tagVal(float data);

};

struct RegistID
{
  constexpr static const int tag = 513;
  constexpr static const char* name = "RegistID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RegistTransType
{
  constexpr static const int tag = 514;
  constexpr static const char* name = "RegistTransType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valNew = '0';
  constexpr static const char valReplace = '1';
  constexpr static const char valCancel = '2';

  constexpr static const char* tagValNew = "514=0";
  constexpr static const char* tagValReplace = "514=1";
  constexpr static const char* tagValCancel = "514=2";

};

struct ExecValuationPoint
{
  constexpr static const int tag = 515;
  constexpr static const char* name = "ExecValuationPoint";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct OrderPercent
{
  constexpr static const int tag = 516;
  constexpr static const char* name = "OrderPercent";

  static writeableTagVal<Float> tagVal(float data);

};

struct OwnershipType
{
  constexpr static const int tag = 517;
  constexpr static const char* name = "OwnershipType";

  static writeableTagVal<Char> tagVal(char data);

};

struct NoContAmts
{
  constexpr static const int tag = 518;
  constexpr static const char* name = "NoContAmts";

  static writeableTagVal<Int> tagVal(int data);

};

struct ContAmtType
{
  constexpr static const int tag = 519;
  constexpr static const char* name = "ContAmtType";

  static writeableTagVal<Int> tagVal(int data);

};

struct ContAmtValue
{
  constexpr static const int tag = 520;
  constexpr static const char* name = "ContAmtValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct ContAmtCurr
{
  constexpr static const int tag = 521;
  constexpr static const char* name = "ContAmtCurr";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OwnerType
{
  constexpr static const int tag = 522;
  constexpr static const char* name = "OwnerType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valIndividualInvestor = 1;
  constexpr static const int valPublicCompany = 2;
  constexpr static const int valPrivateCompany = 3;
  constexpr static const int valIndividualTrustee = 4;
  constexpr static const int valCompanyTrustee = 5;
  constexpr static const int valPensionPlan = 6;
  constexpr static const int valCustodianUnderGiftsToMinorsAct = 7;
  constexpr static const int valTrusts = 8;
  constexpr static const int valFiduciaries = 9;
  constexpr static const int valNetworkingSubAccount = 0;
  constexpr static const int valNonProfitOrganization = 1;
  constexpr static const int valCorporateBody = 2;
  constexpr static const int valNominee = 3;

  constexpr static const char* tagValIndividualInvestor = "522=1";
  constexpr static const char* tagValPublicCompany = "522=2";
  constexpr static const char* tagValPrivateCompany = "522=3";
  constexpr static const char* tagValIndividualTrustee = "522=4";
  constexpr static const char* tagValCompanyTrustee = "522=5";
  constexpr static const char* tagValPensionPlan = "522=6";
  constexpr static const char* tagValCustodianUnderGiftsToMinorsAct = "522=7";
  constexpr static const char* tagValTrusts = "522=8";
  constexpr static const char* tagValFiduciaries = "522=9";
  constexpr static const char* tagValNetworkingSubAccount = "522=0";
  constexpr static const char* tagValNonProfitOrganization = "522=1";
  constexpr static const char* tagValCorporateBody = "522=2";
  constexpr static const char* tagValNominee = "522=3";

};

struct PartySubID
{
  constexpr static const int tag = 523;
  constexpr static const char* name = "PartySubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NestedPartyID
{
  constexpr static const int tag = 524;
  constexpr static const char* name = "NestedPartyID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NestedPartyIDSource
{
  constexpr static const int tag = 525;
  constexpr static const char* name = "NestedPartyIDSource";

  static writeableTagVal<Char> tagVal(char data);

};

struct SecondaryClOrdID
{
  constexpr static const int tag = 526;
  constexpr static const char* name = "SecondaryClOrdID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecondaryExecID
{
  constexpr static const int tag = 527;
  constexpr static const char* name = "SecondaryExecID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OrderCapacity
{
  constexpr static const int tag = 528;
  constexpr static const char* name = "OrderCapacity";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valAgency = 'A';
  constexpr static const char valProprietary = 'G';
  constexpr static const char valIndividual = 'I';
  constexpr static const char valPrincipal = 'P';
  constexpr static const char valRisklessPrincipal = 'R';
  constexpr static const char valAgentForOtherMember = 'W';

  constexpr static const char* tagValAgency = "528=A";
  constexpr static const char* tagValProprietary = "528=G";
  constexpr static const char* tagValIndividual = "528=I";
  constexpr static const char* tagValPrincipal = "528=P";
  constexpr static const char* tagValRisklessPrincipal = "528=R";
  constexpr static const char* tagValAgentForOtherMember = "528=W";

};

struct OrderRestrictions
{
  constexpr static const int tag = 529;
  constexpr static const char* name = "OrderRestrictions";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valProgramTrade = "1";
  constexpr static const char* valIndexArbitrage = "2";
  constexpr static const char* valNonIndexArbitrage = "3";
  constexpr static const char* valCompetingMarketMaker = "4";
  constexpr static const char* valActingAsMarketMakerOrSpecialistInTheSecurity = "5";
  constexpr static const char* valActingAsMarketMakerOrSpecialistInTheUnderlyingSecurityOfADerivativeSecurity = "6";
  constexpr static const char* valForeignEntity = "7";
  constexpr static const char* valExternalMarketParticipant = "8";
  constexpr static const char* valExternalInterConnectedMarketLinkage = "9";
  constexpr static const char* valRisklessArbitrage = "A";

  constexpr static const char* tagValProgramTrade = "529=1";
  constexpr static const char* tagValIndexArbitrage = "529=2";
  constexpr static const char* tagValNonIndexArbitrage = "529=3";
  constexpr static const char* tagValCompetingMarketMaker = "529=4";
  constexpr static const char* tagValActingAsMarketMakerOrSpecialistInTheSecurity = "529=5";
  constexpr static const char* tagValActingAsMarketMakerOrSpecialistInTheUnderlyingSecurityOfADerivativeSecurity = "529=6";
  constexpr static const char* tagValForeignEntity = "529=7";
  constexpr static const char* tagValExternalMarketParticipant = "529=8";
  constexpr static const char* tagValExternalInterConnectedMarketLinkage = "529=9";
  constexpr static const char* tagValRisklessArbitrage = "529=A";

};

struct MassCancelRequestType
{
  constexpr static const int tag = 530;
  constexpr static const char* name = "MassCancelRequestType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valCancelOrdersForASecurity = '1';
  constexpr static const char valCancelOrdersForAnUnderlyingSecurity = '2';
  constexpr static const char valCancelOrdersForAProduct = '3';
  constexpr static const char valCancelOrdersForACFICode = '4';
  constexpr static const char valCancelOrdersForASecurityType = '5';
  constexpr static const char valCancelOrdersForATradingSession = '6';
  constexpr static const char valCancelAllOrders = '7';

  constexpr static const char* tagValCancelOrdersForASecurity = "530=1";
  constexpr static const char* tagValCancelOrdersForAnUnderlyingSecurity = "530=2";
  constexpr static const char* tagValCancelOrdersForAProduct = "530=3";
  constexpr static const char* tagValCancelOrdersForACFICode = "530=4";
  constexpr static const char* tagValCancelOrdersForASecurityType = "530=5";
  constexpr static const char* tagValCancelOrdersForATradingSession = "530=6";
  constexpr static const char* tagValCancelAllOrders = "530=7";

};

struct MassCancelResponse
{
  constexpr static const int tag = 531;
  constexpr static const char* name = "MassCancelResponse";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valCancelRequestRejectedSeeMassCancelRejectReason = '0';
  constexpr static const char valCancelOrdersForASecurity = '1';
  constexpr static const char valCancelOrdersForAnUnderlyingSecurity = '2';
  constexpr static const char valCancelOrdersForAProduct = '3';
  constexpr static const char valCancelOrdersForACFICode = '4';
  constexpr static const char valCancelOrdersForASecurityType = '5';
  constexpr static const char valCancelOrdersForATradingSession = '6';
  constexpr static const char valCancelAllOrders = '7';

  constexpr static const char* tagValCancelRequestRejectedSeeMassCancelRejectReason = "531=0";
  constexpr static const char* tagValCancelOrdersForASecurity = "531=1";
  constexpr static const char* tagValCancelOrdersForAnUnderlyingSecurity = "531=2";
  constexpr static const char* tagValCancelOrdersForAProduct = "531=3";
  constexpr static const char* tagValCancelOrdersForACFICode = "531=4";
  constexpr static const char* tagValCancelOrdersForASecurityType = "531=5";
  constexpr static const char* tagValCancelOrdersForATradingSession = "531=6";
  constexpr static const char* tagValCancelAllOrders = "531=7";

};

struct MassCancelRejectReason
{
  constexpr static const int tag = 532;
  constexpr static const char* name = "MassCancelRejectReason";

  static writeableTagVal<Char> tagVal(char data);

};

struct TotalAffectedOrders
{
  constexpr static const int tag = 533;
  constexpr static const char* name = "TotalAffectedOrders";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoAffectedOrders
{
  constexpr static const int tag = 534;
  constexpr static const char* name = "NoAffectedOrders";

  static writeableTagVal<Int> tagVal(int data);

};

struct AffectedOrderID
{
  constexpr static const int tag = 535;
  constexpr static const char* name = "AffectedOrderID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AffectedSecondaryOrderID
{
  constexpr static const int tag = 536;
  constexpr static const char* name = "AffectedSecondaryOrderID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuoteType
{
  constexpr static const int tag = 537;
  constexpr static const char* name = "QuoteType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valIndicative = 0;
  constexpr static const int valTradeable = 1;
  constexpr static const int valRestrictedTradeable = 2;
  constexpr static const int valCounter = 3;

  constexpr static const char* tagValIndicative = "537=0";
  constexpr static const char* tagValTradeable = "537=1";
  constexpr static const char* tagValRestrictedTradeable = "537=2";
  constexpr static const char* tagValCounter = "537=3";

};

struct NestedPartyRole
{
  constexpr static const int tag = 538;
  constexpr static const char* name = "NestedPartyRole";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoNestedPartyIDs
{
  constexpr static const int tag = 539;
  constexpr static const char* name = "NoNestedPartyIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct TotalAccruedInterestAmt
{
  constexpr static const int tag = 540;
  constexpr static const char* name = "TotalAccruedInterestAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct MaturityDate
{
  constexpr static const int tag = 541;
  constexpr static const char* name = "MaturityDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct UnderlyingMaturityDate
{
  constexpr static const int tag = 542;
  constexpr static const char* name = "UnderlyingMaturityDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct InstrRegistry
{
  constexpr static const int tag = 543;
  constexpr static const char* name = "InstrRegistry";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valBankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords = "BIC";
  constexpr static const char* valZPhysicalOrBearer = "ZZ";

  constexpr static const char* tagValBankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords = "543=BIC";
  constexpr static const char* tagValZPhysicalOrBearer = "543=ZZ";

};

struct CashMargin
{
  constexpr static const int tag = 544;
  constexpr static const char* name = "CashMargin";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valCash = '1';
  constexpr static const char valMarginOpen = '2';
  constexpr static const char valMarginClose = '3';

  constexpr static const char* tagValCash = "544=1";
  constexpr static const char* tagValMarginOpen = "544=2";
  constexpr static const char* tagValMarginClose = "544=3";

};

struct NestedPartySubID
{
  constexpr static const int tag = 545;
  constexpr static const char* name = "NestedPartySubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Scope
{
  constexpr static const int tag = 546;
  constexpr static const char* name = "Scope";

  static writeableTagVal<MulValString> tagVal();

  constexpr static const char* valLocal = "1";
  constexpr static const char* valNational = "2";
  constexpr static const char* valGlobal = "3";

  constexpr static const char* tagValLocal = "546=1";
  constexpr static const char* tagValNational = "546=2";
  constexpr static const char* tagValGlobal = "546=3";

};

struct MDImplicitDelete
{
  constexpr static const int tag = 547;
  constexpr static const char* name = "MDImplicitDelete";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valClientHasResponsibilityForImplicitlyDeletingBidsOrOffers = true;
  constexpr static const bool valServerMustSendAnExplicitDeleteForBidsOrOffers = false;

  constexpr static const char* tagValClientHasResponsibilityForImplicitlyDeletingBidsOrOffers = "547=Y";
  constexpr static const char* tagValServerMustSendAnExplicitDeleteForBidsOrOffers = "547=N";

};

struct CrossID
{
  constexpr static const int tag = 548;
  constexpr static const char* name = "CrossID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CrossType
{
  constexpr static const int tag = 549;
  constexpr static const char* name = "CrossType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner = 1;
  constexpr static const int valCrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled = 2;
  constexpr static const int valCrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions = 3;
  constexpr static const int valCrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist = 4;

  constexpr static const char* tagValCrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner = "549=1";
  constexpr static const char* tagValCrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled = "549=2";
  constexpr static const char* tagValCrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions = "549=3";
  constexpr static const char* tagValCrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist = "549=4";

};

struct CrossPrioritization
{
  constexpr static const int tag = 550;
  constexpr static const char* name = "CrossPrioritization";

  static writeableTagVal<Int> tagVal(int data);

};

struct OrigCrossID
{
  constexpr static const int tag = 551;
  constexpr static const char* name = "OrigCrossID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoSides
{
  constexpr static const int tag = 552;
  constexpr static const char* name = "NoSides";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valOneSide = 1;
  constexpr static const int valBothSides = 2;

  constexpr static const char* tagValOneSide = "552=1";
  constexpr static const char* tagValBothSides = "552=2";

};

struct Username
{
  constexpr static const int tag = 553;
  constexpr static const char* name = "Username";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Password
{
  constexpr static const int tag = 554;
  constexpr static const char* name = "Password";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoLegs
{
  constexpr static const int tag = 555;
  constexpr static const char* name = "NoLegs";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegCurrency
{
  constexpr static const int tag = 556;
  constexpr static const char* name = "LegCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TotNoSecurityTypes
{
  constexpr static const int tag = 557;
  constexpr static const char* name = "TotNoSecurityTypes";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoSecurityTypes
{
  constexpr static const int tag = 558;
  constexpr static const char* name = "NoSecurityTypes";

  static writeableTagVal<Int> tagVal(int data);

};

struct SecurityListRequestType
{
  constexpr static const int tag = 559;
  constexpr static const char* name = "SecurityListRequestType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSymbol = 0;
  constexpr static const int valSecurityTypeAndOrCFICode = 1;
  constexpr static const int valProduct = 2;
  constexpr static const int valTradingSessionID = 3;
  constexpr static const int valAllSecurities = 4;

  constexpr static const char* tagValSymbol = "559=0";
  constexpr static const char* tagValSecurityTypeAndOrCFICode = "559=1";
  constexpr static const char* tagValProduct = "559=2";
  constexpr static const char* tagValTradingSessionID = "559=3";
  constexpr static const char* tagValAllSecurities = "559=4";

};

struct SecurityRequestResult
{
  constexpr static const int tag = 560;
  constexpr static const char* name = "SecurityRequestResult";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valValidRequest = 0;
  constexpr static const int valInvalidOrUnsupportedRequest = 1;
  constexpr static const int valNoInstrumentsFoundThatMatchSelectionCriteria = 2;
  constexpr static const int valNotAuthorizedToRetrieveInstrumentData = 3;
  constexpr static const int valInstrumentDataTemporarilyUnavailable = 4;
  constexpr static const int valRequestForInstrumentDataNotSupported = 5;

  constexpr static const char* tagValValidRequest = "560=0";
  constexpr static const char* tagValInvalidOrUnsupportedRequest = "560=1";
  constexpr static const char* tagValNoInstrumentsFoundThatMatchSelectionCriteria = "560=2";
  constexpr static const char* tagValNotAuthorizedToRetrieveInstrumentData = "560=3";
  constexpr static const char* tagValInstrumentDataTemporarilyUnavailable = "560=4";
  constexpr static const char* tagValRequestForInstrumentDataNotSupported = "560=5";

};

struct RoundLot
{
  constexpr static const int tag = 561;
  constexpr static const char* name = "RoundLot";

  static writeableTagVal<Float> tagVal(float data);

};

struct MinTradeVol
{
  constexpr static const int tag = 562;
  constexpr static const char* name = "MinTradeVol";

  static writeableTagVal<Float> tagVal(float data);

};

struct MultiLegRptTypeReq
{
  constexpr static const int tag = 563;
  constexpr static const char* name = "MultiLegRptTypeReq";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegPositionEffect
{
  constexpr static const int tag = 564;
  constexpr static const char* name = "LegPositionEffect";

  static writeableTagVal<Char> tagVal(char data);

};

struct LegCoveredOrUncovered
{
  constexpr static const int tag = 565;
  constexpr static const char* name = "LegCoveredOrUncovered";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegPrice
{
  constexpr static const int tag = 566;
  constexpr static const char* name = "LegPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct TradSesStatusRejReason
{
  constexpr static const int tag = 567;
  constexpr static const char* name = "TradSesStatusRejReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnknownOrInvalidTradingSessionID = 1;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValUnknownOrInvalidTradingSessionID = "567=1";
  constexpr static const char* tagValOther = "567=99";

};

struct TradeRequestID
{
  constexpr static const int tag = 568;
  constexpr static const char* name = "TradeRequestID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradeRequestType
{
  constexpr static const int tag = 569;
  constexpr static const char* name = "TradeRequestType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAllTrades = 0;
  constexpr static const int valMatchedTradesMatchingCriteriaProvidedOnRequest = 1;
  constexpr static const int valUnmatchedTradesThatMatchCriteria = 2;
  constexpr static const int valUnreportedTradesThatMatchCriteria = 3;
  constexpr static const int valAdvisoriesThatMatchCriteria = 4;

  constexpr static const char* tagValAllTrades = "569=0";
  constexpr static const char* tagValMatchedTradesMatchingCriteriaProvidedOnRequest = "569=1";
  constexpr static const char* tagValUnmatchedTradesThatMatchCriteria = "569=2";
  constexpr static const char* tagValUnreportedTradesThatMatchCriteria = "569=3";
  constexpr static const char* tagValAdvisoriesThatMatchCriteria = "569=4";

};

struct PreviouslyReported
{
  constexpr static const int tag = 570;
  constexpr static const char* name = "PreviouslyReported";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valPreviouslyReportedToCounterparty = true;
  constexpr static const bool valNotReportedToCounterparty = false;

  constexpr static const char* tagValPreviouslyReportedToCounterparty = "570=Y";
  constexpr static const char* tagValNotReportedToCounterparty = "570=N";

};

struct TradeReportID
{
  constexpr static const int tag = 571;
  constexpr static const char* name = "TradeReportID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradeReportRefID
{
  constexpr static const int tag = 572;
  constexpr static const char* name = "TradeReportRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MatchStatus
{
  constexpr static const int tag = 573;
  constexpr static const char* name = "MatchStatus";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valComparedMatchedOrAffirmed = '0';
  constexpr static const char valUncomparedUnmatchedOrUnaffirmed = '1';
  constexpr static const char valAdvisoryOrAlert = '2';

  constexpr static const char* tagValComparedMatchedOrAffirmed = "573=0";
  constexpr static const char* tagValUncomparedUnmatchedOrUnaffirmed = "573=1";
  constexpr static const char* tagValAdvisoryOrAlert = "573=2";

};

struct MatchType
{
  constexpr static const int tag = 574;
  constexpr static const char* name = "MatchType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime = "A";
  constexpr static const char* valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges = "A2";
  constexpr static const char* valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime = "A3";
  constexpr static const char* valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges = "A4";
  constexpr static const char* valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime = "A5";
  constexpr static const char* valComparedRecordsResultingFromStampedAdvisoriesOrSpecialist = "AQ";
  constexpr static const char* valSummarizedMatchUsingAToA1 = "S1";
  constexpr static const char* valSummarizedMatchUsingAToA2 = "S2";
  constexpr static const char* valSummarizedMatchUsingAToA3 = "S3";
  constexpr static const char* valSummarizedMatchUsingAToA4 = "S4";
  constexpr static const char* valSummarizedMatchUsingAToA5 = "S5";
  constexpr static const char* valExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator = "M";
  constexpr static const char* valSummarizedMatchMinusBadgesAndTimes = "M2";
  constexpr static const char* valOCSLockedIn = "MT";
  constexpr static const char* valACTMMatch = "M";
  constexpr static const char* valACTM2Match = "M2";
  constexpr static const char* valACTAcceptedTrade = "M3";
  constexpr static const char* valACTDefaultTrade = "M4";
  constexpr static const char* valACTDefaultAfterM2 = "M5";
  constexpr static const char* valACTM6Match = "M6";
  constexpr static const char* valNonACT = "MT";

  constexpr static const char* tagValExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime = "574=A";
  constexpr static const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges = "574=A2";
  constexpr static const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime = "574=A3";
  constexpr static const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges = "574=A4";
  constexpr static const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime = "574=A5";
  constexpr static const char* tagValComparedRecordsResultingFromStampedAdvisoriesOrSpecialist = "574=AQ";
  constexpr static const char* tagValSummarizedMatchUsingAToA1 = "574=S1";
  constexpr static const char* tagValSummarizedMatchUsingAToA2 = "574=S2";
  constexpr static const char* tagValSummarizedMatchUsingAToA3 = "574=S3";
  constexpr static const char* tagValSummarizedMatchUsingAToA4 = "574=S4";
  constexpr static const char* tagValSummarizedMatchUsingAToA5 = "574=S5";
  constexpr static const char* tagValExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator = "574=M";
  constexpr static const char* tagValSummarizedMatchMinusBadgesAndTimes = "574=M2";
  constexpr static const char* tagValOCSLockedIn = "574=MT";
  constexpr static const char* tagValACTMMatch = "574=M";
  constexpr static const char* tagValACTM2Match = "574=M2";
  constexpr static const char* tagValACTAcceptedTrade = "574=M3";
  constexpr static const char* tagValACTDefaultTrade = "574=M4";
  constexpr static const char* tagValACTDefaultAfterM2 = "574=M5";
  constexpr static const char* tagValACTM6Match = "574=M6";
  constexpr static const char* tagValNonACT = "574=MT";

};

struct OddLot
{
  constexpr static const int tag = 575;
  constexpr static const char* name = "OddLot";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct NoClearingInstructions
{
  constexpr static const int tag = 576;
  constexpr static const char* name = "NoClearingInstructions";

  static writeableTagVal<Int> tagVal(int data);

};

struct ClearingInstruction
{
  constexpr static const int tag = 577;
  constexpr static const char* name = "ClearingInstruction";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valProcessNormally = 0;
  constexpr static const int valExcludeFromAllNetting = 1;
  constexpr static const int valBilateralNettingOnly = 2;
  constexpr static const int valExClearing = 3;
  constexpr static const int valSpecialTrade = 4;
  constexpr static const int valMultilateralNetting = 5;
  constexpr static const int valClearAgainstCentralCounterparty = 6;
  constexpr static const int valExcludeFromCentralCounterparty = 7;
  constexpr static const int valManualMode = 8;
  constexpr static const int valAutomaticPostingMode = 9;
  constexpr static const int valAutomaticGiveUpMode = 0;
  constexpr static const int valQualifiedServiceRepresentativeQSR = 1;
  constexpr static const int valCustomerTrade = 2;
  constexpr static const int valSelfClearing = 3;

  constexpr static const char* tagValProcessNormally = "577=0";
  constexpr static const char* tagValExcludeFromAllNetting = "577=1";
  constexpr static const char* tagValBilateralNettingOnly = "577=2";
  constexpr static const char* tagValExClearing = "577=3";
  constexpr static const char* tagValSpecialTrade = "577=4";
  constexpr static const char* tagValMultilateralNetting = "577=5";
  constexpr static const char* tagValClearAgainstCentralCounterparty = "577=6";
  constexpr static const char* tagValExcludeFromCentralCounterparty = "577=7";
  constexpr static const char* tagValManualMode = "577=8";
  constexpr static const char* tagValAutomaticPostingMode = "577=9";
  constexpr static const char* tagValAutomaticGiveUpMode = "577=0";
  constexpr static const char* tagValQualifiedServiceRepresentativeQSR = "577=1";
  constexpr static const char* tagValCustomerTrade = "577=2";
  constexpr static const char* tagValSelfClearing = "577=3";

};

struct TradeInputSource
{
  constexpr static const int tag = 578;
  constexpr static const char* name = "TradeInputSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradeInputDevice
{
  constexpr static const int tag = 579;
  constexpr static const char* name = "TradeInputDevice";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoDates
{
  constexpr static const int tag = 580;
  constexpr static const char* name = "NoDates";

  static writeableTagVal<Int> tagVal(int data);

};

struct AccountType
{
  constexpr static const int tag = 581;
  constexpr static const char* name = "AccountType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccountIsCarriedOnCustomerSideOfBooks = 1;
  constexpr static const int valAccountIsCarriedOnNonCustomerSideOfBooks = 2;
  constexpr static const int valHouseTrader = 3;
  constexpr static const int valFloorTrader = 4;
  constexpr static const int valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = 6;
  constexpr static const int valAccountIsHouseTraderAndIsCrossMargined = 7;
  constexpr static const int valJointBackofficeAccount = 8;

  constexpr static const char* tagValAccountIsCarriedOnCustomerSideOfBooks = "581=1";
  constexpr static const char* tagValAccountIsCarriedOnNonCustomerSideOfBooks = "581=2";
  constexpr static const char* tagValHouseTrader = "581=3";
  constexpr static const char* tagValFloorTrader = "581=4";
  constexpr static const char* tagValAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = "581=6";
  constexpr static const char* tagValAccountIsHouseTraderAndIsCrossMargined = "581=7";
  constexpr static const char* tagValJointBackofficeAccount = "581=8";

};

struct CustOrderCapacity
{
  constexpr static const int tag = 582;
  constexpr static const char* name = "CustOrderCapacity";

  static writeableTagVal<Int> tagVal(int data);

};

struct ClOrdLinkID
{
  constexpr static const int tag = 583;
  constexpr static const char* name = "ClOrdLinkID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MassStatusReqID
{
  constexpr static const int tag = 584;
  constexpr static const char* name = "MassStatusReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MassStatusReqType
{
  constexpr static const int tag = 585;
  constexpr static const char* name = "MassStatusReqType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valStatusForOrdersForASecurity = 1;
  constexpr static const int valStatusForOrdersForAnUnderlyingSecurity = 2;
  constexpr static const int valStatusForOrdersForAProduct = 3;
  constexpr static const int valStatusForOrdersForACFICode = 4;
  constexpr static const int valStatusForOrdersForASecurityType = 5;
  constexpr static const int valStatusForOrdersForATradingSession = 6;
  constexpr static const int valStatusForAllOrders = 7;
  constexpr static const int valStatusForOrdersForAPartyID = 8;

  constexpr static const char* tagValStatusForOrdersForASecurity = "585=1";
  constexpr static const char* tagValStatusForOrdersForAnUnderlyingSecurity = "585=2";
  constexpr static const char* tagValStatusForOrdersForAProduct = "585=3";
  constexpr static const char* tagValStatusForOrdersForACFICode = "585=4";
  constexpr static const char* tagValStatusForOrdersForASecurityType = "585=5";
  constexpr static const char* tagValStatusForOrdersForATradingSession = "585=6";
  constexpr static const char* tagValStatusForAllOrders = "585=7";
  constexpr static const char* tagValStatusForOrdersForAPartyID = "585=8";

};

struct OrigOrdModTime
{
  constexpr static const int tag = 586;
  constexpr static const char* name = "OrigOrdModTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct LegSettlType
{
  constexpr static const int tag = 587;
  constexpr static const char* name = "LegSettlType";

  static writeableTagVal<Char> tagVal(char data);

};

struct LegSettlDate
{
  constexpr static const int tag = 588;
  constexpr static const char* name = "LegSettlDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct DayBookingInst
{
  constexpr static const int tag = 589;
  constexpr static const char* name = "DayBookingInst";

  static writeableTagVal<Char> tagVal(char data);

};

struct BookingUnit
{
  constexpr static const int tag = 590;
  constexpr static const char* name = "BookingUnit";

  static writeableTagVal<Char> tagVal(char data);

};

struct PreallocMethod
{
  constexpr static const int tag = 591;
  constexpr static const char* name = "PreallocMethod";

  static writeableTagVal<Char> tagVal(char data);

};

struct UnderlyingCountryOfIssue
{
  constexpr static const int tag = 592;
  constexpr static const char* name = "UnderlyingCountryOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingStateOrProvinceOfIssue
{
  constexpr static const int tag = 593;
  constexpr static const char* name = "UnderlyingStateOrProvinceOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingLocaleOfIssue
{
  constexpr static const int tag = 594;
  constexpr static const char* name = "UnderlyingLocaleOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingInstrRegistry
{
  constexpr static const int tag = 595;
  constexpr static const char* name = "UnderlyingInstrRegistry";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegCountryOfIssue
{
  constexpr static const int tag = 596;
  constexpr static const char* name = "LegCountryOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegStateOrProvinceOfIssue
{
  constexpr static const int tag = 597;
  constexpr static const char* name = "LegStateOrProvinceOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegLocaleOfIssue
{
  constexpr static const int tag = 598;
  constexpr static const char* name = "LegLocaleOfIssue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegInstrRegistry
{
  constexpr static const int tag = 599;
  constexpr static const char* name = "LegInstrRegistry";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSymbol
{
  constexpr static const int tag = 600;
  constexpr static const char* name = "LegSymbol";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSymbolSfx
{
  constexpr static const int tag = 601;
  constexpr static const char* name = "LegSymbolSfx";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSecurityID
{
  constexpr static const int tag = 602;
  constexpr static const char* name = "LegSecurityID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSecurityIDSource
{
  constexpr static const int tag = 603;
  constexpr static const char* name = "LegSecurityIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoLegSecurityAltID
{
  constexpr static const int tag = 604;
  constexpr static const char* name = "NoLegSecurityAltID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSecurityAltID
{
  constexpr static const int tag = 605;
  constexpr static const char* name = "LegSecurityAltID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSecurityAltIDSource
{
  constexpr static const int tag = 606;
  constexpr static const char* name = "LegSecurityAltIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegProduct
{
  constexpr static const int tag = 607;
  constexpr static const char* name = "LegProduct";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegCFICode
{
  constexpr static const int tag = 608;
  constexpr static const char* name = "LegCFICode";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSecurityType
{
  constexpr static const int tag = 609;
  constexpr static const char* name = "LegSecurityType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegMaturityMonthYear
{
  constexpr static const int tag = 610;
  constexpr static const char* name = "LegMaturityMonthYear";

  static writeableTagVal<MonthYear> tagVal(MonthYear data);

};

struct LegMaturityDate
{
  constexpr static const int tag = 611;
  constexpr static const char* name = "LegMaturityDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct LegStrikePrice
{
  constexpr static const int tag = 612;
  constexpr static const char* name = "LegStrikePrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegOptAttribute
{
  constexpr static const int tag = 613;
  constexpr static const char* name = "LegOptAttribute";

  static writeableTagVal<Char> tagVal(char data);

};

struct LegContractMultiplier
{
  constexpr static const int tag = 614;
  constexpr static const char* name = "LegContractMultiplier";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegCouponRate
{
  constexpr static const int tag = 615;
  constexpr static const char* name = "LegCouponRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegSecurityExchange
{
  constexpr static const int tag = 616;
  constexpr static const char* name = "LegSecurityExchange";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegIssuer
{
  constexpr static const int tag = 617;
  constexpr static const char* name = "LegIssuer";

  static writeableTagVal<String> tagVal(const char* data);

};

struct EncodedLegIssuerLen
{
  constexpr static const int tag = 618;
  constexpr static const char* name = "EncodedLegIssuerLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedLegIssuer
{
  constexpr static const int tag = 619;
  constexpr static const char* name = "EncodedLegIssuer";

  static writeableTagVal<Data> tagVal(Data data);

};

struct LegSecurityDesc
{
  constexpr static const int tag = 620;
  constexpr static const char* name = "LegSecurityDesc";

  static writeableTagVal<String> tagVal(const char* data);

};

struct EncodedLegSecurityDescLen
{
  constexpr static const int tag = 621;
  constexpr static const char* name = "EncodedLegSecurityDescLen";

  static writeableTagVal<Int> tagVal(int data);

};

struct EncodedLegSecurityDesc
{
  constexpr static const int tag = 622;
  constexpr static const char* name = "EncodedLegSecurityDesc";

  static writeableTagVal<Data> tagVal(Data data);

};

struct LegRatioQty
{
  constexpr static const int tag = 623;
  constexpr static const char* name = "LegRatioQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegSide
{
  constexpr static const int tag = 624;
  constexpr static const char* name = "LegSide";

  static writeableTagVal<Char> tagVal(char data);

};

struct TradingSessionSubID
{
  constexpr static const int tag = 625;
  constexpr static const char* name = "TradingSessionSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocType
{
  constexpr static const int tag = 626;
  constexpr static const char* name = "AllocType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCalculated = 1;
  constexpr static const int valPreliminary = 2;
  constexpr static const int valSellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney = 3;
  constexpr static const int valSellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney = 4;
  constexpr static const int valReadyToBookSingleOrder = 5;
  constexpr static const int valBuysideReadyToBookCombinedSetOfOrders = 6;
  constexpr static const int valWarehouseInstruction = 7;
  constexpr static const int valRequestToIntermediary = 8;

  constexpr static const char* tagValCalculated = "626=1";
  constexpr static const char* tagValPreliminary = "626=2";
  constexpr static const char* tagValSellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney = "626=3";
  constexpr static const char* tagValSellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney = "626=4";
  constexpr static const char* tagValReadyToBookSingleOrder = "626=5";
  constexpr static const char* tagValBuysideReadyToBookCombinedSetOfOrders = "626=6";
  constexpr static const char* tagValWarehouseInstruction = "626=7";
  constexpr static const char* tagValRequestToIntermediary = "626=8";

};

struct NoHops
{
  constexpr static const int tag = 627;
  constexpr static const char* name = "NoHops";

  static writeableTagVal<Int> tagVal(int data);

};

struct HopCompID
{
  constexpr static const int tag = 628;
  constexpr static const char* name = "HopCompID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct HopSendingTime
{
  constexpr static const int tag = 629;
  constexpr static const char* name = "HopSendingTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct HopRefID
{
  constexpr static const int tag = 630;
  constexpr static const char* name = "HopRefID";

  static writeableTagVal<Int> tagVal(int data);

};

struct MidPx
{
  constexpr static const int tag = 631;
  constexpr static const char* name = "MidPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct BidYield
{
  constexpr static const int tag = 632;
  constexpr static const char* name = "BidYield";

  static writeableTagVal<Float> tagVal(float data);

};

struct MidYield
{
  constexpr static const int tag = 633;
  constexpr static const char* name = "MidYield";

  static writeableTagVal<Float> tagVal(float data);

};

struct OfferYield
{
  constexpr static const int tag = 634;
  constexpr static const char* name = "OfferYield";

  static writeableTagVal<Float> tagVal(float data);

};

struct ClearingFeeIndicator
{
  constexpr static const int tag = 635;
  constexpr static const char* name = "ClearingFeeIndicator";

  static writeableTagVal<String> tagVal(const char* data);

};

struct WorkingIndicator
{
  constexpr static const int tag = 636;
  constexpr static const char* name = "WorkingIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valOrderIsCurrentlyBeingWorked = true;
  constexpr static const bool valOrderHasBeenAcceptedButNotYetInAWorkingState = false;

  constexpr static const char* tagValOrderIsCurrentlyBeingWorked = "636=Y";
  constexpr static const char* tagValOrderHasBeenAcceptedButNotYetInAWorkingState = "636=N";

};

struct LegLastPx
{
  constexpr static const int tag = 637;
  constexpr static const char* name = "LegLastPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct PriorityIndicator
{
  constexpr static const int tag = 638;
  constexpr static const char* name = "PriorityIndicator";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPriorityUnchanged = 0;
  constexpr static const int valLostPriorityAsResultOfOrderChange = 1;

  constexpr static const char* tagValPriorityUnchanged = "638=0";
  constexpr static const char* tagValLostPriorityAsResultOfOrderChange = "638=1";

};

struct PriceImprovement
{
  constexpr static const int tag = 639;
  constexpr static const char* name = "PriceImprovement";

  static writeableTagVal<Float> tagVal(float data);

};

struct Price2
{
  constexpr static const int tag = 640;
  constexpr static const char* name = "Price2";

  static writeableTagVal<Float> tagVal(float data);

};

struct LastForwardPoints2
{
  constexpr static const int tag = 641;
  constexpr static const char* name = "LastForwardPoints2";

  static writeableTagVal<Float> tagVal(float data);

};

struct BidForwardPoints2
{
  constexpr static const int tag = 642;
  constexpr static const char* name = "BidForwardPoints2";

  static writeableTagVal<Float> tagVal(float data);

};

struct OfferForwardPoints2
{
  constexpr static const int tag = 643;
  constexpr static const char* name = "OfferForwardPoints2";

  static writeableTagVal<Float> tagVal(float data);

};

struct RFQReqID
{
  constexpr static const int tag = 644;
  constexpr static const char* name = "RFQReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MktBidPx
{
  constexpr static const int tag = 645;
  constexpr static const char* name = "MktBidPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct MktOfferPx
{
  constexpr static const int tag = 646;
  constexpr static const char* name = "MktOfferPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct MinBidSize
{
  constexpr static const int tag = 647;
  constexpr static const char* name = "MinBidSize";

  static writeableTagVal<Float> tagVal(float data);

};

struct MinOfferSize
{
  constexpr static const int tag = 648;
  constexpr static const char* name = "MinOfferSize";

  static writeableTagVal<Float> tagVal(float data);

};

struct QuoteStatusReqID
{
  constexpr static const int tag = 649;
  constexpr static const char* name = "QuoteStatusReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegalConfirm
{
  constexpr static const int tag = 650;
  constexpr static const char* name = "LegalConfirm";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valLegalConfirm = true;
  constexpr static const bool valDoesNotConstituteALegalConfirm = false;

  constexpr static const char* tagValLegalConfirm = "650=Y";
  constexpr static const char* tagValDoesNotConstituteALegalConfirm = "650=N";

};

struct UnderlyingLastPx
{
  constexpr static const int tag = 651;
  constexpr static const char* name = "UnderlyingLastPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingLastQty
{
  constexpr static const int tag = 652;
  constexpr static const char* name = "UnderlyingLastQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct SecDefStatus
{
  constexpr static const int tag = 653;
  constexpr static const char* name = "SecDefStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPendingApproval = 0;
  constexpr static const int valApproved = 1;
  constexpr static const int valRejected = 2;
  constexpr static const int valUnauthorizedRequest = 3;
  constexpr static const int valInvalidDefinitionRequest = 4;

  constexpr static const char* tagValPendingApproval = "653=0";
  constexpr static const char* tagValApproved = "653=1";
  constexpr static const char* tagValRejected = "653=2";
  constexpr static const char* tagValUnauthorizedRequest = "653=3";
  constexpr static const char* tagValInvalidDefinitionRequest = "653=4";

};

struct LegRefID
{
  constexpr static const int tag = 654;
  constexpr static const char* name = "LegRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ContraLegRefID
{
  constexpr static const int tag = 655;
  constexpr static const char* name = "ContraLegRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlCurrBidFxRate
{
  constexpr static const int tag = 656;
  constexpr static const char* name = "SettlCurrBidFxRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlCurrOfferFxRate
{
  constexpr static const int tag = 657;
  constexpr static const char* name = "SettlCurrOfferFxRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct QuoteRequestRejectReason
{
  constexpr static const int tag = 658;
  constexpr static const char* name = "QuoteRequestRejectReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnknownSymbol = 1;
  constexpr static const int valExchangeSecurityClosed = 2;
  constexpr static const int valQuoteRequestExceedsLimit = 3;
  constexpr static const int valTooLateToEnter = 4;
  constexpr static const int valInvalidPrice = 5;
  constexpr static const int valNotAuthorizedToRequestQuote = 6;
  constexpr static const int valNoMatchForInquiry = 7;
  constexpr static const int valNoMarketForInstrument = 8;
  constexpr static const int valNoInventory = 9;
  constexpr static const int valPass = 0;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValUnknownSymbol = "658=1";
  constexpr static const char* tagValExchangeSecurityClosed = "658=2";
  constexpr static const char* tagValQuoteRequestExceedsLimit = "658=3";
  constexpr static const char* tagValTooLateToEnter = "658=4";
  constexpr static const char* tagValInvalidPrice = "658=5";
  constexpr static const char* tagValNotAuthorizedToRequestQuote = "658=6";
  constexpr static const char* tagValNoMatchForInquiry = "658=7";
  constexpr static const char* tagValNoMarketForInstrument = "658=8";
  constexpr static const char* tagValNoInventory = "658=9";
  constexpr static const char* tagValPass = "658=0";
  constexpr static const char* tagValOther = "658=99";

};

struct SideComplianceID
{
  constexpr static const int tag = 659;
  constexpr static const char* name = "SideComplianceID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AcctIDSource
{
  constexpr static const int tag = 660;
  constexpr static const char* name = "AcctIDSource";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valBIC = 1;
  constexpr static const int valSIDCode = 2;
  constexpr static const int valTFM = 3;
  constexpr static const int valOMGEO = 4;
  constexpr static const int valDTCCCode = 5;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValBIC = "660=1";
  constexpr static const char* tagValSIDCode = "660=2";
  constexpr static const char* tagValTFM = "660=3";
  constexpr static const char* tagValOMGEO = "660=4";
  constexpr static const char* tagValDTCCCode = "660=5";
  constexpr static const char* tagValOther = "660=99";

};

struct AllocAcctIDSource
{
  constexpr static const int tag = 661;
  constexpr static const char* name = "AllocAcctIDSource";

  static writeableTagVal<Int> tagVal(int data);

};

struct BenchmarkPrice
{
  constexpr static const int tag = 662;
  constexpr static const char* name = "BenchmarkPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct BenchmarkPriceType
{
  constexpr static const int tag = 663;
  constexpr static const char* name = "BenchmarkPriceType";

  static writeableTagVal<Int> tagVal(int data);

};

struct ConfirmID
{
  constexpr static const int tag = 664;
  constexpr static const char* name = "ConfirmID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ConfirmStatus
{
  constexpr static const int tag = 665;
  constexpr static const char* name = "ConfirmStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valReceived = 1;
  constexpr static const int valMismatchedAccount = 2;
  constexpr static const int valMissingSettlementInstructions = 3;
  constexpr static const int valConfirmed = 4;
  constexpr static const int valRequestRejected = 5;

  constexpr static const char* tagValReceived = "665=1";
  constexpr static const char* tagValMismatchedAccount = "665=2";
  constexpr static const char* tagValMissingSettlementInstructions = "665=3";
  constexpr static const char* tagValConfirmed = "665=4";
  constexpr static const char* tagValRequestRejected = "665=5";

};

struct ConfirmTransType
{
  constexpr static const int tag = 666;
  constexpr static const char* name = "ConfirmTransType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNew = 0;
  constexpr static const int valReplace = 1;
  constexpr static const int valCancel = 2;

  constexpr static const char* tagValNew = "666=0";
  constexpr static const char* tagValReplace = "666=1";
  constexpr static const char* tagValCancel = "666=2";

};

struct ContractSettlMonth
{
  constexpr static const int tag = 667;
  constexpr static const char* name = "ContractSettlMonth";

  static writeableTagVal<MonthYear> tagVal(MonthYear data);

};

struct DeliveryForm
{
  constexpr static const int tag = 668;
  constexpr static const char* name = "DeliveryForm";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valBookEntryTheDefault = 1;
  constexpr static const int valBearer = 2;

  constexpr static const char* tagValBookEntryTheDefault = "668=1";
  constexpr static const char* tagValBearer = "668=2";

};

struct LastParPx
{
  constexpr static const int tag = 669;
  constexpr static const char* name = "LastParPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoLegAllocs
{
  constexpr static const int tag = 670;
  constexpr static const char* name = "NoLegAllocs";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegAllocAccount
{
  constexpr static const int tag = 671;
  constexpr static const char* name = "LegAllocAccount";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegIndividualAllocID
{
  constexpr static const int tag = 672;
  constexpr static const char* name = "LegIndividualAllocID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegAllocQty
{
  constexpr static const int tag = 673;
  constexpr static const char* name = "LegAllocQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegAllocAcctIDSource
{
  constexpr static const int tag = 674;
  constexpr static const char* name = "LegAllocAcctIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSettlCurrency
{
  constexpr static const int tag = 675;
  constexpr static const char* name = "LegSettlCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegBenchmarkCurveCurrency
{
  constexpr static const int tag = 676;
  constexpr static const char* name = "LegBenchmarkCurveCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegBenchmarkCurveName
{
  constexpr static const int tag = 677;
  constexpr static const char* name = "LegBenchmarkCurveName";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegBenchmarkCurvePoint
{
  constexpr static const int tag = 678;
  constexpr static const char* name = "LegBenchmarkCurvePoint";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegBenchmarkPrice
{
  constexpr static const int tag = 679;
  constexpr static const char* name = "LegBenchmarkPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegBenchmarkPriceType
{
  constexpr static const int tag = 680;
  constexpr static const char* name = "LegBenchmarkPriceType";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegBidPx
{
  constexpr static const int tag = 681;
  constexpr static const char* name = "LegBidPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegIOIQty
{
  constexpr static const int tag = 682;
  constexpr static const char* name = "LegIOIQty";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoLegStipulations
{
  constexpr static const int tag = 683;
  constexpr static const char* name = "NoLegStipulations";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegOfferPx
{
  constexpr static const int tag = 684;
  constexpr static const char* name = "LegOfferPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegOrderQty
{
  constexpr static const int tag = 685;
  constexpr static const char* name = "LegOrderQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegPriceType
{
  constexpr static const int tag = 686;
  constexpr static const char* name = "LegPriceType";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegQty
{
  constexpr static const int tag = 687;
  constexpr static const char* name = "LegQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegStipulationType
{
  constexpr static const int tag = 688;
  constexpr static const char* name = "LegStipulationType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegStipulationValue
{
  constexpr static const int tag = 689;
  constexpr static const char* name = "LegStipulationValue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSwapType
{
  constexpr static const int tag = 690;
  constexpr static const char* name = "LegSwapType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valParForPar = 1;
  constexpr static const int valModifiedDuration = 2;
  constexpr static const int valRisk = 4;
  constexpr static const int valProceeds = 5;

  constexpr static const char* tagValParForPar = "690=1";
  constexpr static const char* tagValModifiedDuration = "690=2";
  constexpr static const char* tagValRisk = "690=4";
  constexpr static const char* tagValProceeds = "690=5";

};

struct Pool
{
  constexpr static const int tag = 691;
  constexpr static const char* name = "Pool";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuotePriceType
{
  constexpr static const int tag = 692;
  constexpr static const char* name = "QuotePriceType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPercent = 1;
  constexpr static const int valPerShare = 2;
  constexpr static const int valFixedAmount = 3;
  constexpr static const int valDiscountPercentagePointsBelowPar = 4;
  constexpr static const int valPremiumPercentagePointsOverPar = 5;
  constexpr static const int valBasisPointsRelativeToBenchmark = 6;
  constexpr static const int valTEDPrice = 7;
  constexpr static const int valTEDYield = 8;
  constexpr static const int valYieldSpread = 9;
  constexpr static const int valYield = 0;

  constexpr static const char* tagValPercent = "692=1";
  constexpr static const char* tagValPerShare = "692=2";
  constexpr static const char* tagValFixedAmount = "692=3";
  constexpr static const char* tagValDiscountPercentagePointsBelowPar = "692=4";
  constexpr static const char* tagValPremiumPercentagePointsOverPar = "692=5";
  constexpr static const char* tagValBasisPointsRelativeToBenchmark = "692=6";
  constexpr static const char* tagValTEDPrice = "692=7";
  constexpr static const char* tagValTEDYield = "692=8";
  constexpr static const char* tagValYieldSpread = "692=9";
  constexpr static const char* tagValYield = "692=0";

};

struct QuoteRespID
{
  constexpr static const int tag = 693;
  constexpr static const char* name = "QuoteRespID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct QuoteRespType
{
  constexpr static const int tag = 694;
  constexpr static const char* name = "QuoteRespType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valHitOrLift = 1;
  constexpr static const int valCounter = 2;
  constexpr static const int valExpired = 3;
  constexpr static const int valCover = 4;
  constexpr static const int valDoneAway = 5;
  constexpr static const int valPass = 6;

  constexpr static const char* tagValHitOrLift = "694=1";
  constexpr static const char* tagValCounter = "694=2";
  constexpr static const char* tagValExpired = "694=3";
  constexpr static const char* tagValCover = "694=4";
  constexpr static const char* tagValDoneAway = "694=5";
  constexpr static const char* tagValPass = "694=6";

};

struct QuoteQualifier
{
  constexpr static const int tag = 695;
  constexpr static const char* name = "QuoteQualifier";

  static writeableTagVal<Char> tagVal(char data);

};

struct YieldRedemptionDate
{
  constexpr static const int tag = 696;
  constexpr static const char* name = "YieldRedemptionDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct YieldRedemptionPrice
{
  constexpr static const int tag = 697;
  constexpr static const char* name = "YieldRedemptionPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct YieldRedemptionPriceType
{
  constexpr static const int tag = 698;
  constexpr static const char* name = "YieldRedemptionPriceType";

  static writeableTagVal<Int> tagVal(int data);

};

struct BenchmarkSecurityID
{
  constexpr static const int tag = 699;
  constexpr static const char* name = "BenchmarkSecurityID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ReversalIndicator
{
  constexpr static const int tag = 700;
  constexpr static const char* name = "ReversalIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct YieldCalcDate
{
  constexpr static const int tag = 701;
  constexpr static const char* name = "YieldCalcDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct NoPositions
{
  constexpr static const int tag = 702;
  constexpr static const char* name = "NoPositions";

  static writeableTagVal<Int> tagVal(int data);

};

struct PosType
{
  constexpr static const int tag = 703;
  constexpr static const char* name = "PosType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valTransactionQuantity = "TQ";
  constexpr static const char* valIntraSpreadQty = "IAS";
  constexpr static const char* valInterSpreadQty = "IES";
  constexpr static const char* valEndOfDayQty = "FIN";
  constexpr static const char* valStartOfDayQty = "SOD";
  constexpr static const char* valOptionExerciseQty = "EX";
  constexpr static const char* valOptionAssignment = "AS";
  constexpr static const char* valTransactionFromExercise = "TX";
  constexpr static const char* valTransactionFromAssignment = "TA";
  constexpr static const char* valPitTradeQty = "PIT";
  constexpr static const char* valTransferTradeQty = "TRF";
  constexpr static const char* valElectronicTradeQty = "ETR";
  constexpr static const char* valAllocationTradeQty = "ALC";
  constexpr static const char* valAdjustmentQty = "PA";
  constexpr static const char* valAsOfTradeQty = "ASF";
  constexpr static const char* valDeliveryQty = "DLV";
  constexpr static const char* valTotalTransactionQty = "TOT";
  constexpr static const char* valCrossMarginQty = "XM";
  constexpr static const char* valIntegralSplit = "SPL";

  constexpr static const char* tagValTransactionQuantity = "703=TQ";
  constexpr static const char* tagValIntraSpreadQty = "703=IAS";
  constexpr static const char* tagValInterSpreadQty = "703=IES";
  constexpr static const char* tagValEndOfDayQty = "703=FIN";
  constexpr static const char* tagValStartOfDayQty = "703=SOD";
  constexpr static const char* tagValOptionExerciseQty = "703=EX";
  constexpr static const char* tagValOptionAssignment = "703=AS";
  constexpr static const char* tagValTransactionFromExercise = "703=TX";
  constexpr static const char* tagValTransactionFromAssignment = "703=TA";
  constexpr static const char* tagValPitTradeQty = "703=PIT";
  constexpr static const char* tagValTransferTradeQty = "703=TRF";
  constexpr static const char* tagValElectronicTradeQty = "703=ETR";
  constexpr static const char* tagValAllocationTradeQty = "703=ALC";
  constexpr static const char* tagValAdjustmentQty = "703=PA";
  constexpr static const char* tagValAsOfTradeQty = "703=ASF";
  constexpr static const char* tagValDeliveryQty = "703=DLV";
  constexpr static const char* tagValTotalTransactionQty = "703=TOT";
  constexpr static const char* tagValCrossMarginQty = "703=XM";
  constexpr static const char* tagValIntegralSplit = "703=SPL";

};

struct LongQty
{
  constexpr static const int tag = 704;
  constexpr static const char* name = "LongQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct ShortQty
{
  constexpr static const int tag = 705;
  constexpr static const char* name = "ShortQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct PosQtyStatus
{
  constexpr static const int tag = 706;
  constexpr static const char* name = "PosQtyStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSubmitted = 0;
  constexpr static const int valAccepted = 1;
  constexpr static const int valRejected = 2;

  constexpr static const char* tagValSubmitted = "706=0";
  constexpr static const char* tagValAccepted = "706=1";
  constexpr static const char* tagValRejected = "706=2";

};

struct PosAmtType
{
  constexpr static const int tag = 707;
  constexpr static const char* name = "PosAmtType";

  static writeableTagVal<String> tagVal(const char* data);

  constexpr static const char* valFinalMarkToMarketAmount = "FMTM";
  constexpr static const char* valIncrementalMarkToMarketAmount = "IMTM";
  constexpr static const char* valTradeVariationAmount = "TVAR";
  constexpr static const char* valStartOfDayMarkToMarketAmount = "SMTM";
  constexpr static const char* valPremiumAmount = "PREM";
  constexpr static const char* valCashResidualAmount = "CRES";
  constexpr static const char* valCashAmount = "CASH";
  constexpr static const char* valValueAdjustedAmount = "VADJ";

  constexpr static const char* tagValFinalMarkToMarketAmount = "707=FMTM";
  constexpr static const char* tagValIncrementalMarkToMarketAmount = "707=IMTM";
  constexpr static const char* tagValTradeVariationAmount = "707=TVAR";
  constexpr static const char* tagValStartOfDayMarkToMarketAmount = "707=SMTM";
  constexpr static const char* tagValPremiumAmount = "707=PREM";
  constexpr static const char* tagValCashResidualAmount = "707=CRES";
  constexpr static const char* tagValCashAmount = "707=CASH";
  constexpr static const char* tagValValueAdjustedAmount = "707=VADJ";

};

struct PosAmt
{
  constexpr static const int tag = 708;
  constexpr static const char* name = "PosAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct PosTransType
{
  constexpr static const int tag = 709;
  constexpr static const char* name = "PosTransType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valExercise = 1;
  constexpr static const int valDoNotExercise = 2;
  constexpr static const int valPositionAdjustment = 3;
  constexpr static const int valPositionChangeSubmissionOrMarginDisposition = 4;
  constexpr static const int valPledge = 5;

  constexpr static const char* tagValExercise = "709=1";
  constexpr static const char* tagValDoNotExercise = "709=2";
  constexpr static const char* tagValPositionAdjustment = "709=3";
  constexpr static const char* tagValPositionChangeSubmissionOrMarginDisposition = "709=4";
  constexpr static const char* tagValPledge = "709=5";

};

struct PosReqID
{
  constexpr static const int tag = 710;
  constexpr static const char* name = "PosReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoUnderlyings
{
  constexpr static const int tag = 711;
  constexpr static const char* name = "NoUnderlyings";

  static writeableTagVal<Int> tagVal(int data);

};

struct PosMaintAction
{
  constexpr static const int tag = 712;
  constexpr static const char* name = "PosMaintAction";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNewUsedToIncrementTheOverallTransactionQuantity = 1;
  constexpr static const int valReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId = 2;
  constexpr static const int valCancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId = 3;

  constexpr static const char* tagValNewUsedToIncrementTheOverallTransactionQuantity = "712=1";
  constexpr static const char* tagValReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId = "712=2";
  constexpr static const char* tagValCancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId = "712=3";

};

struct OrigPosReqRefID
{
  constexpr static const int tag = 713;
  constexpr static const char* name = "OrigPosReqRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct PosMaintRptRefID
{
  constexpr static const int tag = 714;
  constexpr static const char* name = "PosMaintRptRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ClearingBusinessDate
{
  constexpr static const int tag = 715;
  constexpr static const char* name = "ClearingBusinessDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct SettlSessID
{
  constexpr static const int tag = 716;
  constexpr static const char* name = "SettlSessID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlSessSubID
{
  constexpr static const int tag = 717;
  constexpr static const char* name = "SettlSessSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AdjustmentType
{
  constexpr static const int tag = 718;
  constexpr static const char* name = "AdjustmentType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valProcessRequestAsMarginDisposition = 0;
  constexpr static const int valDeltaPlus = 1;
  constexpr static const int valDeltaMinus = 2;
  constexpr static const int valFinal = 3;

  constexpr static const char* tagValProcessRequestAsMarginDisposition = "718=0";
  constexpr static const char* tagValDeltaPlus = "718=1";
  constexpr static const char* tagValDeltaMinus = "718=2";
  constexpr static const char* tagValFinal = "718=3";

};

struct ContraryInstructionIndicator
{
  constexpr static const int tag = 719;
  constexpr static const char* name = "ContraryInstructionIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct PriorSpreadIndicator
{
  constexpr static const int tag = 720;
  constexpr static const char* name = "PriorSpreadIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct PosMaintRptID
{
  constexpr static const int tag = 721;
  constexpr static const char* name = "PosMaintRptID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct PosMaintStatus
{
  constexpr static const int tag = 722;
  constexpr static const char* name = "PosMaintStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccepted = 0;
  constexpr static const int valAcceptedWithWarnings = 1;
  constexpr static const int valRejected = 2;
  constexpr static const int valCompleted = 3;
  constexpr static const int valCompletedWithWarnings = 4;

  constexpr static const char* tagValAccepted = "722=0";
  constexpr static const char* tagValAcceptedWithWarnings = "722=1";
  constexpr static const char* tagValRejected = "722=2";
  constexpr static const char* tagValCompleted = "722=3";
  constexpr static const char* tagValCompletedWithWarnings = "722=4";

};

struct PosMaintResult
{
  constexpr static const int tag = 723;
  constexpr static const char* name = "PosMaintResult";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSuccessfulCompletionNoWarningsOrErrors = 0;
  constexpr static const int valRejected = 1;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValSuccessfulCompletionNoWarningsOrErrors = "723=0";
  constexpr static const char* tagValRejected = "723=1";
  constexpr static const char* tagValOther = "723=99";

};

struct PosReqType
{
  constexpr static const int tag = 724;
  constexpr static const char* name = "PosReqType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPositions = 0;
  constexpr static const int valTrades = 1;
  constexpr static const int valExercises = 2;
  constexpr static const int valAssignments = 3;

  constexpr static const char* tagValPositions = "724=0";
  constexpr static const char* tagValTrades = "724=1";
  constexpr static const char* tagValExercises = "724=2";
  constexpr static const char* tagValAssignments = "724=3";

};

struct ResponseTransportType
{
  constexpr static const int tag = 725;
  constexpr static const char* name = "ResponseTransportType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valInbandTransportTheRequestWasSentOver = 0;
  constexpr static const int valOutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME = 1;

  constexpr static const char* tagValInbandTransportTheRequestWasSentOver = "725=0";
  constexpr static const char* tagValOutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME = "725=1";

};

struct ResponseDestination
{
  constexpr static const int tag = 726;
  constexpr static const char* name = "ResponseDestination";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TotalNumPosReports
{
  constexpr static const int tag = 727;
  constexpr static const char* name = "TotalNumPosReports";

  static writeableTagVal<Int> tagVal(int data);

};

struct PosReqResult
{
  constexpr static const int tag = 728;
  constexpr static const char* name = "PosReqResult";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valValidRequest = 0;
  constexpr static const int valInvalidOrUnsupportedRequest = 1;
  constexpr static const int valNoPositionsFoundThatMatchCriteria = 2;
  constexpr static const int valNotAuthorizedToRequestPositions = 3;
  constexpr static const int valRequestForPositionNotSupported = 4;
  constexpr static const int valOtheruseText = 99;

  constexpr static const char* tagValValidRequest = "728=0";
  constexpr static const char* tagValInvalidOrUnsupportedRequest = "728=1";
  constexpr static const char* tagValNoPositionsFoundThatMatchCriteria = "728=2";
  constexpr static const char* tagValNotAuthorizedToRequestPositions = "728=3";
  constexpr static const char* tagValRequestForPositionNotSupported = "728=4";
  constexpr static const char* tagValOtheruseText = "728=99";

};

struct PosReqStatus
{
  constexpr static const int tag = 729;
  constexpr static const char* name = "PosReqStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valCompleted = 0;
  constexpr static const int valCompletedWithWarnings = 1;
  constexpr static const int valRejected = 2;

  constexpr static const char* tagValCompleted = "729=0";
  constexpr static const char* tagValCompletedWithWarnings = "729=1";
  constexpr static const char* tagValRejected = "729=2";

};

struct SettlPrice
{
  constexpr static const int tag = 730;
  constexpr static const char* name = "SettlPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct SettlPriceType
{
  constexpr static const int tag = 731;
  constexpr static const char* name = "SettlPriceType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valFinal = 1;
  constexpr static const int valTheoretical = 2;

  constexpr static const char* tagValFinal = "731=1";
  constexpr static const char* tagValTheoretical = "731=2";

};

struct UnderlyingSettlPrice
{
  constexpr static const int tag = 732;
  constexpr static const char* name = "UnderlyingSettlPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingSettlPriceType
{
  constexpr static const int tag = 733;
  constexpr static const char* name = "UnderlyingSettlPriceType";

  static writeableTagVal<Int> tagVal(int data);

};

struct PriorSettlPrice
{
  constexpr static const int tag = 734;
  constexpr static const char* name = "PriorSettlPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoQuoteQualifiers
{
  constexpr static const int tag = 735;
  constexpr static const char* name = "NoQuoteQualifiers";

  static writeableTagVal<Int> tagVal(int data);

};

struct AllocSettlCurrency
{
  constexpr static const int tag = 736;
  constexpr static const char* name = "AllocSettlCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocSettlCurrAmt
{
  constexpr static const int tag = 737;
  constexpr static const char* name = "AllocSettlCurrAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct InterestAtMaturity
{
  constexpr static const int tag = 738;
  constexpr static const char* name = "InterestAtMaturity";

  static writeableTagVal<Float> tagVal(float data);

};

struct LegDatedDate
{
  constexpr static const int tag = 739;
  constexpr static const char* name = "LegDatedDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct LegPool
{
  constexpr static const int tag = 740;
  constexpr static const char* name = "LegPool";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocInterestAtMaturity
{
  constexpr static const int tag = 741;
  constexpr static const char* name = "AllocInterestAtMaturity";

  static writeableTagVal<Float> tagVal(float data);

};

struct AllocAccruedInterestAmt
{
  constexpr static const int tag = 742;
  constexpr static const char* name = "AllocAccruedInterestAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct DeliveryDate
{
  constexpr static const int tag = 743;
  constexpr static const char* name = "DeliveryDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct AssignmentMethod
{
  constexpr static const int tag = 744;
  constexpr static const char* name = "AssignmentMethod";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valRandom = 'R';
  constexpr static const char valProRata = 'P';

  constexpr static const char* tagValRandom = "744=R";
  constexpr static const char* tagValProRata = "744=P";

};

struct AssignmentUnit
{
  constexpr static const int tag = 745;
  constexpr static const char* name = "AssignmentUnit";

  static writeableTagVal<Float> tagVal(float data);

};

struct OpenInterest
{
  constexpr static const int tag = 746;
  constexpr static const char* name = "OpenInterest";

  static writeableTagVal<Float> tagVal(float data);

};

struct ExerciseMethod
{
  constexpr static const int tag = 747;
  constexpr static const char* name = "ExerciseMethod";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valAutomatic = 'A';
  constexpr static const char valManual = 'M';

  constexpr static const char* tagValAutomatic = "747=A";
  constexpr static const char* tagValManual = "747=M";

};

struct TotNumTradeReports
{
  constexpr static const int tag = 748;
  constexpr static const char* name = "TotNumTradeReports";

  static writeableTagVal<Int> tagVal(int data);

};

struct TradeRequestResult
{
  constexpr static const int tag = 749;
  constexpr static const char* name = "TradeRequestResult";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSuccessful = 0;
  constexpr static const int valInvalidOrUnknownInstrument = 1;
  constexpr static const int valInvalidTypeOfTradeRequested = 2;
  constexpr static const int valInvalidParties = 3;
  constexpr static const int valInvalidTransportTypeRequested = 4;
  constexpr static const int valInvalidDestinationRequested = 5;
  constexpr static const int valTradeRequestTypeNotSupported = 8;
  constexpr static const int valUnauthorizedForTradeCaptureReportRequest = 9;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValSuccessful = "749=0";
  constexpr static const char* tagValInvalidOrUnknownInstrument = "749=1";
  constexpr static const char* tagValInvalidTypeOfTradeRequested = "749=2";
  constexpr static const char* tagValInvalidParties = "749=3";
  constexpr static const char* tagValInvalidTransportTypeRequested = "749=4";
  constexpr static const char* tagValInvalidDestinationRequested = "749=5";
  constexpr static const char* tagValTradeRequestTypeNotSupported = "749=8";
  constexpr static const char* tagValUnauthorizedForTradeCaptureReportRequest = "749=9";
  constexpr static const char* tagValOther = "749=99";

};

struct TradeRequestStatus
{
  constexpr static const int tag = 750;
  constexpr static const char* name = "TradeRequestStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccepted = 0;
  constexpr static const int valCompleted = 1;
  constexpr static const int valRejected = 2;

  constexpr static const char* tagValAccepted = "750=0";
  constexpr static const char* tagValCompleted = "750=1";
  constexpr static const char* tagValRejected = "750=2";

};

struct TradeReportRejectReason
{
  constexpr static const int tag = 751;
  constexpr static const char* name = "TradeReportRejectReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSuccessful = 0;
  constexpr static const int valInvalidPartyInformation = 1;
  constexpr static const int valUnknownInstrument = 2;
  constexpr static const int valUnauthorizedToReportTrades = 3;
  constexpr static const int valInvalidTradeType = 4;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValSuccessful = "751=0";
  constexpr static const char* tagValInvalidPartyInformation = "751=1";
  constexpr static const char* tagValUnknownInstrument = "751=2";
  constexpr static const char* tagValUnauthorizedToReportTrades = "751=3";
  constexpr static const char* tagValInvalidTradeType = "751=4";
  constexpr static const char* tagValOther = "751=99";

};

struct SideMultiLegReportingType
{
  constexpr static const int tag = 752;
  constexpr static const char* name = "SideMultiLegReportingType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSingleSecurity = 1;
  constexpr static const int valIndividualLegOfAMultiLegSecurity = 2;
  constexpr static const int valMultiLegSecurity = 3;

  constexpr static const char* tagValSingleSecurity = "752=1";
  constexpr static const char* tagValIndividualLegOfAMultiLegSecurity = "752=2";
  constexpr static const char* tagValMultiLegSecurity = "752=3";

};

struct NoPosAmt
{
  constexpr static const int tag = 753;
  constexpr static const char* name = "NoPosAmt";

  static writeableTagVal<Int> tagVal(int data);

};

struct AutoAcceptIndicator
{
  constexpr static const int tag = 754;
  constexpr static const char* name = "AutoAcceptIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct AllocReportID
{
  constexpr static const int tag = 755;
  constexpr static const char* name = "AllocReportID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoNested2PartyIDs
{
  constexpr static const int tag = 756;
  constexpr static const char* name = "NoNested2PartyIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct Nested2PartyID
{
  constexpr static const int tag = 757;
  constexpr static const char* name = "Nested2PartyID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Nested2PartyIDSource
{
  constexpr static const int tag = 758;
  constexpr static const char* name = "Nested2PartyIDSource";

  static writeableTagVal<Char> tagVal(char data);

};

struct Nested2PartyRole
{
  constexpr static const int tag = 759;
  constexpr static const char* name = "Nested2PartyRole";

  static writeableTagVal<Int> tagVal(int data);

};

struct Nested2PartySubID
{
  constexpr static const int tag = 760;
  constexpr static const char* name = "Nested2PartySubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct BenchmarkSecurityIDSource
{
  constexpr static const int tag = 761;
  constexpr static const char* name = "BenchmarkSecurityIDSource";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecuritySubType
{
  constexpr static const int tag = 762;
  constexpr static const char* name = "SecuritySubType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingSecuritySubType
{
  constexpr static const int tag = 763;
  constexpr static const char* name = "UnderlyingSecuritySubType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegSecuritySubType
{
  constexpr static const int tag = 764;
  constexpr static const char* name = "LegSecuritySubType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllowableOneSidednessPct
{
  constexpr static const int tag = 765;
  constexpr static const char* name = "AllowableOneSidednessPct";

  static writeableTagVal<Float> tagVal(float data);

};

struct AllowableOneSidednessValue
{
  constexpr static const int tag = 766;
  constexpr static const char* name = "AllowableOneSidednessValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct AllowableOneSidednessCurr
{
  constexpr static const int tag = 767;
  constexpr static const char* name = "AllowableOneSidednessCurr";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoTrdRegTimestamps
{
  constexpr static const int tag = 768;
  constexpr static const char* name = "NoTrdRegTimestamps";

  static writeableTagVal<Int> tagVal(int data);

};

struct TrdRegTimestamp
{
  constexpr static const int tag = 769;
  constexpr static const char* name = "TrdRegTimestamp";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct TrdRegTimestampType
{
  constexpr static const int tag = 770;
  constexpr static const char* name = "TrdRegTimestampType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valExecutionTime = 1;
  constexpr static const int valTimeIn = 2;
  constexpr static const int valTimeOut = 3;
  constexpr static const int valBrokerReceipt = 4;
  constexpr static const int valBrokerExecution = 5;

  constexpr static const char* tagValExecutionTime = "770=1";
  constexpr static const char* tagValTimeIn = "770=2";
  constexpr static const char* tagValTimeOut = "770=3";
  constexpr static const char* tagValBrokerReceipt = "770=4";
  constexpr static const char* tagValBrokerExecution = "770=5";

};

struct TrdRegTimestampOrigin
{
  constexpr static const int tag = 771;
  constexpr static const char* name = "TrdRegTimestampOrigin";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ConfirmRefID
{
  constexpr static const int tag = 772;
  constexpr static const char* name = "ConfirmRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ConfirmType
{
  constexpr static const int tag = 773;
  constexpr static const char* name = "ConfirmType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valStatus = 1;
  constexpr static const int valConfirmation = 2;
  constexpr static const int valConfirmationRequestRejected = 3;

  constexpr static const char* tagValStatus = "773=1";
  constexpr static const char* tagValConfirmation = "773=2";
  constexpr static const char* tagValConfirmationRequestRejected = "773=3";

};

struct ConfirmRejReason
{
  constexpr static const int tag = 774;
  constexpr static const char* name = "ConfirmRejReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valMismatchedAccount = 1;
  constexpr static const int valMissingSettlementInstructions = 2;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValMismatchedAccount = "774=1";
  constexpr static const char* tagValMissingSettlementInstructions = "774=2";
  constexpr static const char* tagValOther = "774=99";

};

struct BookingType
{
  constexpr static const int tag = 775;
  constexpr static const char* name = "BookingType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valRegularBooking = 0;
  constexpr static const int valCFD = 1;
  constexpr static const int valTotalReturnSwap = 2;

  constexpr static const char* tagValRegularBooking = "775=0";
  constexpr static const char* tagValCFD = "775=1";
  constexpr static const char* tagValTotalReturnSwap = "775=2";

};

struct IndividualAllocRejCode
{
  constexpr static const int tag = 776;
  constexpr static const char* name = "IndividualAllocRejCode";

  static writeableTagVal<Int> tagVal(int data);

};

struct SettlInstMsgID
{
  constexpr static const int tag = 777;
  constexpr static const char* name = "SettlInstMsgID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoSettlInst
{
  constexpr static const int tag = 778;
  constexpr static const char* name = "NoSettlInst";

  static writeableTagVal<Int> tagVal(int data);

};

struct LastUpdateTime
{
  constexpr static const int tag = 779;
  constexpr static const char* name = "LastUpdateTime";

  static writeableTagVal<DateAndTime> tagVal(DateAndTime data);

};

struct AllocSettlInstType
{
  constexpr static const int tag = 780;
  constexpr static const char* name = "AllocSettlInstType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUseDefaultInstructions = 0;
  constexpr static const int valDeriveFromParametersProvided = 1;
  constexpr static const int valFullDetailsProvided = 2;
  constexpr static const int valSSIDbIdsProvided = 3;
  constexpr static const int valPhoneForInstructions = 4;

  constexpr static const char* tagValUseDefaultInstructions = "780=0";
  constexpr static const char* tagValDeriveFromParametersProvided = "780=1";
  constexpr static const char* tagValFullDetailsProvided = "780=2";
  constexpr static const char* tagValSSIDbIdsProvided = "780=3";
  constexpr static const char* tagValPhoneForInstructions = "780=4";

};

struct NoSettlPartyIDs
{
  constexpr static const int tag = 781;
  constexpr static const char* name = "NoSettlPartyIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct SettlPartyID
{
  constexpr static const int tag = 782;
  constexpr static const char* name = "SettlPartyID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlPartyIDSource
{
  constexpr static const int tag = 783;
  constexpr static const char* name = "SettlPartyIDSource";

  static writeableTagVal<Char> tagVal(char data);

};

struct SettlPartyRole
{
  constexpr static const int tag = 784;
  constexpr static const char* name = "SettlPartyRole";

  static writeableTagVal<Int> tagVal(int data);

};

struct SettlPartySubID
{
  constexpr static const int tag = 785;
  constexpr static const char* name = "SettlPartySubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlPartySubIDType
{
  constexpr static const int tag = 786;
  constexpr static const char* name = "SettlPartySubIDType";

  static writeableTagVal<Int> tagVal(int data);

};

struct DlvyInstType
{
  constexpr static const int tag = 787;
  constexpr static const char* name = "DlvyInstType";

  static writeableTagVal<Char> tagVal(char data);

  constexpr static const char valSecurities = 'S';
  constexpr static const char valCash = 'C';

  constexpr static const char* tagValSecurities = "787=S";
  constexpr static const char* tagValCash = "787=C";

};

struct TerminationType
{
  constexpr static const int tag = 788;
  constexpr static const char* name = "TerminationType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valOvernight = 1;
  constexpr static const int valTerm = 2;
  constexpr static const int valFlexible = 3;
  constexpr static const int valOpen = 4;

  constexpr static const char* tagValOvernight = "788=1";
  constexpr static const char* tagValTerm = "788=2";
  constexpr static const char* tagValFlexible = "788=3";
  constexpr static const char* tagValOpen = "788=4";

};

struct NextExpectedMsgSeqNum
{
  constexpr static const int tag = 789;
  constexpr static const char* name = "NextExpectedMsgSeqNum";

  static writeableTagVal<Int> tagVal(int data);

};

struct OrdStatusReqID
{
  constexpr static const int tag = 790;
  constexpr static const char* name = "OrdStatusReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlInstReqID
{
  constexpr static const int tag = 791;
  constexpr static const char* name = "SettlInstReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SettlInstReqRejCode
{
  constexpr static const int tag = 792;
  constexpr static const char* name = "SettlInstReqRejCode";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnableToProcessRequest = 0;
  constexpr static const int valUnknownAccount = 1;
  constexpr static const int valNoMatchingSettlementInstructionsFound = 2;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValUnableToProcessRequest = "792=0";
  constexpr static const char* tagValUnknownAccount = "792=1";
  constexpr static const char* tagValNoMatchingSettlementInstructionsFound = "792=2";
  constexpr static const char* tagValOther = "792=99";

};

struct SecondaryAllocID
{
  constexpr static const int tag = 793;
  constexpr static const char* name = "SecondaryAllocID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocReportType
{
  constexpr static const int tag = 794;
  constexpr static const char* name = "AllocReportType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSellsideCalculatedUsingPreliminary = 3;
  constexpr static const int valSellsideCalculatedWithoutPreliminary = 4;
  constexpr static const int valWarehouseRecap = 5;
  constexpr static const int valRequestToIntermediary = 8;

  constexpr static const char* tagValSellsideCalculatedUsingPreliminary = "794=3";
  constexpr static const char* tagValSellsideCalculatedWithoutPreliminary = "794=4";
  constexpr static const char* tagValWarehouseRecap = "794=5";
  constexpr static const char* tagValRequestToIntermediary = "794=8";

};

struct AllocReportRefID
{
  constexpr static const int tag = 795;
  constexpr static const char* name = "AllocReportRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AllocCancReplaceReason
{
  constexpr static const int tag = 796;
  constexpr static const char* name = "AllocCancReplaceReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valOriginalDetailsIncompleteOrIncorrect = 1;
  constexpr static const int valChangeInUnderlyingOrderDetails = 2;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValOriginalDetailsIncompleteOrIncorrect = "796=1";
  constexpr static const char* tagValChangeInUnderlyingOrderDetails = "796=2";
  constexpr static const char* tagValOther = "796=99";

};

struct CopyMsgIndicator
{
  constexpr static const int tag = 797;
  constexpr static const char* name = "CopyMsgIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct AllocAccountType
{
  constexpr static const int tag = 798;
  constexpr static const char* name = "AllocAccountType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccountIsCarriedOnCustomerSideOfBooks = 1;
  constexpr static const int valAccountIsCarriedOnNonCustomerSideOfBooks = 2;
  constexpr static const int valHouseTrader = 3;
  constexpr static const int valFloorTrader = 4;
  constexpr static const int valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = 6;
  constexpr static const int valAccountIsHouseTraderAndIsCrossMargined = 7;
  constexpr static const int valJointBackofficeAccount = 8;

  constexpr static const char* tagValAccountIsCarriedOnCustomerSideOfBooks = "798=1";
  constexpr static const char* tagValAccountIsCarriedOnNonCustomerSideOfBooks = "798=2";
  constexpr static const char* tagValHouseTrader = "798=3";
  constexpr static const char* tagValFloorTrader = "798=4";
  constexpr static const char* tagValAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = "798=6";
  constexpr static const char* tagValAccountIsHouseTraderAndIsCrossMargined = "798=7";
  constexpr static const char* tagValJointBackofficeAccount = "798=8";

};

struct OrderAvgPx
{
  constexpr static const int tag = 799;
  constexpr static const char* name = "OrderAvgPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct OrderBookingQty
{
  constexpr static const int tag = 800;
  constexpr static const char* name = "OrderBookingQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoSettlPartySubIDs
{
  constexpr static const int tag = 801;
  constexpr static const char* name = "NoSettlPartySubIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoPartySubIDs
{
  constexpr static const int tag = 802;
  constexpr static const char* name = "NoPartySubIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct PartySubIDType
{
  constexpr static const int tag = 803;
  constexpr static const char* name = "PartySubIDType";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoNestedPartySubIDs
{
  constexpr static const int tag = 804;
  constexpr static const char* name = "NoNestedPartySubIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct NestedPartySubIDType
{
  constexpr static const int tag = 805;
  constexpr static const char* name = "NestedPartySubIDType";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoNested2PartySubIDs
{
  constexpr static const int tag = 806;
  constexpr static const char* name = "NoNested2PartySubIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct Nested2PartySubIDType
{
  constexpr static const int tag = 807;
  constexpr static const char* name = "Nested2PartySubIDType";

  static writeableTagVal<Int> tagVal(int data);

};

struct AllocIntermedReqType
{
  constexpr static const int tag = 808;
  constexpr static const char* name = "AllocIntermedReqType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPendingAccept = 1;
  constexpr static const int valPendingRelease = 2;
  constexpr static const int valPendingReversal = 3;
  constexpr static const int valAccept = 4;
  constexpr static const int valBlockLevelReject = 5;
  constexpr static const int valAccountLevelReject = 6;

  constexpr static const char* tagValPendingAccept = "808=1";
  constexpr static const char* tagValPendingRelease = "808=2";
  constexpr static const char* tagValPendingReversal = "808=3";
  constexpr static const char* tagValAccept = "808=4";
  constexpr static const char* tagValBlockLevelReject = "808=5";
  constexpr static const char* tagValAccountLevelReject = "808=6";

};

struct UnderlyingPx
{
  constexpr static const int tag = 810;
  constexpr static const char* name = "UnderlyingPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct PriceDelta
{
  constexpr static const int tag = 811;
  constexpr static const char* name = "PriceDelta";

  static writeableTagVal<Float> tagVal(float data);

};

struct ApplQueueMax
{
  constexpr static const int tag = 812;
  constexpr static const char* name = "ApplQueueMax";

  static writeableTagVal<Int> tagVal(int data);

};

struct ApplQueueDepth
{
  constexpr static const int tag = 813;
  constexpr static const char* name = "ApplQueueDepth";

  static writeableTagVal<Int> tagVal(int data);

};

struct ApplQueueResolution
{
  constexpr static const int tag = 814;
  constexpr static const char* name = "ApplQueueResolution";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNoActionTaken = 0;
  constexpr static const int valQueueFlushed = 1;
  constexpr static const int valOverlayLast = 2;
  constexpr static const int valEndSession = 3;

  constexpr static const char* tagValNoActionTaken = "814=0";
  constexpr static const char* tagValQueueFlushed = "814=1";
  constexpr static const char* tagValOverlayLast = "814=2";
  constexpr static const char* tagValEndSession = "814=3";

};

struct ApplQueueAction
{
  constexpr static const int tag = 815;
  constexpr static const char* name = "ApplQueueAction";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNoActionTaken = 0;
  constexpr static const int valQueueFlushed = 1;
  constexpr static const int valOverlayLast = 2;
  constexpr static const int valEndSession = 3;

  constexpr static const char* tagValNoActionTaken = "815=0";
  constexpr static const char* tagValQueueFlushed = "815=1";
  constexpr static const char* tagValOverlayLast = "815=2";
  constexpr static const char* tagValEndSession = "815=3";

};

struct NoAltMDSource
{
  constexpr static const int tag = 816;
  constexpr static const char* name = "NoAltMDSource";

  static writeableTagVal<Int> tagVal(int data);

};

struct AltMDSourceID
{
  constexpr static const int tag = 817;
  constexpr static const char* name = "AltMDSourceID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecondaryTradeReportID
{
  constexpr static const int tag = 818;
  constexpr static const char* name = "SecondaryTradeReportID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AvgPxIndicator
{
  constexpr static const int tag = 819;
  constexpr static const char* name = "AvgPxIndicator";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valNoAveragePricing = 0;
  constexpr static const int valTradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID = 1;
  constexpr static const int valLastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID = 2;

  constexpr static const char* tagValNoAveragePricing = "819=0";
  constexpr static const char* tagValTradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID = "819=1";
  constexpr static const char* tagValLastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID = "819=2";

};

struct TradeLinkID
{
  constexpr static const int tag = 820;
  constexpr static const char* name = "TradeLinkID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct OrderInputDevice
{
  constexpr static const int tag = 821;
  constexpr static const char* name = "OrderInputDevice";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingTradingSessionID
{
  constexpr static const int tag = 822;
  constexpr static const char* name = "UnderlyingTradingSessionID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingTradingSessionSubID
{
  constexpr static const int tag = 823;
  constexpr static const char* name = "UnderlyingTradingSessionSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradeLegRefID
{
  constexpr static const int tag = 824;
  constexpr static const char* name = "TradeLegRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ExchangeRule
{
  constexpr static const int tag = 825;
  constexpr static const char* name = "ExchangeRule";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TradeAllocIndicator
{
  constexpr static const int tag = 826;
  constexpr static const char* name = "TradeAllocIndicator";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAllocationNotRequired = 0;
  constexpr static const int valAllocationRequiredgiveUpTradeAllocationInformationNotProvided = 1;
  constexpr static const int valUseAllocationProvidedWithTheTrade = 2;

  constexpr static const char* tagValAllocationNotRequired = "826=0";
  constexpr static const char* tagValAllocationRequiredgiveUpTradeAllocationInformationNotProvided = "826=1";
  constexpr static const char* tagValUseAllocationProvidedWithTheTrade = "826=2";

};

struct ExpirationCycle
{
  constexpr static const int tag = 827;
  constexpr static const char* name = "ExpirationCycle";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valExpireOnTradingSessionClose = 0;
  constexpr static const int valExpireOnTradingSessionOpen = 1;

  constexpr static const char* tagValExpireOnTradingSessionClose = "827=0";
  constexpr static const char* tagValExpireOnTradingSessionOpen = "827=1";

};

struct TrdType
{
  constexpr static const int tag = 828;
  constexpr static const char* name = "TrdType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valRegularTrade = 0;
  constexpr static const int valBlockTrade = 1;
  constexpr static const int valEFP = 2;
  constexpr static const int valTransfer = 3;
  constexpr static const int valLateTrade = 4;
  constexpr static const int valTTrade = 5;
  constexpr static const int valWeightedAveragePriceTrade = 6;
  constexpr static const int valBunchedTrade = 7;
  constexpr static const int valLateBunchedTrade = 8;
  constexpr static const int valPriorReferencePriceTrade = 9;
  constexpr static const int valAfterHoursTrade = 0;

  constexpr static const char* tagValRegularTrade = "828=0";
  constexpr static const char* tagValBlockTrade = "828=1";
  constexpr static const char* tagValEFP = "828=2";
  constexpr static const char* tagValTransfer = "828=3";
  constexpr static const char* tagValLateTrade = "828=4";
  constexpr static const char* tagValTTrade = "828=5";
  constexpr static const char* tagValWeightedAveragePriceTrade = "828=6";
  constexpr static const char* tagValBunchedTrade = "828=7";
  constexpr static const char* tagValLateBunchedTrade = "828=8";
  constexpr static const char* tagValPriorReferencePriceTrade = "828=9";
  constexpr static const char* tagValAfterHoursTrade = "828=0";

};

struct TrdSubType
{
  constexpr static const int tag = 829;
  constexpr static const char* name = "TrdSubType";

  static writeableTagVal<Int> tagVal(int data);

};

struct TransferReason
{
  constexpr static const int tag = 830;
  constexpr static const char* name = "TransferReason";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AsgnReqID
{
  constexpr static const int tag = 831;
  constexpr static const char* name = "AsgnReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TotNumAssignmentReports
{
  constexpr static const int tag = 832;
  constexpr static const char* name = "TotNumAssignmentReports";

  static writeableTagVal<Int> tagVal(int data);

};

struct AsgnRptID
{
  constexpr static const int tag = 833;
  constexpr static const char* name = "AsgnRptID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ThresholdAmount
{
  constexpr static const int tag = 834;
  constexpr static const char* name = "ThresholdAmount";

  static writeableTagVal<Float> tagVal(float data);

};

struct PegMoveType
{
  constexpr static const int tag = 835;
  constexpr static const char* name = "PegMoveType";

  static writeableTagVal<Int> tagVal(int data);

};

struct PegOffsetType
{
  constexpr static const int tag = 836;
  constexpr static const char* name = "PegOffsetType";

  static writeableTagVal<Int> tagVal(int data);

};

struct PegLimitType
{
  constexpr static const int tag = 837;
  constexpr static const char* name = "PegLimitType";

  static writeableTagVal<Int> tagVal(int data);

};

struct PegRoundDirection
{
  constexpr static const int tag = 838;
  constexpr static const char* name = "PegRoundDirection";

  static writeableTagVal<Int> tagVal(int data);

};

struct PeggedPrice
{
  constexpr static const int tag = 839;
  constexpr static const char* name = "PeggedPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct PegScope
{
  constexpr static const int tag = 840;
  constexpr static const char* name = "PegScope";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valLocal = 1;
  constexpr static const int valNational = 2;
  constexpr static const int valGlobal = 3;
  constexpr static const int valNationalExcludingLocal = 4;

  constexpr static const char* tagValLocal = "840=1";
  constexpr static const char* tagValNational = "840=2";
  constexpr static const char* tagValGlobal = "840=3";
  constexpr static const char* tagValNationalExcludingLocal = "840=4";

};

struct DiscretionMoveType
{
  constexpr static const int tag = 841;
  constexpr static const char* name = "DiscretionMoveType";

  static writeableTagVal<Int> tagVal(int data);

};

struct DiscretionOffsetType
{
  constexpr static const int tag = 842;
  constexpr static const char* name = "DiscretionOffsetType";

  static writeableTagVal<Int> tagVal(int data);

};

struct DiscretionLimitType
{
  constexpr static const int tag = 843;
  constexpr static const char* name = "DiscretionLimitType";

  static writeableTagVal<Int> tagVal(int data);

};

struct DiscretionRoundDirection
{
  constexpr static const int tag = 844;
  constexpr static const char* name = "DiscretionRoundDirection";

  static writeableTagVal<Int> tagVal(int data);

};

struct DiscretionPrice
{
  constexpr static const int tag = 845;
  constexpr static const char* name = "DiscretionPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct DiscretionScope
{
  constexpr static const int tag = 846;
  constexpr static const char* name = "DiscretionScope";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valLocal = 1;
  constexpr static const int valNational = 2;
  constexpr static const int valGlobal = 3;
  constexpr static const int valNationalExcludingLocal = 4;

  constexpr static const char* tagValLocal = "846=1";
  constexpr static const char* tagValNational = "846=2";
  constexpr static const char* tagValGlobal = "846=3";
  constexpr static const char* tagValNationalExcludingLocal = "846=4";

};

struct TargetStrategy
{
  constexpr static const int tag = 847;
  constexpr static const char* name = "TargetStrategy";

  static writeableTagVal<Int> tagVal(int data);

};

struct TargetStrategyParameters
{
  constexpr static const int tag = 848;
  constexpr static const char* name = "TargetStrategyParameters";

  static writeableTagVal<String> tagVal(const char* data);

};

struct ParticipationRate
{
  constexpr static const int tag = 849;
  constexpr static const char* name = "ParticipationRate";

  static writeableTagVal<Float> tagVal(float data);

};

struct TargetStrategyPerformance
{
  constexpr static const int tag = 850;
  constexpr static const char* name = "TargetStrategyPerformance";

  static writeableTagVal<Float> tagVal(float data);

};

struct LastLiquidityInd
{
  constexpr static const int tag = 851;
  constexpr static const char* name = "LastLiquidityInd";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAddedLiquidity = 1;
  constexpr static const int valRemovedLiquidity = 2;
  constexpr static const int valLiquidityRoutedOut = 3;

  constexpr static const char* tagValAddedLiquidity = "851=1";
  constexpr static const char* tagValRemovedLiquidity = "851=2";
  constexpr static const char* tagValLiquidityRoutedOut = "851=3";

};

struct PublishTrdIndicator
{
  constexpr static const int tag = 852;
  constexpr static const char* name = "PublishTrdIndicator";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valReportTrade = true;
  constexpr static const bool valDoNotReportTrade = false;

  constexpr static const char* tagValReportTrade = "852=Y";
  constexpr static const char* tagValDoNotReportTrade = "852=N";

};

struct ShortSaleReason
{
  constexpr static const int tag = 853;
  constexpr static const char* name = "ShortSaleReason";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valDealerSoldShort = 0;
  constexpr static const int valDealerSoldShortExempt = 1;
  constexpr static const int valSellingCustomerSoldShort = 2;
  constexpr static const int valSellingCustomerSoldShortExempt = 3;
  constexpr static const int valQualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort = 4;
  constexpr static const int valQSROrAGUContraSideSoldShortExempt = 5;

  constexpr static const char* tagValDealerSoldShort = "853=0";
  constexpr static const char* tagValDealerSoldShortExempt = "853=1";
  constexpr static const char* tagValSellingCustomerSoldShort = "853=2";
  constexpr static const char* tagValSellingCustomerSoldShortExempt = "853=3";
  constexpr static const char* tagValQualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort = "853=4";
  constexpr static const char* tagValQSROrAGUContraSideSoldShortExempt = "853=5";

};

struct QtyType
{
  constexpr static const int tag = 854;
  constexpr static const char* name = "QtyType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valUnits = 0;
  constexpr static const int valContractsIfUsedShouldSpecifyContractMultiplier = 1;

  constexpr static const char* tagValUnits = "854=0";
  constexpr static const char* tagValContractsIfUsedShouldSpecifyContractMultiplier = "854=1";

};

struct SecondaryTrdType
{
  constexpr static const int tag = 855;
  constexpr static const char* name = "SecondaryTrdType";

  static writeableTagVal<Int> tagVal(int data);

};

struct TradeReportType
{
  constexpr static const int tag = 856;
  constexpr static const char* name = "TradeReportType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSubmit = 0;
  constexpr static const int valAlleged = 1;
  constexpr static const int valAccept = 2;
  constexpr static const int valDecline = 3;
  constexpr static const int valAddendum = 4;
  constexpr static const int valNoOrWas = 5;
  constexpr static const int valTradeReportCancel = 6;
  constexpr static const int valLockedInTradeBreak = 7;

  constexpr static const char* tagValSubmit = "856=0";
  constexpr static const char* tagValAlleged = "856=1";
  constexpr static const char* tagValAccept = "856=2";
  constexpr static const char* tagValDecline = "856=3";
  constexpr static const char* tagValAddendum = "856=4";
  constexpr static const char* tagValNoOrWas = "856=5";
  constexpr static const char* tagValTradeReportCancel = "856=6";
  constexpr static const char* tagValLockedInTradeBreak = "856=7";

};

struct AllocNoOrdersType
{
  constexpr static const int tag = 857;
  constexpr static const char* name = "AllocNoOrdersType";

  static writeableTagVal<Int> tagVal(int data);

};

struct SharedCommission
{
  constexpr static const int tag = 858;
  constexpr static const char* name = "SharedCommission";

  static writeableTagVal<Float> tagVal(float data);

};

struct ConfirmReqID
{
  constexpr static const int tag = 859;
  constexpr static const char* name = "ConfirmReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AvgParPx
{
  constexpr static const int tag = 860;
  constexpr static const char* name = "AvgParPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct ReportedPx
{
  constexpr static const int tag = 861;
  constexpr static const char* name = "ReportedPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoCapacities
{
  constexpr static const int tag = 862;
  constexpr static const char* name = "NoCapacities";

  static writeableTagVal<Int> tagVal(int data);

};

struct OrderCapacityQty
{
  constexpr static const int tag = 863;
  constexpr static const char* name = "OrderCapacityQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoEvents
{
  constexpr static const int tag = 864;
  constexpr static const char* name = "NoEvents";

  static writeableTagVal<Int> tagVal(int data);

};

struct EventType
{
  constexpr static const int tag = 865;
  constexpr static const char* name = "EventType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valPut = 1;
  constexpr static const int valCall = 2;
  constexpr static const int valTender = 3;
  constexpr static const int valSinkingFundCall = 4;
  constexpr static const int valOther = 99;

  constexpr static const char* tagValPut = "865=1";
  constexpr static const char* tagValCall = "865=2";
  constexpr static const char* tagValTender = "865=3";
  constexpr static const char* tagValSinkingFundCall = "865=4";
  constexpr static const char* tagValOther = "865=99";

};

struct EventDate
{
  constexpr static const int tag = 866;
  constexpr static const char* name = "EventDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct EventPx
{
  constexpr static const int tag = 867;
  constexpr static const char* name = "EventPx";

  static writeableTagVal<Float> tagVal(float data);

};

struct EventText
{
  constexpr static const int tag = 868;
  constexpr static const char* name = "EventText";

  static writeableTagVal<String> tagVal(const char* data);

};

struct PctAtRisk
{
  constexpr static const int tag = 869;
  constexpr static const char* name = "PctAtRisk";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoInstrAttrib
{
  constexpr static const int tag = 870;
  constexpr static const char* name = "NoInstrAttrib";

  static writeableTagVal<Int> tagVal(int data);

};

struct InstrAttribType
{
  constexpr static const int tag = 871;
  constexpr static const char* name = "InstrAttribType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valFlat = 1;
  constexpr static const int valZeroCoupon = 2;
  constexpr static const int valInterestBearing = 3;
  constexpr static const int valNoPeriodicPayments = 4;
  constexpr static const int valVariableRate = 5;
  constexpr static const int valLessFeeForPut = 6;
  constexpr static const int valSteppedCoupon = 7;
  constexpr static const int valCouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field = 8;
  constexpr static const int valWhenAndIfIssued = 9;
  constexpr static const int valOriginalIssueDiscount = 0;
  constexpr static const int valCallablePuttable = 1;
  constexpr static const int valEscrowedToMaturity = 2;
  constexpr static const int valEscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field = 3;
  constexpr static const int valPrerefunded = 4;
  constexpr static const int valInDefault = 5;
  constexpr static const int valUnrated = 6;
  constexpr static const int valTaxable = 7;
  constexpr static const int valIndexed = 8;
  constexpr static const int valSubjectToAlternativeMinimumTax = 9;
  constexpr static const int valOriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field = 20;
  constexpr static const int valCallableBelowMaturityValue = 2;
  constexpr static const int valCallableWithoutNoticeByMailToHolderUnlessRegistered = 22;
  constexpr static const int valTextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field = 99;

  constexpr static const char* tagValFlat = "871=1";
  constexpr static const char* tagValZeroCoupon = "871=2";
  constexpr static const char* tagValInterestBearing = "871=3";
  constexpr static const char* tagValNoPeriodicPayments = "871=4";
  constexpr static const char* tagValVariableRate = "871=5";
  constexpr static const char* tagValLessFeeForPut = "871=6";
  constexpr static const char* tagValSteppedCoupon = "871=7";
  constexpr static const char* tagValCouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field = "871=8";
  constexpr static const char* tagValWhenAndIfIssued = "871=9";
  constexpr static const char* tagValOriginalIssueDiscount = "871=0";
  constexpr static const char* tagValCallablePuttable = "871=1";
  constexpr static const char* tagValEscrowedToMaturity = "871=2";
  constexpr static const char* tagValEscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field = "871=3";
  constexpr static const char* tagValPrerefunded = "871=4";
  constexpr static const char* tagValInDefault = "871=5";
  constexpr static const char* tagValUnrated = "871=6";
  constexpr static const char* tagValTaxable = "871=7";
  constexpr static const char* tagValIndexed = "871=8";
  constexpr static const char* tagValSubjectToAlternativeMinimumTax = "871=9";
  constexpr static const char* tagValOriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field = "871=20";
  constexpr static const char* tagValCallableBelowMaturityValue = "871=2";
  constexpr static const char* tagValCallableWithoutNoticeByMailToHolderUnlessRegistered = "871=22";
  constexpr static const char* tagValTextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field = "871=99";

};

struct InstrAttribValue
{
  constexpr static const int tag = 872;
  constexpr static const char* name = "InstrAttribValue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DatedDate
{
  constexpr static const int tag = 873;
  constexpr static const char* name = "DatedDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct InterestAccrualDate
{
  constexpr static const int tag = 874;
  constexpr static const char* name = "InterestAccrualDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct CPProgram
{
  constexpr static const int tag = 875;
  constexpr static const char* name = "CPProgram";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int val3a = 1;
  constexpr static const int val4 = 2;
  constexpr static const int valOther = 99;

  constexpr static const char* tagVal3a = "875=1";
  constexpr static const char* tagVal4 = "875=2";
  constexpr static const char* tagValOther = "875=99";

};

struct CPRegType
{
  constexpr static const int tag = 876;
  constexpr static const char* name = "CPRegType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingCPProgram
{
  constexpr static const int tag = 877;
  constexpr static const char* name = "UnderlyingCPProgram";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingCPRegType
{
  constexpr static const int tag = 878;
  constexpr static const char* name = "UnderlyingCPRegType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingQty
{
  constexpr static const int tag = 879;
  constexpr static const char* name = "UnderlyingQty";

  static writeableTagVal<Float> tagVal(float data);

};

struct TrdMatchID
{
  constexpr static const int tag = 880;
  constexpr static const char* name = "TrdMatchID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct SecondaryTradeReportRefID
{
  constexpr static const int tag = 881;
  constexpr static const char* name = "SecondaryTradeReportRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingDirtyPrice
{
  constexpr static const int tag = 882;
  constexpr static const char* name = "UnderlyingDirtyPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingEndPrice
{
  constexpr static const int tag = 883;
  constexpr static const char* name = "UnderlyingEndPrice";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingStartValue
{
  constexpr static const int tag = 884;
  constexpr static const char* name = "UnderlyingStartValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingCurrentValue
{
  constexpr static const int tag = 885;
  constexpr static const char* name = "UnderlyingCurrentValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct UnderlyingEndValue
{
  constexpr static const int tag = 886;
  constexpr static const char* name = "UnderlyingEndValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct NoUnderlyingStips
{
  constexpr static const int tag = 887;
  constexpr static const char* name = "NoUnderlyingStips";

  static writeableTagVal<Int> tagVal(int data);

};

struct UnderlyingStipType
{
  constexpr static const int tag = 888;
  constexpr static const char* name = "UnderlyingStipType";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UnderlyingStipValue
{
  constexpr static const int tag = 889;
  constexpr static const char* name = "UnderlyingStipValue";

  static writeableTagVal<String> tagVal(const char* data);

};

struct MaturityNetMoney
{
  constexpr static const int tag = 890;
  constexpr static const char* name = "MaturityNetMoney";

  static writeableTagVal<Float> tagVal(float data);

};

struct MiscFeeBasis
{
  constexpr static const int tag = 891;
  constexpr static const char* name = "MiscFeeBasis";

  static writeableTagVal<Int> tagVal(int data);

};

struct TotNoAllocs
{
  constexpr static const int tag = 892;
  constexpr static const char* name = "TotNoAllocs";

  static writeableTagVal<Int> tagVal(int data);

};

struct LastFragment
{
  constexpr static const int tag = 893;
  constexpr static const char* name = "LastFragment";

  static writeableTagVal<Boolean> tagVal(bool data);

  constexpr static const bool valLastMessage = true;
  constexpr static const bool valNotLastMessage = false;

  constexpr static const char* tagValLastMessage = "893=Y";
  constexpr static const char* tagValNotLastMessage = "893=N";

};

struct CollReqID
{
  constexpr static const int tag = 894;
  constexpr static const char* name = "CollReqID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollAsgnReason
{
  constexpr static const int tag = 895;
  constexpr static const char* name = "CollAsgnReason";

  static writeableTagVal<Int> tagVal(int data);

};

struct CollInquiryQualifier
{
  constexpr static const int tag = 896;
  constexpr static const char* name = "CollInquiryQualifier";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoTrades
{
  constexpr static const int tag = 897;
  constexpr static const char* name = "NoTrades";

  static writeableTagVal<Int> tagVal(int data);

};

struct MarginRatio
{
  constexpr static const int tag = 898;
  constexpr static const char* name = "MarginRatio";

  static writeableTagVal<Float> tagVal(float data);

};

struct MarginExcess
{
  constexpr static const int tag = 899;
  constexpr static const char* name = "MarginExcess";

  static writeableTagVal<Float> tagVal(float data);

};

struct TotalNetValue
{
  constexpr static const int tag = 900;
  constexpr static const char* name = "TotalNetValue";

  static writeableTagVal<Float> tagVal(float data);

};

struct CashOutstanding
{
  constexpr static const int tag = 901;
  constexpr static const char* name = "CashOutstanding";

  static writeableTagVal<Float> tagVal(float data);

};

struct CollAsgnID
{
  constexpr static const int tag = 902;
  constexpr static const char* name = "CollAsgnID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollAsgnTransType
{
  constexpr static const int tag = 903;
  constexpr static const char* name = "CollAsgnTransType";

  static writeableTagVal<Int> tagVal(int data);

};

struct CollRespID
{
  constexpr static const int tag = 904;
  constexpr static const char* name = "CollRespID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollAsgnRespType
{
  constexpr static const int tag = 905;
  constexpr static const char* name = "CollAsgnRespType";

  static writeableTagVal<Int> tagVal(int data);

};

struct CollAsgnRejectReason
{
  constexpr static const int tag = 906;
  constexpr static const char* name = "CollAsgnRejectReason";

  static writeableTagVal<Int> tagVal(int data);

};

struct CollAsgnRefID
{
  constexpr static const int tag = 907;
  constexpr static const char* name = "CollAsgnRefID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollRptID
{
  constexpr static const int tag = 908;
  constexpr static const char* name = "CollRptID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollInquiryID
{
  constexpr static const int tag = 909;
  constexpr static const char* name = "CollInquiryID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollStatus
{
  constexpr static const int tag = 910;
  constexpr static const char* name = "CollStatus";

  static writeableTagVal<Int> tagVal(int data);

};

struct TotNumReports
{
  constexpr static const int tag = 911;
  constexpr static const char* name = "TotNumReports";

  static writeableTagVal<Int> tagVal(int data);

};

struct LastRptRequested
{
  constexpr static const int tag = 912;
  constexpr static const char* name = "LastRptRequested";

  static writeableTagVal<Boolean> tagVal(bool data);

};

struct AgreementDesc
{
  constexpr static const int tag = 913;
  constexpr static const char* name = "AgreementDesc";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AgreementID
{
  constexpr static const int tag = 914;
  constexpr static const char* name = "AgreementID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct AgreementDate
{
  constexpr static const int tag = 915;
  constexpr static const char* name = "AgreementDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct StartDate
{
  constexpr static const int tag = 916;
  constexpr static const char* name = "StartDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct EndDate
{
  constexpr static const int tag = 917;
  constexpr static const char* name = "EndDate";

  static writeableTagVal<Date> tagVal(Date data);

};

struct AgreementCurrency
{
  constexpr static const int tag = 918;
  constexpr static const char* name = "AgreementCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct DeliveryType
{
  constexpr static const int tag = 919;
  constexpr static const char* name = "DeliveryType";

  static writeableTagVal<Int> tagVal(int data);

};

struct EndAccruedInterestAmt
{
  constexpr static const int tag = 920;
  constexpr static const char* name = "EndAccruedInterestAmt";

  static writeableTagVal<Float> tagVal(float data);

};

struct StartCash
{
  constexpr static const int tag = 921;
  constexpr static const char* name = "StartCash";

  static writeableTagVal<Float> tagVal(float data);

};

struct EndCash
{
  constexpr static const int tag = 922;
  constexpr static const char* name = "EndCash";

  static writeableTagVal<Float> tagVal(float data);

};

struct UserRequestID
{
  constexpr static const int tag = 923;
  constexpr static const char* name = "UserRequestID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UserRequestType
{
  constexpr static const int tag = 924;
  constexpr static const char* name = "UserRequestType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valLogOnUser = 1;
  constexpr static const int valLogOffUser = 2;
  constexpr static const int valChangePasswordForUser = 3;
  constexpr static const int valRequestIndividualUserStatus = 4;

  constexpr static const char* tagValLogOnUser = "924=1";
  constexpr static const char* tagValLogOffUser = "924=2";
  constexpr static const char* tagValChangePasswordForUser = "924=3";
  constexpr static const char* tagValRequestIndividualUserStatus = "924=4";

};

struct NewPassword
{
  constexpr static const int tag = 925;
  constexpr static const char* name = "NewPassword";

  static writeableTagVal<String> tagVal(const char* data);

};

struct UserStatus
{
  constexpr static const int tag = 926;
  constexpr static const char* name = "UserStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valLoggedIn = 1;
  constexpr static const int valNotLoggedIn = 2;
  constexpr static const int valUserNotRecognised = 3;
  constexpr static const int valPasswordIncorrect = 4;
  constexpr static const int valPasswordChanged = 5;
  constexpr static const int valOther = 6;

  constexpr static const char* tagValLoggedIn = "926=1";
  constexpr static const char* tagValNotLoggedIn = "926=2";
  constexpr static const char* tagValUserNotRecognised = "926=3";
  constexpr static const char* tagValPasswordIncorrect = "926=4";
  constexpr static const char* tagValPasswordChanged = "926=5";
  constexpr static const char* tagValOther = "926=6";

};

struct UserStatusText
{
  constexpr static const int tag = 927;
  constexpr static const char* name = "UserStatusText";

  static writeableTagVal<String> tagVal(const char* data);

};

struct StatusValue
{
  constexpr static const int tag = 928;
  constexpr static const char* name = "StatusValue";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valConnected = 1;
  constexpr static const int valNotConnectedDownExpectedUp = 2;
  constexpr static const int valNotConnectedDownExpectedDown = 3;
  constexpr static const int valInProcess = 4;

  constexpr static const char* tagValConnected = "928=1";
  constexpr static const char* tagValNotConnectedDownExpectedUp = "928=2";
  constexpr static const char* tagValNotConnectedDownExpectedDown = "928=3";
  constexpr static const char* tagValInProcess = "928=4";

};

struct StatusText
{
  constexpr static const int tag = 929;
  constexpr static const char* name = "StatusText";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RefCompID
{
  constexpr static const int tag = 930;
  constexpr static const char* name = "RefCompID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct RefSubID
{
  constexpr static const int tag = 931;
  constexpr static const char* name = "RefSubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NetworkResponseID
{
  constexpr static const int tag = 932;
  constexpr static const char* name = "NetworkResponseID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NetworkRequestID
{
  constexpr static const int tag = 933;
  constexpr static const char* name = "NetworkRequestID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LastNetworkResponseID
{
  constexpr static const int tag = 934;
  constexpr static const char* name = "LastNetworkResponseID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NetworkRequestType
{
  constexpr static const int tag = 935;
  constexpr static const char* name = "NetworkRequestType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSnapshot = 1;
  constexpr static const int valSubscribe = 2;
  constexpr static const int valStopSubscribing = 4;
  constexpr static const int valLevelOfDetailThenNoCompIDsBecomesRequired = 8;

  constexpr static const char* tagValSnapshot = "935=1";
  constexpr static const char* tagValSubscribe = "935=2";
  constexpr static const char* tagValStopSubscribing = "935=4";
  constexpr static const char* tagValLevelOfDetailThenNoCompIDsBecomesRequired = "935=8";

};

struct NoCompIDs
{
  constexpr static const int tag = 936;
  constexpr static const char* name = "NoCompIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct NetworkStatusResponseType
{
  constexpr static const int tag = 937;
  constexpr static const char* name = "NetworkStatusResponseType";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valFull = 1;
  constexpr static const int valIncrementalUpdate = 2;

  constexpr static const char* tagValFull = "937=1";
  constexpr static const char* tagValIncrementalUpdate = "937=2";

};

struct NoCollInquiryQualifier
{
  constexpr static const int tag = 938;
  constexpr static const char* name = "NoCollInquiryQualifier";

  static writeableTagVal<Int> tagVal(int data);

};

struct TrdRptStatus
{
  constexpr static const int tag = 939;
  constexpr static const char* name = "TrdRptStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccepted = 0;
  constexpr static const int valRejected = 1;

  constexpr static const char* tagValAccepted = "939=0";
  constexpr static const char* tagValRejected = "939=1";

};

struct AffirmStatus
{
  constexpr static const int tag = 940;
  constexpr static const char* name = "AffirmStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valReceived = 1;
  constexpr static const int valConfirmRejectedIeNotAffirmed = 2;
  constexpr static const int valAffirmed = 3;

  constexpr static const char* tagValReceived = "940=1";
  constexpr static const char* tagValConfirmRejectedIeNotAffirmed = "940=2";
  constexpr static const char* tagValAffirmed = "940=3";

};

struct UnderlyingStrikeCurrency
{
  constexpr static const int tag = 941;
  constexpr static const char* name = "UnderlyingStrikeCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct LegStrikeCurrency
{
  constexpr static const int tag = 942;
  constexpr static const char* name = "LegStrikeCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct TimeBracket
{
  constexpr static const int tag = 943;
  constexpr static const char* name = "TimeBracket";

  static writeableTagVal<String> tagVal(const char* data);

};

struct CollAction
{
  constexpr static const int tag = 944;
  constexpr static const char* name = "CollAction";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valRetain = 0;
  constexpr static const int valAdd = 1;
  constexpr static const int valRemove = 2;

  constexpr static const char* tagValRetain = "944=0";
  constexpr static const char* tagValAdd = "944=1";
  constexpr static const char* tagValRemove = "944=2";

};

struct CollInquiryStatus
{
  constexpr static const int tag = 945;
  constexpr static const char* name = "CollInquiryStatus";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valAccepted = 0;
  constexpr static const int valAcceptedWithWarnings = 1;
  constexpr static const int valCompleted = 2;
  constexpr static const int valCompletedWithWarnings = 3;
  constexpr static const int valRejected = 4;

  constexpr static const char* tagValAccepted = "945=0";
  constexpr static const char* tagValAcceptedWithWarnings = "945=1";
  constexpr static const char* tagValCompleted = "945=2";
  constexpr static const char* tagValCompletedWithWarnings = "945=3";
  constexpr static const char* tagValRejected = "945=4";

};

struct CollInquiryResult
{
  constexpr static const int tag = 946;
  constexpr static const char* name = "CollInquiryResult";

  static writeableTagVal<Int> tagVal(int data);

  constexpr static const int valSuccessful = 0;
  constexpr static const int valInvalidOrUnknownInstrument = 1;
  constexpr static const int valInvalidOrUnknownCollateralType = 2;
  constexpr static const int valInvalidParties = 3;
  constexpr static const int valInvalidTransportTypeRequested = 4;
  constexpr static const int valInvalidDestinationRequested = 5;
  constexpr static const int valNoCollateralFoundForTheTradeSpecified = 6;
  constexpr static const int valNoCollateralFoundForTheOrderSpecified = 7;
  constexpr static const int valCollateralInquiryTypeNotSupported = 8;
  constexpr static const int valUnauthorizedForCollateralInquiry = 9;
  constexpr static const int valOtherfurtherInformationInText = 99;

  constexpr static const char* tagValSuccessful = "946=0";
  constexpr static const char* tagValInvalidOrUnknownInstrument = "946=1";
  constexpr static const char* tagValInvalidOrUnknownCollateralType = "946=2";
  constexpr static const char* tagValInvalidParties = "946=3";
  constexpr static const char* tagValInvalidTransportTypeRequested = "946=4";
  constexpr static const char* tagValInvalidDestinationRequested = "946=5";
  constexpr static const char* tagValNoCollateralFoundForTheTradeSpecified = "946=6";
  constexpr static const char* tagValNoCollateralFoundForTheOrderSpecified = "946=7";
  constexpr static const char* tagValCollateralInquiryTypeNotSupported = "946=8";
  constexpr static const char* tagValUnauthorizedForCollateralInquiry = "946=9";
  constexpr static const char* tagValOtherfurtherInformationInText = "946=99";

};

struct StrikeCurrency
{
  constexpr static const int tag = 947;
  constexpr static const char* name = "StrikeCurrency";

  static writeableTagVal<String> tagVal(const char* data);

};

struct NoNested3PartyIDs
{
  constexpr static const int tag = 948;
  constexpr static const char* name = "NoNested3PartyIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct Nested3PartyID
{
  constexpr static const int tag = 949;
  constexpr static const char* name = "Nested3PartyID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Nested3PartyIDSource
{
  constexpr static const int tag = 950;
  constexpr static const char* name = "Nested3PartyIDSource";

  static writeableTagVal<Char> tagVal(char data);

};

struct Nested3PartyRole
{
  constexpr static const int tag = 951;
  constexpr static const char* name = "Nested3PartyRole";

  static writeableTagVal<Int> tagVal(int data);

};

struct NoNested3PartySubIDs
{
  constexpr static const int tag = 952;
  constexpr static const char* name = "NoNested3PartySubIDs";

  static writeableTagVal<Int> tagVal(int data);

};

struct Nested3PartySubID
{
  constexpr static const int tag = 953;
  constexpr static const char* name = "Nested3PartySubID";

  static writeableTagVal<String> tagVal(const char* data);

};

struct Nested3PartySubIDType
{
  constexpr static const int tag = 954;
  constexpr static const char* name = "Nested3PartySubIDType";

  static writeableTagVal<Int> tagVal(int data);

};

struct LegContractSettlMonth
{
  constexpr static const int tag = 955;
  constexpr static const char* name = "LegContractSettlMonth";

  static writeableTagVal<MonthYear> tagVal(MonthYear data);

};

struct LegInterestAccrualDate
{
  constexpr static const int tag = 956;
  constexpr static const char* name = "LegInterestAccrualDate";

  static writeableTagVal<Date> tagVal(Date data);

};

} //namespace FIX
