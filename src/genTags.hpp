namespace FIX {
struct Account : Types::Value<Types::String>
{
  static constexpr const int tag = 1;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AdvId : Types::Value<Types::String>
{
  static constexpr const int tag = 2;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AdvRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 3;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AdvSide : Types::Value<Types::Char>
{
  static constexpr const int tag = 4;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valBuy = 'B';
  static constexpr const char valSell = 'S';
  static constexpr const char valCross = 'X';
  static constexpr const char valTrade = 'T';

  static constexpr const char* tagValBuy = "4=B";
  static constexpr const char* tagValSell = "4=S";
  static constexpr const char* tagValCross = "4=X";
  static constexpr const char* tagValTrade = "4=T";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct AdvTransType : Types::Value<Types::String>
{
  static constexpr const int tag = 5;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valNew = "N";
  static constexpr const char* valCancel = "C";
  static constexpr const char* valReplace = "R";

  static constexpr const char* tagValNew = "5=N";
  static constexpr const char* tagValCancel = "5=C";
  static constexpr const char* tagValReplace = "5=R";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AvgPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 6;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BeginSeqNo : Types::Value<Types::Int>
{
  static constexpr const int tag = 7;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BeginString : Types::Value<Types::String>
{
  static constexpr const int tag = 8;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valFIX44 = "FIX.4.4";

  static constexpr const char* tagValFIX44 = "8=FIX.4.4";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BodyLength : Types::Value<Types::Int>
{
  static constexpr const int tag = 9;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 2;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CheckSum : Types::Value<Types::Int>
{
  static constexpr const int tag = 10;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ClOrdID : Types::Value<Types::String>
{
  static constexpr const int tag = 11;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Commission : Types::Value<Types::Float>
{
  static constexpr const int tag = 12;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CommType : Types::Value<Types::Char>
{
  static constexpr const int tag = 13;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valPerUnit = '1';
  static constexpr const char valPercentage = '2';
  static constexpr const char valAbsolute = '3';
  static constexpr const char valPercentageWaivedCashDiscount = '4';
  static constexpr const char valPercentageWaivedEnhancedUnits = '5';
  static constexpr const char valPointsPerBondOrOrContractSupplyContractMultiplier = '6';

  static constexpr const char* tagValPerUnit = "13=1";
  static constexpr const char* tagValPercentage = "13=2";
  static constexpr const char* tagValAbsolute = "13=3";
  static constexpr const char* tagValPercentageWaivedCashDiscount = "13=4";
  static constexpr const char* tagValPercentageWaivedEnhancedUnits = "13=5";
  static constexpr const char* tagValPointsPerBondOrOrContractSupplyContractMultiplier = "13=6";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct CumQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 14;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Currency : Types::Value<Types::String>
{
  static constexpr const int tag = 15;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct EndSeqNo : Types::Value<Types::Int>
{
  static constexpr const int tag = 16;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ExecID : Types::Value<Types::String>
{
  static constexpr const int tag = 17;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ExecInst : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 18;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valNotHeld = "1";
  static constexpr const char* valWork = "2";
  static constexpr const char* valGoAlong = "3";
  static constexpr const char* valOverTheDay = "4";
  static constexpr const char* valHeld = "5";
  static constexpr const char* valParticipateDontInitiate = "6";
  static constexpr const char* valStrictScale = "7";
  static constexpr const char* valTryToScale = "8";
  static constexpr const char* valStayOnBidside = "9";
  static constexpr const char* valStayOnOfferside = "0";
  static constexpr const char* valNoCross = "A";
  static constexpr const char* valOKToCross = "B";
  static constexpr const char* valCallFirst = "C";
  static constexpr const char* valPercentOfVolume = "D";
  static constexpr const char* valDoNotIncreaseDNI = "E";
  static constexpr const char* valDoNotReduceDNR = "F";
  static constexpr const char* valAllOrNoneAON = "G";
  static constexpr const char* valReinstateOnSystemFailure = "H";
  static constexpr const char* valInstitutionsOnly = "I";
  static constexpr const char* valReinstateOnTradingHalt = "J";
  static constexpr const char* valCancelOnTradingHalt = "K";
  static constexpr const char* valLastPeg = "L";
  static constexpr const char* valMidPricePeg = "M";
  static constexpr const char* valNonNegotiable = "N";
  static constexpr const char* valOpeningPeg = "O";
  static constexpr const char* valMarketPeg = "P";
  static constexpr const char* valCancelOnSystemFailure = "Q";
  static constexpr const char* valPrimaryPeg = "R";
  static constexpr const char* valSuspend = "S";
  static constexpr const char* valFixedPegToLocalBestBidOrOfferAtTimeOfOrder = "T";
  static constexpr const char* valCustomerDisplayInstruction = "U";
  static constexpr const char* valNetting = "V";
  static constexpr const char* valPegToVWAP = "W";
  static constexpr const char* valTradeAlong = "X";
  static constexpr const char* valTryToStop = "Y";
  static constexpr const char* valCancelIfNotBest = "Z";
  static constexpr const char* valTrailingStopPeg = "a";
  static constexpr const char* valStrictLimit = "b";
  static constexpr const char* valIgnorePriceValidityChecks = "c";
  static constexpr const char* valPegToLimitPrice = "d";
  static constexpr const char* valWorkToTargetStrategy = "e";

  static constexpr const char* tagValNotHeld = "18=1";
  static constexpr const char* tagValWork = "18=2";
  static constexpr const char* tagValGoAlong = "18=3";
  static constexpr const char* tagValOverTheDay = "18=4";
  static constexpr const char* tagValHeld = "18=5";
  static constexpr const char* tagValParticipateDontInitiate = "18=6";
  static constexpr const char* tagValStrictScale = "18=7";
  static constexpr const char* tagValTryToScale = "18=8";
  static constexpr const char* tagValStayOnBidside = "18=9";
  static constexpr const char* tagValStayOnOfferside = "18=0";
  static constexpr const char* tagValNoCross = "18=A";
  static constexpr const char* tagValOKToCross = "18=B";
  static constexpr const char* tagValCallFirst = "18=C";
  static constexpr const char* tagValPercentOfVolume = "18=D";
  static constexpr const char* tagValDoNotIncreaseDNI = "18=E";
  static constexpr const char* tagValDoNotReduceDNR = "18=F";
  static constexpr const char* tagValAllOrNoneAON = "18=G";
  static constexpr const char* tagValReinstateOnSystemFailure = "18=H";
  static constexpr const char* tagValInstitutionsOnly = "18=I";
  static constexpr const char* tagValReinstateOnTradingHalt = "18=J";
  static constexpr const char* tagValCancelOnTradingHalt = "18=K";
  static constexpr const char* tagValLastPeg = "18=L";
  static constexpr const char* tagValMidPricePeg = "18=M";
  static constexpr const char* tagValNonNegotiable = "18=N";
  static constexpr const char* tagValOpeningPeg = "18=O";
  static constexpr const char* tagValMarketPeg = "18=P";
  static constexpr const char* tagValCancelOnSystemFailure = "18=Q";
  static constexpr const char* tagValPrimaryPeg = "18=R";
  static constexpr const char* tagValSuspend = "18=S";
  static constexpr const char* tagValFixedPegToLocalBestBidOrOfferAtTimeOfOrder = "18=T";
  static constexpr const char* tagValCustomerDisplayInstruction = "18=U";
  static constexpr const char* tagValNetting = "18=V";
  static constexpr const char* tagValPegToVWAP = "18=W";
  static constexpr const char* tagValTradeAlong = "18=X";
  static constexpr const char* tagValTryToStop = "18=Y";
  static constexpr const char* tagValCancelIfNotBest = "18=Z";
  static constexpr const char* tagValTrailingStopPeg = "18=a";
  static constexpr const char* tagValStrictLimit = "18=b";
  static constexpr const char* tagValIgnorePriceValidityChecks = "18=c";
  static constexpr const char* tagValPegToLimitPrice = "18=d";
  static constexpr const char* tagValWorkToTargetStrategy = "18=e";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct ExecRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 19;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ExecTransType : Types::Value<Types::Char>
{
  static constexpr const int tag = 20;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valCancel = '1';
  static constexpr const char valCorrect = '2';
  static constexpr const char valStatus = '3';

  static constexpr const char* tagValNew = "20=0";
  static constexpr const char* tagValCancel = "20=1";
  static constexpr const char* tagValCorrect = "20=2";
  static constexpr const char* tagValStatus = "20=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct HandlInst : Types::Value<Types::Char>
{
  static constexpr const int tag = 21;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valAutomatedExecutionOrderPrivateNoBrokerIntervention = '1';
  static constexpr const char valAutomatedExecutionOrderPublicBrokerInterventionOK = '2';
  static constexpr const char valManualOrderBestExecution = '3';

  static constexpr const char* tagValAutomatedExecutionOrderPrivateNoBrokerIntervention = "21=1";
  static constexpr const char* tagValAutomatedExecutionOrderPublicBrokerInterventionOK = "21=2";
  static constexpr const char* tagValManualOrderBestExecution = "21=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SecurityIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 22;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valCUSIP = "1";
  static constexpr const char* valSEDOL = "2";
  static constexpr const char* valQUIK = "3";
  static constexpr const char* valISINNumber = "4";
  static constexpr const char* valRICCode = "5";
  static constexpr const char* valISOCurrencyCode = "6";
  static constexpr const char* valISOCountryCode = "7";
  static constexpr const char* valExchangeSymbol = "8";
  static constexpr const char* valConsolidatedTapeAssociationCTASymbol = "9";
  static constexpr const char* valBloombergSymbol = "A";
  static constexpr const char* valWertpapier = "B";
  static constexpr const char* valDutch = "C";
  static constexpr const char* valValoren = "D";
  static constexpr const char* valSicovam = "E";
  static constexpr const char* valBelgian = "F";
  static constexpr const char* valCommon = "G";
  static constexpr const char* valClearingHouseOrClearingOrganization = "H";
  static constexpr const char* valISDAOrFpMLProductSpecification = "I";
  static constexpr const char* valOptionsPriceReportingAuthority = "J";

  static constexpr const char* tagValCUSIP = "22=1";
  static constexpr const char* tagValSEDOL = "22=2";
  static constexpr const char* tagValQUIK = "22=3";
  static constexpr const char* tagValISINNumber = "22=4";
  static constexpr const char* tagValRICCode = "22=5";
  static constexpr const char* tagValISOCurrencyCode = "22=6";
  static constexpr const char* tagValISOCountryCode = "22=7";
  static constexpr const char* tagValExchangeSymbol = "22=8";
  static constexpr const char* tagValConsolidatedTapeAssociationCTASymbol = "22=9";
  static constexpr const char* tagValBloombergSymbol = "22=A";
  static constexpr const char* tagValWertpapier = "22=B";
  static constexpr const char* tagValDutch = "22=C";
  static constexpr const char* tagValValoren = "22=D";
  static constexpr const char* tagValSicovam = "22=E";
  static constexpr const char* tagValBelgian = "22=F";
  static constexpr const char* tagValCommon = "22=G";
  static constexpr const char* tagValClearingHouseOrClearingOrganization = "22=H";
  static constexpr const char* tagValISDAOrFpMLProductSpecification = "22=I";
  static constexpr const char* tagValOptionsPriceReportingAuthority = "22=J";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct IOIID : Types::Value<Types::String>
{
  static constexpr const int tag = 23;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct IOIOthSv : Types::Value<Types::Char>
{
  static constexpr const int tag = 24;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct IOIQltyInd : Types::Value<Types::Char>
{
  static constexpr const int tag = 25;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valLow = 'L';
  static constexpr const char valMedium = 'M';
  static constexpr const char valHigh = 'H';

  static constexpr const char* tagValLow = "25=L";
  static constexpr const char* tagValMedium = "25=M";
  static constexpr const char* tagValHigh = "25=H";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct IOIRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 26;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct IOIQty : Types::Value<Types::String>
{
  static constexpr const int tag = 27;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valZero = "0";
  static constexpr const char* valSmall = "S";
  static constexpr const char* valMedium = "M";
  static constexpr const char* valLarge = "L";

  static constexpr const char* tagValZero = "27=0";
  static constexpr const char* tagValSmall = "27=S";
  static constexpr const char* tagValMedium = "27=M";
  static constexpr const char* tagValLarge = "27=L";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct IOITransType : Types::Value<Types::Char>
{
  static constexpr const int tag = 28;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = 'N';
  static constexpr const char valCancel = 'C';
  static constexpr const char valReplace = 'R';

  static constexpr const char* tagValNew = "28=N";
  static constexpr const char* tagValCancel = "28=C";
  static constexpr const char* tagValReplace = "28=R";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct LastCapacity : Types::Value<Types::Char>
{
  static constexpr const int tag = 29;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valAgent = '1';
  static constexpr const char valCrossAsAgent = '2';
  static constexpr const char valCrossAsPrincipal = '3';
  static constexpr const char valPrincipal = '4';

  static constexpr const char* tagValAgent = "29=1";
  static constexpr const char* tagValCrossAsAgent = "29=2";
  static constexpr const char* tagValCrossAsPrincipal = "29=3";
  static constexpr const char* tagValPrincipal = "29=4";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct LastMkt : Types::Value<Types::String>
{
  static constexpr const int tag = 30;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LastPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 31;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LastQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 32;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoLinesOfText : Types::Value<Types::Int>
{
  static constexpr const int tag = 33;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MsgSeqNum : Types::Value<Types::Int>
{
  static constexpr const int tag = 34;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MsgType : Types::Value<Types::String>
{
  static constexpr const int tag = 35;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valHeartbeat = "0";
  static constexpr const char* valTestRequest = "1";
  static constexpr const char* valResendRequest = "2";
  static constexpr const char* valReject = "3";
  static constexpr const char* valSequenceReset = "4";
  static constexpr const char* valLogout = "5";
  static constexpr const char* valIndicationOfInterest = "6";
  static constexpr const char* valAdvertisement = "7";
  static constexpr const char* valExecutionReport = "8";
  static constexpr const char* valOrderCancelReject = "9";
  static constexpr const char* valLogon = "A";
  static constexpr const char* valNews = "B";
  static constexpr const char* valEmail = "C";
  static constexpr const char* valOrderSingle = "D";
  static constexpr const char* valOrderList = "E";
  static constexpr const char* valOrderCancelRequest = "F";
  static constexpr const char* valOrderCancelOrReplaceRequest = "G";
  static constexpr const char* valOrderStatusRequest = "H";
  static constexpr const char* valAllocationInstruction = "J";
  static constexpr const char* valListCancelRequest = "K";
  static constexpr const char* valListExecute = "L";
  static constexpr const char* valListStatusRequest = "M";
  static constexpr const char* valListStatus = "N";
  static constexpr const char* valAllocationInstructionAck = "P";
  static constexpr const char* valDontKnowTrade = "Q";
  static constexpr const char* valQuoteRequest = "R";
  static constexpr const char* valQuote = "S";
  static constexpr const char* valSettlementInstructions = "T";
  static constexpr const char* valMarketDataRequest = "V";
  static constexpr const char* valMarketDataSnapshotOrFullRefresh = "W";
  static constexpr const char* valMarketDataIncrementalRefresh = "X";
  static constexpr const char* valMarketDataRequestReject = "Y";
  static constexpr const char* valQuoteCancel = "Z";
  static constexpr const char* valQuoteStatusRequest = "a";
  static constexpr const char* valMassQuoteAcknowledgement = "b";
  static constexpr const char* valSecurityDefinitionRequest = "c";
  static constexpr const char* valSecurityDefinition = "d";
  static constexpr const char* valSecurityStatusRequest = "e";
  static constexpr const char* valSecurityStatus = "f";
  static constexpr const char* valTradingSessionStatusRequest = "g";
  static constexpr const char* valTradingSessionStatus = "h";
  static constexpr const char* valMassQuote = "i";
  static constexpr const char* valBusinessMessageReject = "j";
  static constexpr const char* valBidRequest = "k";
  static constexpr const char* valBidResponse = "l";
  static constexpr const char* valListStrikePrice = "m";
  static constexpr const char* valXMLMessage = "n";
  static constexpr const char* valRegistrationInstructions = "o";
  static constexpr const char* valRegistrationInstructionsResponse = "p";
  static constexpr const char* valOrderMassCancelRequest = "q";
  static constexpr const char* valOrderMassCancelReport = "r";
  static constexpr const char* valNewOrderCross = "s";
  static constexpr const char* valCrossOrderCancelOrReplaceRequest = "t";
  static constexpr const char* valCrossOrderCancelRequest = "u";
  static constexpr const char* valSecurityTypeRequest = "v";
  static constexpr const char* valSecurityTypes = "w";
  static constexpr const char* valSecurityListRequest = "x";
  static constexpr const char* valSecurityList = "y";
  static constexpr const char* valDerivativeSecurityListRequest = "z";
  static constexpr const char* valDerivativeSecurityList = "AA";
  static constexpr const char* valNewOrderMultileg = "AB";
  static constexpr const char* valMultilegOrderCancelOrReplace = "AC";
  static constexpr const char* valTradeCaptureReportRequest = "AD";
  static constexpr const char* valTradeCaptureReport = "AE";
  static constexpr const char* valOrderMassStatusRequest = "AF";
  static constexpr const char* valQuoteRequestReject = "AG";
  static constexpr const char* valRFQRequest = "AH";
  static constexpr const char* valQuoteStatusReport = "AI";
  static constexpr const char* valQuoteResponse = "AJ";
  static constexpr const char* valConfirmation = "AK";
  static constexpr const char* valPositionMaintenanceRequest = "AL";
  static constexpr const char* valPositionMaintenanceReport = "AM";
  static constexpr const char* valRequestForPositions = "AN";
  static constexpr const char* valRequestForPositionsAck = "AO";
  static constexpr const char* valPositionReport = "AP";
  static constexpr const char* valTradeCaptureReportRequestAck = "AQ";
  static constexpr const char* valTradeCaptureReportAck = "AR";
  static constexpr const char* valAllocationReport = "AS";
  static constexpr const char* valAllocationReportAck = "AT";
  static constexpr const char* valConfirmationAck = "AU";
  static constexpr const char* valSettlementInstructionRequest = "AV";
  static constexpr const char* valAssignmentReport = "AW";
  static constexpr const char* valCollateralRequest = "AX";
  static constexpr const char* valCollateralAssignment = "AY";
  static constexpr const char* valCollateralResponse = "AZ";
  static constexpr const char* valCollateralReport = "BA";
  static constexpr const char* valCollateralInquiry = "BB";
  static constexpr const char* valNetworkCounterpartySystemStatusRequest = "BC";
  static constexpr const char* valNetworkCounterpartySystemStatusResponse = "BD";
  static constexpr const char* valUserRequest = "BE";
  static constexpr const char* valUserResponse = "BF";
  static constexpr const char* valCollateralInquiryAck = "BG";
  static constexpr const char* valConfirmationRequest = "BH";

  static constexpr const char* tagValHeartbeat = "35=0";
  static constexpr const char* tagValTestRequest = "35=1";
  static constexpr const char* tagValResendRequest = "35=2";
  static constexpr const char* tagValReject = "35=3";
  static constexpr const char* tagValSequenceReset = "35=4";
  static constexpr const char* tagValLogout = "35=5";
  static constexpr const char* tagValIndicationOfInterest = "35=6";
  static constexpr const char* tagValAdvertisement = "35=7";
  static constexpr const char* tagValExecutionReport = "35=8";
  static constexpr const char* tagValOrderCancelReject = "35=9";
  static constexpr const char* tagValLogon = "35=A";
  static constexpr const char* tagValNews = "35=B";
  static constexpr const char* tagValEmail = "35=C";
  static constexpr const char* tagValOrderSingle = "35=D";
  static constexpr const char* tagValOrderList = "35=E";
  static constexpr const char* tagValOrderCancelRequest = "35=F";
  static constexpr const char* tagValOrderCancelOrReplaceRequest = "35=G";
  static constexpr const char* tagValOrderStatusRequest = "35=H";
  static constexpr const char* tagValAllocationInstruction = "35=J";
  static constexpr const char* tagValListCancelRequest = "35=K";
  static constexpr const char* tagValListExecute = "35=L";
  static constexpr const char* tagValListStatusRequest = "35=M";
  static constexpr const char* tagValListStatus = "35=N";
  static constexpr const char* tagValAllocationInstructionAck = "35=P";
  static constexpr const char* tagValDontKnowTrade = "35=Q";
  static constexpr const char* tagValQuoteRequest = "35=R";
  static constexpr const char* tagValQuote = "35=S";
  static constexpr const char* tagValSettlementInstructions = "35=T";
  static constexpr const char* tagValMarketDataRequest = "35=V";
  static constexpr const char* tagValMarketDataSnapshotOrFullRefresh = "35=W";
  static constexpr const char* tagValMarketDataIncrementalRefresh = "35=X";
  static constexpr const char* tagValMarketDataRequestReject = "35=Y";
  static constexpr const char* tagValQuoteCancel = "35=Z";
  static constexpr const char* tagValQuoteStatusRequest = "35=a";
  static constexpr const char* tagValMassQuoteAcknowledgement = "35=b";
  static constexpr const char* tagValSecurityDefinitionRequest = "35=c";
  static constexpr const char* tagValSecurityDefinition = "35=d";
  static constexpr const char* tagValSecurityStatusRequest = "35=e";
  static constexpr const char* tagValSecurityStatus = "35=f";
  static constexpr const char* tagValTradingSessionStatusRequest = "35=g";
  static constexpr const char* tagValTradingSessionStatus = "35=h";
  static constexpr const char* tagValMassQuote = "35=i";
  static constexpr const char* tagValBusinessMessageReject = "35=j";
  static constexpr const char* tagValBidRequest = "35=k";
  static constexpr const char* tagValBidResponse = "35=l";
  static constexpr const char* tagValListStrikePrice = "35=m";
  static constexpr const char* tagValXMLMessage = "35=n";
  static constexpr const char* tagValRegistrationInstructions = "35=o";
  static constexpr const char* tagValRegistrationInstructionsResponse = "35=p";
  static constexpr const char* tagValOrderMassCancelRequest = "35=q";
  static constexpr const char* tagValOrderMassCancelReport = "35=r";
  static constexpr const char* tagValNewOrderCross = "35=s";
  static constexpr const char* tagValCrossOrderCancelOrReplaceRequest = "35=t";
  static constexpr const char* tagValCrossOrderCancelRequest = "35=u";
  static constexpr const char* tagValSecurityTypeRequest = "35=v";
  static constexpr const char* tagValSecurityTypes = "35=w";
  static constexpr const char* tagValSecurityListRequest = "35=x";
  static constexpr const char* tagValSecurityList = "35=y";
  static constexpr const char* tagValDerivativeSecurityListRequest = "35=z";
  static constexpr const char* tagValDerivativeSecurityList = "35=AA";
  static constexpr const char* tagValNewOrderMultileg = "35=AB";
  static constexpr const char* tagValMultilegOrderCancelOrReplace = "35=AC";
  static constexpr const char* tagValTradeCaptureReportRequest = "35=AD";
  static constexpr const char* tagValTradeCaptureReport = "35=AE";
  static constexpr const char* tagValOrderMassStatusRequest = "35=AF";
  static constexpr const char* tagValQuoteRequestReject = "35=AG";
  static constexpr const char* tagValRFQRequest = "35=AH";
  static constexpr const char* tagValQuoteStatusReport = "35=AI";
  static constexpr const char* tagValQuoteResponse = "35=AJ";
  static constexpr const char* tagValConfirmation = "35=AK";
  static constexpr const char* tagValPositionMaintenanceRequest = "35=AL";
  static constexpr const char* tagValPositionMaintenanceReport = "35=AM";
  static constexpr const char* tagValRequestForPositions = "35=AN";
  static constexpr const char* tagValRequestForPositionsAck = "35=AO";
  static constexpr const char* tagValPositionReport = "35=AP";
  static constexpr const char* tagValTradeCaptureReportRequestAck = "35=AQ";
  static constexpr const char* tagValTradeCaptureReportAck = "35=AR";
  static constexpr const char* tagValAllocationReport = "35=AS";
  static constexpr const char* tagValAllocationReportAck = "35=AT";
  static constexpr const char* tagValConfirmationAck = "35=AU";
  static constexpr const char* tagValSettlementInstructionRequest = "35=AV";
  static constexpr const char* tagValAssignmentReport = "35=AW";
  static constexpr const char* tagValCollateralRequest = "35=AX";
  static constexpr const char* tagValCollateralAssignment = "35=AY";
  static constexpr const char* tagValCollateralResponse = "35=AZ";
  static constexpr const char* tagValCollateralReport = "35=BA";
  static constexpr const char* tagValCollateralInquiry = "35=BB";
  static constexpr const char* tagValNetworkCounterpartySystemStatusRequest = "35=BC";
  static constexpr const char* tagValNetworkCounterpartySystemStatusResponse = "35=BD";
  static constexpr const char* tagValUserRequest = "35=BE";
  static constexpr const char* tagValUserResponse = "35=BF";
  static constexpr const char* tagValCollateralInquiryAck = "35=BG";
  static constexpr const char* tagValConfirmationRequest = "35=BH";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NewSeqNo : Types::Value<Types::Int>
{
  static constexpr const int tag = 36;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrderID : Types::Value<Types::String>
{
  static constexpr const int tag = 37;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OrderQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 38;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OrdStatus : Types::Value<Types::Char>
{
  static constexpr const int tag = 39;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valPartiallyFilled = '1';
  static constexpr const char valFilled = '2';
  static constexpr const char valDoneForDay = '3';
  static constexpr const char valCanceled = '4';
  static constexpr const char valReplaced = '5';
  static constexpr const char valPendingCancel = '6';
  static constexpr const char valStopped = '7';
  static constexpr const char valRejected = '8';
  static constexpr const char valSuspended = '9';
  static constexpr const char valPendingNew = 'A';
  static constexpr const char valCalculated = 'B';
  static constexpr const char valExpired = 'C';
  static constexpr const char valAcceptedForBidding = 'D';
  static constexpr const char valPendingReplace = 'E';

  static constexpr const char* tagValNew = "39=0";
  static constexpr const char* tagValPartiallyFilled = "39=1";
  static constexpr const char* tagValFilled = "39=2";
  static constexpr const char* tagValDoneForDay = "39=3";
  static constexpr const char* tagValCanceled = "39=4";
  static constexpr const char* tagValReplaced = "39=5";
  static constexpr const char* tagValPendingCancel = "39=6";
  static constexpr const char* tagValStopped = "39=7";
  static constexpr const char* tagValRejected = "39=8";
  static constexpr const char* tagValSuspended = "39=9";
  static constexpr const char* tagValPendingNew = "39=A";
  static constexpr const char* tagValCalculated = "39=B";
  static constexpr const char* tagValExpired = "39=C";
  static constexpr const char* tagValAcceptedForBidding = "39=D";
  static constexpr const char* tagValPendingReplace = "39=E";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct OrdType : Types::Value<Types::Char>
{
  static constexpr const int tag = 40;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valMarket = '1';
  static constexpr const char valLimit = '2';
  static constexpr const char valStop = '3';
  static constexpr const char valStopLimit = '4';
  static constexpr const char valMarketOnClose = '5';
  static constexpr const char valWithOrWithout = '6';
  static constexpr const char valLimitOrBetter = '7';
  static constexpr const char valLimitWithOrWithout = '8';
  static constexpr const char valOnBasis = '9';
  static constexpr const char valOnClose = 'A';
  static constexpr const char valLimitOnClose = 'B';
  static constexpr const char valForexMarket = 'C';
  static constexpr const char valPreviouslyQuoted = 'D';
  static constexpr const char valPreviouslyIndicated = 'E';
  static constexpr const char valForexLimit = 'F';
  static constexpr const char valForexSwap = 'G';
  static constexpr const char valForexPreviouslyQuoted = 'H';
  static constexpr const char valFunari = 'I';
  static constexpr const char valMarketIfTouched = 'J';
  static constexpr const char valMarketWithLeftoverAsLimit = 'K';
  static constexpr const char valPreviousFundValuationPointHistoricPricing = 'L';
  static constexpr const char valNextFundValuationPointForwardPricing = 'M';
  static constexpr const char valPegged = 'P';

  static constexpr const char* tagValMarket = "40=1";
  static constexpr const char* tagValLimit = "40=2";
  static constexpr const char* tagValStop = "40=3";
  static constexpr const char* tagValStopLimit = "40=4";
  static constexpr const char* tagValMarketOnClose = "40=5";
  static constexpr const char* tagValWithOrWithout = "40=6";
  static constexpr const char* tagValLimitOrBetter = "40=7";
  static constexpr const char* tagValLimitWithOrWithout = "40=8";
  static constexpr const char* tagValOnBasis = "40=9";
  static constexpr const char* tagValOnClose = "40=A";
  static constexpr const char* tagValLimitOnClose = "40=B";
  static constexpr const char* tagValForexMarket = "40=C";
  static constexpr const char* tagValPreviouslyQuoted = "40=D";
  static constexpr const char* tagValPreviouslyIndicated = "40=E";
  static constexpr const char* tagValForexLimit = "40=F";
  static constexpr const char* tagValForexSwap = "40=G";
  static constexpr const char* tagValForexPreviouslyQuoted = "40=H";
  static constexpr const char* tagValFunari = "40=I";
  static constexpr const char* tagValMarketIfTouched = "40=J";
  static constexpr const char* tagValMarketWithLeftoverAsLimit = "40=K";
  static constexpr const char* tagValPreviousFundValuationPointHistoricPricing = "40=L";
  static constexpr const char* tagValNextFundValuationPointForwardPricing = "40=M";
  static constexpr const char* tagValPegged = "40=P";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct OrigClOrdID : Types::Value<Types::String>
{
  static constexpr const int tag = 41;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OrigTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 42;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 3;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct PossDupFlag : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 43;

  static constexpr const bool valPossibleDuplicate = true;
  static constexpr const bool valOriginalTransmission = false;

  static constexpr const char* tagValPossibleDuplicate = "43=Y";
  static constexpr const char* tagValOriginalTransmission = "43=N";

  using Types::Value<Types::Boolean>::Value;

};

struct Price : Types::Value<Types::Float>
{
  static constexpr const int tag = 44;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct RefSeqNum : Types::Value<Types::Int>
{
  static constexpr const int tag = 45;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RelatdSy : Types::Value<Types::String>
{
  static constexpr const int tag = 46;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Rule80A : Types::Value<Types::Char>
{
  static constexpr const int tag = 47;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valAgencySingleOrder = 'A';
  static constexpr const char valShortExemptTransactionAType = 'B';
  static constexpr const char valProgramOrderNonIndexArbForMemberFirmOrorg = 'C';
  static constexpr const char valProgramOrderIndexArbForMemberFirmOrorg = 'D';
  static constexpr const char valShortExemptTransactionForPrincipal = 'E';
  static constexpr const char valShortExemptTransactionWType = 'F';
  static constexpr const char valShortExemptTransactionIType = 'H';
  static constexpr const char valIndividualInvestorSingleOrder = 'I';
  static constexpr const char valProgramOrderIndexArbForIndividualCustomer = 'J';
  static constexpr const char valProgramOrderNonIndexArbForIndividualCustomer = 'K';
  static constexpr const char valShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade = 'L';
  static constexpr const char valProgramOrderIndexArbForOtherMember = 'M';
  static constexpr const char valProgramOrderNonIndexArbForOtherMember = 'N';
  static constexpr const char valProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember = 'O';
  static constexpr const char valPrincipal = 'P';
  static constexpr const char valTransactionsForTheAccountOfANonMembercompetingMarketMaker = 'R';
  static constexpr const char valSpecialistTrades = 'S';
  static constexpr const char valTransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker = 'T';
  static constexpr const char valProgramOrderIndexArbForOtherAgency = 'U';
  static constexpr const char valAllOtherOrdersAsAgentForOtherMember = 'W';
  static constexpr const char valShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade = 'X';
  static constexpr const char valProgramOrderNonIndexArbForOtherAgency = 'Y';
  static constexpr const char valShortExemptTransactionForNonMemberCompetingMarketMaker = 'Z';

  static constexpr const char* tagValAgencySingleOrder = "47=A";
  static constexpr const char* tagValShortExemptTransactionAType = "47=B";
  static constexpr const char* tagValProgramOrderNonIndexArbForMemberFirmOrorg = "47=C";
  static constexpr const char* tagValProgramOrderIndexArbForMemberFirmOrorg = "47=D";
  static constexpr const char* tagValShortExemptTransactionForPrincipal = "47=E";
  static constexpr const char* tagValShortExemptTransactionWType = "47=F";
  static constexpr const char* tagValShortExemptTransactionIType = "47=H";
  static constexpr const char* tagValIndividualInvestorSingleOrder = "47=I";
  static constexpr const char* tagValProgramOrderIndexArbForIndividualCustomer = "47=J";
  static constexpr const char* tagValProgramOrderNonIndexArbForIndividualCustomer = "47=K";
  static constexpr const char* tagValShortExemptTransactionForMemberCompetingMarketMakerAffiliatedWithFirmClearingTheTrade = "47=L";
  static constexpr const char* tagValProgramOrderIndexArbForOtherMember = "47=M";
  static constexpr const char* tagValProgramOrderNonIndexArbForOtherMember = "47=N";
  static constexpr const char* tagValProprietaryTransactionsForCompetingMarketMakerAffiliatedWithClearingMember = "47=O";
  static constexpr const char* tagValPrincipal = "47=P";
  static constexpr const char* tagValTransactionsForTheAccountOfANonMembercompetingMarketMaker = "47=R";
  static constexpr const char* tagValSpecialistTrades = "47=S";
  static constexpr const char* tagValTransactionsForTheAccountOfAnUnaffiliatedMembersCompetingMarketMaker = "47=T";
  static constexpr const char* tagValProgramOrderIndexArbForOtherAgency = "47=U";
  static constexpr const char* tagValAllOtherOrdersAsAgentForOtherMember = "47=W";
  static constexpr const char* tagValShortExemptTransactionForMemberCompetingMarketMakerNotAffiliatedWithFirmClearingTrade = "47=X";
  static constexpr const char* tagValProgramOrderNonIndexArbForOtherAgency = "47=Y";
  static constexpr const char* tagValShortExemptTransactionForNonMemberCompetingMarketMaker = "47=Z";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SecurityID : Types::Value<Types::String>
{
  static constexpr const int tag = 48;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SenderCompID : Types::Value<Types::String>
{
  static constexpr const int tag = 49;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SenderSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 50;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SendingDat : Types::Value<Types::Date>
{
  static constexpr const int tag = 51;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 3;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct SendingTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 52;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 3;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct Quantity : Types::Value<Types::Float>
{
  static constexpr const int tag = 53;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Side : Types::Value<Types::Char>
{
  static constexpr const int tag = 54;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valBuy = '1';
  static constexpr const char valSell = '2';
  static constexpr const char valBuyMinus = '3';
  static constexpr const char valSellPlus = '4';
  static constexpr const char valSellShort = '5';
  static constexpr const char valSellShortExempt = '6';
  static constexpr const char valUndisclosed = '7';
  static constexpr const char valCross = '8';
  static constexpr const char valCrossShort = '9';
  static constexpr const char valCrossShortExempt = 'A';
  static constexpr const char valAsDefined = 'B';
  static constexpr const char valOpposite = 'C';
  static constexpr const char valSubscribe = 'D';
  static constexpr const char valRedeem = 'E';
  static constexpr const char valLend = 'F';
  static constexpr const char valBorrow = 'G';

  static constexpr const char* tagValBuy = "54=1";
  static constexpr const char* tagValSell = "54=2";
  static constexpr const char* tagValBuyMinus = "54=3";
  static constexpr const char* tagValSellPlus = "54=4";
  static constexpr const char* tagValSellShort = "54=5";
  static constexpr const char* tagValSellShortExempt = "54=6";
  static constexpr const char* tagValUndisclosed = "54=7";
  static constexpr const char* tagValCross = "54=8";
  static constexpr const char* tagValCrossShort = "54=9";
  static constexpr const char* tagValCrossShortExempt = "54=A";
  static constexpr const char* tagValAsDefined = "54=B";
  static constexpr const char* tagValOpposite = "54=C";
  static constexpr const char* tagValSubscribe = "54=D";
  static constexpr const char* tagValRedeem = "54=E";
  static constexpr const char* tagValLend = "54=F";
  static constexpr const char* tagValBorrow = "54=G";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct Symbol : Types::Value<Types::String>
{
  static constexpr const int tag = 55;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TargetCompID : Types::Value<Types::String>
{
  static constexpr const int tag = 56;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TargetSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 57;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Text : Types::Value<Types::String>
{
  static constexpr const int tag = 58;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TimeInForce : Types::Value<Types::Char>
{
  static constexpr const int tag = 59;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valDay = '0';
  static constexpr const char valGoodTillCancel = '1';
  static constexpr const char valAtTheOpening = '2';
  static constexpr const char valImmediateOrCancel = '3';
  static constexpr const char valFillOrKill = '4';
  static constexpr const char valGoodTillCrossing = '5';
  static constexpr const char valGoodTillDate = '6';
  static constexpr const char valAtTheClose = '7';

  static constexpr const char* tagValDay = "59=0";
  static constexpr const char* tagValGoodTillCancel = "59=1";
  static constexpr const char* tagValAtTheOpening = "59=2";
  static constexpr const char* tagValImmediateOrCancel = "59=3";
  static constexpr const char* tagValFillOrKill = "59=4";
  static constexpr const char* tagValGoodTillCrossing = "59=5";
  static constexpr const char* tagValGoodTillDate = "59=6";
  static constexpr const char* tagValAtTheClose = "59=7";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct TransactTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 60;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 3;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct Urgency : Types::Value<Types::Char>
{
  static constexpr const int tag = 61;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNormal = '0';
  static constexpr const char valFlash = '1';
  static constexpr const char valBackground = '2';

  static constexpr const char* tagValNormal = "61=0";
  static constexpr const char* tagValFlash = "61=1";
  static constexpr const char* tagValBackground = "61=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct ValidUntilTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 62;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 3;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct SettlType : Types::Value<Types::Char>
{
  static constexpr const int tag = 63;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valRegular = '0';
  static constexpr const char valCash = '1';
  static constexpr const char valNextDay = '2';
  static constexpr const char valTplus2 = '3';
  static constexpr const char valTplus3 = '4';
  static constexpr const char valTplus4 = '5';
  static constexpr const char valFuture = '6';
  static constexpr const char valWhenAndIfIssued = '7';
  static constexpr const char valSellersOption = '8';
  static constexpr const char valTplus5 = '9';
  static constexpr const char valTplusRemovedInFIX44Use2NextDay = 'A';

  static constexpr const char* tagValRegular = "63=0";
  static constexpr const char* tagValCash = "63=1";
  static constexpr const char* tagValNextDay = "63=2";
  static constexpr const char* tagValTplus2 = "63=3";
  static constexpr const char* tagValTplus3 = "63=4";
  static constexpr const char* tagValTplus4 = "63=5";
  static constexpr const char* tagValFuture = "63=6";
  static constexpr const char* tagValWhenAndIfIssued = "63=7";
  static constexpr const char* tagValSellersOption = "63=8";
  static constexpr const char* tagValTplus5 = "63=9";
  static constexpr const char* tagValTplusRemovedInFIX44Use2NextDay = "63=A";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SettlDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 64;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 3;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct SymbolSfx : Types::Value<Types::String>
{
  static constexpr const int tag = 65;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valWhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN = "WI";
  static constexpr const char* valAEUCPWithLumpSumInterestRatherThanDiscountPrice = "CD";

  static constexpr const char* tagValWhenIssuedForASecurityToBeReissuedUnderAnOldCUSIPOrISIN = "65=WI";
  static constexpr const char* tagValAEUCPWithLumpSumInterestRatherThanDiscountPrice = "65=CD";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ListID : Types::Value<Types::String>
{
  static constexpr const int tag = 66;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ListSeqNo : Types::Value<Types::Int>
{
  static constexpr const int tag = 67;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TotNoOrders : Types::Value<Types::Int>
{
  static constexpr const int tag = 68;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ListExecInst : Types::Value<Types::String>
{
  static constexpr const int tag = 69;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocID : Types::Value<Types::String>
{
  static constexpr const int tag = 70;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocTransType : Types::Value<Types::Char>
{
  static constexpr const int tag = 71;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valReplace = '1';
  static constexpr const char valCancel = '2';
  static constexpr const char valPreliminarywithoutMiscFeesAndNetMoney = '3';
  static constexpr const char valCalculatedIncludesMiscFeesAndNetMoney = '4';
  static constexpr const char valCalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney = '5';

  static constexpr const char* tagValNew = "71=0";
  static constexpr const char* tagValReplace = "71=1";
  static constexpr const char* tagValCancel = "71=2";
  static constexpr const char* tagValPreliminarywithoutMiscFeesAndNetMoney = "71=3";
  static constexpr const char* tagValCalculatedIncludesMiscFeesAndNetMoney = "71=4";
  static constexpr const char* tagValCalculatedWithoutPreliminarysentUnsolicitedByBrokerIncludesMiscFeesAndNetMoney = "71=5";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct RefAllocID : Types::Value<Types::String>
{
  static constexpr const int tag = 72;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoOrders : Types::Value<Types::Int>
{
  static constexpr const int tag = 73;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AvgPxPrecision : Types::Value<Types::Int>
{
  static constexpr const int tag = 74;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 75;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 3;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct ExecBroker : Types::Value<Types::String>
{
  static constexpr const int tag = 76;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PositionEffect : Types::Value<Types::Char>
{
  static constexpr const int tag = 77;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valOpen = 'O';
  static constexpr const char valClose = 'C';
  static constexpr const char valRolled = 'R';
  static constexpr const char valFIFO = 'F';

  static constexpr const char* tagValOpen = "77=O";
  static constexpr const char* tagValClose = "77=C";
  static constexpr const char* tagValRolled = "77=R";
  static constexpr const char* tagValFIFO = "77=F";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NoAllocs : Types::Value<Types::Int>
{
  static constexpr const int tag = 78;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocAccount : Types::Value<Types::String>
{
  static constexpr const int tag = 79;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 80;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ProcessCode : Types::Value<Types::Char>
{
  static constexpr const int tag = 81;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valRegular = '0';
  static constexpr const char valSoftDollar = '1';
  static constexpr const char valStepIn = '2';
  static constexpr const char valStepOut = '3';
  static constexpr const char valSoftDollarStepIn = '4';
  static constexpr const char valSoftDollarStepOut = '5';
  static constexpr const char valPlanSponsor = '6';

  static constexpr const char* tagValRegular = "81=0";
  static constexpr const char* tagValSoftDollar = "81=1";
  static constexpr const char* tagValStepIn = "81=2";
  static constexpr const char* tagValStepOut = "81=3";
  static constexpr const char* tagValSoftDollarStepIn = "81=4";
  static constexpr const char* tagValSoftDollarStepOut = "81=5";
  static constexpr const char* tagValPlanSponsor = "81=6";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NoRpts : Types::Value<Types::Int>
{
  static constexpr const int tag = 82;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RptSeq : Types::Value<Types::Int>
{
  static constexpr const int tag = 83;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CxlQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 84;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoDlvyInst : Types::Value<Types::Int>
{
  static constexpr const int tag = 85;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DlvyInst : Types::Value<Types::String>
{
  static constexpr const int tag = 86;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 87;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccepted = 0;
  static constexpr const int valBlockLevelReject = 1;
  static constexpr const int valAccountLevelReject = 2;
  static constexpr const int valReceived = 3;
  static constexpr const int valIncomplete = 4;
  static constexpr const int valRejectedByIntermediary = 5;

  static constexpr const char* tagValAccepted = "87=0";
  static constexpr const char* tagValBlockLevelReject = "87=1";
  static constexpr const char* tagValAccountLevelReject = "87=2";
  static constexpr const char* tagValReceived = "87=3";
  static constexpr const char* tagValIncomplete = "87=4";
  static constexpr const char* tagValRejectedByIntermediary = "87=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocRejCode : Types::Value<Types::Int>
{
  static constexpr const int tag = 88;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnknownAccount = 0;
  static constexpr const int valIncorrectQuantity = 1;
  static constexpr const int valIncorrectAveragePrice = 2;
  static constexpr const int valUnknownExecutingBrokerMnemonic = 3;
  static constexpr const int valCommissionDifference = 4;
  static constexpr const int valUnknownOrderID = 5;
  static constexpr const int valUnknownListID = 6;
  static constexpr const int valOther = 7;
  static constexpr const int valIncorrectAllocatedQuantity = 8;
  static constexpr const int valCalculationDifference = 9;
  static constexpr const int valUnknownOrStaleExecID = 0;
  static constexpr const int valMismatchedDataValue = 1;
  static constexpr const int valUnknownClOrdID = 2;
  static constexpr const int valWarehouseRequestRejected = 3;

  static constexpr const char* tagValUnknownAccount = "88=0";
  static constexpr const char* tagValIncorrectQuantity = "88=1";
  static constexpr const char* tagValIncorrectAveragePrice = "88=2";
  static constexpr const char* tagValUnknownExecutingBrokerMnemonic = "88=3";
  static constexpr const char* tagValCommissionDifference = "88=4";
  static constexpr const char* tagValUnknownOrderID = "88=5";
  static constexpr const char* tagValUnknownListID = "88=6";
  static constexpr const char* tagValOther = "88=7";
  static constexpr const char* tagValIncorrectAllocatedQuantity = "88=8";
  static constexpr const char* tagValCalculationDifference = "88=9";
  static constexpr const char* tagValUnknownOrStaleExecID = "88=0";
  static constexpr const char* tagValMismatchedDataValue = "88=1";
  static constexpr const char* tagValUnknownClOrdID = "88=2";
  static constexpr const char* tagValWarehouseRequestRejected = "88=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Signature : Types::Value<Types::Data>
{
  static constexpr const int tag = 89;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct SecureDataLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 90;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecureData : Types::Value<Types::Data>
{
  static constexpr const int tag = 91;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct BrokerOfCredit : Types::Value<Types::String>
{
  static constexpr const int tag = 92;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SignatureLength : Types::Value<Types::Int>
{
  static constexpr const int tag = 93;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EmailType : Types::Value<Types::Char>
{
  static constexpr const int tag = 94;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valReply = '1';
  static constexpr const char valAdminReply = '2';

  static constexpr const char* tagValNew = "94=0";
  static constexpr const char* tagValReply = "94=1";
  static constexpr const char* tagValAdminReply = "94=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct RawDataLength : Types::Value<Types::Int>
{
  static constexpr const int tag = 95;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RawData : Types::Value<Types::Data>
{
  static constexpr const int tag = 96;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct PossResend : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 97;

  static constexpr const bool valPossibleResend = true;
  static constexpr const bool valOriginalTransmission = false;

  static constexpr const char* tagValPossibleResend = "97=Y";
  static constexpr const char* tagValOriginalTransmission = "97=N";

  using Types::Value<Types::Boolean>::Value;

};

struct EncryptMethod : Types::Value<Types::Int>
{
  static constexpr const int tag = 98;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNoneOrOther = 0;
  static constexpr const int valPKCS = 1;
  static constexpr const int valDES = 2;
  static constexpr const int valPKCSOrDES = 3;
  static constexpr const int valPGPOrDES = 4;
  static constexpr const int valPGPOrDESMD5 = 5;
  static constexpr const int valPEMOrDESMD5 = 6;

  static constexpr const char* tagValNoneOrOther = "98=0";
  static constexpr const char* tagValPKCS = "98=1";
  static constexpr const char* tagValDES = "98=2";
  static constexpr const char* tagValPKCSOrDES = "98=3";
  static constexpr const char* tagValPGPOrDES = "98=4";
  static constexpr const char* tagValPGPOrDESMD5 = "98=5";
  static constexpr const char* tagValPEMOrDESMD5 = "98=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct StopPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 99;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 3;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ExDestination : Types::Value<Types::String>
{
  static constexpr const int tag = 100;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CxlRejReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 102;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valTooLateToCancel = 0;
  static constexpr const int valUnknownOrder = 1;
  static constexpr const int valBrokerOrExchangeOption = 2;
  static constexpr const int valOrderAlreadyInPendingCancelOrPendingReplaceStatus = 3;
  static constexpr const int valUnableToProcessOrderMassCancelRequest = 4;
  static constexpr const int valOrigOrdModTime586DidNotMatchLastTransactTime60OfOrder = 5;
  static constexpr const int valDuplicateClOrdIDReceived = 6;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValTooLateToCancel = "102=0";
  static constexpr const char* tagValUnknownOrder = "102=1";
  static constexpr const char* tagValBrokerOrExchangeOption = "102=2";
  static constexpr const char* tagValOrderAlreadyInPendingCancelOrPendingReplaceStatus = "102=3";
  static constexpr const char* tagValUnableToProcessOrderMassCancelRequest = "102=4";
  static constexpr const char* tagValOrigOrdModTime586DidNotMatchLastTransactTime60OfOrder = "102=5";
  static constexpr const char* tagValDuplicateClOrdIDReceived = "102=6";
  static constexpr const char* tagValOther = "102=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrdRejReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 103;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valBrokerOrExchangeOption = 0;
  static constexpr const int valUnknownSymbol = 1;
  static constexpr const int valExchangeClosed = 2;
  static constexpr const int valOrderExceedsLimit = 3;
  static constexpr const int valTooLateToEnter = 4;
  static constexpr const int valUnknownOrder = 5;
  static constexpr const int valDuplicateOrderegDupeClOrdID = 6;
  static constexpr const int valDuplicateOfAVerballyCommunicatedOrder = 7;
  static constexpr const int valStaleOrder = 8;
  static constexpr const int valTradeAlongRequired = 9;
  static constexpr const int valInvalidInvestorID = 0;
  static constexpr const int valUnsupportedOrderCharacteristic2SurveillenceOption = 1;
  static constexpr const int valIncorrectQuantity = 3;
  static constexpr const int valIncorrectAllocatedQuantity = 4;
  static constexpr const int valUnknownAccount = 5;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValBrokerOrExchangeOption = "103=0";
  static constexpr const char* tagValUnknownSymbol = "103=1";
  static constexpr const char* tagValExchangeClosed = "103=2";
  static constexpr const char* tagValOrderExceedsLimit = "103=3";
  static constexpr const char* tagValTooLateToEnter = "103=4";
  static constexpr const char* tagValUnknownOrder = "103=5";
  static constexpr const char* tagValDuplicateOrderegDupeClOrdID = "103=6";
  static constexpr const char* tagValDuplicateOfAVerballyCommunicatedOrder = "103=7";
  static constexpr const char* tagValStaleOrder = "103=8";
  static constexpr const char* tagValTradeAlongRequired = "103=9";
  static constexpr const char* tagValInvalidInvestorID = "103=0";
  static constexpr const char* tagValUnsupportedOrderCharacteristic2SurveillenceOption = "103=1";
  static constexpr const char* tagValIncorrectQuantity = "103=3";
  static constexpr const char* tagValIncorrectAllocatedQuantity = "103=4";
  static constexpr const char* tagValUnknownAccount = "103=5";
  static constexpr const char* tagValOther = "103=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct IOIQualifier : Types::Value<Types::Char>
{
  static constexpr const int tag = 104;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valAllOrNone = 'A';
  static constexpr const char valMarketOnCloseMOC = 'B';
  static constexpr const char valAtTheClose = 'C';
  static constexpr const char valVWAP = 'D';
  static constexpr const char valInTouchWith = 'I';
  static constexpr const char valLimit = 'L';
  static constexpr const char valMoreBehind = 'M';
  static constexpr const char valAtTheOpen = 'O';
  static constexpr const char valTakingAPosition = 'P';
  static constexpr const char valAtTheMarket = 'Q';
  static constexpr const char valReadyToTrade = 'R';
  static constexpr const char valPortfolioShown = 'S';
  static constexpr const char valThroughTheDay = 'T';
  static constexpr const char valVersus = 'V';
  static constexpr const char valIndicationWorkingAway = 'W';
  static constexpr const char valCrossingOpportunity = 'X';
  static constexpr const char valAtTheMidpoint = 'Y';
  static constexpr const char valPreOpen = 'Z';

  static constexpr const char* tagValAllOrNone = "104=A";
  static constexpr const char* tagValMarketOnCloseMOC = "104=B";
  static constexpr const char* tagValAtTheClose = "104=C";
  static constexpr const char* tagValVWAP = "104=D";
  static constexpr const char* tagValInTouchWith = "104=I";
  static constexpr const char* tagValLimit = "104=L";
  static constexpr const char* tagValMoreBehind = "104=M";
  static constexpr const char* tagValAtTheOpen = "104=O";
  static constexpr const char* tagValTakingAPosition = "104=P";
  static constexpr const char* tagValAtTheMarket = "104=Q";
  static constexpr const char* tagValReadyToTrade = "104=R";
  static constexpr const char* tagValPortfolioShown = "104=S";
  static constexpr const char* tagValThroughTheDay = "104=T";
  static constexpr const char* tagValVersus = "104=V";
  static constexpr const char* tagValIndicationWorkingAway = "104=W";
  static constexpr const char* tagValCrossingOpportunity = "104=X";
  static constexpr const char* tagValAtTheMidpoint = "104=Y";
  static constexpr const char* tagValPreOpen = "104=Z";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct WaveNo : Types::Value<Types::String>
{
  static constexpr const int tag = 105;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Issuer : Types::Value<Types::String>
{
  static constexpr const int tag = 106;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecurityDesc : Types::Value<Types::String>
{
  static constexpr const int tag = 107;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct HeartBtInt : Types::Value<Types::Int>
{
  static constexpr const int tag = 108;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ClientID : Types::Value<Types::String>
{
  static constexpr const int tag = 109;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MinQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 110;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MaxFloor : Types::Value<Types::Float>
{
  static constexpr const int tag = 111;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TestReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 112;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ReportToExch : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 113;

  static constexpr const bool valIndicatesThatPartyReceivingMessageMustReportTrade = true;
  static constexpr const bool valIndicatesThatPartySendingMessageWillReportTrade = false;

  static constexpr const char* tagValIndicatesThatPartyReceivingMessageMustReportTrade = "113=Y";
  static constexpr const char* tagValIndicatesThatPartySendingMessageWillReportTrade = "113=N";

  using Types::Value<Types::Boolean>::Value;

};

struct LocateReqd : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 114;

  static constexpr const bool valIndicatesTheBrokerIsResponsibleForLocatingTheStock = true;
  static constexpr const bool valIndicatesTheBrokerIsNotRequiredToLocate = false;

  static constexpr const char* tagValIndicatesTheBrokerIsResponsibleForLocatingTheStock = "114=Y";
  static constexpr const char* tagValIndicatesTheBrokerIsNotRequiredToLocate = "114=N";

  using Types::Value<Types::Boolean>::Value;

};

struct OnBehalfOfCompID : Types::Value<Types::String>
{
  static constexpr const int tag = 115;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OnBehalfOfSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 116;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuoteID : Types::Value<Types::String>
{
  static constexpr const int tag = 117;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NetMoney : Types::Value<Types::Float>
{
  static constexpr const int tag = 118;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlCurrAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 119;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 120;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ForexReq : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 121;

  static constexpr const bool valExecuteForexAfterSecurityTrade = true;
  static constexpr const bool valDoNotExecuteForexAfterSecurityTrade = false;

  static constexpr const char* tagValExecuteForexAfterSecurityTrade = "121=Y";
  static constexpr const char* tagValDoNotExecuteForexAfterSecurityTrade = "121=N";

  using Types::Value<Types::Boolean>::Value;

};

struct OrigSendingTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 122;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct GapFillFlag : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 123;

  static constexpr const bool valGapFillMessageMsgSeqNumFieldValid = true;
  static constexpr const bool valSequenceResetIgnoreMsgSeqNum = false;

  static constexpr const char* tagValGapFillMessageMsgSeqNumFieldValid = "123=Y";
  static constexpr const char* tagValSequenceResetIgnoreMsgSeqNum = "123=N";

  using Types::Value<Types::Boolean>::Value;

};

struct NoExecs : Types::Value<Types::Int>
{
  static constexpr const int tag = 124;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CxlTyp : Types::Value<Types::Char>
{
  static constexpr const int tag = 125;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct ExpireTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 126;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct DKReason : Types::Value<Types::Char>
{
  static constexpr const int tag = 127;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valUnknownSymbol = 'A';
  static constexpr const char valWrongSide = 'B';
  static constexpr const char valQuantityExceedsOrder = 'C';
  static constexpr const char valNoMatchingOrder = 'D';
  static constexpr const char valPriceExceedsLimit = 'E';
  static constexpr const char valCalculationDifference = 'F';
  static constexpr const char valOther = 'Z';

  static constexpr const char* tagValUnknownSymbol = "127=A";
  static constexpr const char* tagValWrongSide = "127=B";
  static constexpr const char* tagValQuantityExceedsOrder = "127=C";
  static constexpr const char* tagValNoMatchingOrder = "127=D";
  static constexpr const char* tagValPriceExceedsLimit = "127=E";
  static constexpr const char* tagValCalculationDifference = "127=F";
  static constexpr const char* tagValOther = "127=Z";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct DeliverToCompID : Types::Value<Types::String>
{
  static constexpr const int tag = 128;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DeliverToSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 129;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct IOINaturalFlag : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 130;

  static constexpr const bool valNatural = true;
  static constexpr const bool valNotNatural = false;

  static constexpr const char* tagValNatural = "130=Y";
  static constexpr const char* tagValNotNatural = "130=N";

  using Types::Value<Types::Boolean>::Value;

};

struct QuoteReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 131;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BidPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 132;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OfferPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 133;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BidSize : Types::Value<Types::Float>
{
  static constexpr const int tag = 134;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OfferSize : Types::Value<Types::Float>
{
  static constexpr const int tag = 135;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoMiscFees : Types::Value<Types::Int>
{
  static constexpr const int tag = 136;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MiscFeeAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 137;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MiscFeeCurr : Types::Value<Types::String>
{
  static constexpr const int tag = 138;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MiscFeeType : Types::Value<Types::Char>
{
  static constexpr const int tag = 139;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valRegulatory = '1';
  static constexpr const char valTax = '2';
  static constexpr const char valLocalCommission = '3';
  static constexpr const char valExchangeFees = '4';
  static constexpr const char valStamp = '5';
  static constexpr const char valLevy = '6';
  static constexpr const char valOther = '7';
  static constexpr const char valMarkup = '8';
  static constexpr const char valConsumptionTax = '9';
  static constexpr const char valPerTransaction = '0';
  static constexpr const char valConversion = '1';
  static constexpr const char valAgent = '2';

  static constexpr const char* tagValRegulatory = "139=1";
  static constexpr const char* tagValTax = "139=2";
  static constexpr const char* tagValLocalCommission = "139=3";
  static constexpr const char* tagValExchangeFees = "139=4";
  static constexpr const char* tagValStamp = "139=5";
  static constexpr const char* tagValLevy = "139=6";
  static constexpr const char* tagValOther = "139=7";
  static constexpr const char* tagValMarkup = "139=8";
  static constexpr const char* tagValConsumptionTax = "139=9";
  static constexpr const char* tagValPerTransaction = "139=0";
  static constexpr const char* tagValConversion = "139=1";
  static constexpr const char* tagValAgent = "139=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct PrevClosePx : Types::Value<Types::Float>
{
  static constexpr const int tag = 140;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ResetSeqNumFlag : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 141;

  static constexpr const bool valYesResetSequenceNumbers = true;
  static constexpr const bool valNo = false;

  static constexpr const char* tagValYesResetSequenceNumbers = "141=Y";
  static constexpr const char* tagValNo = "141=N";

  using Types::Value<Types::Boolean>::Value;

};

struct SenderLocationID : Types::Value<Types::String>
{
  static constexpr const int tag = 142;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TargetLocationID : Types::Value<Types::String>
{
  static constexpr const int tag = 143;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OnBehalfOfLocationID : Types::Value<Types::String>
{
  static constexpr const int tag = 144;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DeliverToLocationID : Types::Value<Types::String>
{
  static constexpr const int tag = 145;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoRelatedSym : Types::Value<Types::Int>
{
  static constexpr const int tag = 146;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Subject : Types::Value<Types::String>
{
  static constexpr const int tag = 147;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Headline : Types::Value<Types::String>
{
  static constexpr const int tag = 148;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct URLLink : Types::Value<Types::String>
{
  static constexpr const int tag = 149;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ExecType : Types::Value<Types::Char>
{
  static constexpr const int tag = 150;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valPartialFill = '1';
  static constexpr const char valFill = '2';
  static constexpr const char valDoneForDay = '3';
  static constexpr const char valCanceled = '4';
  static constexpr const char valReplace = '5';
  static constexpr const char valPendingCancel = '6';
  static constexpr const char valStopped = '7';
  static constexpr const char valRejected = '8';
  static constexpr const char valSuspended = '9';
  static constexpr const char valPendingNew = 'A';
  static constexpr const char valCalculated = 'B';
  static constexpr const char valExpired = 'C';
  static constexpr const char valRestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason = 'D';
  static constexpr const char valPendingReplace = 'E';
  static constexpr const char valTrade = 'F';
  static constexpr const char valTradeCorrectformerlyAnExecTransType = 'G';
  static constexpr const char valTradeCancel = 'H';
  static constexpr const char valOrderStatus = 'I';

  static constexpr const char* tagValNew = "150=0";
  static constexpr const char* tagValPartialFill = "150=1";
  static constexpr const char* tagValFill = "150=2";
  static constexpr const char* tagValDoneForDay = "150=3";
  static constexpr const char* tagValCanceled = "150=4";
  static constexpr const char* tagValReplace = "150=5";
  static constexpr const char* tagValPendingCancel = "150=6";
  static constexpr const char* tagValStopped = "150=7";
  static constexpr const char* tagValRejected = "150=8";
  static constexpr const char* tagValSuspended = "150=9";
  static constexpr const char* tagValPendingNew = "150=A";
  static constexpr const char* tagValCalculated = "150=B";
  static constexpr const char* tagValExpired = "150=C";
  static constexpr const char* tagValRestatedExecutionRptSentUnsolicitedBySellsideWithExecRestatementReason = "150=D";
  static constexpr const char* tagValPendingReplace = "150=E";
  static constexpr const char* tagValTrade = "150=F";
  static constexpr const char* tagValTradeCorrectformerlyAnExecTransType = "150=G";
  static constexpr const char* tagValTradeCancel = "150=H";
  static constexpr const char* tagValOrderStatus = "150=I";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct LeavesQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 151;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CashOrderQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 152;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AllocAvgPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 153;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AllocNetMoney : Types::Value<Types::Float>
{
  static constexpr const int tag = 154;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlCurrFxRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 155;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlCurrFxRateCalc : Types::Value<Types::Char>
{
  static constexpr const int tag = 156;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valMultiply = 'M';
  static constexpr const char valDivide = 'D';

  static constexpr const char* tagValMultiply = "156=M";
  static constexpr const char* tagValDivide = "156=D";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NumDaysInterest : Types::Value<Types::Int>
{
  static constexpr const int tag = 157;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AccruedInterestRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 158;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AccruedInterestAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 159;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlInstMode : Types::Value<Types::Char>
{
  static constexpr const int tag = 160;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valDefault = '0';
  static constexpr const char valStandingInstructionsProvided = '1';
  static constexpr const char valSpecificAllocationAccountOverriding = '2';
  static constexpr const char valSpecificAllocationAccountStanding = '3';
  static constexpr const char valSpecificOrderForASingleAccount = '4';
  static constexpr const char valRequestReject = '5';

  static constexpr const char* tagValDefault = "160=0";
  static constexpr const char* tagValStandingInstructionsProvided = "160=1";
  static constexpr const char* tagValSpecificAllocationAccountOverriding = "160=2";
  static constexpr const char* tagValSpecificAllocationAccountStanding = "160=3";
  static constexpr const char* tagValSpecificOrderForASingleAccount = "160=4";
  static constexpr const char* tagValRequestReject = "160=5";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct AllocText : Types::Value<Types::String>
{
  static constexpr const int tag = 161;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlInstID : Types::Value<Types::String>
{
  static constexpr const int tag = 162;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlInstTransType : Types::Value<Types::Char>
{
  static constexpr const int tag = 163;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = 'N';
  static constexpr const char valCancel = 'C';
  static constexpr const char valReplace = 'R';
  static constexpr const char valRestate = 'T';

  static constexpr const char* tagValNew = "163=N";
  static constexpr const char* tagValCancel = "163=C";
  static constexpr const char* tagValReplace = "163=R";
  static constexpr const char* tagValRestate = "163=T";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct EmailThreadID : Types::Value<Types::String>
{
  static constexpr const int tag = 164;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlInstSource : Types::Value<Types::Char>
{
  static constexpr const int tag = 165;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valBrokersInstructions = '1';
  static constexpr const char valInstitutionsInstructions = '2';
  static constexpr const char valInvestor = '3';

  static constexpr const char* tagValBrokersInstructions = "165=1";
  static constexpr const char* tagValInstitutionsInstructions = "165=2";
  static constexpr const char* tagValInvestor = "165=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SettlLocation : Types::Value<Types::String>
{
  static constexpr const int tag = 166;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valCEDEL = "CED";
  static constexpr const char* valDepositoryTrustCompany = "DTC";
  static constexpr const char* valEuroclear = "EUR";
  static constexpr const char* valFederalBookEntry = "FED";
  static constexpr const char* valPhysical = "PNY";
  static constexpr const char* valParticipantTrustCompany = "PTC";

  static constexpr const char* tagValCEDEL = "166=CED";
  static constexpr const char* tagValDepositoryTrustCompany = "166=DTC";
  static constexpr const char* tagValEuroclear = "166=EUR";
  static constexpr const char* tagValFederalBookEntry = "166=FED";
  static constexpr const char* tagValPhysical = "166=PNY";
  static constexpr const char* tagValParticipantTrustCompany = "166=PTC";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecurityType : Types::Value<Types::String>
{
  static constexpr const int tag = 167;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct EffectiveTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 168;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct StandInstDbType : Types::Value<Types::Int>
{
  static constexpr const int tag = 169;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valOther = 0;
  static constexpr const int valDTCSID = 1;
  static constexpr const int valThomsonALERT = 2;
  static constexpr const int valAGlobalCustodianStandInstDbName = 3;
  static constexpr const int valAccountNet = 4;

  static constexpr const char* tagValOther = "169=0";
  static constexpr const char* tagValDTCSID = "169=1";
  static constexpr const char* tagValThomsonALERT = "169=2";
  static constexpr const char* tagValAGlobalCustodianStandInstDbName = "169=3";
  static constexpr const char* tagValAccountNet = "169=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct StandInstDbName : Types::Value<Types::String>
{
  static constexpr const int tag = 170;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct StandInstDbID : Types::Value<Types::String>
{
  static constexpr const int tag = 171;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlDeliveryType : Types::Value<Types::Int>
{
  static constexpr const int tag = 172;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SettlDepositoryCode : Types::Value<Types::String>
{
  static constexpr const int tag = 173;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlBrkrCode : Types::Value<Types::String>
{
  static constexpr const int tag = 174;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlInstCode : Types::Value<Types::String>
{
  static constexpr const int tag = 175;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySettlAgentName : Types::Value<Types::String>
{
  static constexpr const int tag = 176;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySettlAgentCode : Types::Value<Types::String>
{
  static constexpr const int tag = 177;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySettlAgentAcctNum : Types::Value<Types::String>
{
  static constexpr const int tag = 178;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySettlAgentAcctName : Types::Value<Types::String>
{
  static constexpr const int tag = 179;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySettlAgentContactName : Types::Value<Types::String>
{
  static constexpr const int tag = 180;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySettlAgentContactPhone : Types::Value<Types::String>
{
  static constexpr const int tag = 181;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashSettlAgentName : Types::Value<Types::String>
{
  static constexpr const int tag = 182;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashSettlAgentCode : Types::Value<Types::String>
{
  static constexpr const int tag = 183;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashSettlAgentAcctNum : Types::Value<Types::String>
{
  static constexpr const int tag = 184;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashSettlAgentAcctName : Types::Value<Types::String>
{
  static constexpr const int tag = 185;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashSettlAgentContactName : Types::Value<Types::String>
{
  static constexpr const int tag = 186;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashSettlAgentContactPhone : Types::Value<Types::String>
{
  static constexpr const int tag = 187;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BidSpotRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 188;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BidForwardPoints : Types::Value<Types::Float>
{
  static constexpr const int tag = 189;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OfferSpotRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 190;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OfferForwardPoints : Types::Value<Types::Float>
{
  static constexpr const int tag = 191;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OrderQty2 : Types::Value<Types::Float>
{
  static constexpr const int tag = 192;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlDate2 : Types::Value<Types::Date>
{
  static constexpr const int tag = 193;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct LastSpotRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 194;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LastForwardPoints : Types::Value<Types::Float>
{
  static constexpr const int tag = 195;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AllocLinkID : Types::Value<Types::String>
{
  static constexpr const int tag = 196;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocLinkType : Types::Value<Types::Int>
{
  static constexpr const int tag = 197;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valFOrXNetting = 0;
  static constexpr const int valFOrXSwap = 1;

  static constexpr const char* tagValFOrXNetting = "197=0";
  static constexpr const char* tagValFOrXSwap = "197=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecondaryOrderID : Types::Value<Types::String>
{
  static constexpr const int tag = 198;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoIOIQualifiers : Types::Value<Types::Int>
{
  static constexpr const int tag = 199;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MaturityMonthYear : Types::Value<Types::MonthYear>
{
  static constexpr const int tag = 200;

  static const char* tagVal(int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;
    Types::writeThere(whereWrite, monthYear);
    return toStrBuff;
  }

  using Types::Value<Types::MonthYear>::Value;

  static char toStrBuff[];
};

struct PutOrCall : Types::Value<Types::Int>
{
  static constexpr const int tag = 201;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPut = 0;
  static constexpr const int valCall = 1;

  static constexpr const char* tagValPut = "201=0";
  static constexpr const char* tagValCall = "201=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct StrikePrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 202;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CoveredOrUncovered : Types::Value<Types::Int>
{
  static constexpr const int tag = 203;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCovered = 0;
  static constexpr const int valUncovered = 1;

  static constexpr const char* tagValCovered = "203=0";
  static constexpr const char* tagValUncovered = "203=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CustomerOrFirm : Types::Value<Types::Int>
{
  static constexpr const int tag = 204;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCustomer = 0;
  static constexpr const int valFirm = 1;

  static constexpr const char* tagValCustomer = "204=0";
  static constexpr const char* tagValFirm = "204=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MaturityDay : Types::Value<Types::Int>
{
  static constexpr const int tag = 205;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OptAttribute : Types::Value<Types::Char>
{
  static constexpr const int tag = 206;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valLong = 'L';
  static constexpr const char valShort = 'S';
  static constexpr const char valZero = '0';
  static constexpr const char valOne = '1';
  static constexpr const char valTwo = '2';
  static constexpr const char valThree = '3';
  static constexpr const char valFour = '4';
  static constexpr const char valFive = '5';
  static constexpr const char valSix = '6';
  static constexpr const char valSeven = '7';
  static constexpr const char valEight = '8';
  static constexpr const char valNine = '9';

  static constexpr const char* tagValLong = "206=L";
  static constexpr const char* tagValShort = "206=S";
  static constexpr const char* tagValZero = "206=0";
  static constexpr const char* tagValOne = "206=1";
  static constexpr const char* tagValTwo = "206=2";
  static constexpr const char* tagValThree = "206=3";
  static constexpr const char* tagValFour = "206=4";
  static constexpr const char* tagValFive = "206=5";
  static constexpr const char* tagValSix = "206=6";
  static constexpr const char* tagValSeven = "206=7";
  static constexpr const char* tagValEight = "206=8";
  static constexpr const char* tagValNine = "206=9";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SecurityExchange : Types::Value<Types::String>
{
  static constexpr const int tag = 207;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NotifyBrokerOfCredit : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 208;

  static constexpr const bool valDetailsShouldBeCommunicated = true;
  static constexpr const bool valDetailsShouldNotBeCommunicated = false;

  static constexpr const char* tagValDetailsShouldBeCommunicated = "208=Y";
  static constexpr const char* tagValDetailsShouldNotBeCommunicated = "208=N";

  using Types::Value<Types::Boolean>::Value;

};

struct AllocHandlInst : Types::Value<Types::Int>
{
  static constexpr const int tag = 209;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valMatch = 1;
  static constexpr const int valForward = 2;
  static constexpr const int valForwardAndMatch = 3;

  static constexpr const char* tagValMatch = "209=1";
  static constexpr const char* tagValForward = "209=2";
  static constexpr const char* tagValForwardAndMatch = "209=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MaxShow : Types::Value<Types::Float>
{
  static constexpr const int tag = 210;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PegOffsetValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 211;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct XmlDataLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 212;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct XmlData : Types::Value<Types::Data>
{
  static constexpr const int tag = 213;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct SettlInstRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 214;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoRoutingIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 215;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RoutingType : Types::Value<Types::Int>
{
  static constexpr const int tag = 216;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valTargetFirm = 1;
  static constexpr const int valTargetList = 2;
  static constexpr const int valBlockFirm = 3;
  static constexpr const int valBlockList = 4;

  static constexpr const char* tagValTargetFirm = "216=1";
  static constexpr const char* tagValTargetList = "216=2";
  static constexpr const char* tagValBlockFirm = "216=3";
  static constexpr const char* tagValBlockList = "216=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RoutingID : Types::Value<Types::String>
{
  static constexpr const int tag = 217;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Spread : Types::Value<Types::Float>
{
  static constexpr const int tag = 218;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Benchmark : Types::Value<Types::Char>
{
  static constexpr const int tag = 219;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valCURVE = '1';
  static constexpr const char val5YR = '2';
  static constexpr const char valOLD5 = '3';
  static constexpr const char val0YR = '4';
  static constexpr const char valOLD0 = '5';
  static constexpr const char val30YR = '6';
  static constexpr const char valOLD30 = '7';
  static constexpr const char val3MOLIBOR = '8';
  static constexpr const char val6MOLIBOR = '9';

  static constexpr const char* tagValCURVE = "219=1";
  static constexpr const char* tagVal5YR = "219=2";
  static constexpr const char* tagValOLD5 = "219=3";
  static constexpr const char* tagVal0YR = "219=4";
  static constexpr const char* tagValOLD0 = "219=5";
  static constexpr const char* tagVal30YR = "219=6";
  static constexpr const char* tagValOLD30 = "219=7";
  static constexpr const char* tagVal3MOLIBOR = "219=8";
  static constexpr const char* tagVal6MOLIBOR = "219=9";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct BenchmarkCurveCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 220;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BenchmarkCurveName : Types::Value<Types::String>
{
  static constexpr const int tag = 221;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valLondonInterBankOffers = "LIBOR";

  static constexpr const char* tagValLondonInterBankOffers = "221=LIBOR";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BenchmarkCurvePoint : Types::Value<Types::String>
{
  static constexpr const int tag = 222;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CouponRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 223;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CouponPaymentDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 224;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct IssueDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 225;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct RepurchaseTerm : Types::Value<Types::Int>
{
  static constexpr const int tag = 226;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RepurchaseRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 227;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Factor : Types::Value<Types::Float>
{
  static constexpr const int tag = 228;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TradeOriginationDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 229;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct ExDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 230;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct ContractMultiplier : Types::Value<Types::Float>
{
  static constexpr const int tag = 231;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoStipulations : Types::Value<Types::Int>
{
  static constexpr const int tag = 232;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct StipulationType : Types::Value<Types::String>
{
  static constexpr const int tag = 233;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct StipulationValue : Types::Value<Types::String>
{
  static constexpr const int tag = 234;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct YieldType : Types::Value<Types::String>
{
  static constexpr const int tag = 235;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valAfterTaxYield = "AFTERTAX";
  static constexpr const char* valAnnualYield = "ANNUAL";
  static constexpr const char* valYieldAtIssue = "ATISSUE";
  static constexpr const char* valYieldToAverageMaturity = "AVGMATURITY";
  static constexpr const char* valBookYield = "BOOK";
  static constexpr const char* valYieldToNextCall = "CALL";
  static constexpr const char* valYieldChangeSinceClose = "CHANGE";
  static constexpr const char* valClosingYield = "CLOSE";
  static constexpr const char* valCompoundYield = "COMPOUND";
  static constexpr const char* valCurrentYield = "CURRENT";
  static constexpr const char* valTrueGrossYield = "GROSS";
  static constexpr const char* valGovernmentEquivalentYield = "GOVTEQUIV";
  static constexpr const char* valYieldWithInflationAssumption = "INFLATION";
  static constexpr const char* valInverseFloaterBondYield = "INVERSEFLOATER";
  static constexpr const char* valMostRecentClosingYield = "LASTCLOSE";
  static constexpr const char* valClosingYieldMostRecentMonth = "LASTMONTH";
  static constexpr const char* valClosingYieldMostRecentQuarter = "LASTQUARTER";
  static constexpr const char* valClosingYieldMostRecentYear = "LASTYEAR";
  static constexpr const char* valYieldToLongestAverageLife = "LONGAVGLIFE";
  static constexpr const char* valMarkToMarketYield = "MARK";
  static constexpr const char* valYieldToMaturity = "MATURITY";
  static constexpr const char* valYieldToNextRefund = "NEXTREFUND";
  static constexpr const char* valOpenAverageYield = "OPENAVG";
  static constexpr const char* valYieldToNextPut = "PUT";
  static constexpr const char* valPreviousCloseYield = "PREVCLOSE";
  static constexpr const char* valProceedsYield = "PROCEEDS";
  static constexpr const char* valSemiAnnualYield = "SEMIANNUAL";
  static constexpr const char* valYieldToShortestAverageLife = "SHORTAVGLIFE";
  static constexpr const char* valSimpleYield = "SIMPLE";
  static constexpr const char* valTaxEquivalentYield = "TAXEQUIV";
  static constexpr const char* valYieldToTenderDate = "TENDER";
  static constexpr const char* valTrueYield = "TRUE";
  static constexpr const char* valYieldValueOfOr32 = "VALUE/32";
  static constexpr const char* valYieldToWorst = "WORST";

  static constexpr const char* tagValAfterTaxYield = "235=AFTERTAX";
  static constexpr const char* tagValAnnualYield = "235=ANNUAL";
  static constexpr const char* tagValYieldAtIssue = "235=ATISSUE";
  static constexpr const char* tagValYieldToAverageMaturity = "235=AVGMATURITY";
  static constexpr const char* tagValBookYield = "235=BOOK";
  static constexpr const char* tagValYieldToNextCall = "235=CALL";
  static constexpr const char* tagValYieldChangeSinceClose = "235=CHANGE";
  static constexpr const char* tagValClosingYield = "235=CLOSE";
  static constexpr const char* tagValCompoundYield = "235=COMPOUND";
  static constexpr const char* tagValCurrentYield = "235=CURRENT";
  static constexpr const char* tagValTrueGrossYield = "235=GROSS";
  static constexpr const char* tagValGovernmentEquivalentYield = "235=GOVTEQUIV";
  static constexpr const char* tagValYieldWithInflationAssumption = "235=INFLATION";
  static constexpr const char* tagValInverseFloaterBondYield = "235=INVERSEFLOATER";
  static constexpr const char* tagValMostRecentClosingYield = "235=LASTCLOSE";
  static constexpr const char* tagValClosingYieldMostRecentMonth = "235=LASTMONTH";
  static constexpr const char* tagValClosingYieldMostRecentQuarter = "235=LASTQUARTER";
  static constexpr const char* tagValClosingYieldMostRecentYear = "235=LASTYEAR";
  static constexpr const char* tagValYieldToLongestAverageLife = "235=LONGAVGLIFE";
  static constexpr const char* tagValMarkToMarketYield = "235=MARK";
  static constexpr const char* tagValYieldToMaturity = "235=MATURITY";
  static constexpr const char* tagValYieldToNextRefund = "235=NEXTREFUND";
  static constexpr const char* tagValOpenAverageYield = "235=OPENAVG";
  static constexpr const char* tagValYieldToNextPut = "235=PUT";
  static constexpr const char* tagValPreviousCloseYield = "235=PREVCLOSE";
  static constexpr const char* tagValProceedsYield = "235=PROCEEDS";
  static constexpr const char* tagValSemiAnnualYield = "235=SEMIANNUAL";
  static constexpr const char* tagValYieldToShortestAverageLife = "235=SHORTAVGLIFE";
  static constexpr const char* tagValSimpleYield = "235=SIMPLE";
  static constexpr const char* tagValTaxEquivalentYield = "235=TAXEQUIV";
  static constexpr const char* tagValYieldToTenderDate = "235=TENDER";
  static constexpr const char* tagValTrueYield = "235=TRUE";
  static constexpr const char* tagValYieldValueOfOr32 = "235=VALUE/32";
  static constexpr const char* tagValYieldToWorst = "235=WORST";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Yield : Types::Value<Types::Float>
{
  static constexpr const int tag = 236;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TotalTakedown : Types::Value<Types::Float>
{
  static constexpr const int tag = 237;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Concession : Types::Value<Types::Float>
{
  static constexpr const int tag = 238;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct RepoCollateralSecurityType : Types::Value<Types::Int>
{
  static constexpr const int tag = 239;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RedemptionDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 240;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct UnderlyingCouponPaymentDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 241;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct UnderlyingIssueDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 242;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct UnderlyingRepoCollateralSecurityType : Types::Value<Types::Int>
{
  static constexpr const int tag = 243;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingRepurchaseTerm : Types::Value<Types::Int>
{
  static constexpr const int tag = 244;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingRepurchaseRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 245;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingFactor : Types::Value<Types::Float>
{
  static constexpr const int tag = 246;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingRedemptionDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 247;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct LegCouponPaymentDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 248;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct LegIssueDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 249;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct LegRepoCollateralSecurityType : Types::Value<Types::Int>
{
  static constexpr const int tag = 250;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegRepurchaseTerm : Types::Value<Types::Int>
{
  static constexpr const int tag = 251;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegRepurchaseRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 252;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegFactor : Types::Value<Types::Float>
{
  static constexpr const int tag = 253;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegRedemptionDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 254;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct CreditRating : Types::Value<Types::String>
{
  static constexpr const int tag = 255;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingCreditRating : Types::Value<Types::String>
{
  static constexpr const int tag = 256;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegCreditRating : Types::Value<Types::String>
{
  static constexpr const int tag = 257;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradedFlatSwitch : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 258;

  static constexpr const bool valTradedFlat = true;
  static constexpr const bool valNotTradedFlat = false;

  static constexpr const char* tagValTradedFlat = "258=Y";
  static constexpr const char* tagValNotTradedFlat = "258=N";

  using Types::Value<Types::Boolean>::Value;

};

struct BasisFeatureDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 259;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct BasisFeaturePrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 260;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MDReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 262;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SubscriptionRequestType : Types::Value<Types::Char>
{
  static constexpr const int tag = 263;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valSnapshot = '0';
  static constexpr const char valSnapshotplusUpdates = '1';
  static constexpr const char valDisablePreviousSnapshotplusUpdateRequest = '2';

  static constexpr const char* tagValSnapshot = "263=0";
  static constexpr const char* tagValSnapshotplusUpdates = "263=1";
  static constexpr const char* tagValDisablePreviousSnapshotplusUpdateRequest = "263=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MarketDepth : Types::Value<Types::Int>
{
  static constexpr const int tag = 264;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valFullBook = 0;
  static constexpr const int valTopOfBook = 1;

  static constexpr const char* tagValFullBook = "264=0";
  static constexpr const char* tagValTopOfBook = "264=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MDUpdateType : Types::Value<Types::Int>
{
  static constexpr const int tag = 265;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valFullRefresh = 0;
  static constexpr const int valIncrementalRefresh = 1;

  static constexpr const char* tagValFullRefresh = "265=0";
  static constexpr const char* tagValIncrementalRefresh = "265=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AggregatedBook : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 266;

  static constexpr const bool valOneBookEntryPerSidePerPrice = true;
  static constexpr const bool valMultipleEntriesPerSidePerPriceAllowed = false;

  static constexpr const char* tagValOneBookEntryPerSidePerPrice = "266=Y";
  static constexpr const char* tagValMultipleEntriesPerSidePerPriceAllowed = "266=N";

  using Types::Value<Types::Boolean>::Value;

};

struct NoMDEntryTypes : Types::Value<Types::Int>
{
  static constexpr const int tag = 267;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoMDEntries : Types::Value<Types::Int>
{
  static constexpr const int tag = 268;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MDEntryType : Types::Value<Types::Char>
{
  static constexpr const int tag = 269;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valBid = '0';
  static constexpr const char valOffer = '1';
  static constexpr const char valTrade = '2';
  static constexpr const char valIndexValue = '3';
  static constexpr const char valOpeningPrice = '4';
  static constexpr const char valClosingPrice = '5';
  static constexpr const char valSettlementPrice = '6';
  static constexpr const char valTradingSessionHighPrice = '7';
  static constexpr const char valTradingSessionLowPrice = '8';
  static constexpr const char valTradingSessionVWAPPrice = '9';
  static constexpr const char valImbalance = 'A';
  static constexpr const char valTradeVolume = 'B';
  static constexpr const char valOpenInterest = 'C';

  static constexpr const char* tagValBid = "269=0";
  static constexpr const char* tagValOffer = "269=1";
  static constexpr const char* tagValTrade = "269=2";
  static constexpr const char* tagValIndexValue = "269=3";
  static constexpr const char* tagValOpeningPrice = "269=4";
  static constexpr const char* tagValClosingPrice = "269=5";
  static constexpr const char* tagValSettlementPrice = "269=6";
  static constexpr const char* tagValTradingSessionHighPrice = "269=7";
  static constexpr const char* tagValTradingSessionLowPrice = "269=8";
  static constexpr const char* tagValTradingSessionVWAPPrice = "269=9";
  static constexpr const char* tagValImbalance = "269=A";
  static constexpr const char* tagValTradeVolume = "269=B";
  static constexpr const char* tagValOpenInterest = "269=C";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MDEntryPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 270;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MDEntrySize : Types::Value<Types::Float>
{
  static constexpr const int tag = 271;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MDEntryDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 272;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct MDEntryTime : Types::Value<Types::Time>
{
  static constexpr const int tag = 273;

  static const char* tagVal(int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Time time; time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, time);
    return toStrBuff;
  }

  using Types::Value<Types::Time>::Value;

  static char toStrBuff[];
};

struct TickDirection : Types::Value<Types::Char>
{
  static constexpr const int tag = 274;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valPlusTick = '0';
  static constexpr const char valZeroPlusTick = '1';
  static constexpr const char valMinusTick = '2';
  static constexpr const char valZeroMinusTick = '3';

  static constexpr const char* tagValPlusTick = "274=0";
  static constexpr const char* tagValZeroPlusTick = "274=1";
  static constexpr const char* tagValMinusTick = "274=2";
  static constexpr const char* tagValZeroMinusTick = "274=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MDMkt : Types::Value<Types::String>
{
  static constexpr const int tag = 275;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuoteCondition : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 276;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valOpenOrActive = "A";
  static constexpr const char* valClosedOrInactive = "B";
  static constexpr const char* valExchangeBest = "C";
  static constexpr const char* valConsolidatedBest = "D";
  static constexpr const char* valLocked = "E";
  static constexpr const char* valCrossed = "F";
  static constexpr const char* valDepth = "G";
  static constexpr const char* valFastTrading = "H";
  static constexpr const char* valNonFirm = "I";

  static constexpr const char* tagValOpenOrActive = "276=A";
  static constexpr const char* tagValClosedOrInactive = "276=B";
  static constexpr const char* tagValExchangeBest = "276=C";
  static constexpr const char* tagValConsolidatedBest = "276=D";
  static constexpr const char* tagValLocked = "276=E";
  static constexpr const char* tagValCrossed = "276=F";
  static constexpr const char* tagValDepth = "276=G";
  static constexpr const char* tagValFastTrading = "276=H";
  static constexpr const char* tagValNonFirm = "276=I";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct TradeCondition : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 277;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valCashonlyMarket = "A";
  static constexpr const char* valAveragePriceTrade = "B";
  static constexpr const char* valCashTrade = "C";
  static constexpr const char* valNextDayonlyMarket = "D";
  static constexpr const char* valOpeningOrReopeningTradeDetail = "E";
  static constexpr const char* valIntradayTradeDetail = "F";
  static constexpr const char* valRule27Trade = "G";
  static constexpr const char* valRule55Trade = "H";
  static constexpr const char* valSoldLast = "I";
  static constexpr const char* valNextDayTrade = "J";
  static constexpr const char* valOpened = "K";
  static constexpr const char* valSeller = "L";
  static constexpr const char* valSold = "M";
  static constexpr const char* valStoppedStock = "N";
  static constexpr const char* valImbalanceMoreBuyers = "P";
  static constexpr const char* valImbalanceMoreSellers = "Q";
  static constexpr const char* valOpeningPrice = "R";

  static constexpr const char* tagValCashonlyMarket = "277=A";
  static constexpr const char* tagValAveragePriceTrade = "277=B";
  static constexpr const char* tagValCashTrade = "277=C";
  static constexpr const char* tagValNextDayonlyMarket = "277=D";
  static constexpr const char* tagValOpeningOrReopeningTradeDetail = "277=E";
  static constexpr const char* tagValIntradayTradeDetail = "277=F";
  static constexpr const char* tagValRule27Trade = "277=G";
  static constexpr const char* tagValRule55Trade = "277=H";
  static constexpr const char* tagValSoldLast = "277=I";
  static constexpr const char* tagValNextDayTrade = "277=J";
  static constexpr const char* tagValOpened = "277=K";
  static constexpr const char* tagValSeller = "277=L";
  static constexpr const char* tagValSold = "277=M";
  static constexpr const char* tagValStoppedStock = "277=N";
  static constexpr const char* tagValImbalanceMoreBuyers = "277=P";
  static constexpr const char* tagValImbalanceMoreSellers = "277=Q";
  static constexpr const char* tagValOpeningPrice = "277=R";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct MDEntryID : Types::Value<Types::String>
{
  static constexpr const int tag = 278;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MDUpdateAction : Types::Value<Types::Char>
{
  static constexpr const int tag = 279;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valChange = '1';
  static constexpr const char valDelete = '2';

  static constexpr const char* tagValNew = "279=0";
  static constexpr const char* tagValChange = "279=1";
  static constexpr const char* tagValDelete = "279=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MDEntryRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 280;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MDReqRejReason : Types::Value<Types::Char>
{
  static constexpr const int tag = 281;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valUnknownSymbol = '0';
  static constexpr const char valDuplicateMDReqID = '1';
  static constexpr const char valInsufficientBandwidth = '2';
  static constexpr const char valInsufficientPermissions = '3';
  static constexpr const char valUnsupportedSubscriptionRequestType = '4';
  static constexpr const char valUnsupportedMarketDepth = '5';
  static constexpr const char valUnsupportedMDUpdateType = '6';
  static constexpr const char valUnsupportedAggregatedBook = '7';
  static constexpr const char valUnsupportedMDEntryType = '8';
  static constexpr const char valUnsupportedTradingSessionID = '9';
  static constexpr const char valUnsupportedScope = 'A';
  static constexpr const char valUnsupportedOpenCloseSettleFlag = 'B';
  static constexpr const char valUnsupportedMDImplicitDelete = 'C';

  static constexpr const char* tagValUnknownSymbol = "281=0";
  static constexpr const char* tagValDuplicateMDReqID = "281=1";
  static constexpr const char* tagValInsufficientBandwidth = "281=2";
  static constexpr const char* tagValInsufficientPermissions = "281=3";
  static constexpr const char* tagValUnsupportedSubscriptionRequestType = "281=4";
  static constexpr const char* tagValUnsupportedMarketDepth = "281=5";
  static constexpr const char* tagValUnsupportedMDUpdateType = "281=6";
  static constexpr const char* tagValUnsupportedAggregatedBook = "281=7";
  static constexpr const char* tagValUnsupportedMDEntryType = "281=8";
  static constexpr const char* tagValUnsupportedTradingSessionID = "281=9";
  static constexpr const char* tagValUnsupportedScope = "281=A";
  static constexpr const char* tagValUnsupportedOpenCloseSettleFlag = "281=B";
  static constexpr const char* tagValUnsupportedMDImplicitDelete = "281=C";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MDEntryOriginator : Types::Value<Types::String>
{
  static constexpr const int tag = 282;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LocationID : Types::Value<Types::String>
{
  static constexpr const int tag = 283;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DeskID : Types::Value<Types::String>
{
  static constexpr const int tag = 284;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DeleteReason : Types::Value<Types::Char>
{
  static constexpr const int tag = 285;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valCancelationOrTradeBust = '0';
  static constexpr const char valError = '1';

  static constexpr const char* tagValCancelationOrTradeBust = "285=0";
  static constexpr const char* tagValError = "285=1";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct OpenCloseSettlFlag : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 286;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valDailyOpenOrCloseOrSettlementEntry = "0";
  static constexpr const char* valSessionOpenOrCloseOrSettlementEntry = "1";
  static constexpr const char* valDeliverySettlementEntry = "2";
  static constexpr const char* valExpectedEntry = "3";
  static constexpr const char* valEntryFromPreviousBusinessDay = "4";
  static constexpr const char* valTheoreticalPriceValue = "5";

  static constexpr const char* tagValDailyOpenOrCloseOrSettlementEntry = "286=0";
  static constexpr const char* tagValSessionOpenOrCloseOrSettlementEntry = "286=1";
  static constexpr const char* tagValDeliverySettlementEntry = "286=2";
  static constexpr const char* tagValExpectedEntry = "286=3";
  static constexpr const char* tagValEntryFromPreviousBusinessDay = "286=4";
  static constexpr const char* tagValTheoreticalPriceValue = "286=5";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct SellerDays : Types::Value<Types::Int>
{
  static constexpr const int tag = 287;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MDEntryBuyer : Types::Value<Types::String>
{
  static constexpr const int tag = 288;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MDEntrySeller : Types::Value<Types::String>
{
  static constexpr const int tag = 289;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MDEntryPositionNo : Types::Value<Types::Int>
{
  static constexpr const int tag = 290;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct FinancialStatus : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 291;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valBankrupt = "1";
  static constexpr const char* valPendingDelisting = "2";

  static constexpr const char* tagValBankrupt = "291=1";
  static constexpr const char* tagValPendingDelisting = "291=2";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct CorporateAction : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 292;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valExDividend = "A";
  static constexpr const char* valExDistribution = "B";
  static constexpr const char* valExRights = "C";
  static constexpr const char* valNew = "D";
  static constexpr const char* valExInterest = "E";

  static constexpr const char* tagValExDividend = "292=A";
  static constexpr const char* tagValExDistribution = "292=B";
  static constexpr const char* tagValExRights = "292=C";
  static constexpr const char* tagValNew = "292=D";
  static constexpr const char* tagValExInterest = "292=E";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct DefBidSize : Types::Value<Types::Float>
{
  static constexpr const int tag = 293;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DefOfferSize : Types::Value<Types::Float>
{
  static constexpr const int tag = 294;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoQuoteEntries : Types::Value<Types::Int>
{
  static constexpr const int tag = 295;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoQuoteSets : Types::Value<Types::Int>
{
  static constexpr const int tag = 296;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 297;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccepted = 0;
  static constexpr const int valCanceledForSymbol = 1;
  static constexpr const int valCanceledForSecurityType = 2;
  static constexpr const int valCanceledForUnderlying = 3;
  static constexpr const int valCanceledAll = 4;
  static constexpr const int valRejected = 5;
  static constexpr const int valRemovedFromMarket = 6;
  static constexpr const int valExpired = 7;
  static constexpr const int valQuery = 8;
  static constexpr const int valQuoteNotFound = 9;
  static constexpr const int valPending = 0;
  static constexpr const int valPass = 1;
  static constexpr const int valLockedMarketWarning = 2;
  static constexpr const int valCrossMarketWarning = 3;
  static constexpr const int valCanceledDueToLockMarket = 4;
  static constexpr const int valCanceledDueToCrossMarket = 5;

  static constexpr const char* tagValAccepted = "297=0";
  static constexpr const char* tagValCanceledForSymbol = "297=1";
  static constexpr const char* tagValCanceledForSecurityType = "297=2";
  static constexpr const char* tagValCanceledForUnderlying = "297=3";
  static constexpr const char* tagValCanceledAll = "297=4";
  static constexpr const char* tagValRejected = "297=5";
  static constexpr const char* tagValRemovedFromMarket = "297=6";
  static constexpr const char* tagValExpired = "297=7";
  static constexpr const char* tagValQuery = "297=8";
  static constexpr const char* tagValQuoteNotFound = "297=9";
  static constexpr const char* tagValPending = "297=0";
  static constexpr const char* tagValPass = "297=1";
  static constexpr const char* tagValLockedMarketWarning = "297=2";
  static constexpr const char* tagValCrossMarketWarning = "297=3";
  static constexpr const char* tagValCanceledDueToLockMarket = "297=4";
  static constexpr const char* tagValCanceledDueToCrossMarket = "297=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteCancelType : Types::Value<Types::Int>
{
  static constexpr const int tag = 298;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCancelForSymbol = 1;
  static constexpr const int valCancelForSecurityType = 2;
  static constexpr const int valCancelForUnderlyingSymbol = 3;
  static constexpr const int valCancelAllQuotes = 4;

  static constexpr const char* tagValCancelForSymbol = "298=1";
  static constexpr const char* tagValCancelForSecurityType = "298=2";
  static constexpr const char* tagValCancelForUnderlyingSymbol = "298=3";
  static constexpr const char* tagValCancelAllQuotes = "298=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteEntryID : Types::Value<Types::String>
{
  static constexpr const int tag = 299;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuoteRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 300;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnknownSymbol = 1;
  static constexpr const int valExchangeSecurityClosed = 2;
  static constexpr const int valQuoteRequestExceedsLimit = 3;
  static constexpr const int valTooLateToEnter = 4;
  static constexpr const int valUnknownQuote = 5;
  static constexpr const int valDuplicateQuote = 6;
  static constexpr const int valInvalidBidOraskSpread = 7;
  static constexpr const int valInvalidPrice = 8;
  static constexpr const int valNotAuthorizedToQuoteSecurity = 9;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValUnknownSymbol = "300=1";
  static constexpr const char* tagValExchangeSecurityClosed = "300=2";
  static constexpr const char* tagValQuoteRequestExceedsLimit = "300=3";
  static constexpr const char* tagValTooLateToEnter = "300=4";
  static constexpr const char* tagValUnknownQuote = "300=5";
  static constexpr const char* tagValDuplicateQuote = "300=6";
  static constexpr const char* tagValInvalidBidOraskSpread = "300=7";
  static constexpr const char* tagValInvalidPrice = "300=8";
  static constexpr const char* tagValNotAuthorizedToQuoteSecurity = "300=9";
  static constexpr const char* tagValOther = "300=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteResponseLevel : Types::Value<Types::Int>
{
  static constexpr const int tag = 301;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNoAcknowledgement = 0;
  static constexpr const int valAcknowledgeOnlyNegativeOrErroneousQuotes = 1;
  static constexpr const int valAcknowledgeEachQuoteMessages = 2;

  static constexpr const char* tagValNoAcknowledgement = "301=0";
  static constexpr const char* tagValAcknowledgeOnlyNegativeOrErroneousQuotes = "301=1";
  static constexpr const char* tagValAcknowledgeEachQuoteMessages = "301=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteSetID : Types::Value<Types::String>
{
  static constexpr const int tag = 302;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuoteRequestType : Types::Value<Types::Int>
{
  static constexpr const int tag = 303;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valManual = 1;
  static constexpr const int valAutomatic = 2;

  static constexpr const char* tagValManual = "303=1";
  static constexpr const char* tagValAutomatic = "303=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TotNoQuoteEntries : Types::Value<Types::Int>
{
  static constexpr const int tag = 304;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 305;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingIssuer : Types::Value<Types::String>
{
  static constexpr const int tag = 306;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityDesc : Types::Value<Types::String>
{
  static constexpr const int tag = 307;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityExchange : Types::Value<Types::String>
{
  static constexpr const int tag = 308;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityID : Types::Value<Types::String>
{
  static constexpr const int tag = 309;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityType : Types::Value<Types::String>
{
  static constexpr const int tag = 310;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valFederalGovernmentOrTreasury = "TREASURY";
  static constexpr const char* valStateProvinceRegionEtc = "PROVINCE";
  static constexpr const char* valFederalAgency = "AGENCY";
  static constexpr const char* valMortgagePassthrough = "MORTGAGE";
  static constexpr const char* valCommercialPaper = "CP";
  static constexpr const char* valCorporate = "CORP";
  static constexpr const char* valEquity = "EQUITY";
  static constexpr const char* valSupraNationalAgency = "SUPRA";

  static constexpr const char* tagValFederalGovernmentOrTreasury = "310=TREASURY";
  static constexpr const char* tagValStateProvinceRegionEtc = "310=PROVINCE";
  static constexpr const char* tagValFederalAgency = "310=AGENCY";
  static constexpr const char* tagValMortgagePassthrough = "310=MORTGAGE";
  static constexpr const char* tagValCommercialPaper = "310=CP";
  static constexpr const char* tagValCorporate = "310=CORP";
  static constexpr const char* tagValEquity = "310=EQUITY";
  static constexpr const char* tagValSupraNationalAgency = "310=SUPRA";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSymbol : Types::Value<Types::String>
{
  static constexpr const int tag = 311;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSymbolSfx : Types::Value<Types::String>
{
  static constexpr const int tag = 312;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingMaturityMonthYear : Types::Value<Types::MonthYear>
{
  static constexpr const int tag = 313;

  static const char* tagVal(int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;
    Types::writeThere(whereWrite, monthYear);
    return toStrBuff;
  }

  using Types::Value<Types::MonthYear>::Value;

  static char toStrBuff[];
};

struct UnderlyingMaturityDay : Types::Value<Types::Int>
{
  static constexpr const int tag = 314;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingPutOrCall : Types::Value<Types::Int>
{
  static constexpr const int tag = 315;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingStrikePrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 316;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingOptAttribute : Types::Value<Types::Char>
{
  static constexpr const int tag = 317;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct UnderlyingCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 318;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RatioQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 319;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SecurityReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 320;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecurityRequestType : Types::Value<Types::Int>
{
  static constexpr const int tag = 321;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valRequestSecurityIdentityAndSpecifications = 0;
  static constexpr const int valRequestSecurityIdentityForTheSpecificationsProvided = 1;
  static constexpr const int valRequestListSecurityTypes = 2;
  static constexpr const int valRequestListSecurities = 3;

  static constexpr const char* tagValRequestSecurityIdentityAndSpecifications = "321=0";
  static constexpr const char* tagValRequestSecurityIdentityForTheSpecificationsProvided = "321=1";
  static constexpr const char* tagValRequestListSecurityTypes = "321=2";
  static constexpr const char* tagValRequestListSecurities = "321=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecurityResponseID : Types::Value<Types::String>
{
  static constexpr const int tag = 322;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecurityResponseType : Types::Value<Types::Int>
{
  static constexpr const int tag = 323;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAcceptSecurityProposalAsIs = 1;
  static constexpr const int valAcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage = 2;
  static constexpr const int valListOfSecurityTypesReturnedPerRequest = 3;
  static constexpr const int valListOfSecuritiesReturnedPerRequest = 4;
  static constexpr const int valRejectSecurityProposal = 5;
  static constexpr const int valCanNotMatchSelectionCriteria = 6;

  static constexpr const char* tagValAcceptSecurityProposalAsIs = "323=1";
  static constexpr const char* tagValAcceptSecurityProposalWithRevisionsAsIndicatedInTheMessage = "323=2";
  static constexpr const char* tagValListOfSecurityTypesReturnedPerRequest = "323=3";
  static constexpr const char* tagValListOfSecuritiesReturnedPerRequest = "323=4";
  static constexpr const char* tagValRejectSecurityProposal = "323=5";
  static constexpr const char* tagValCanNotMatchSelectionCriteria = "323=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecurityStatusReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 324;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnsolicitedIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 325;

  static constexpr const bool valMessageIsBeingSentUnsolicited = true;
  static constexpr const bool valMessageIsBeingSentAsAResultOfAPriorRequest = false;

  static constexpr const char* tagValMessageIsBeingSentUnsolicited = "325=Y";
  static constexpr const char* tagValMessageIsBeingSentAsAResultOfAPriorRequest = "325=N";

  using Types::Value<Types::Boolean>::Value;

};

struct SecurityTradingStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 326;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valOpeningDelay = 1;
  static constexpr const int valTradingHalt = 2;
  static constexpr const int valResume = 3;
  static constexpr const int valNoOpenOrNoResume = 4;
  static constexpr const int valPriceIndication = 5;
  static constexpr const int valTradingRangeIndication = 6;
  static constexpr const int valMarketImbalanceBuy = 7;
  static constexpr const int valMarketImbalanceSell = 8;
  static constexpr const int valMarketOnCloseImbalanceBuy = 9;
  static constexpr const int valMarketOnCloseImbalanceSell = 0;
  static constexpr const int valNoMarketImbalance = 2;
  static constexpr const int valNoMarketOnCloseImbalance = 3;
  static constexpr const int valITSPreOpening = 4;
  static constexpr const int valNewPriceIndication = 5;
  static constexpr const int valTradeDisseminationTime = 6;
  static constexpr const int valReadyToTrade = 7;
  static constexpr const int valNotAvailableForTrading = 8;
  static constexpr const int valNotTradedOnThisMarket = 9;
  static constexpr const int valUnknownOrInvalid = 20;
  static constexpr const int valPreOpen = 2;
  static constexpr const int valOpeningRotation = 22;
  static constexpr const int valFastMarket = 23;

  static constexpr const char* tagValOpeningDelay = "326=1";
  static constexpr const char* tagValTradingHalt = "326=2";
  static constexpr const char* tagValResume = "326=3";
  static constexpr const char* tagValNoOpenOrNoResume = "326=4";
  static constexpr const char* tagValPriceIndication = "326=5";
  static constexpr const char* tagValTradingRangeIndication = "326=6";
  static constexpr const char* tagValMarketImbalanceBuy = "326=7";
  static constexpr const char* tagValMarketImbalanceSell = "326=8";
  static constexpr const char* tagValMarketOnCloseImbalanceBuy = "326=9";
  static constexpr const char* tagValMarketOnCloseImbalanceSell = "326=0";
  static constexpr const char* tagValNoMarketImbalance = "326=2";
  static constexpr const char* tagValNoMarketOnCloseImbalance = "326=3";
  static constexpr const char* tagValITSPreOpening = "326=4";
  static constexpr const char* tagValNewPriceIndication = "326=5";
  static constexpr const char* tagValTradeDisseminationTime = "326=6";
  static constexpr const char* tagValReadyToTrade = "326=7";
  static constexpr const char* tagValNotAvailableForTrading = "326=8";
  static constexpr const char* tagValNotTradedOnThisMarket = "326=9";
  static constexpr const char* tagValUnknownOrInvalid = "326=20";
  static constexpr const char* tagValPreOpen = "326=2";
  static constexpr const char* tagValOpeningRotation = "326=22";
  static constexpr const char* tagValFastMarket = "326=23";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct HaltReason : Types::Value<Types::Char>
{
  static constexpr const int tag = 327;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valOrderImbalance = 'I';
  static constexpr const char valEquipmentChangeover = 'X';
  static constexpr const char valNewsPending = 'P';
  static constexpr const char valNewsDissemination = 'D';
  static constexpr const char valOrderInflux = 'E';
  static constexpr const char valAdditionalInformation = 'M';

  static constexpr const char* tagValOrderImbalance = "327=I";
  static constexpr const char* tagValEquipmentChangeover = "327=X";
  static constexpr const char* tagValNewsPending = "327=P";
  static constexpr const char* tagValNewsDissemination = "327=D";
  static constexpr const char* tagValOrderInflux = "327=E";
  static constexpr const char* tagValAdditionalInformation = "327=M";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct InViewOfCommon : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 328;

  static constexpr const bool valHaltWasDueToCommonStockBeingHalted = true;
  static constexpr const bool valHaltWasNotRelatedToAHaltOfTheCommonStock = false;

  static constexpr const char* tagValHaltWasDueToCommonStockBeingHalted = "328=Y";
  static constexpr const char* tagValHaltWasNotRelatedToAHaltOfTheCommonStock = "328=N";

  using Types::Value<Types::Boolean>::Value;

};

struct DueToRelated : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 329;

  static constexpr const bool valHaltWasDueToRelatedSecurityBeingHalted = true;
  static constexpr const bool valHaltWasNotRelatedToAHaltOfTheRelatedSecurity = false;

  static constexpr const char* tagValHaltWasDueToRelatedSecurityBeingHalted = "329=Y";
  static constexpr const char* tagValHaltWasNotRelatedToAHaltOfTheRelatedSecurity = "329=N";

  using Types::Value<Types::Boolean>::Value;

};

struct BuyVolume : Types::Value<Types::Float>
{
  static constexpr const int tag = 330;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SellVolume : Types::Value<Types::Float>
{
  static constexpr const int tag = 331;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct HighPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 332;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LowPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 333;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Adjustment : Types::Value<Types::Int>
{
  static constexpr const int tag = 334;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCancel = 1;
  static constexpr const int valError = 2;
  static constexpr const int valCorrection = 3;

  static constexpr const char* tagValCancel = "334=1";
  static constexpr const char* tagValError = "334=2";
  static constexpr const char* tagValCorrection = "334=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradSesReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 335;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradingSessionID : Types::Value<Types::String>
{
  static constexpr const int tag = 336;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ContraTrader : Types::Value<Types::String>
{
  static constexpr const int tag = 337;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradSesMethod : Types::Value<Types::Int>
{
  static constexpr const int tag = 338;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valElectronic = 1;
  static constexpr const int valOpenOutcry = 2;
  static constexpr const int valTwoParty = 3;

  static constexpr const char* tagValElectronic = "338=1";
  static constexpr const char* tagValOpenOutcry = "338=2";
  static constexpr const char* tagValTwoParty = "338=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradSesMode : Types::Value<Types::Int>
{
  static constexpr const int tag = 339;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valTesting = 1;
  static constexpr const int valSimulated = 2;
  static constexpr const int valProduction = 3;

  static constexpr const char* tagValTesting = "339=1";
  static constexpr const char* tagValSimulated = "339=2";
  static constexpr const char* tagValProduction = "339=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradSesStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 340;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnknown = 0;
  static constexpr const int valHalted = 1;
  static constexpr const int valOpen = 2;
  static constexpr const int valClosed = 3;
  static constexpr const int valPreOpen = 4;
  static constexpr const int valPreClose = 5;
  static constexpr const int valRequestRejected = 6;

  static constexpr const char* tagValUnknown = "340=0";
  static constexpr const char* tagValHalted = "340=1";
  static constexpr const char* tagValOpen = "340=2";
  static constexpr const char* tagValClosed = "340=3";
  static constexpr const char* tagValPreOpen = "340=4";
  static constexpr const char* tagValPreClose = "340=5";
  static constexpr const char* tagValRequestRejected = "340=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradSesStartTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 341;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct TradSesOpenTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 342;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct TradSesPreCloseTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 343;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct TradSesCloseTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 344;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct TradSesEndTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 345;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct NumberOfOrders : Types::Value<Types::Int>
{
  static constexpr const int tag = 346;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MessageEncoding : Types::Value<Types::String>
{
  static constexpr const int tag = 347;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* val2022JP = "ISO";
  static constexpr const char* valJP = "EUC";
  static constexpr const char* valUTF8 = "UTF";

  static constexpr const char* tagVal2022JP = "347=ISO";
  static constexpr const char* tagValJP = "347=EUC";
  static constexpr const char* tagValUTF8 = "347=UTF";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct EncodedIssuerLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 348;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedIssuer : Types::Value<Types::Data>
{
  static constexpr const int tag = 349;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedSecurityDescLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 350;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedSecurityDesc : Types::Value<Types::Data>
{
  static constexpr const int tag = 351;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedListExecInstLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 352;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedListExecInst : Types::Value<Types::Data>
{
  static constexpr const int tag = 353;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedTextLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 354;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedText : Types::Value<Types::Data>
{
  static constexpr const int tag = 355;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedSubjectLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 356;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedSubject : Types::Value<Types::Data>
{
  static constexpr const int tag = 357;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedHeadlineLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 358;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedHeadline : Types::Value<Types::Data>
{
  static constexpr const int tag = 359;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedAllocTextLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 360;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedAllocText : Types::Value<Types::Data>
{
  static constexpr const int tag = 361;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedUnderlyingIssuerLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 362;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedUnderlyingIssuer : Types::Value<Types::Data>
{
  static constexpr const int tag = 363;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct EncodedUnderlyingSecurityDescLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 364;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedUnderlyingSecurityDesc : Types::Value<Types::Data>
{
  static constexpr const int tag = 365;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct AllocPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 366;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct QuoteSetValidUntilTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 367;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct QuoteEntryRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 368;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnknownSymbol = 1;
  static constexpr const int valExchangeSecurityClosed = 2;
  static constexpr const int valQuoteExceedsLimit = 3;
  static constexpr const int valTooLateToEnter = 4;
  static constexpr const int valUnknownQuote = 5;
  static constexpr const int valDuplicateQuote = 6;
  static constexpr const int valInvalidBidOraskSpread = 7;
  static constexpr const int valInvalidPrice = 8;
  static constexpr const int valNotAuthorizedToQuoteSecurity = 9;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValUnknownSymbol = "368=1";
  static constexpr const char* tagValExchangeSecurityClosed = "368=2";
  static constexpr const char* tagValQuoteExceedsLimit = "368=3";
  static constexpr const char* tagValTooLateToEnter = "368=4";
  static constexpr const char* tagValUnknownQuote = "368=5";
  static constexpr const char* tagValDuplicateQuote = "368=6";
  static constexpr const char* tagValInvalidBidOraskSpread = "368=7";
  static constexpr const char* tagValInvalidPrice = "368=8";
  static constexpr const char* tagValNotAuthorizedToQuoteSecurity = "368=9";
  static constexpr const char* tagValOther = "368=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LastMsgSeqNumProcessed : Types::Value<Types::Int>
{
  static constexpr const int tag = 369;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OnBehalfOfSendingTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 370;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct RefTagID : Types::Value<Types::Int>
{
  static constexpr const int tag = 371;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RefMsgType : Types::Value<Types::String>
{
  static constexpr const int tag = 372;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SessionRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 373;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valInvalidTagNumber = 0;
  static constexpr const int valRequiredTagMissing = 1;
  static constexpr const int valTagNotDefinedForThisMessageType = 2;
  static constexpr const int valUndefinedTag = 3;
  static constexpr const int valTagSpecifiedWithoutAValue = 4;
  static constexpr const int valValueIsIncorrectoutOfRangeForThisTag = 5;
  static constexpr const int valIncorrectDataFormatForValue = 6;
  static constexpr const int valDecryptionProblem = 7;
  static constexpr const int valSignatureProblem = 8;
  static constexpr const int valCompIDProblem = 9;
  static constexpr const int valSendingTimeAccuracyProblem = 0;
  static constexpr const int valInvalidMsgType = 1;
  static constexpr const int valXMLValidationError = 2;
  static constexpr const int valTagAppearsMoreThanOnce = 3;
  static constexpr const int valTagSpecifiedOutOfRequiredOrder = 4;
  static constexpr const int valRepeatingGroupFieldsOutOfOrder = 5;
  static constexpr const int valIncorrectNumInGroupCountForRepeatingGroup = 6;
  static constexpr const int valNondataValueIncludesFieldDelimiter = 7;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValInvalidTagNumber = "373=0";
  static constexpr const char* tagValRequiredTagMissing = "373=1";
  static constexpr const char* tagValTagNotDefinedForThisMessageType = "373=2";
  static constexpr const char* tagValUndefinedTag = "373=3";
  static constexpr const char* tagValTagSpecifiedWithoutAValue = "373=4";
  static constexpr const char* tagValValueIsIncorrectoutOfRangeForThisTag = "373=5";
  static constexpr const char* tagValIncorrectDataFormatForValue = "373=6";
  static constexpr const char* tagValDecryptionProblem = "373=7";
  static constexpr const char* tagValSignatureProblem = "373=8";
  static constexpr const char* tagValCompIDProblem = "373=9";
  static constexpr const char* tagValSendingTimeAccuracyProblem = "373=0";
  static constexpr const char* tagValInvalidMsgType = "373=1";
  static constexpr const char* tagValXMLValidationError = "373=2";
  static constexpr const char* tagValTagAppearsMoreThanOnce = "373=3";
  static constexpr const char* tagValTagSpecifiedOutOfRequiredOrder = "373=4";
  static constexpr const char* tagValRepeatingGroupFieldsOutOfOrder = "373=5";
  static constexpr const char* tagValIncorrectNumInGroupCountForRepeatingGroup = "373=6";
  static constexpr const char* tagValNondataValueIncludesFieldDelimiter = "373=7";
  static constexpr const char* tagValOther = "373=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BidRequestTransType : Types::Value<Types::Char>
{
  static constexpr const int tag = 374;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = 'N';
  static constexpr const char valCancel = 'C';

  static constexpr const char* tagValNew = "374=N";
  static constexpr const char* tagValCancel = "374=C";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct ContraBroker : Types::Value<Types::String>
{
  static constexpr const int tag = 375;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ComplianceID : Types::Value<Types::String>
{
  static constexpr const int tag = 376;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SolicitedFlag : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 377;

  static constexpr const bool valWasSolcitied = true;
  static constexpr const bool valWasNotSolicited = false;

  static constexpr const char* tagValWasSolcitied = "377=Y";
  static constexpr const char* tagValWasNotSolicited = "377=N";

  using Types::Value<Types::Boolean>::Value;

};

struct ExecRestatementReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 378;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valGTCorporateAction = 0;
  static constexpr const int valGTRenewalOrRestatement = 1;
  static constexpr const int valVerbalChange = 2;
  static constexpr const int valRepricingOfOrder = 3;
  static constexpr const int valBrokerOption = 4;
  static constexpr const int valPartialDeclineOfOrderQty = 5;
  static constexpr const int valCancelOnTradingHalt = 6;
  static constexpr const int valCancelOnSystemFailure = 7;
  static constexpr const int valMarketExchangeOption = 8;
  static constexpr const int valCanceledNotBest = 9;
  static constexpr const int valWarehouseRecap = 0;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValGTCorporateAction = "378=0";
  static constexpr const char* tagValGTRenewalOrRestatement = "378=1";
  static constexpr const char* tagValVerbalChange = "378=2";
  static constexpr const char* tagValRepricingOfOrder = "378=3";
  static constexpr const char* tagValBrokerOption = "378=4";
  static constexpr const char* tagValPartialDeclineOfOrderQty = "378=5";
  static constexpr const char* tagValCancelOnTradingHalt = "378=6";
  static constexpr const char* tagValCancelOnSystemFailure = "378=7";
  static constexpr const char* tagValMarketExchangeOption = "378=8";
  static constexpr const char* tagValCanceledNotBest = "378=9";
  static constexpr const char* tagValWarehouseRecap = "378=0";
  static constexpr const char* tagValOther = "378=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BusinessRejectRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 379;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BusinessRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 380;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valOther = 0;
  static constexpr const int valUnkownID = 1;
  static constexpr const int valUnknownSecurity = 2;
  static constexpr const int valUnsupportedMessageType = 3;
  static constexpr const int valApplicationNotAvailable = 4;
  static constexpr const int valConditionallyRequiredFieldMissing = 5;
  static constexpr const int valNotAuthorized = 6;
  static constexpr const int valDeliverToFirmNotAvailableAtThisTime = 7;

  static constexpr const char* tagValOther = "380=0";
  static constexpr const char* tagValUnkownID = "380=1";
  static constexpr const char* tagValUnknownSecurity = "380=2";
  static constexpr const char* tagValUnsupportedMessageType = "380=3";
  static constexpr const char* tagValApplicationNotAvailable = "380=4";
  static constexpr const char* tagValConditionallyRequiredFieldMissing = "380=5";
  static constexpr const char* tagValNotAuthorized = "380=6";
  static constexpr const char* tagValDeliverToFirmNotAvailableAtThisTime = "380=7";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct GrossTradeAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 381;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoContraBrokers : Types::Value<Types::Int>
{
  static constexpr const int tag = 382;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MaxMessageSize : Types::Value<Types::Int>
{
  static constexpr const int tag = 383;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoMsgTypes : Types::Value<Types::Int>
{
  static constexpr const int tag = 384;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MsgDirection : Types::Value<Types::Char>
{
  static constexpr const int tag = 385;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valSend = 'S';
  static constexpr const char valReceive = 'R';

  static constexpr const char* tagValSend = "385=S";
  static constexpr const char* tagValReceive = "385=R";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NoTradingSessions : Types::Value<Types::Int>
{
  static constexpr const int tag = 386;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TotalVolumeTraded : Types::Value<Types::Float>
{
  static constexpr const int tag = 387;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DiscretionInst : Types::Value<Types::Char>
{
  static constexpr const int tag = 388;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valRelatedToDisplayedPrice = '0';
  static constexpr const char valRelatedToMarketPrice = '1';
  static constexpr const char valRelatedToPrimaryPrice = '2';
  static constexpr const char valRelatedToLocalPrimaryPrice = '3';
  static constexpr const char valRelatedToMidpointPrice = '4';
  static constexpr const char valRelatedToLastTradePrice = '5';
  static constexpr const char valRelatedToVWAP = '6';

  static constexpr const char* tagValRelatedToDisplayedPrice = "388=0";
  static constexpr const char* tagValRelatedToMarketPrice = "388=1";
  static constexpr const char* tagValRelatedToPrimaryPrice = "388=2";
  static constexpr const char* tagValRelatedToLocalPrimaryPrice = "388=3";
  static constexpr const char* tagValRelatedToMidpointPrice = "388=4";
  static constexpr const char* tagValRelatedToLastTradePrice = "388=5";
  static constexpr const char* tagValRelatedToVWAP = "388=6";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct DiscretionOffsetValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 389;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BidID : Types::Value<Types::String>
{
  static constexpr const int tag = 390;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ClientBidID : Types::Value<Types::String>
{
  static constexpr const int tag = 391;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ListName : Types::Value<Types::String>
{
  static constexpr const int tag = 392;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TotNoRelatedSym : Types::Value<Types::Int>
{
  static constexpr const int tag = 393;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BidType : Types::Value<Types::Int>
{
  static constexpr const int tag = 394;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNonDisclosedStyle = 1;
  static constexpr const int valDisclosedStyle = 2;
  static constexpr const int valNoBiddingProcess = 3;

  static constexpr const char* tagValNonDisclosedStyle = "394=1";
  static constexpr const char* tagValDisclosedStyle = "394=2";
  static constexpr const char* tagValNoBiddingProcess = "394=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NumTickets : Types::Value<Types::Int>
{
  static constexpr const int tag = 395;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SideValue1 : Types::Value<Types::Float>
{
  static constexpr const int tag = 396;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SideValue2 : Types::Value<Types::Float>
{
  static constexpr const int tag = 397;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoBidDescriptors : Types::Value<Types::Int>
{
  static constexpr const int tag = 398;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BidDescriptorType : Types::Value<Types::Int>
{
  static constexpr const int tag = 399;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSector = 1;
  static constexpr const int valCountry = 2;
  static constexpr const int valIndex = 3;

  static constexpr const char* tagValSector = "399=1";
  static constexpr const char* tagValCountry = "399=2";
  static constexpr const char* tagValIndex = "399=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BidDescriptor : Types::Value<Types::String>
{
  static constexpr const int tag = 400;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SideValueInd : Types::Value<Types::Int>
{
  static constexpr const int tag = 401;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSideValue = 1;
  static constexpr const int valSideValue2 = 2;

  static constexpr const char* tagValSideValue = "401=1";
  static constexpr const char* tagValSideValue2 = "401=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LiquidityPctLow : Types::Value<Types::Float>
{
  static constexpr const int tag = 402;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LiquidityPctHigh : Types::Value<Types::Float>
{
  static constexpr const int tag = 403;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LiquidityValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 404;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct EFPTrackingError : Types::Value<Types::Float>
{
  static constexpr const int tag = 405;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct FairValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 406;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OutsideIndexPct : Types::Value<Types::Float>
{
  static constexpr const int tag = 407;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ValueOfFutures : Types::Value<Types::Float>
{
  static constexpr const int tag = 408;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LiquidityIndType : Types::Value<Types::Int>
{
  static constexpr const int tag = 409;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int val5dayMovingAverage = 1;
  static constexpr const int val20DayMovingAverage = 2;
  static constexpr const int valNormalMarketSize = 3;
  static constexpr const int valOther = 4;

  static constexpr const char* tagVal5dayMovingAverage = "409=1";
  static constexpr const char* tagVal20DayMovingAverage = "409=2";
  static constexpr const char* tagValNormalMarketSize = "409=3";
  static constexpr const char* tagValOther = "409=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct WtAverageLiquidity : Types::Value<Types::Float>
{
  static constexpr const int tag = 410;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ExchangeForPhysical : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 411;

  static constexpr const bool valTrue = true;
  static constexpr const bool valFalse = false;

  static constexpr const char* tagValTrue = "411=Y";
  static constexpr const char* tagValFalse = "411=N";

  using Types::Value<Types::Boolean>::Value;

};

struct OutMainCntryUIndex : Types::Value<Types::Float>
{
  static constexpr const int tag = 412;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CrossPercent : Types::Value<Types::Float>
{
  static constexpr const int tag = 413;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ProgRptReqs : Types::Value<Types::Int>
{
  static constexpr const int tag = 414;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valBuySideExplicitlyRequestsStatus = 1;
  static constexpr const int valSellSidePeriodicallySendsStatus = 2;
  static constexpr const int valRealTimeExecutionReports = 3;

  static constexpr const char* tagValBuySideExplicitlyRequestsStatus = "414=1";
  static constexpr const char* tagValSellSidePeriodicallySendsStatus = "414=2";
  static constexpr const char* tagValRealTimeExecutionReports = "414=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ProgPeriodInterval : Types::Value<Types::Int>
{
  static constexpr const int tag = 415;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct IncTaxInd : Types::Value<Types::Int>
{
  static constexpr const int tag = 416;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNet = 1;
  static constexpr const int valGross = 2;

  static constexpr const char* tagValNet = "416=1";
  static constexpr const char* tagValGross = "416=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NumBidders : Types::Value<Types::Int>
{
  static constexpr const int tag = 417;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BidTradeType : Types::Value<Types::Char>
{
  static constexpr const int tag = 418;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valRiskTrade = 'R';
  static constexpr const char valVWAPGuarantee = 'G';
  static constexpr const char valAgency = 'A';
  static constexpr const char valGuaranteedClose = 'J';

  static constexpr const char* tagValRiskTrade = "418=R";
  static constexpr const char* tagValVWAPGuarantee = "418=G";
  static constexpr const char* tagValAgency = "418=A";
  static constexpr const char* tagValGuaranteedClose = "418=J";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct BasisPxType : Types::Value<Types::Char>
{
  static constexpr const int tag = 419;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valClosingPriceAtMorningSession = '2';
  static constexpr const char valClosingPrice = '3';
  static constexpr const char valCurrentPrice = '4';
  static constexpr const char valSQ = '5';
  static constexpr const char valVWAPThroughADay = '6';
  static constexpr const char valVWAPThroughAMorningSession = '7';
  static constexpr const char valVWAPThroughAnAfternoonSession = '8';
  static constexpr const char valVWAPThroughADayExceptYORI = '9';
  static constexpr const char valVWAPThroughAMorningSessionExceptYORI = 'A';
  static constexpr const char valVWAPThroughAnAfternoonSessionExceptYORI = 'B';
  static constexpr const char valStrike = 'C';
  static constexpr const char valOpen = 'D';
  static constexpr const char valOthers = 'Z';

  static constexpr const char* tagValClosingPriceAtMorningSession = "419=2";
  static constexpr const char* tagValClosingPrice = "419=3";
  static constexpr const char* tagValCurrentPrice = "419=4";
  static constexpr const char* tagValSQ = "419=5";
  static constexpr const char* tagValVWAPThroughADay = "419=6";
  static constexpr const char* tagValVWAPThroughAMorningSession = "419=7";
  static constexpr const char* tagValVWAPThroughAnAfternoonSession = "419=8";
  static constexpr const char* tagValVWAPThroughADayExceptYORI = "419=9";
  static constexpr const char* tagValVWAPThroughAMorningSessionExceptYORI = "419=A";
  static constexpr const char* tagValVWAPThroughAnAfternoonSessionExceptYORI = "419=B";
  static constexpr const char* tagValStrike = "419=C";
  static constexpr const char* tagValOpen = "419=D";
  static constexpr const char* tagValOthers = "419=Z";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NoBidComponents : Types::Value<Types::Int>
{
  static constexpr const int tag = 420;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Country : Types::Value<Types::String>
{
  static constexpr const int tag = 421;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TotNoStrikes : Types::Value<Types::Int>
{
  static constexpr const int tag = 422;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 423;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPercentageegPercentOfPar = 1;
  static constexpr const int valPerUnit = 2;
  static constexpr const int valFixedAmount = 3;
  static constexpr const int valDiscountPercentagePointsBelowPar = 4;
  static constexpr const int valPremiumPercentagePointsOverPar = 5;
  static constexpr const int valSpread = 6;
  static constexpr const int valTEDPrice = 7;
  static constexpr const int valTEDYield = 8;
  static constexpr const int valYield = 9;
  static constexpr const int valFixedCabinetTradePrice = 0;
  static constexpr const int valVariableCabinetTradePrice = 1;

  static constexpr const char* tagValPercentageegPercentOfPar = "423=1";
  static constexpr const char* tagValPerUnit = "423=2";
  static constexpr const char* tagValFixedAmount = "423=3";
  static constexpr const char* tagValDiscountPercentagePointsBelowPar = "423=4";
  static constexpr const char* tagValPremiumPercentagePointsOverPar = "423=5";
  static constexpr const char* tagValSpread = "423=6";
  static constexpr const char* tagValTEDPrice = "423=7";
  static constexpr const char* tagValTEDYield = "423=8";
  static constexpr const char* tagValYield = "423=9";
  static constexpr const char* tagValFixedCabinetTradePrice = "423=0";
  static constexpr const char* tagValVariableCabinetTradePrice = "423=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DayOrderQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 424;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DayCumQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 425;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DayAvgPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 426;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct GTBookingInst : Types::Value<Types::Int>
{
  static constexpr const int tag = 427;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valBookOutAllTradesOnDayOfExecution = 0;
  static constexpr const int valAccumulateExecutionsUntilOrderIsFilledOrExpires = 1;
  static constexpr const int valAccumulateUntilVerballyNotifiedOtherwise = 2;

  static constexpr const char* tagValBookOutAllTradesOnDayOfExecution = "427=0";
  static constexpr const char* tagValAccumulateExecutionsUntilOrderIsFilledOrExpires = "427=1";
  static constexpr const char* tagValAccumulateUntilVerballyNotifiedOtherwise = "427=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoStrikes : Types::Value<Types::Int>
{
  static constexpr const int tag = 428;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ListStatusType : Types::Value<Types::Int>
{
  static constexpr const int tag = 429;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAck = 1;
  static constexpr const int valResponse = 2;
  static constexpr const int valTimed = 3;
  static constexpr const int valExecStarted = 4;
  static constexpr const int valAllDone = 5;
  static constexpr const int valAlert = 6;

  static constexpr const char* tagValAck = "429=1";
  static constexpr const char* tagValResponse = "429=2";
  static constexpr const char* tagValTimed = "429=3";
  static constexpr const char* tagValExecStarted = "429=4";
  static constexpr const char* tagValAllDone = "429=5";
  static constexpr const char* tagValAlert = "429=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NetGrossInd : Types::Value<Types::Int>
{
  static constexpr const int tag = 430;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNet = 1;
  static constexpr const int valGross = 2;

  static constexpr const char* tagValNet = "430=1";
  static constexpr const char* tagValGross = "430=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ListOrderStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 431;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valInBiddingProcess = 1;
  static constexpr const int valReceivedForExecution = 2;
  static constexpr const int valExecuting = 3;
  static constexpr const int valCanceling = 4;
  static constexpr const int valAlert = 5;
  static constexpr const int valAllDone = 6;
  static constexpr const int valReject = 7;

  static constexpr const char* tagValInBiddingProcess = "431=1";
  static constexpr const char* tagValReceivedForExecution = "431=2";
  static constexpr const char* tagValExecuting = "431=3";
  static constexpr const char* tagValCanceling = "431=4";
  static constexpr const char* tagValAlert = "431=5";
  static constexpr const char* tagValAllDone = "431=6";
  static constexpr const char* tagValReject = "431=7";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ExpireDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 432;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct ListExecInstType : Types::Value<Types::Char>
{
  static constexpr const int tag = 433;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valImmediate = '1';
  static constexpr const char valWaitForExecuteInstruction = '2';
  static constexpr const char valExchangeOrswitchCIVOrderSellDriven = '3';
  static constexpr const char valExchangeOrswitchCIVOrderBuyDrivenCashTopUp = '4';
  static constexpr const char valExchangeOrswitchCIVOrderBuyDrivenCashWithdraw = '5';

  static constexpr const char* tagValImmediate = "433=1";
  static constexpr const char* tagValWaitForExecuteInstruction = "433=2";
  static constexpr const char* tagValExchangeOrswitchCIVOrderSellDriven = "433=3";
  static constexpr const char* tagValExchangeOrswitchCIVOrderBuyDrivenCashTopUp = "433=4";
  static constexpr const char* tagValExchangeOrswitchCIVOrderBuyDrivenCashWithdraw = "433=5";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct CxlRejResponseTo : Types::Value<Types::Char>
{
  static constexpr const int tag = 434;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valOrderCancelRequest = '1';
  static constexpr const char valOrderCancelOrReplaceRequest = '2';

  static constexpr const char* tagValOrderCancelRequest = "434=1";
  static constexpr const char* tagValOrderCancelOrReplaceRequest = "434=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct UnderlyingCouponRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 435;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingContractMultiplier : Types::Value<Types::Float>
{
  static constexpr const int tag = 436;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ContraTradeQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 437;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ContraTradeTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 438;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct ClearingFirm : Types::Value<Types::String>
{
  static constexpr const int tag = 439;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ClearingAccount : Types::Value<Types::String>
{
  static constexpr const int tag = 440;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LiquidityNumSecurities : Types::Value<Types::Int>
{
  static constexpr const int tag = 441;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MultiLegReportingType : Types::Value<Types::Char>
{
  static constexpr const int tag = 442;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valSingleSecurity = '1';
  static constexpr const char valIndividualLegOfAMultiLegSecurity = '2';
  static constexpr const char valMultiLegSecurity = '3';

  static constexpr const char* tagValSingleSecurity = "442=1";
  static constexpr const char* tagValIndividualLegOfAMultiLegSecurity = "442=2";
  static constexpr const char* tagValMultiLegSecurity = "442=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct StrikeTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 443;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct ListStatusText : Types::Value<Types::String>
{
  static constexpr const int tag = 444;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct EncodedListStatusTextLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 445;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedListStatusText : Types::Value<Types::Data>
{
  static constexpr const int tag = 446;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct PartyIDSource : Types::Value<Types::Char>
{
  static constexpr const int tag = 447;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valBICBankIdentificationCodeSwiftManagedCodeISO9362 = 'B';
  static constexpr const char valGenerallyAcceptedMarketParticipantIdentifier = 'C';
  static constexpr const char valProprietaryOrCustomCode = 'D';
  static constexpr const char valISOCountryCode = 'E';
  static constexpr const char valSettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode = 'F';
  static constexpr const char valMICISO0383MarketIdentifierCode = 'G';
  static constexpr const char valCSDParticipantOrmemberCode = 'H';
  static constexpr const char valKoreanInvestorID = '1';
  static constexpr const char valTaiwaneseQualifiedForeignInvestorIDQFIIOrFID = '2';
  static constexpr const char valTaiwaneseTradingAccount = '3';
  static constexpr const char valMalaysianCentralDepositoryMCDNumber = '4';
  static constexpr const char valChineseBShare = '5';
  static constexpr const char valUKNationalInsuranceOrPensionNumber = '6';
  static constexpr const char valUSSocialSecurityNumber = '7';
  static constexpr const char valUSEmployerIdentificationNumber = '8';
  static constexpr const char valAustralianBusinessNumber = '9';
  static constexpr const char valAustralianTaxFileNumber = 'A';
  static constexpr const char valDirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC = 'I';

  static constexpr const char* tagValBICBankIdentificationCodeSwiftManagedCodeISO9362 = "447=B";
  static constexpr const char* tagValGenerallyAcceptedMarketParticipantIdentifier = "447=C";
  static constexpr const char* tagValProprietaryOrCustomCode = "447=D";
  static constexpr const char* tagValISOCountryCode = "447=E";
  static constexpr const char* tagValSettlementEntityLocationnoteIfLocalMarketSettlementUseEISOCountryCode = "447=F";
  static constexpr const char* tagValMICISO0383MarketIdentifierCode = "447=G";
  static constexpr const char* tagValCSDParticipantOrmemberCode = "447=H";
  static constexpr const char* tagValKoreanInvestorID = "447=1";
  static constexpr const char* tagValTaiwaneseQualifiedForeignInvestorIDQFIIOrFID = "447=2";
  static constexpr const char* tagValTaiwaneseTradingAccount = "447=3";
  static constexpr const char* tagValMalaysianCentralDepositoryMCDNumber = "447=4";
  static constexpr const char* tagValChineseBShare = "447=5";
  static constexpr const char* tagValUKNationalInsuranceOrPensionNumber = "447=6";
  static constexpr const char* tagValUSSocialSecurityNumber = "447=7";
  static constexpr const char* tagValUSEmployerIdentificationNumber = "447=8";
  static constexpr const char* tagValAustralianBusinessNumber = "447=9";
  static constexpr const char* tagValAustralianTaxFileNumber = "447=A";
  static constexpr const char* tagValDirectedBrokerThreeCharacterAcronymAsDefinedInISITCETC = "447=I";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct PartyID : Types::Value<Types::String>
{
  static constexpr const int tag = 448;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TotalVolumeTradedDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 449;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct TotalVolumeTrade : Types::Value<Types::Time>
{
  static constexpr const int tag = 450;

  static const char* tagVal(int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Time time; time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, time);
    return toStrBuff;
  }

  using Types::Value<Types::Time>::Value;

  static char toStrBuff[];
};

struct NetChgPrevDay : Types::Value<Types::Float>
{
  static constexpr const int tag = 451;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PartyRole : Types::Value<Types::Int>
{
  static constexpr const int tag = 452;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valExecutingFirm = 1;
  static constexpr const int valBrokerOfCredit = 2;
  static constexpr const int valClientID = 3;
  static constexpr const int valClearingFirm = 4;
  static constexpr const int valInvestorID = 5;
  static constexpr const int valIntroducingFirm = 6;
  static constexpr const int valEnteringFirm = 7;
  static constexpr const int valLocateOrLendingFirm = 8;
  static constexpr const int valFundManagerClientID = 9;
  static constexpr const int valSettlementLocation = 0;
  static constexpr const int valOrderOriginationTrader = 1;
  static constexpr const int valExecutingTrader = 2;
  static constexpr const int valOrderOriginationFirm = 3;
  static constexpr const int valGiveupClearingFirm = 4;
  static constexpr const int valCorrespondantClearingFirm = 5;
  static constexpr const int valExecutingSystem = 6;
  static constexpr const int valContraFirm = 7;
  static constexpr const int valContraClearingFirm = 8;
  static constexpr const int valSponsoringFirm = 9;
  static constexpr const int valUnderlyingContraFirm = 20;
  static constexpr const int valClearingOrganization = 2;
  static constexpr const int valExchange = 22;
  static constexpr const int valCustomerAccount = 24;
  static constexpr const int valCorrespondentClearingOrganization = 25;
  static constexpr const int valCorrespondentBroker = 26;
  static constexpr const int valBuyerOrSeller = 27;
  static constexpr const int valCustodian = 28;
  static constexpr const int valIntermediary = 29;
  static constexpr const int valAgent = 30;
  static constexpr const int valSubCustodian = 3;
  static constexpr const int valBeneficiary = 32;
  static constexpr const int valInterestedParty = 33;
  static constexpr const int valRegulatoryBody = 34;
  static constexpr const int valLiquidityProvider = 35;
  static constexpr const int valEnteringTrader = 36;
  static constexpr const int valContraTrader = 37;
  static constexpr const int valPositionAccount = 38;

  static constexpr const char* tagValExecutingFirm = "452=1";
  static constexpr const char* tagValBrokerOfCredit = "452=2";
  static constexpr const char* tagValClientID = "452=3";
  static constexpr const char* tagValClearingFirm = "452=4";
  static constexpr const char* tagValInvestorID = "452=5";
  static constexpr const char* tagValIntroducingFirm = "452=6";
  static constexpr const char* tagValEnteringFirm = "452=7";
  static constexpr const char* tagValLocateOrLendingFirm = "452=8";
  static constexpr const char* tagValFundManagerClientID = "452=9";
  static constexpr const char* tagValSettlementLocation = "452=0";
  static constexpr const char* tagValOrderOriginationTrader = "452=1";
  static constexpr const char* tagValExecutingTrader = "452=2";
  static constexpr const char* tagValOrderOriginationFirm = "452=3";
  static constexpr const char* tagValGiveupClearingFirm = "452=4";
  static constexpr const char* tagValCorrespondantClearingFirm = "452=5";
  static constexpr const char* tagValExecutingSystem = "452=6";
  static constexpr const char* tagValContraFirm = "452=7";
  static constexpr const char* tagValContraClearingFirm = "452=8";
  static constexpr const char* tagValSponsoringFirm = "452=9";
  static constexpr const char* tagValUnderlyingContraFirm = "452=20";
  static constexpr const char* tagValClearingOrganization = "452=2";
  static constexpr const char* tagValExchange = "452=22";
  static constexpr const char* tagValCustomerAccount = "452=24";
  static constexpr const char* tagValCorrespondentClearingOrganization = "452=25";
  static constexpr const char* tagValCorrespondentBroker = "452=26";
  static constexpr const char* tagValBuyerOrSeller = "452=27";
  static constexpr const char* tagValCustodian = "452=28";
  static constexpr const char* tagValIntermediary = "452=29";
  static constexpr const char* tagValAgent = "452=30";
  static constexpr const char* tagValSubCustodian = "452=3";
  static constexpr const char* tagValBeneficiary = "452=32";
  static constexpr const char* tagValInterestedParty = "452=33";
  static constexpr const char* tagValRegulatoryBody = "452=34";
  static constexpr const char* tagValLiquidityProvider = "452=35";
  static constexpr const char* tagValEnteringTrader = "452=36";
  static constexpr const char* tagValContraTrader = "452=37";
  static constexpr const char* tagValPositionAccount = "452=38";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoPartyIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 453;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoSecurityAltID : Types::Value<Types::Int>
{
  static constexpr const int tag = 454;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecurityAltID : Types::Value<Types::String>
{
  static constexpr const int tag = 455;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecurityAltIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 456;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoUnderlyingSecurityAltID : Types::Value<Types::Int>
{
  static constexpr const int tag = 457;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityAltID : Types::Value<Types::String>
{
  static constexpr const int tag = 458;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecurityAltIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 459;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Product : Types::Value<Types::Int>
{
  static constexpr const int tag = 460;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAGENCY = 1;
  static constexpr const int valCOMMODITY = 2;
  static constexpr const int valCORPORATE = 3;
  static constexpr const int valCURRENCY = 4;
  static constexpr const int valEQUITY = 5;
  static constexpr const int valGOVERNMENT = 6;
  static constexpr const int valINDEX = 7;
  static constexpr const int valLOAN = 8;
  static constexpr const int valMONEYMARKET = 9;
  static constexpr const int valMORTGAGE = 10;
  static constexpr const int valMUNICIPAL = 11;
  static constexpr const int valOTHER = 12;
  static constexpr const int valFINANCING = 13;

  static constexpr const char* tagValAGENCY = "460=1";
  static constexpr const char* tagValCOMMODITY = "460=2";
  static constexpr const char* tagValCORPORATE = "460=3";
  static constexpr const char* tagValCURRENCY = "460=4";
  static constexpr const char* tagValEQUITY = "460=5";
  static constexpr const char* tagValGOVERNMENT = "460=6";
  static constexpr const char* tagValINDEX = "460=7";
  static constexpr const char* tagValLOAN = "460=8";
  static constexpr const char* tagValMONEYMARKET = "460=9";
  static constexpr const char* tagValMORTGAGE = "460=10";
  static constexpr const char* tagValMUNICIPAL = "460=11";
  static constexpr const char* tagValOTHER = "460=12";
  static constexpr const char* tagValFINANCING = "460=13";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CFICode : Types::Value<Types::String>
{
  static constexpr const int tag = 461;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingProduct : Types::Value<Types::Int>
{
  static constexpr const int tag = 462;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingCFICode : Types::Value<Types::String>
{
  static constexpr const int tag = 463;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TestMessageIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 464;

  static constexpr const bool valTrue = true;
  static constexpr const bool valFalse = false;

  static constexpr const char* tagValTrue = "464=Y";
  static constexpr const char* tagValFalse = "464=N";

  using Types::Value<Types::Boolean>::Value;

};

struct QuantityType : Types::Value<Types::Int>
{
  static constexpr const int tag = 465;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSHARES = 1;
  static constexpr const int valBONDS = 2;
  static constexpr const int valCURRENTFACE = 3;
  static constexpr const int valORIGINALFACE = 4;
  static constexpr const int valCURRENCY = 5;
  static constexpr const int valCONTRACTS = 6;
  static constexpr const int valOTHER = 7;
  static constexpr const int valPAR = 8;

  static constexpr const char* tagValSHARES = "465=1";
  static constexpr const char* tagValBONDS = "465=2";
  static constexpr const char* tagValCURRENTFACE = "465=3";
  static constexpr const char* tagValORIGINALFACE = "465=4";
  static constexpr const char* tagValCURRENCY = "465=5";
  static constexpr const char* tagValCONTRACTS = "465=6";
  static constexpr const char* tagValOTHER = "465=7";
  static constexpr const char* tagValPAR = "465=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BookingRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 466;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct IndividualAllocID : Types::Value<Types::String>
{
  static constexpr const int tag = 467;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RoundingDirection : Types::Value<Types::Char>
{
  static constexpr const int tag = 468;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct RoundingModulus : Types::Value<Types::Float>
{
  static constexpr const int tag = 469;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CountryOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 470;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct StateOrProvinceOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 471;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LocaleOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 472;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoRegistDtls : Types::Value<Types::Int>
{
  static constexpr const int tag = 473;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MailingDtls : Types::Value<Types::String>
{
  static constexpr const int tag = 474;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct InvestorCountryOfResidence : Types::Value<Types::String>
{
  static constexpr const int tag = 475;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PaymentRef : Types::Value<Types::String>
{
  static constexpr const int tag = 476;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DistribPaymentMethod : Types::Value<Types::Int>
{
  static constexpr const int tag = 477;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CashDistribCurr : Types::Value<Types::String>
{
  static constexpr const int tag = 478;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CommCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 479;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CancellationRights : Types::Value<Types::Char>
{
  static constexpr const int tag = 480;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MoneyLaunderingStatus : Types::Value<Types::Char>
{
  static constexpr const int tag = 481;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valPassed = 'Y';
  static constexpr const char valNotChecked = 'N';
  static constexpr const char valExemptBelowTheLimit = '1';
  static constexpr const char valExemptClientMoneyTypeExemption = '2';
  static constexpr const char valExemptAuthorisedCreditOrFinancialInstitution = '3';

  static constexpr const char* tagValPassed = "481=Y";
  static constexpr const char* tagValNotChecked = "481=N";
  static constexpr const char* tagValExemptBelowTheLimit = "481=1";
  static constexpr const char* tagValExemptClientMoneyTypeExemption = "481=2";
  static constexpr const char* tagValExemptAuthorisedCreditOrFinancialInstitution = "481=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MailingInst : Types::Value<Types::String>
{
  static constexpr const int tag = 482;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TransBkdTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 483;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct ExecPriceType : Types::Value<Types::Char>
{
  static constexpr const int tag = 484;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct ExecPriceAdjustment : Types::Value<Types::Float>
{
  static constexpr const int tag = 485;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DateOfBirth : Types::Value<Types::Date>
{
  static constexpr const int tag = 486;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct TradeReportTransType : Types::Value<Types::Int>
{
  static constexpr const int tag = 487;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNew = 0;
  static constexpr const int valCancel = 1;
  static constexpr const int valReplace = 2;
  static constexpr const int valRelease = 3;
  static constexpr const int valReverse = 4;

  static constexpr const char* tagValNew = "487=0";
  static constexpr const char* tagValCancel = "487=1";
  static constexpr const char* tagValReplace = "487=2";
  static constexpr const char* tagValRelease = "487=3";
  static constexpr const char* tagValReverse = "487=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CardHolderName : Types::Value<Types::String>
{
  static constexpr const int tag = 488;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CardNumber : Types::Value<Types::String>
{
  static constexpr const int tag = 489;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CardExpDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 490;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct CardIssNum : Types::Value<Types::String>
{
  static constexpr const int tag = 491;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PaymentMethod : Types::Value<Types::Int>
{
  static constexpr const int tag = 492;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RegistAcctType : Types::Value<Types::String>
{
  static constexpr const int tag = 493;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Designation : Types::Value<Types::String>
{
  static constexpr const int tag = 494;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TaxAdvantageType : Types::Value<Types::Int>
{
  static constexpr const int tag = 495;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RegistRejReasonText : Types::Value<Types::String>
{
  static constexpr const int tag = 496;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct FundRenewWaiv : Types::Value<Types::Char>
{
  static constexpr const int tag = 497;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct CashDistribAgentName : Types::Value<Types::String>
{
  static constexpr const int tag = 498;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashDistribAgentCode : Types::Value<Types::String>
{
  static constexpr const int tag = 499;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashDistribAgentAcctNumber : Types::Value<Types::String>
{
  static constexpr const int tag = 500;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashDistribPayRef : Types::Value<Types::String>
{
  static constexpr const int tag = 501;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashDistribAgentAcctName : Types::Value<Types::String>
{
  static constexpr const int tag = 502;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CardStartDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 503;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct PaymentDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 504;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct PaymentRemitterID : Types::Value<Types::String>
{
  static constexpr const int tag = 505;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RegistStatus : Types::Value<Types::Char>
{
  static constexpr const int tag = 506;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct RegistRejReasonCode : Types::Value<Types::Int>
{
  static constexpr const int tag = 507;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RegistRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 508;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RegistDtls : Types::Value<Types::String>
{
  static constexpr const int tag = 509;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoDistribInsts : Types::Value<Types::Int>
{
  static constexpr const int tag = 510;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RegistEmail : Types::Value<Types::String>
{
  static constexpr const int tag = 511;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DistribPercentage : Types::Value<Types::Float>
{
  static constexpr const int tag = 512;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct RegistID : Types::Value<Types::String>
{
  static constexpr const int tag = 513;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RegistTransType : Types::Value<Types::Char>
{
  static constexpr const int tag = 514;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valNew = '0';
  static constexpr const char valReplace = '1';
  static constexpr const char valCancel = '2';

  static constexpr const char* tagValNew = "514=0";
  static constexpr const char* tagValReplace = "514=1";
  static constexpr const char* tagValCancel = "514=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct ExecValuationPoint : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 515;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct OrderPercent : Types::Value<Types::Float>
{
  static constexpr const int tag = 516;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OwnershipType : Types::Value<Types::Char>
{
  static constexpr const int tag = 517;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NoContAmts : Types::Value<Types::Int>
{
  static constexpr const int tag = 518;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ContAmtType : Types::Value<Types::Int>
{
  static constexpr const int tag = 519;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ContAmtValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 520;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ContAmtCurr : Types::Value<Types::String>
{
  static constexpr const int tag = 521;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OwnerType : Types::Value<Types::Int>
{
  static constexpr const int tag = 522;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valIndividualInvestor = 1;
  static constexpr const int valPublicCompany = 2;
  static constexpr const int valPrivateCompany = 3;
  static constexpr const int valIndividualTrustee = 4;
  static constexpr const int valCompanyTrustee = 5;
  static constexpr const int valPensionPlan = 6;
  static constexpr const int valCustodianUnderGiftsToMinorsAct = 7;
  static constexpr const int valTrusts = 8;
  static constexpr const int valFiduciaries = 9;
  static constexpr const int valNetworkingSubAccount = 0;
  static constexpr const int valNonProfitOrganization = 1;
  static constexpr const int valCorporateBody = 2;
  static constexpr const int valNominee = 3;

  static constexpr const char* tagValIndividualInvestor = "522=1";
  static constexpr const char* tagValPublicCompany = "522=2";
  static constexpr const char* tagValPrivateCompany = "522=3";
  static constexpr const char* tagValIndividualTrustee = "522=4";
  static constexpr const char* tagValCompanyTrustee = "522=5";
  static constexpr const char* tagValPensionPlan = "522=6";
  static constexpr const char* tagValCustodianUnderGiftsToMinorsAct = "522=7";
  static constexpr const char* tagValTrusts = "522=8";
  static constexpr const char* tagValFiduciaries = "522=9";
  static constexpr const char* tagValNetworkingSubAccount = "522=0";
  static constexpr const char* tagValNonProfitOrganization = "522=1";
  static constexpr const char* tagValCorporateBody = "522=2";
  static constexpr const char* tagValNominee = "522=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PartySubID : Types::Value<Types::String>
{
  static constexpr const int tag = 523;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NestedPartyID : Types::Value<Types::String>
{
  static constexpr const int tag = 524;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NestedPartyIDSource : Types::Value<Types::Char>
{
  static constexpr const int tag = 525;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SecondaryClOrdID : Types::Value<Types::String>
{
  static constexpr const int tag = 526;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecondaryExecID : Types::Value<Types::String>
{
  static constexpr const int tag = 527;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OrderCapacity : Types::Value<Types::Char>
{
  static constexpr const int tag = 528;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valAgency = 'A';
  static constexpr const char valProprietary = 'G';
  static constexpr const char valIndividual = 'I';
  static constexpr const char valPrincipal = 'P';
  static constexpr const char valRisklessPrincipal = 'R';
  static constexpr const char valAgentForOtherMember = 'W';

  static constexpr const char* tagValAgency = "528=A";
  static constexpr const char* tagValProprietary = "528=G";
  static constexpr const char* tagValIndividual = "528=I";
  static constexpr const char* tagValPrincipal = "528=P";
  static constexpr const char* tagValRisklessPrincipal = "528=R";
  static constexpr const char* tagValAgentForOtherMember = "528=W";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct OrderRestrictions : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 529;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valProgramTrade = "1";
  static constexpr const char* valIndexArbitrage = "2";
  static constexpr const char* valNonIndexArbitrage = "3";
  static constexpr const char* valCompetingMarketMaker = "4";
  static constexpr const char* valActingAsMarketMakerOrSpecialistInTheSecurity = "5";
  static constexpr const char* valActingAsMarketMakerOrSpecialistInTheUnderlyingSecurityOfADerivativeSecurity = "6";
  static constexpr const char* valForeignEntity = "7";
  static constexpr const char* valExternalMarketParticipant = "8";
  static constexpr const char* valExternalInterConnectedMarketLinkage = "9";
  static constexpr const char* valRisklessArbitrage = "A";

  static constexpr const char* tagValProgramTrade = "529=1";
  static constexpr const char* tagValIndexArbitrage = "529=2";
  static constexpr const char* tagValNonIndexArbitrage = "529=3";
  static constexpr const char* tagValCompetingMarketMaker = "529=4";
  static constexpr const char* tagValActingAsMarketMakerOrSpecialistInTheSecurity = "529=5";
  static constexpr const char* tagValActingAsMarketMakerOrSpecialistInTheUnderlyingSecurityOfADerivativeSecurity = "529=6";
  static constexpr const char* tagValForeignEntity = "529=7";
  static constexpr const char* tagValExternalMarketParticipant = "529=8";
  static constexpr const char* tagValExternalInterConnectedMarketLinkage = "529=9";
  static constexpr const char* tagValRisklessArbitrage = "529=A";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct MassCancelRequestType : Types::Value<Types::Char>
{
  static constexpr const int tag = 530;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valCancelOrdersForASecurity = '1';
  static constexpr const char valCancelOrdersForAnUnderlyingSecurity = '2';
  static constexpr const char valCancelOrdersForAProduct = '3';
  static constexpr const char valCancelOrdersForACFICode = '4';
  static constexpr const char valCancelOrdersForASecurityType = '5';
  static constexpr const char valCancelOrdersForATradingSession = '6';
  static constexpr const char valCancelAllOrders = '7';

  static constexpr const char* tagValCancelOrdersForASecurity = "530=1";
  static constexpr const char* tagValCancelOrdersForAnUnderlyingSecurity = "530=2";
  static constexpr const char* tagValCancelOrdersForAProduct = "530=3";
  static constexpr const char* tagValCancelOrdersForACFICode = "530=4";
  static constexpr const char* tagValCancelOrdersForASecurityType = "530=5";
  static constexpr const char* tagValCancelOrdersForATradingSession = "530=6";
  static constexpr const char* tagValCancelAllOrders = "530=7";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MassCancelResponse : Types::Value<Types::Char>
{
  static constexpr const int tag = 531;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valCancelRequestRejectedSeeMassCancelRejectReason = '0';
  static constexpr const char valCancelOrdersForASecurity = '1';
  static constexpr const char valCancelOrdersForAnUnderlyingSecurity = '2';
  static constexpr const char valCancelOrdersForAProduct = '3';
  static constexpr const char valCancelOrdersForACFICode = '4';
  static constexpr const char valCancelOrdersForASecurityType = '5';
  static constexpr const char valCancelOrdersForATradingSession = '6';
  static constexpr const char valCancelAllOrders = '7';

  static constexpr const char* tagValCancelRequestRejectedSeeMassCancelRejectReason = "531=0";
  static constexpr const char* tagValCancelOrdersForASecurity = "531=1";
  static constexpr const char* tagValCancelOrdersForAnUnderlyingSecurity = "531=2";
  static constexpr const char* tagValCancelOrdersForAProduct = "531=3";
  static constexpr const char* tagValCancelOrdersForACFICode = "531=4";
  static constexpr const char* tagValCancelOrdersForASecurityType = "531=5";
  static constexpr const char* tagValCancelOrdersForATradingSession = "531=6";
  static constexpr const char* tagValCancelAllOrders = "531=7";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MassCancelRejectReason : Types::Value<Types::Char>
{
  static constexpr const int tag = 532;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct TotalAffectedOrders : Types::Value<Types::Int>
{
  static constexpr const int tag = 533;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoAffectedOrders : Types::Value<Types::Int>
{
  static constexpr const int tag = 534;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AffectedOrderID : Types::Value<Types::String>
{
  static constexpr const int tag = 535;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AffectedSecondaryOrderID : Types::Value<Types::String>
{
  static constexpr const int tag = 536;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuoteType : Types::Value<Types::Int>
{
  static constexpr const int tag = 537;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valIndicative = 0;
  static constexpr const int valTradeable = 1;
  static constexpr const int valRestrictedTradeable = 2;
  static constexpr const int valCounter = 3;

  static constexpr const char* tagValIndicative = "537=0";
  static constexpr const char* tagValTradeable = "537=1";
  static constexpr const char* tagValRestrictedTradeable = "537=2";
  static constexpr const char* tagValCounter = "537=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NestedPartyRole : Types::Value<Types::Int>
{
  static constexpr const int tag = 538;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoNestedPartyIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 539;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TotalAccruedInterestAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 540;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MaturityDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 541;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct UnderlyingMaturityDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 542;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct InstrRegistry : Types::Value<Types::String>
{
  static constexpr const int tag = 543;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valBankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords = "BIC";
  static constexpr const char* valZPhysicalOrBearer = "ZZ";

  static constexpr const char* tagValBankIdentificationCodeTheDepositoryOrCustodianWhoMaintainsOwnershipRecords = "543=BIC";
  static constexpr const char* tagValZPhysicalOrBearer = "543=ZZ";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CashMargin : Types::Value<Types::Char>
{
  static constexpr const int tag = 544;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valCash = '1';
  static constexpr const char valMarginOpen = '2';
  static constexpr const char valMarginClose = '3';

  static constexpr const char* tagValCash = "544=1";
  static constexpr const char* tagValMarginOpen = "544=2";
  static constexpr const char* tagValMarginClose = "544=3";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct NestedPartySubID : Types::Value<Types::String>
{
  static constexpr const int tag = 545;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Scope : Types::Value<Types::MultipleValueString>
{
  static constexpr const int tag = 546;

  static const char* tagVal()
  {
    return toStrBuff;
  }

  static constexpr const char* valLocal = "1";
  static constexpr const char* valNational = "2";
  static constexpr const char* valGlobal = "3";

  static constexpr const char* tagValLocal = "546=1";
  static constexpr const char* tagValNational = "546=2";
  static constexpr const char* tagValGlobal = "546=3";

  using Types::Value<Types::MultipleValueString>::Value;

  static char toStrBuff[];
};

struct MDImplicitDelete : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 547;

  static constexpr const bool valClientHasResponsibilityForImplicitlyDeletingBidsOrOffers = true;
  static constexpr const bool valServerMustSendAnExplicitDeleteForBidsOrOffers = false;

  static constexpr const char* tagValClientHasResponsibilityForImplicitlyDeletingBidsOrOffers = "547=Y";
  static constexpr const char* tagValServerMustSendAnExplicitDeleteForBidsOrOffers = "547=N";

  using Types::Value<Types::Boolean>::Value;

};

struct CrossID : Types::Value<Types::String>
{
  static constexpr const int tag = 548;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CrossType : Types::Value<Types::Int>
{
  static constexpr const int tag = 549;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner = 1;
  static constexpr const int valCrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled = 2;
  static constexpr const int valCrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions = 3;
  static constexpr const int valCrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist = 4;

  static constexpr const char* tagValCrossTradeWhichIsExecutedCompletelyOrNotBothSidesAreTreatedInTheSameManner = "549=1";
  static constexpr const char* tagValCrossTradeWhichIsExecutedPartiallyAndTherestIsCancelled = "549=2";
  static constexpr const char* tagValCrossTradeWhichIsPartiallyExecutedWithTheUnfilledPortions = "549=3";
  static constexpr const char* tagValCrossTradeIsExecutedWithExistingOrdersWiththeSamePriceInTheCaseOtherOrdersExist = "549=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CrossPrioritization : Types::Value<Types::Int>
{
  static constexpr const int tag = 550;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrigCrossID : Types::Value<Types::String>
{
  static constexpr const int tag = 551;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoSides : Types::Value<Types::Int>
{
  static constexpr const int tag = 552;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valOneSide = 1;
  static constexpr const int valBothSides = 2;

  static constexpr const char* tagValOneSide = "552=1";
  static constexpr const char* tagValBothSides = "552=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Username : Types::Value<Types::String>
{
  static constexpr const int tag = 553;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Password : Types::Value<Types::String>
{
  static constexpr const int tag = 554;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoLegs : Types::Value<Types::Int>
{
  static constexpr const int tag = 555;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 556;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TotNoSecurityTypes : Types::Value<Types::Int>
{
  static constexpr const int tag = 557;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoSecurityTypes : Types::Value<Types::Int>
{
  static constexpr const int tag = 558;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecurityListRequestType : Types::Value<Types::Int>
{
  static constexpr const int tag = 559;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSymbol = 0;
  static constexpr const int valSecurityTypeAndOrCFICode = 1;
  static constexpr const int valProduct = 2;
  static constexpr const int valTradingSessionID = 3;
  static constexpr const int valAllSecurities = 4;

  static constexpr const char* tagValSymbol = "559=0";
  static constexpr const char* tagValSecurityTypeAndOrCFICode = "559=1";
  static constexpr const char* tagValProduct = "559=2";
  static constexpr const char* tagValTradingSessionID = "559=3";
  static constexpr const char* tagValAllSecurities = "559=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecurityRequestResult : Types::Value<Types::Int>
{
  static constexpr const int tag = 560;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valValidRequest = 0;
  static constexpr const int valInvalidOrUnsupportedRequest = 1;
  static constexpr const int valNoInstrumentsFoundThatMatchSelectionCriteria = 2;
  static constexpr const int valNotAuthorizedToRetrieveInstrumentData = 3;
  static constexpr const int valInstrumentDataTemporarilyUnavailable = 4;
  static constexpr const int valRequestForInstrumentDataNotSupported = 5;

  static constexpr const char* tagValValidRequest = "560=0";
  static constexpr const char* tagValInvalidOrUnsupportedRequest = "560=1";
  static constexpr const char* tagValNoInstrumentsFoundThatMatchSelectionCriteria = "560=2";
  static constexpr const char* tagValNotAuthorizedToRetrieveInstrumentData = "560=3";
  static constexpr const char* tagValInstrumentDataTemporarilyUnavailable = "560=4";
  static constexpr const char* tagValRequestForInstrumentDataNotSupported = "560=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct RoundLot : Types::Value<Types::Float>
{
  static constexpr const int tag = 561;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MinTradeVol : Types::Value<Types::Float>
{
  static constexpr const int tag = 562;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MultiLegRptTypeReq : Types::Value<Types::Int>
{
  static constexpr const int tag = 563;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegPositionEffect : Types::Value<Types::Char>
{
  static constexpr const int tag = 564;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct LegCoveredOrUncovered : Types::Value<Types::Int>
{
  static constexpr const int tag = 565;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 566;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TradSesStatusRejReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 567;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnknownOrInvalidTradingSessionID = 1;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValUnknownOrInvalidTradingSessionID = "567=1";
  static constexpr const char* tagValOther = "567=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeRequestID : Types::Value<Types::String>
{
  static constexpr const int tag = 568;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradeRequestType : Types::Value<Types::Int>
{
  static constexpr const int tag = 569;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAllTrades = 0;
  static constexpr const int valMatchedTradesMatchingCriteriaProvidedOnRequest = 1;
  static constexpr const int valUnmatchedTradesThatMatchCriteria = 2;
  static constexpr const int valUnreportedTradesThatMatchCriteria = 3;
  static constexpr const int valAdvisoriesThatMatchCriteria = 4;

  static constexpr const char* tagValAllTrades = "569=0";
  static constexpr const char* tagValMatchedTradesMatchingCriteriaProvidedOnRequest = "569=1";
  static constexpr const char* tagValUnmatchedTradesThatMatchCriteria = "569=2";
  static constexpr const char* tagValUnreportedTradesThatMatchCriteria = "569=3";
  static constexpr const char* tagValAdvisoriesThatMatchCriteria = "569=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PreviouslyReported : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 570;

  static constexpr const bool valPreviouslyReportedToCounterparty = true;
  static constexpr const bool valNotReportedToCounterparty = false;

  static constexpr const char* tagValPreviouslyReportedToCounterparty = "570=Y";
  static constexpr const char* tagValNotReportedToCounterparty = "570=N";

  using Types::Value<Types::Boolean>::Value;

};

struct TradeReportID : Types::Value<Types::String>
{
  static constexpr const int tag = 571;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradeReportRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 572;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MatchStatus : Types::Value<Types::Char>
{
  static constexpr const int tag = 573;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valComparedMatchedOrAffirmed = '0';
  static constexpr const char valUncomparedUnmatchedOrUnaffirmed = '1';
  static constexpr const char valAdvisoryOrAlert = '2';

  static constexpr const char* tagValComparedMatchedOrAffirmed = "573=0";
  static constexpr const char* tagValUncomparedUnmatchedOrUnaffirmed = "573=1";
  static constexpr const char* tagValAdvisoryOrAlert = "573=2";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct MatchType : Types::Value<Types::String>
{
  static constexpr const int tag = 574;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime = "A";
  static constexpr const char* valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges = "A2";
  static constexpr const char* valExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime = "A3";
  static constexpr const char* valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges = "A4";
  static constexpr const char* valExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime = "A5";
  static constexpr const char* valComparedRecordsResultingFromStampedAdvisoriesOrSpecialist = "AQ";
  static constexpr const char* valSummarizedMatchUsingAToA1 = "S1";
  static constexpr const char* valSummarizedMatchUsingAToA2 = "S2";
  static constexpr const char* valSummarizedMatchUsingAToA3 = "S3";
  static constexpr const char* valSummarizedMatchUsingAToA4 = "S4";
  static constexpr const char* valSummarizedMatchUsingAToA5 = "S5";
  static constexpr const char* valExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator = "M";
  static constexpr const char* valSummarizedMatchMinusBadgesAndTimes = "M2";
  static constexpr const char* valOCSLockedIn = "MT";
  static constexpr const char* valACTMMatch = "M";
  static constexpr const char* valACTM2Match = "M2";
  static constexpr const char* valACTAcceptedTrade = "M3";
  static constexpr const char* valACTDefaultTrade = "M4";
  static constexpr const char* valACTDefaultAfterM2 = "M5";
  static constexpr const char* valACTM6Match = "M6";
  static constexpr const char* valNonACT = "MT";

  static constexpr const char* tagValExactMatchOnTradeDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4BadgesExecTime = "574=A";
  static constexpr const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator4Badges = "574=A2";
  static constexpr const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeSpecialTradeIndicator2BadgesExecTime = "574=A3";
  static constexpr const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator2Badges = "574=A4";
  static constexpr const char* tagValExactOnDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicatorExecTime = "574=A5";
  static constexpr const char* tagValComparedRecordsResultingFromStampedAdvisoriesOrSpecialist = "574=AQ";
  static constexpr const char* tagValSummarizedMatchUsingAToA1 = "574=S1";
  static constexpr const char* tagValSummarizedMatchUsingAToA2 = "574=S2";
  static constexpr const char* tagValSummarizedMatchUsingAToA3 = "574=S3";
  static constexpr const char* tagValSummarizedMatchUsingAToA4 = "574=S4";
  static constexpr const char* tagValSummarizedMatchUsingAToA5 = "574=S5";
  static constexpr const char* tagValExactOnTradeDateStockSymbolQuantityPriceTradeTypeAndSpecialTradeIndicator = "574=M";
  static constexpr const char* tagValSummarizedMatchMinusBadgesAndTimes = "574=M2";
  static constexpr const char* tagValOCSLockedIn = "574=MT";
  static constexpr const char* tagValACTMMatch = "574=M";
  static constexpr const char* tagValACTM2Match = "574=M2";
  static constexpr const char* tagValACTAcceptedTrade = "574=M3";
  static constexpr const char* tagValACTDefaultTrade = "574=M4";
  static constexpr const char* tagValACTDefaultAfterM2 = "574=M5";
  static constexpr const char* tagValACTM6Match = "574=M6";
  static constexpr const char* tagValNonACT = "574=MT";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OddLot : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 575;

  using Types::Value<Types::Boolean>::Value;

};

struct NoClearingInstructions : Types::Value<Types::Int>
{
  static constexpr const int tag = 576;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ClearingInstruction : Types::Value<Types::Int>
{
  static constexpr const int tag = 577;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valProcessNormally = 0;
  static constexpr const int valExcludeFromAllNetting = 1;
  static constexpr const int valBilateralNettingOnly = 2;
  static constexpr const int valExClearing = 3;
  static constexpr const int valSpecialTrade = 4;
  static constexpr const int valMultilateralNetting = 5;
  static constexpr const int valClearAgainstCentralCounterparty = 6;
  static constexpr const int valExcludeFromCentralCounterparty = 7;
  static constexpr const int valManualMode = 8;
  static constexpr const int valAutomaticPostingMode = 9;
  static constexpr const int valAutomaticGiveUpMode = 0;
  static constexpr const int valQualifiedServiceRepresentativeQSR = 1;
  static constexpr const int valCustomerTrade = 2;
  static constexpr const int valSelfClearing = 3;

  static constexpr const char* tagValProcessNormally = "577=0";
  static constexpr const char* tagValExcludeFromAllNetting = "577=1";
  static constexpr const char* tagValBilateralNettingOnly = "577=2";
  static constexpr const char* tagValExClearing = "577=3";
  static constexpr const char* tagValSpecialTrade = "577=4";
  static constexpr const char* tagValMultilateralNetting = "577=5";
  static constexpr const char* tagValClearAgainstCentralCounterparty = "577=6";
  static constexpr const char* tagValExcludeFromCentralCounterparty = "577=7";
  static constexpr const char* tagValManualMode = "577=8";
  static constexpr const char* tagValAutomaticPostingMode = "577=9";
  static constexpr const char* tagValAutomaticGiveUpMode = "577=0";
  static constexpr const char* tagValQualifiedServiceRepresentativeQSR = "577=1";
  static constexpr const char* tagValCustomerTrade = "577=2";
  static constexpr const char* tagValSelfClearing = "577=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeInputSource : Types::Value<Types::String>
{
  static constexpr const int tag = 578;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradeInputDevice : Types::Value<Types::String>
{
  static constexpr const int tag = 579;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoDates : Types::Value<Types::Int>
{
  static constexpr const int tag = 580;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AccountType : Types::Value<Types::Int>
{
  static constexpr const int tag = 581;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccountIsCarriedOnCustomerSideOfBooks = 1;
  static constexpr const int valAccountIsCarriedOnNonCustomerSideOfBooks = 2;
  static constexpr const int valHouseTrader = 3;
  static constexpr const int valFloorTrader = 4;
  static constexpr const int valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = 6;
  static constexpr const int valAccountIsHouseTraderAndIsCrossMargined = 7;
  static constexpr const int valJointBackofficeAccount = 8;

  static constexpr const char* tagValAccountIsCarriedOnCustomerSideOfBooks = "581=1";
  static constexpr const char* tagValAccountIsCarriedOnNonCustomerSideOfBooks = "581=2";
  static constexpr const char* tagValHouseTrader = "581=3";
  static constexpr const char* tagValFloorTrader = "581=4";
  static constexpr const char* tagValAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = "581=6";
  static constexpr const char* tagValAccountIsHouseTraderAndIsCrossMargined = "581=7";
  static constexpr const char* tagValJointBackofficeAccount = "581=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CustOrderCapacity : Types::Value<Types::Int>
{
  static constexpr const int tag = 582;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ClOrdLinkID : Types::Value<Types::String>
{
  static constexpr const int tag = 583;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MassStatusReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 584;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MassStatusReqType : Types::Value<Types::Int>
{
  static constexpr const int tag = 585;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valStatusForOrdersForASecurity = 1;
  static constexpr const int valStatusForOrdersForAnUnderlyingSecurity = 2;
  static constexpr const int valStatusForOrdersForAProduct = 3;
  static constexpr const int valStatusForOrdersForACFICode = 4;
  static constexpr const int valStatusForOrdersForASecurityType = 5;
  static constexpr const int valStatusForOrdersForATradingSession = 6;
  static constexpr const int valStatusForAllOrders = 7;
  static constexpr const int valStatusForOrdersForAPartyID = 8;

  static constexpr const char* tagValStatusForOrdersForASecurity = "585=1";
  static constexpr const char* tagValStatusForOrdersForAnUnderlyingSecurity = "585=2";
  static constexpr const char* tagValStatusForOrdersForAProduct = "585=3";
  static constexpr const char* tagValStatusForOrdersForACFICode = "585=4";
  static constexpr const char* tagValStatusForOrdersForASecurityType = "585=5";
  static constexpr const char* tagValStatusForOrdersForATradingSession = "585=6";
  static constexpr const char* tagValStatusForAllOrders = "585=7";
  static constexpr const char* tagValStatusForOrdersForAPartyID = "585=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrigOrdModTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 586;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct LegSettlType : Types::Value<Types::Char>
{
  static constexpr const int tag = 587;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct LegSettlDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 588;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct DayBookingInst : Types::Value<Types::Char>
{
  static constexpr const int tag = 589;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct BookingUnit : Types::Value<Types::Char>
{
  static constexpr const int tag = 590;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct PreallocMethod : Types::Value<Types::Char>
{
  static constexpr const int tag = 591;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct UnderlyingCountryOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 592;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingStateOrProvinceOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 593;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingLocaleOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 594;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingInstrRegistry : Types::Value<Types::String>
{
  static constexpr const int tag = 595;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegCountryOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 596;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegStateOrProvinceOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 597;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegLocaleOfIssue : Types::Value<Types::String>
{
  static constexpr const int tag = 598;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegInstrRegistry : Types::Value<Types::String>
{
  static constexpr const int tag = 599;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSymbol : Types::Value<Types::String>
{
  static constexpr const int tag = 600;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSymbolSfx : Types::Value<Types::String>
{
  static constexpr const int tag = 601;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSecurityID : Types::Value<Types::String>
{
  static constexpr const int tag = 602;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSecurityIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 603;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoLegSecurityAltID : Types::Value<Types::String>
{
  static constexpr const int tag = 604;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSecurityAltID : Types::Value<Types::String>
{
  static constexpr const int tag = 605;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSecurityAltIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 606;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegProduct : Types::Value<Types::Int>
{
  static constexpr const int tag = 607;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegCFICode : Types::Value<Types::String>
{
  static constexpr const int tag = 608;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSecurityType : Types::Value<Types::String>
{
  static constexpr const int tag = 609;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegMaturityMonthYear : Types::Value<Types::MonthYear>
{
  static constexpr const int tag = 610;

  static const char* tagVal(int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;
    Types::writeThere(whereWrite, monthYear);
    return toStrBuff;
  }

  using Types::Value<Types::MonthYear>::Value;

  static char toStrBuff[];
};

struct LegMaturityDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 611;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct LegStrikePrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 612;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegOptAttribute : Types::Value<Types::Char>
{
  static constexpr const int tag = 613;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct LegContractMultiplier : Types::Value<Types::Float>
{
  static constexpr const int tag = 614;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegCouponRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 615;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegSecurityExchange : Types::Value<Types::String>
{
  static constexpr const int tag = 616;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegIssuer : Types::Value<Types::String>
{
  static constexpr const int tag = 617;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct EncodedLegIssuerLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 618;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedLegIssuer : Types::Value<Types::Data>
{
  static constexpr const int tag = 619;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct LegSecurityDesc : Types::Value<Types::String>
{
  static constexpr const int tag = 620;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct EncodedLegSecurityDescLen : Types::Value<Types::Int>
{
  static constexpr const int tag = 621;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EncodedLegSecurityDesc : Types::Value<Types::Data>
{
  static constexpr const int tag = 622;

  static const char* tagVal(void* data, unsigned size)
  {
    return toStrBuff;
  }

  using Types::Value<Types::Data>::Value;

  static char toStrBuff[];
};

struct LegRatioQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 623;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegSide : Types::Value<Types::Char>
{
  static constexpr const int tag = 624;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct TradingSessionSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 625;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocType : Types::Value<Types::Int>
{
  static constexpr const int tag = 626;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCalculated = 1;
  static constexpr const int valPreliminary = 2;
  static constexpr const int valSellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney = 3;
  static constexpr const int valSellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney = 4;
  static constexpr const int valReadyToBookSingleOrder = 5;
  static constexpr const int valBuysideReadyToBookCombinedSetOfOrders = 6;
  static constexpr const int valWarehouseInstruction = 7;
  static constexpr const int valRequestToIntermediary = 8;

  static constexpr const char* tagValCalculated = "626=1";
  static constexpr const char* tagValPreliminary = "626=2";
  static constexpr const char* tagValSellsideCalculatedUsingPreliminaryincludesMiscFeesAndNetMoney = "626=3";
  static constexpr const char* tagValSellsideCalculatedWithoutPreliminarysentUnsolicitedBySellsideMiscFeesAndNetMoney = "626=4";
  static constexpr const char* tagValReadyToBookSingleOrder = "626=5";
  static constexpr const char* tagValBuysideReadyToBookCombinedSetOfOrders = "626=6";
  static constexpr const char* tagValWarehouseInstruction = "626=7";
  static constexpr const char* tagValRequestToIntermediary = "626=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoHops : Types::Value<Types::Int>
{
  static constexpr const int tag = 627;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct HopCompID : Types::Value<Types::String>
{
  static constexpr const int tag = 628;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct HopSendingTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 629;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct HopRefID : Types::Value<Types::Int>
{
  static constexpr const int tag = 630;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MidPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 631;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BidYield : Types::Value<Types::Float>
{
  static constexpr const int tag = 632;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MidYield : Types::Value<Types::Float>
{
  static constexpr const int tag = 633;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OfferYield : Types::Value<Types::Float>
{
  static constexpr const int tag = 634;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ClearingFeeIndicator : Types::Value<Types::String>
{
  static constexpr const int tag = 635;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct WorkingIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 636;

  static constexpr const bool valOrderIsCurrentlyBeingWorked = true;
  static constexpr const bool valOrderHasBeenAcceptedButNotYetInAWorkingState = false;

  static constexpr const char* tagValOrderIsCurrentlyBeingWorked = "636=Y";
  static constexpr const char* tagValOrderHasBeenAcceptedButNotYetInAWorkingState = "636=N";

  using Types::Value<Types::Boolean>::Value;

};

struct LegLastPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 637;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PriorityIndicator : Types::Value<Types::Int>
{
  static constexpr const int tag = 638;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPriorityUnchanged = 0;
  static constexpr const int valLostPriorityAsResultOfOrderChange = 1;

  static constexpr const char* tagValPriorityUnchanged = "638=0";
  static constexpr const char* tagValLostPriorityAsResultOfOrderChange = "638=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PriceImprovement : Types::Value<Types::Float>
{
  static constexpr const int tag = 639;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct Price2 : Types::Value<Types::Float>
{
  static constexpr const int tag = 640;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LastForwardPoints2 : Types::Value<Types::Float>
{
  static constexpr const int tag = 641;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BidForwardPoints2 : Types::Value<Types::Float>
{
  static constexpr const int tag = 642;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OfferForwardPoints2 : Types::Value<Types::Float>
{
  static constexpr const int tag = 643;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct RFQReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 644;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MktBidPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 645;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MktOfferPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 646;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MinBidSize : Types::Value<Types::Float>
{
  static constexpr const int tag = 647;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MinOfferSize : Types::Value<Types::Float>
{
  static constexpr const int tag = 648;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct QuoteStatusReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 649;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegalConfirm : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 650;

  static constexpr const bool valLegalConfirm = true;
  static constexpr const bool valDoesNotConstituteALegalConfirm = false;

  static constexpr const char* tagValLegalConfirm = "650=Y";
  static constexpr const char* tagValDoesNotConstituteALegalConfirm = "650=N";

  using Types::Value<Types::Boolean>::Value;

};

struct UnderlyingLastPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 651;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingLastQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 652;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SecDefStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 653;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPendingApproval = 0;
  static constexpr const int valApproved = 1;
  static constexpr const int valRejected = 2;
  static constexpr const int valUnauthorizedRequest = 3;
  static constexpr const int valInvalidDefinitionRequest = 4;

  static constexpr const char* tagValPendingApproval = "653=0";
  static constexpr const char* tagValApproved = "653=1";
  static constexpr const char* tagValRejected = "653=2";
  static constexpr const char* tagValUnauthorizedRequest = "653=3";
  static constexpr const char* tagValInvalidDefinitionRequest = "653=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 654;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ContraLegRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 655;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlCurrBidFxRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 656;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlCurrOfferFxRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 657;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct QuoteRequestRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 658;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnknownSymbol = 1;
  static constexpr const int valExchangeSecurityClosed = 2;
  static constexpr const int valQuoteRequestExceedsLimit = 3;
  static constexpr const int valTooLateToEnter = 4;
  static constexpr const int valInvalidPrice = 5;
  static constexpr const int valNotAuthorizedToRequestQuote = 6;
  static constexpr const int valNoMatchForInquiry = 7;
  static constexpr const int valNoMarketForInstrument = 8;
  static constexpr const int valNoInventory = 9;
  static constexpr const int valPass = 0;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValUnknownSymbol = "658=1";
  static constexpr const char* tagValExchangeSecurityClosed = "658=2";
  static constexpr const char* tagValQuoteRequestExceedsLimit = "658=3";
  static constexpr const char* tagValTooLateToEnter = "658=4";
  static constexpr const char* tagValInvalidPrice = "658=5";
  static constexpr const char* tagValNotAuthorizedToRequestQuote = "658=6";
  static constexpr const char* tagValNoMatchForInquiry = "658=7";
  static constexpr const char* tagValNoMarketForInstrument = "658=8";
  static constexpr const char* tagValNoInventory = "658=9";
  static constexpr const char* tagValPass = "658=0";
  static constexpr const char* tagValOther = "658=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SideComplianceID : Types::Value<Types::String>
{
  static constexpr const int tag = 659;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AcctIDSource : Types::Value<Types::Int>
{
  static constexpr const int tag = 660;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valBIC = 1;
  static constexpr const int valSIDCode = 2;
  static constexpr const int valTFM = 3;
  static constexpr const int valOMGEO = 4;
  static constexpr const int valDTCCCode = 5;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValBIC = "660=1";
  static constexpr const char* tagValSIDCode = "660=2";
  static constexpr const char* tagValTFM = "660=3";
  static constexpr const char* tagValOMGEO = "660=4";
  static constexpr const char* tagValDTCCCode = "660=5";
  static constexpr const char* tagValOther = "660=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocAcctIDSource : Types::Value<Types::Int>
{
  static constexpr const int tag = 661;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BenchmarkPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 662;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct BenchmarkPriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 663;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ConfirmID : Types::Value<Types::String>
{
  static constexpr const int tag = 664;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ConfirmStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 665;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valReceived = 1;
  static constexpr const int valMismatchedAccount = 2;
  static constexpr const int valMissingSettlementInstructions = 3;
  static constexpr const int valConfirmed = 4;
  static constexpr const int valRequestRejected = 5;

  static constexpr const char* tagValReceived = "665=1";
  static constexpr const char* tagValMismatchedAccount = "665=2";
  static constexpr const char* tagValMissingSettlementInstructions = "665=3";
  static constexpr const char* tagValConfirmed = "665=4";
  static constexpr const char* tagValRequestRejected = "665=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ConfirmTransType : Types::Value<Types::Int>
{
  static constexpr const int tag = 666;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNew = 0;
  static constexpr const int valReplace = 1;
  static constexpr const int valCancel = 2;

  static constexpr const char* tagValNew = "666=0";
  static constexpr const char* tagValReplace = "666=1";
  static constexpr const char* tagValCancel = "666=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ContractSettlMonth : Types::Value<Types::MonthYear>
{
  static constexpr const int tag = 667;

  static const char* tagVal(int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;
    Types::writeThere(whereWrite, monthYear);
    return toStrBuff;
  }

  using Types::Value<Types::MonthYear>::Value;

  static char toStrBuff[];
};

struct DeliveryForm : Types::Value<Types::Int>
{
  static constexpr const int tag = 668;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valBookEntryTheDefault = 1;
  static constexpr const int valBearer = 2;

  static constexpr const char* tagValBookEntryTheDefault = "668=1";
  static constexpr const char* tagValBearer = "668=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LastParPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 669;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoLegAllocs : Types::Value<Types::Int>
{
  static constexpr const int tag = 670;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegAllocAccount : Types::Value<Types::String>
{
  static constexpr const int tag = 671;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegIndividualAllocID : Types::Value<Types::String>
{
  static constexpr const int tag = 672;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegAllocQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 673;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegAllocAcctIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 674;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSettlCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 675;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegBenchmarkCurveCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 676;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegBenchmarkCurveName : Types::Value<Types::String>
{
  static constexpr const int tag = 677;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegBenchmarkCurvePoint : Types::Value<Types::String>
{
  static constexpr const int tag = 678;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegBenchmarkPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 679;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegBenchmarkPriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 680;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegBidPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 681;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegIOIQty : Types::Value<Types::String>
{
  static constexpr const int tag = 682;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoLegStipulations : Types::Value<Types::Int>
{
  static constexpr const int tag = 683;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegOfferPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 684;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegOrderQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 685;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegPriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 686;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 687;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegStipulationType : Types::Value<Types::String>
{
  static constexpr const int tag = 688;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegStipulationValue : Types::Value<Types::String>
{
  static constexpr const int tag = 689;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSwapType : Types::Value<Types::Int>
{
  static constexpr const int tag = 690;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valParForPar = 1;
  static constexpr const int valModifiedDuration = 2;
  static constexpr const int valRisk = 4;
  static constexpr const int valProceeds = 5;

  static constexpr const char* tagValParForPar = "690=1";
  static constexpr const char* tagValModifiedDuration = "690=2";
  static constexpr const char* tagValRisk = "690=4";
  static constexpr const char* tagValProceeds = "690=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Pool : Types::Value<Types::String>
{
  static constexpr const int tag = 691;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuotePriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 692;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPercent = 1;
  static constexpr const int valPerShare = 2;
  static constexpr const int valFixedAmount = 3;
  static constexpr const int valDiscountPercentagePointsBelowPar = 4;
  static constexpr const int valPremiumPercentagePointsOverPar = 5;
  static constexpr const int valBasisPointsRelativeToBenchmark = 6;
  static constexpr const int valTEDPrice = 7;
  static constexpr const int valTEDYield = 8;
  static constexpr const int valYieldSpread = 9;
  static constexpr const int valYield = 0;

  static constexpr const char* tagValPercent = "692=1";
  static constexpr const char* tagValPerShare = "692=2";
  static constexpr const char* tagValFixedAmount = "692=3";
  static constexpr const char* tagValDiscountPercentagePointsBelowPar = "692=4";
  static constexpr const char* tagValPremiumPercentagePointsOverPar = "692=5";
  static constexpr const char* tagValBasisPointsRelativeToBenchmark = "692=6";
  static constexpr const char* tagValTEDPrice = "692=7";
  static constexpr const char* tagValTEDYield = "692=8";
  static constexpr const char* tagValYieldSpread = "692=9";
  static constexpr const char* tagValYield = "692=0";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteRespID : Types::Value<Types::String>
{
  static constexpr const int tag = 693;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct QuoteRespType : Types::Value<Types::Int>
{
  static constexpr const int tag = 694;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valHitOrLift = 1;
  static constexpr const int valCounter = 2;
  static constexpr const int valExpired = 3;
  static constexpr const int valCover = 4;
  static constexpr const int valDoneAway = 5;
  static constexpr const int valPass = 6;

  static constexpr const char* tagValHitOrLift = "694=1";
  static constexpr const char* tagValCounter = "694=2";
  static constexpr const char* tagValExpired = "694=3";
  static constexpr const char* tagValCover = "694=4";
  static constexpr const char* tagValDoneAway = "694=5";
  static constexpr const char* tagValPass = "694=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QuoteQualifier : Types::Value<Types::Char>
{
  static constexpr const int tag = 695;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct YieldRedemptionDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 696;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct YieldRedemptionPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 697;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct YieldRedemptionPriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 698;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BenchmarkSecurityID : Types::Value<Types::String>
{
  static constexpr const int tag = 699;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ReversalIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 700;

  using Types::Value<Types::Boolean>::Value;

};

struct YieldCalcDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 701;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct NoPositions : Types::Value<Types::Int>
{
  static constexpr const int tag = 702;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosType : Types::Value<Types::String>
{
  static constexpr const int tag = 703;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valTransactionQuantity = "TQ";
  static constexpr const char* valIntraSpreadQty = "IAS";
  static constexpr const char* valInterSpreadQty = "IES";
  static constexpr const char* valEndOfDayQty = "FIN";
  static constexpr const char* valStartOfDayQty = "SOD";
  static constexpr const char* valOptionExerciseQty = "EX";
  static constexpr const char* valOptionAssignment = "AS";
  static constexpr const char* valTransactionFromExercise = "TX";
  static constexpr const char* valTransactionFromAssignment = "TA";
  static constexpr const char* valPitTradeQty = "PIT";
  static constexpr const char* valTransferTradeQty = "TRF";
  static constexpr const char* valElectronicTradeQty = "ETR";
  static constexpr const char* valAllocationTradeQty = "ALC";
  static constexpr const char* valAdjustmentQty = "PA";
  static constexpr const char* valAsOfTradeQty = "ASF";
  static constexpr const char* valDeliveryQty = "DLV";
  static constexpr const char* valTotalTransactionQty = "TOT";
  static constexpr const char* valCrossMarginQty = "XM";
  static constexpr const char* valIntegralSplit = "SPL";

  static constexpr const char* tagValTransactionQuantity = "703=TQ";
  static constexpr const char* tagValIntraSpreadQty = "703=IAS";
  static constexpr const char* tagValInterSpreadQty = "703=IES";
  static constexpr const char* tagValEndOfDayQty = "703=FIN";
  static constexpr const char* tagValStartOfDayQty = "703=SOD";
  static constexpr const char* tagValOptionExerciseQty = "703=EX";
  static constexpr const char* tagValOptionAssignment = "703=AS";
  static constexpr const char* tagValTransactionFromExercise = "703=TX";
  static constexpr const char* tagValTransactionFromAssignment = "703=TA";
  static constexpr const char* tagValPitTradeQty = "703=PIT";
  static constexpr const char* tagValTransferTradeQty = "703=TRF";
  static constexpr const char* tagValElectronicTradeQty = "703=ETR";
  static constexpr const char* tagValAllocationTradeQty = "703=ALC";
  static constexpr const char* tagValAdjustmentQty = "703=PA";
  static constexpr const char* tagValAsOfTradeQty = "703=ASF";
  static constexpr const char* tagValDeliveryQty = "703=DLV";
  static constexpr const char* tagValTotalTransactionQty = "703=TOT";
  static constexpr const char* tagValCrossMarginQty = "703=XM";
  static constexpr const char* tagValIntegralSplit = "703=SPL";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LongQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 704;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ShortQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 705;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PosQtyStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 706;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSubmitted = 0;
  static constexpr const int valAccepted = 1;
  static constexpr const int valRejected = 2;

  static constexpr const char* tagValSubmitted = "706=0";
  static constexpr const char* tagValAccepted = "706=1";
  static constexpr const char* tagValRejected = "706=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosAmtType : Types::Value<Types::String>
{
  static constexpr const int tag = 707;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  static constexpr const char* valFinalMarkToMarketAmount = "FMTM";
  static constexpr const char* valIncrementalMarkToMarketAmount = "IMTM";
  static constexpr const char* valTradeVariationAmount = "TVAR";
  static constexpr const char* valStartOfDayMarkToMarketAmount = "SMTM";
  static constexpr const char* valPremiumAmount = "PREM";
  static constexpr const char* valCashResidualAmount = "CRES";
  static constexpr const char* valCashAmount = "CASH";
  static constexpr const char* valValueAdjustedAmount = "VADJ";

  static constexpr const char* tagValFinalMarkToMarketAmount = "707=FMTM";
  static constexpr const char* tagValIncrementalMarkToMarketAmount = "707=IMTM";
  static constexpr const char* tagValTradeVariationAmount = "707=TVAR";
  static constexpr const char* tagValStartOfDayMarkToMarketAmount = "707=SMTM";
  static constexpr const char* tagValPremiumAmount = "707=PREM";
  static constexpr const char* tagValCashResidualAmount = "707=CRES";
  static constexpr const char* tagValCashAmount = "707=CASH";
  static constexpr const char* tagValValueAdjustedAmount = "707=VADJ";

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PosAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 708;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PosTransType : Types::Value<Types::Int>
{
  static constexpr const int tag = 709;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valExercise = 1;
  static constexpr const int valDoNotExercise = 2;
  static constexpr const int valPositionAdjustment = 3;
  static constexpr const int valPositionChangeSubmissionOrMarginDisposition = 4;
  static constexpr const int valPledge = 5;

  static constexpr const char* tagValExercise = "709=1";
  static constexpr const char* tagValDoNotExercise = "709=2";
  static constexpr const char* tagValPositionAdjustment = "709=3";
  static constexpr const char* tagValPositionChangeSubmissionOrMarginDisposition = "709=4";
  static constexpr const char* tagValPledge = "709=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 710;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoUnderlyings : Types::Value<Types::Int>
{
  static constexpr const int tag = 711;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosMaintAction : Types::Value<Types::Int>
{
  static constexpr const int tag = 712;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNewUsedToIncrementTheOverallTransactionQuantity = 1;
  static constexpr const int valReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId = 2;
  static constexpr const int valCancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId = 3;

  static constexpr const char* tagValNewUsedToIncrementTheOverallTransactionQuantity = "712=1";
  static constexpr const char* tagValReplaceUsedToOverrideTransactionQuantityOrAddMessagesBasedOnTheReferenceId = "712=2";
  static constexpr const char* tagValCancelUsedToRemoveTransactionOrSpecificAddMessagesBasedOnReferenceId = "712=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrigPosReqRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 713;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PosMaintRptRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 714;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ClearingBusinessDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 715;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct SettlSessID : Types::Value<Types::String>
{
  static constexpr const int tag = 716;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlSessSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 717;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AdjustmentType : Types::Value<Types::Int>
{
  static constexpr const int tag = 718;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valProcessRequestAsMarginDisposition = 0;
  static constexpr const int valDeltaPlus = 1;
  static constexpr const int valDeltaMinus = 2;
  static constexpr const int valFinal = 3;

  static constexpr const char* tagValProcessRequestAsMarginDisposition = "718=0";
  static constexpr const char* tagValDeltaPlus = "718=1";
  static constexpr const char* tagValDeltaMinus = "718=2";
  static constexpr const char* tagValFinal = "718=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ContraryInstructionIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 719;

  using Types::Value<Types::Boolean>::Value;

};

struct PriorSpreadIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 720;

  using Types::Value<Types::Boolean>::Value;

};

struct PosMaintRptID : Types::Value<Types::String>
{
  static constexpr const int tag = 721;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PosMaintStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 722;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccepted = 0;
  static constexpr const int valAcceptedWithWarnings = 1;
  static constexpr const int valRejected = 2;
  static constexpr const int valCompleted = 3;
  static constexpr const int valCompletedWithWarnings = 4;

  static constexpr const char* tagValAccepted = "722=0";
  static constexpr const char* tagValAcceptedWithWarnings = "722=1";
  static constexpr const char* tagValRejected = "722=2";
  static constexpr const char* tagValCompleted = "722=3";
  static constexpr const char* tagValCompletedWithWarnings = "722=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosMaintResult : Types::Value<Types::Int>
{
  static constexpr const int tag = 723;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSuccessfulCompletionNoWarningsOrErrors = 0;
  static constexpr const int valRejected = 1;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValSuccessfulCompletionNoWarningsOrErrors = "723=0";
  static constexpr const char* tagValRejected = "723=1";
  static constexpr const char* tagValOther = "723=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosReqType : Types::Value<Types::Int>
{
  static constexpr const int tag = 724;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPositions = 0;
  static constexpr const int valTrades = 1;
  static constexpr const int valExercises = 2;
  static constexpr const int valAssignments = 3;

  static constexpr const char* tagValPositions = "724=0";
  static constexpr const char* tagValTrades = "724=1";
  static constexpr const char* tagValExercises = "724=2";
  static constexpr const char* tagValAssignments = "724=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ResponseTransportType : Types::Value<Types::Int>
{
  static constexpr const int tag = 725;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valInbandTransportTheRequestWasSentOver = 0;
  static constexpr const int valOutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME = 1;

  static constexpr const char* tagValInbandTransportTheRequestWasSentOver = "725=0";
  static constexpr const char* tagValOutOfBandPreArrangedOutOfBandDeliverymechanismieFTPHTTPNDME = "725=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ResponseDestination : Types::Value<Types::String>
{
  static constexpr const int tag = 726;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TotalNumPosReports : Types::Value<Types::Int>
{
  static constexpr const int tag = 727;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosReqResult : Types::Value<Types::Int>
{
  static constexpr const int tag = 728;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valValidRequest = 0;
  static constexpr const int valInvalidOrUnsupportedRequest = 1;
  static constexpr const int valNoPositionsFoundThatMatchCriteria = 2;
  static constexpr const int valNotAuthorizedToRequestPositions = 3;
  static constexpr const int valRequestForPositionNotSupported = 4;
  static constexpr const int valOtheruseText = 99;

  static constexpr const char* tagValValidRequest = "728=0";
  static constexpr const char* tagValInvalidOrUnsupportedRequest = "728=1";
  static constexpr const char* tagValNoPositionsFoundThatMatchCriteria = "728=2";
  static constexpr const char* tagValNotAuthorizedToRequestPositions = "728=3";
  static constexpr const char* tagValRequestForPositionNotSupported = "728=4";
  static constexpr const char* tagValOtheruseText = "728=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PosReqStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 729;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valCompleted = 0;
  static constexpr const int valCompletedWithWarnings = 1;
  static constexpr const int valRejected = 2;

  static constexpr const char* tagValCompleted = "729=0";
  static constexpr const char* tagValCompletedWithWarnings = "729=1";
  static constexpr const char* tagValRejected = "729=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SettlPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 730;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct SettlPriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 731;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valFinal = 1;
  static constexpr const int valTheoretical = 2;

  static constexpr const char* tagValFinal = "731=1";
  static constexpr const char* tagValTheoretical = "731=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingSettlPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 732;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingSettlPriceType : Types::Value<Types::Int>
{
  static constexpr const int tag = 733;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PriorSettlPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 734;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoQuoteQualifiers : Types::Value<Types::Int>
{
  static constexpr const int tag = 735;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocSettlCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 736;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocSettlCurrAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 737;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct InterestAtMaturity : Types::Value<Types::Float>
{
  static constexpr const int tag = 738;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LegDatedDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 739;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct LegPool : Types::Value<Types::String>
{
  static constexpr const int tag = 740;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocInterestAtMaturity : Types::Value<Types::Float>
{
  static constexpr const int tag = 741;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AllocAccruedInterestAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 742;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DeliveryDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 743;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct AssignmentMethod : Types::Value<Types::Char>
{
  static constexpr const int tag = 744;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valRandom = 'R';
  static constexpr const char valProRata = 'P';

  static constexpr const char* tagValRandom = "744=R";
  static constexpr const char* tagValProRata = "744=P";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct AssignmentUnit : Types::Value<Types::Float>
{
  static constexpr const int tag = 745;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OpenInterest : Types::Value<Types::Float>
{
  static constexpr const int tag = 746;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ExerciseMethod : Types::Value<Types::Char>
{
  static constexpr const int tag = 747;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valAutomatic = 'A';
  static constexpr const char valManual = 'M';

  static constexpr const char* tagValAutomatic = "747=A";
  static constexpr const char* tagValManual = "747=M";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct TotNumTradeReports : Types::Value<Types::Int>
{
  static constexpr const int tag = 748;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeRequestResult : Types::Value<Types::Int>
{
  static constexpr const int tag = 749;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSuccessful = 0;
  static constexpr const int valInvalidOrUnknownInstrument = 1;
  static constexpr const int valInvalidTypeOfTradeRequested = 2;
  static constexpr const int valInvalidParties = 3;
  static constexpr const int valInvalidTransportTypeRequested = 4;
  static constexpr const int valInvalidDestinationRequested = 5;
  static constexpr const int valTradeRequestTypeNotSupported = 8;
  static constexpr const int valUnauthorizedForTradeCaptureReportRequest = 9;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValSuccessful = "749=0";
  static constexpr const char* tagValInvalidOrUnknownInstrument = "749=1";
  static constexpr const char* tagValInvalidTypeOfTradeRequested = "749=2";
  static constexpr const char* tagValInvalidParties = "749=3";
  static constexpr const char* tagValInvalidTransportTypeRequested = "749=4";
  static constexpr const char* tagValInvalidDestinationRequested = "749=5";
  static constexpr const char* tagValTradeRequestTypeNotSupported = "749=8";
  static constexpr const char* tagValUnauthorizedForTradeCaptureReportRequest = "749=9";
  static constexpr const char* tagValOther = "749=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeRequestStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 750;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccepted = 0;
  static constexpr const int valCompleted = 1;
  static constexpr const int valRejected = 2;

  static constexpr const char* tagValAccepted = "750=0";
  static constexpr const char* tagValCompleted = "750=1";
  static constexpr const char* tagValRejected = "750=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeReportRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 751;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSuccessful = 0;
  static constexpr const int valInvalidPartyInformation = 1;
  static constexpr const int valUnknownInstrument = 2;
  static constexpr const int valUnauthorizedToReportTrades = 3;
  static constexpr const int valInvalidTradeType = 4;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValSuccessful = "751=0";
  static constexpr const char* tagValInvalidPartyInformation = "751=1";
  static constexpr const char* tagValUnknownInstrument = "751=2";
  static constexpr const char* tagValUnauthorizedToReportTrades = "751=3";
  static constexpr const char* tagValInvalidTradeType = "751=4";
  static constexpr const char* tagValOther = "751=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SideMultiLegReportingType : Types::Value<Types::Int>
{
  static constexpr const int tag = 752;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSingleSecurity = 1;
  static constexpr const int valIndividualLegOfAMultiLegSecurity = 2;
  static constexpr const int valMultiLegSecurity = 3;

  static constexpr const char* tagValSingleSecurity = "752=1";
  static constexpr const char* tagValIndividualLegOfAMultiLegSecurity = "752=2";
  static constexpr const char* tagValMultiLegSecurity = "752=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoPosAmt : Types::Value<Types::Int>
{
  static constexpr const int tag = 753;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AutoAcceptIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 754;

  using Types::Value<Types::Boolean>::Value;

};

struct AllocReportID : Types::Value<Types::String>
{
  static constexpr const int tag = 755;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoNested2PartyIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 756;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Nested2PartyID : Types::Value<Types::String>
{
  static constexpr const int tag = 757;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Nested2PartyIDSource : Types::Value<Types::Char>
{
  static constexpr const int tag = 758;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct Nested2PartyRole : Types::Value<Types::Int>
{
  static constexpr const int tag = 759;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Nested2PartySubID : Types::Value<Types::String>
{
  static constexpr const int tag = 760;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct BenchmarkSecurityIDSource : Types::Value<Types::String>
{
  static constexpr const int tag = 761;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecuritySubType : Types::Value<Types::String>
{
  static constexpr const int tag = 762;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingSecuritySubType : Types::Value<Types::String>
{
  static constexpr const int tag = 763;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegSecuritySubType : Types::Value<Types::String>
{
  static constexpr const int tag = 764;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllowableOneSidednessPct : Types::Value<Types::Float>
{
  static constexpr const int tag = 765;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AllowableOneSidednessValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 766;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct AllowableOneSidednessCurr : Types::Value<Types::String>
{
  static constexpr const int tag = 767;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoTrdRegTimestamps : Types::Value<Types::Int>
{
  static constexpr const int tag = 768;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TrdRegTimestamp : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 769;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct TrdRegTimestampType : Types::Value<Types::Int>
{
  static constexpr const int tag = 770;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valExecutionTime = 1;
  static constexpr const int valTimeIn = 2;
  static constexpr const int valTimeOut = 3;
  static constexpr const int valBrokerReceipt = 4;
  static constexpr const int valBrokerExecution = 5;

  static constexpr const char* tagValExecutionTime = "770=1";
  static constexpr const char* tagValTimeIn = "770=2";
  static constexpr const char* tagValTimeOut = "770=3";
  static constexpr const char* tagValBrokerReceipt = "770=4";
  static constexpr const char* tagValBrokerExecution = "770=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TrdRegTimestampOrigin : Types::Value<Types::String>
{
  static constexpr const int tag = 771;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ConfirmRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 772;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ConfirmType : Types::Value<Types::Int>
{
  static constexpr const int tag = 773;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valStatus = 1;
  static constexpr const int valConfirmation = 2;
  static constexpr const int valConfirmationRequestRejected = 3;

  static constexpr const char* tagValStatus = "773=1";
  static constexpr const char* tagValConfirmation = "773=2";
  static constexpr const char* tagValConfirmationRequestRejected = "773=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ConfirmRejReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 774;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valMismatchedAccount = 1;
  static constexpr const int valMissingSettlementInstructions = 2;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValMismatchedAccount = "774=1";
  static constexpr const char* tagValMissingSettlementInstructions = "774=2";
  static constexpr const char* tagValOther = "774=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct BookingType : Types::Value<Types::Int>
{
  static constexpr const int tag = 775;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valRegularBooking = 0;
  static constexpr const int valCFD = 1;
  static constexpr const int valTotalReturnSwap = 2;

  static constexpr const char* tagValRegularBooking = "775=0";
  static constexpr const char* tagValCFD = "775=1";
  static constexpr const char* tagValTotalReturnSwap = "775=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct IndividualAllocRejCode : Types::Value<Types::Int>
{
  static constexpr const int tag = 776;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SettlInstMsgID : Types::Value<Types::String>
{
  static constexpr const int tag = 777;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoSettlInst : Types::Value<Types::Int>
{
  static constexpr const int tag = 778;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LastUpdateTime : Types::Value<Types::DateAndTime>
{
  static constexpr const int tag = 779;

  static const char* tagVal(int day, int month, int year, int hour, int minute, int second, int millisec = 0)
  {
    char* whereWrite = toStrBuff + 4;
    Types::DateAndTime dateAndTime;     Types::Date& date = dateAndTime;     Types::Time& time = dateAndTime;
    date.year = year; date.month = month; date.day = day;
    time.hour = hour; time.minute = minute; time.second = second; time.millisec = millisec;
    Types::writeThere(whereWrite, dateAndTime);
    return toStrBuff;
  }

  using Types::Value<Types::DateAndTime>::Value;

  static char toStrBuff[];
};

struct AllocSettlInstType : Types::Value<Types::Int>
{
  static constexpr const int tag = 780;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUseDefaultInstructions = 0;
  static constexpr const int valDeriveFromParametersProvided = 1;
  static constexpr const int valFullDetailsProvided = 2;
  static constexpr const int valSSIDbIdsProvided = 3;
  static constexpr const int valPhoneForInstructions = 4;

  static constexpr const char* tagValUseDefaultInstructions = "780=0";
  static constexpr const char* tagValDeriveFromParametersProvided = "780=1";
  static constexpr const char* tagValFullDetailsProvided = "780=2";
  static constexpr const char* tagValSSIDbIdsProvided = "780=3";
  static constexpr const char* tagValPhoneForInstructions = "780=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoSettlPartyIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 781;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SettlPartyID : Types::Value<Types::String>
{
  static constexpr const int tag = 782;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlPartyIDSource : Types::Value<Types::Char>
{
  static constexpr const int tag = 783;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct SettlPartyRole : Types::Value<Types::Int>
{
  static constexpr const int tag = 784;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SettlPartySubID : Types::Value<Types::String>
{
  static constexpr const int tag = 785;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlPartySubIDType : Types::Value<Types::Int>
{
  static constexpr const int tag = 786;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DlvyInstType : Types::Value<Types::Char>
{
  static constexpr const int tag = 787;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  static constexpr const char valSecurities = 'S';
  static constexpr const char valCash = 'C';

  static constexpr const char* tagValSecurities = "787=S";
  static constexpr const char* tagValCash = "787=C";

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct TerminationType : Types::Value<Types::Int>
{
  static constexpr const int tag = 788;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valOvernight = 1;
  static constexpr const int valTerm = 2;
  static constexpr const int valFlexible = 3;
  static constexpr const int valOpen = 4;

  static constexpr const char* tagValOvernight = "788=1";
  static constexpr const char* tagValTerm = "788=2";
  static constexpr const char* tagValFlexible = "788=3";
  static constexpr const char* tagValOpen = "788=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NextExpectedMsgSeqNum : Types::Value<Types::Int>
{
  static constexpr const int tag = 789;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrdStatusReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 790;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlInstReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 791;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SettlInstReqRejCode : Types::Value<Types::Int>
{
  static constexpr const int tag = 792;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnableToProcessRequest = 0;
  static constexpr const int valUnknownAccount = 1;
  static constexpr const int valNoMatchingSettlementInstructionsFound = 2;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValUnableToProcessRequest = "792=0";
  static constexpr const char* tagValUnknownAccount = "792=1";
  static constexpr const char* tagValNoMatchingSettlementInstructionsFound = "792=2";
  static constexpr const char* tagValOther = "792=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecondaryAllocID : Types::Value<Types::String>
{
  static constexpr const int tag = 793;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocReportType : Types::Value<Types::Int>
{
  static constexpr const int tag = 794;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSellsideCalculatedUsingPreliminary = 3;
  static constexpr const int valSellsideCalculatedWithoutPreliminary = 4;
  static constexpr const int valWarehouseRecap = 5;
  static constexpr const int valRequestToIntermediary = 8;

  static constexpr const char* tagValSellsideCalculatedUsingPreliminary = "794=3";
  static constexpr const char* tagValSellsideCalculatedWithoutPreliminary = "794=4";
  static constexpr const char* tagValWarehouseRecap = "794=5";
  static constexpr const char* tagValRequestToIntermediary = "794=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocReportRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 795;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AllocCancReplaceReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 796;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valOriginalDetailsIncompleteOrIncorrect = 1;
  static constexpr const int valChangeInUnderlyingOrderDetails = 2;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValOriginalDetailsIncompleteOrIncorrect = "796=1";
  static constexpr const char* tagValChangeInUnderlyingOrderDetails = "796=2";
  static constexpr const char* tagValOther = "796=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CopyMsgIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 797;

  using Types::Value<Types::Boolean>::Value;

};

struct AllocAccountType : Types::Value<Types::Int>
{
  static constexpr const int tag = 798;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccountIsCarriedOnCustomerSideOfBooks = 1;
  static constexpr const int valAccountIsCarriedOnNonCustomerSideOfBooks = 2;
  static constexpr const int valHouseTrader = 3;
  static constexpr const int valFloorTrader = 4;
  static constexpr const int valAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = 6;
  static constexpr const int valAccountIsHouseTraderAndIsCrossMargined = 7;
  static constexpr const int valJointBackofficeAccount = 8;

  static constexpr const char* tagValAccountIsCarriedOnCustomerSideOfBooks = "798=1";
  static constexpr const char* tagValAccountIsCarriedOnNonCustomerSideOfBooks = "798=2";
  static constexpr const char* tagValHouseTrader = "798=3";
  static constexpr const char* tagValFloorTrader = "798=4";
  static constexpr const char* tagValAccountIsCarriedOnNonCustomerSideOfBooksAndIsCrossMargined = "798=6";
  static constexpr const char* tagValAccountIsHouseTraderAndIsCrossMargined = "798=7";
  static constexpr const char* tagValJointBackofficeAccount = "798=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrderAvgPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 799;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct OrderBookingQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 800;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoSettlPartySubIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 801;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoPartySubIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 802;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PartySubIDType : Types::Value<Types::Int>
{
  static constexpr const int tag = 803;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoNestedPartySubIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 804;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NestedPartySubIDType : Types::Value<Types::Int>
{
  static constexpr const int tag = 805;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoNested2PartySubIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 806;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Nested2PartySubIDType : Types::Value<Types::Int>
{
  static constexpr const int tag = 807;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocIntermedReqType : Types::Value<Types::Int>
{
  static constexpr const int tag = 808;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPendingAccept = 1;
  static constexpr const int valPendingRelease = 2;
  static constexpr const int valPendingReversal = 3;
  static constexpr const int valAccept = 4;
  static constexpr const int valBlockLevelReject = 5;
  static constexpr const int valAccountLevelReject = 6;

  static constexpr const char* tagValPendingAccept = "808=1";
  static constexpr const char* tagValPendingRelease = "808=2";
  static constexpr const char* tagValPendingReversal = "808=3";
  static constexpr const char* tagValAccept = "808=4";
  static constexpr const char* tagValBlockLevelReject = "808=5";
  static constexpr const char* tagValAccountLevelReject = "808=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 810;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PriceDelta : Types::Value<Types::Float>
{
  static constexpr const int tag = 811;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ApplQueueMax : Types::Value<Types::Int>
{
  static constexpr const int tag = 812;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ApplQueueDepth : Types::Value<Types::Int>
{
  static constexpr const int tag = 813;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ApplQueueResolution : Types::Value<Types::Int>
{
  static constexpr const int tag = 814;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNoActionTaken = 0;
  static constexpr const int valQueueFlushed = 1;
  static constexpr const int valOverlayLast = 2;
  static constexpr const int valEndSession = 3;

  static constexpr const char* tagValNoActionTaken = "814=0";
  static constexpr const char* tagValQueueFlushed = "814=1";
  static constexpr const char* tagValOverlayLast = "814=2";
  static constexpr const char* tagValEndSession = "814=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ApplQueueAction : Types::Value<Types::Int>
{
  static constexpr const int tag = 815;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNoActionTaken = 0;
  static constexpr const int valQueueFlushed = 1;
  static constexpr const int valOverlayLast = 2;
  static constexpr const int valEndSession = 3;

  static constexpr const char* tagValNoActionTaken = "815=0";
  static constexpr const char* tagValQueueFlushed = "815=1";
  static constexpr const char* tagValOverlayLast = "815=2";
  static constexpr const char* tagValEndSession = "815=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoAltMDSource : Types::Value<Types::Int>
{
  static constexpr const int tag = 816;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AltMDSourceID : Types::Value<Types::String>
{
  static constexpr const int tag = 817;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecondaryTradeReportID : Types::Value<Types::String>
{
  static constexpr const int tag = 818;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AvgPxIndicator : Types::Value<Types::Int>
{
  static constexpr const int tag = 819;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valNoAveragePricing = 0;
  static constexpr const int valTradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID = 1;
  static constexpr const int valLastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID = 2;

  static constexpr const char* tagValNoAveragePricing = "819=0";
  static constexpr const char* tagValTradeIsPartOfAnAveragePriceGroupIdentifiedByTheTradeLinkID = "819=1";
  static constexpr const char* tagValLastTradeInTheAveragePriceGroupIdentifiedByTheTradeLinkID = "819=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeLinkID : Types::Value<Types::String>
{
  static constexpr const int tag = 820;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct OrderInputDevice : Types::Value<Types::String>
{
  static constexpr const int tag = 821;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingTradingSessionID : Types::Value<Types::String>
{
  static constexpr const int tag = 822;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingTradingSessionSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 823;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradeLegRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 824;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ExchangeRule : Types::Value<Types::String>
{
  static constexpr const int tag = 825;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TradeAllocIndicator : Types::Value<Types::Int>
{
  static constexpr const int tag = 826;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAllocationNotRequired = 0;
  static constexpr const int valAllocationRequiredgiveUpTradeAllocationInformationNotProvided = 1;
  static constexpr const int valUseAllocationProvidedWithTheTrade = 2;

  static constexpr const char* tagValAllocationNotRequired = "826=0";
  static constexpr const char* tagValAllocationRequiredgiveUpTradeAllocationInformationNotProvided = "826=1";
  static constexpr const char* tagValUseAllocationProvidedWithTheTrade = "826=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct ExpirationCycle : Types::Value<Types::Int>
{
  static constexpr const int tag = 827;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valExpireOnTradingSessionClose = 0;
  static constexpr const int valExpireOnTradingSessionOpen = 1;

  static constexpr const char* tagValExpireOnTradingSessionClose = "827=0";
  static constexpr const char* tagValExpireOnTradingSessionOpen = "827=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TrdType : Types::Value<Types::Int>
{
  static constexpr const int tag = 828;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valRegularTrade = 0;
  static constexpr const int valBlockTrade = 1;
  static constexpr const int valEFP = 2;
  static constexpr const int valTransfer = 3;
  static constexpr const int valLateTrade = 4;
  static constexpr const int valTTrade = 5;
  static constexpr const int valWeightedAveragePriceTrade = 6;
  static constexpr const int valBunchedTrade = 7;
  static constexpr const int valLateBunchedTrade = 8;
  static constexpr const int valPriorReferencePriceTrade = 9;
  static constexpr const int valAfterHoursTrade = 0;

  static constexpr const char* tagValRegularTrade = "828=0";
  static constexpr const char* tagValBlockTrade = "828=1";
  static constexpr const char* tagValEFP = "828=2";
  static constexpr const char* tagValTransfer = "828=3";
  static constexpr const char* tagValLateTrade = "828=4";
  static constexpr const char* tagValTTrade = "828=5";
  static constexpr const char* tagValWeightedAveragePriceTrade = "828=6";
  static constexpr const char* tagValBunchedTrade = "828=7";
  static constexpr const char* tagValLateBunchedTrade = "828=8";
  static constexpr const char* tagValPriorReferencePriceTrade = "828=9";
  static constexpr const char* tagValAfterHoursTrade = "828=0";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TrdSubType : Types::Value<Types::Int>
{
  static constexpr const int tag = 829;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TransferReason : Types::Value<Types::String>
{
  static constexpr const int tag = 830;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AsgnReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 831;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TotNumAssignmentReports : Types::Value<Types::Int>
{
  static constexpr const int tag = 832;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AsgnRptID : Types::Value<Types::String>
{
  static constexpr const int tag = 833;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ThresholdAmount : Types::Value<Types::Float>
{
  static constexpr const int tag = 834;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PegMoveType : Types::Value<Types::Int>
{
  static constexpr const int tag = 835;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PegOffsetType : Types::Value<Types::Int>
{
  static constexpr const int tag = 836;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PegLimitType : Types::Value<Types::Int>
{
  static constexpr const int tag = 837;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PegRoundDirection : Types::Value<Types::Int>
{
  static constexpr const int tag = 838;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PeggedPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 839;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct PegScope : Types::Value<Types::Int>
{
  static constexpr const int tag = 840;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valLocal = 1;
  static constexpr const int valNational = 2;
  static constexpr const int valGlobal = 3;
  static constexpr const int valNationalExcludingLocal = 4;

  static constexpr const char* tagValLocal = "840=1";
  static constexpr const char* tagValNational = "840=2";
  static constexpr const char* tagValGlobal = "840=3";
  static constexpr const char* tagValNationalExcludingLocal = "840=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DiscretionMoveType : Types::Value<Types::Int>
{
  static constexpr const int tag = 841;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DiscretionOffsetType : Types::Value<Types::Int>
{
  static constexpr const int tag = 842;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DiscretionLimitType : Types::Value<Types::Int>
{
  static constexpr const int tag = 843;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DiscretionRoundDirection : Types::Value<Types::Int>
{
  static constexpr const int tag = 844;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct DiscretionPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 845;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct DiscretionScope : Types::Value<Types::Int>
{
  static constexpr const int tag = 846;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valLocal = 1;
  static constexpr const int valNational = 2;
  static constexpr const int valGlobal = 3;
  static constexpr const int valNationalExcludingLocal = 4;

  static constexpr const char* tagValLocal = "846=1";
  static constexpr const char* tagValNational = "846=2";
  static constexpr const char* tagValGlobal = "846=3";
  static constexpr const char* tagValNationalExcludingLocal = "846=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TargetStrategy : Types::Value<Types::Int>
{
  static constexpr const int tag = 847;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TargetStrategyParameters : Types::Value<Types::String>
{
  static constexpr const int tag = 848;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct ParticipationRate : Types::Value<Types::Float>
{
  static constexpr const int tag = 849;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TargetStrategyPerformance : Types::Value<Types::Float>
{
  static constexpr const int tag = 850;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct LastLiquidityInd : Types::Value<Types::Int>
{
  static constexpr const int tag = 851;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAddedLiquidity = 1;
  static constexpr const int valRemovedLiquidity = 2;
  static constexpr const int valLiquidityRoutedOut = 3;

  static constexpr const char* tagValAddedLiquidity = "851=1";
  static constexpr const char* tagValRemovedLiquidity = "851=2";
  static constexpr const char* tagValLiquidityRoutedOut = "851=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct PublishTrdIndicator : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 852;

  static constexpr const bool valReportTrade = true;
  static constexpr const bool valDoNotReportTrade = false;

  static constexpr const char* tagValReportTrade = "852=Y";
  static constexpr const char* tagValDoNotReportTrade = "852=N";

  using Types::Value<Types::Boolean>::Value;

};

struct ShortSaleReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 853;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valDealerSoldShort = 0;
  static constexpr const int valDealerSoldShortExempt = 1;
  static constexpr const int valSellingCustomerSoldShort = 2;
  static constexpr const int valSellingCustomerSoldShortExempt = 3;
  static constexpr const int valQualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort = 4;
  static constexpr const int valQSROrAGUContraSideSoldShortExempt = 5;

  static constexpr const char* tagValDealerSoldShort = "853=0";
  static constexpr const char* tagValDealerSoldShortExempt = "853=1";
  static constexpr const char* tagValSellingCustomerSoldShort = "853=2";
  static constexpr const char* tagValSellingCustomerSoldShortExempt = "853=3";
  static constexpr const char* tagValQualifedServiceQSROrAutomaticGiveupAGUContraSideSoldShort = "853=4";
  static constexpr const char* tagValQSROrAGUContraSideSoldShortExempt = "853=5";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct QtyType : Types::Value<Types::Int>
{
  static constexpr const int tag = 854;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valUnits = 0;
  static constexpr const int valContractsIfUsedShouldSpecifyContractMultiplier = 1;

  static constexpr const char* tagValUnits = "854=0";
  static constexpr const char* tagValContractsIfUsedShouldSpecifyContractMultiplier = "854=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SecondaryTrdType : Types::Value<Types::Int>
{
  static constexpr const int tag = 855;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TradeReportType : Types::Value<Types::Int>
{
  static constexpr const int tag = 856;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSubmit = 0;
  static constexpr const int valAlleged = 1;
  static constexpr const int valAccept = 2;
  static constexpr const int valDecline = 3;
  static constexpr const int valAddendum = 4;
  static constexpr const int valNoOrWas = 5;
  static constexpr const int valTradeReportCancel = 6;
  static constexpr const int valLockedInTradeBreak = 7;

  static constexpr const char* tagValSubmit = "856=0";
  static constexpr const char* tagValAlleged = "856=1";
  static constexpr const char* tagValAccept = "856=2";
  static constexpr const char* tagValDecline = "856=3";
  static constexpr const char* tagValAddendum = "856=4";
  static constexpr const char* tagValNoOrWas = "856=5";
  static constexpr const char* tagValTradeReportCancel = "856=6";
  static constexpr const char* tagValLockedInTradeBreak = "856=7";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AllocNoOrdersType : Types::Value<Types::Int>
{
  static constexpr const int tag = 857;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct SharedCommission : Types::Value<Types::Float>
{
  static constexpr const int tag = 858;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ConfirmReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 859;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AvgParPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 860;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct ReportedPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 861;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoCapacities : Types::Value<Types::Int>
{
  static constexpr const int tag = 862;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct OrderCapacityQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 863;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoEvents : Types::Value<Types::Int>
{
  static constexpr const int tag = 864;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EventType : Types::Value<Types::Int>
{
  static constexpr const int tag = 865;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valPut = 1;
  static constexpr const int valCall = 2;
  static constexpr const int valTender = 3;
  static constexpr const int valSinkingFundCall = 4;
  static constexpr const int valOther = 99;

  static constexpr const char* tagValPut = "865=1";
  static constexpr const char* tagValCall = "865=2";
  static constexpr const char* tagValTender = "865=3";
  static constexpr const char* tagValSinkingFundCall = "865=4";
  static constexpr const char* tagValOther = "865=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EventDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 866;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct EventPx : Types::Value<Types::Float>
{
  static constexpr const int tag = 867;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct EventText : Types::Value<Types::String>
{
  static constexpr const int tag = 868;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct PctAtRisk : Types::Value<Types::Float>
{
  static constexpr const int tag = 869;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoInstrAttrib : Types::Value<Types::Int>
{
  static constexpr const int tag = 870;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct InstrAttribType : Types::Value<Types::Int>
{
  static constexpr const int tag = 871;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valFlat = 1;
  static constexpr const int valZeroCoupon = 2;
  static constexpr const int valInterestBearing = 3;
  static constexpr const int valNoPeriodicPayments = 4;
  static constexpr const int valVariableRate = 5;
  static constexpr const int valLessFeeForPut = 6;
  static constexpr const int valSteppedCoupon = 7;
  static constexpr const int valCouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field = 8;
  static constexpr const int valWhenAndIfIssued = 9;
  static constexpr const int valOriginalIssueDiscount = 0;
  static constexpr const int valCallablePuttable = 1;
  static constexpr const int valEscrowedToMaturity = 2;
  static constexpr const int valEscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field = 3;
  static constexpr const int valPrerefunded = 4;
  static constexpr const int valInDefault = 5;
  static constexpr const int valUnrated = 6;
  static constexpr const int valTaxable = 7;
  static constexpr const int valIndexed = 8;
  static constexpr const int valSubjectToAlternativeMinimumTax = 9;
  static constexpr const int valOriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field = 20;
  static constexpr const int valCallableBelowMaturityValue = 2;
  static constexpr const int valCallableWithoutNoticeByMailToHolderUnlessRegistered = 22;
  static constexpr const int valTextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field = 99;

  static constexpr const char* tagValFlat = "871=1";
  static constexpr const char* tagValZeroCoupon = "871=2";
  static constexpr const char* tagValInterestBearing = "871=3";
  static constexpr const char* tagValNoPeriodicPayments = "871=4";
  static constexpr const char* tagValVariableRate = "871=5";
  static constexpr const char* tagValLessFeeForPut = "871=6";
  static constexpr const char* tagValSteppedCoupon = "871=7";
  static constexpr const char* tagValCouponPeriodIfNotSemiAnnualSupplyRedemptionDateInTheInstrAttribValue872Field = "871=8";
  static constexpr const char* tagValWhenAndIfIssued = "871=9";
  static constexpr const char* tagValOriginalIssueDiscount = "871=0";
  static constexpr const char* tagValCallablePuttable = "871=1";
  static constexpr const char* tagValEscrowedToMaturity = "871=2";
  static constexpr const char* tagValEscrowedToRedemptionDateCallableSupplyRedemptionDateInTheInstrAttribValue872Field = "871=3";
  static constexpr const char* tagValPrerefunded = "871=4";
  static constexpr const char* tagValInDefault = "871=5";
  static constexpr const char* tagValUnrated = "871=6";
  static constexpr const char* tagValTaxable = "871=7";
  static constexpr const char* tagValIndexed = "871=8";
  static constexpr const char* tagValSubjectToAlternativeMinimumTax = "871=9";
  static constexpr const char* tagValOriginalIssueDiscountPriceSupplyPriceInTheInstrAttribValue872Field = "871=20";
  static constexpr const char* tagValCallableBelowMaturityValue = "871=2";
  static constexpr const char* tagValCallableWithoutNoticeByMailToHolderUnlessRegistered = "871=22";
  static constexpr const char* tagValTextSupplyTheTextOfTheAttributeOrDisclaimerInTheInstrAttribValue872Field = "871=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct InstrAttribValue : Types::Value<Types::String>
{
  static constexpr const int tag = 872;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DatedDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 873;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct InterestAccrualDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 874;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct CPProgram : Types::Value<Types::Int>
{
  static constexpr const int tag = 875;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int val3a = 1;
  static constexpr const int val4 = 2;
  static constexpr const int valOther = 99;

  static constexpr const char* tagVal3a = "875=1";
  static constexpr const char* tagVal4 = "875=2";
  static constexpr const char* tagValOther = "875=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CPRegType : Types::Value<Types::String>
{
  static constexpr const int tag = 876;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingCPProgram : Types::Value<Types::String>
{
  static constexpr const int tag = 877;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingCPRegType : Types::Value<Types::String>
{
  static constexpr const int tag = 878;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingQty : Types::Value<Types::Float>
{
  static constexpr const int tag = 879;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TrdMatchID : Types::Value<Types::String>
{
  static constexpr const int tag = 880;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct SecondaryTradeReportRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 881;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingDirtyPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 882;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingEndPrice : Types::Value<Types::Float>
{
  static constexpr const int tag = 883;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingStartValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 884;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingCurrentValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 885;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UnderlyingEndValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 886;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct NoUnderlyingStips : Types::Value<Types::Int>
{
  static constexpr const int tag = 887;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingStipType : Types::Value<Types::String>
{
  static constexpr const int tag = 888;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UnderlyingStipValue : Types::Value<Types::String>
{
  static constexpr const int tag = 889;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct MaturityNetMoney : Types::Value<Types::Float>
{
  static constexpr const int tag = 890;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MiscFeeBasis : Types::Value<Types::Int>
{
  static constexpr const int tag = 891;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TotNoAllocs : Types::Value<Types::Int>
{
  static constexpr const int tag = 892;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LastFragment : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 893;

  static constexpr const bool valLastMessage = true;
  static constexpr const bool valNotLastMessage = false;

  static constexpr const char* tagValLastMessage = "893=Y";
  static constexpr const char* tagValNotLastMessage = "893=N";

  using Types::Value<Types::Boolean>::Value;

};

struct CollReqID : Types::Value<Types::String>
{
  static constexpr const int tag = 894;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollAsgnReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 895;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CollInquiryQualifier : Types::Value<Types::Int>
{
  static constexpr const int tag = 896;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoTrades : Types::Value<Types::Int>
{
  static constexpr const int tag = 897;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct MarginRatio : Types::Value<Types::Float>
{
  static constexpr const int tag = 898;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct MarginExcess : Types::Value<Types::Float>
{
  static constexpr const int tag = 899;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct TotalNetValue : Types::Value<Types::Float>
{
  static constexpr const int tag = 900;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CashOutstanding : Types::Value<Types::Float>
{
  static constexpr const int tag = 901;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct CollAsgnID : Types::Value<Types::String>
{
  static constexpr const int tag = 902;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollAsgnTransType : Types::Value<Types::Int>
{
  static constexpr const int tag = 903;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CollRespID : Types::Value<Types::String>
{
  static constexpr const int tag = 904;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollAsgnRespType : Types::Value<Types::Int>
{
  static constexpr const int tag = 905;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CollAsgnRejectReason : Types::Value<Types::Int>
{
  static constexpr const int tag = 906;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CollAsgnRefID : Types::Value<Types::String>
{
  static constexpr const int tag = 907;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollRptID : Types::Value<Types::String>
{
  static constexpr const int tag = 908;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollInquiryID : Types::Value<Types::String>
{
  static constexpr const int tag = 909;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 910;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TotNumReports : Types::Value<Types::Int>
{
  static constexpr const int tag = 911;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LastRptRequested : Types::Value<Types::Boolean>
{
  static constexpr const int tag = 912;

  using Types::Value<Types::Boolean>::Value;

};

struct AgreementDesc : Types::Value<Types::String>
{
  static constexpr const int tag = 913;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AgreementID : Types::Value<Types::String>
{
  static constexpr const int tag = 914;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct AgreementDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 915;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct StartDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 916;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct EndDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 917;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

struct AgreementCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 918;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct DeliveryType : Types::Value<Types::Int>
{
  static constexpr const int tag = 919;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct EndAccruedInterestAmt : Types::Value<Types::Float>
{
  static constexpr const int tag = 920;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct StartCash : Types::Value<Types::Float>
{
  static constexpr const int tag = 921;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct EndCash : Types::Value<Types::Float>
{
  static constexpr const int tag = 922;

  static const char* tagVal(float f)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, f);
    return toStrBuff;
  }

  using Types::Value<Types::Float>::Value;

  static char toStrBuff[];
};

struct UserRequestID : Types::Value<Types::String>
{
  static constexpr const int tag = 923;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UserRequestType : Types::Value<Types::Int>
{
  static constexpr const int tag = 924;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valLogOnUser = 1;
  static constexpr const int valLogOffUser = 2;
  static constexpr const int valChangePasswordForUser = 3;
  static constexpr const int valRequestIndividualUserStatus = 4;

  static constexpr const char* tagValLogOnUser = "924=1";
  static constexpr const char* tagValLogOffUser = "924=2";
  static constexpr const char* tagValChangePasswordForUser = "924=3";
  static constexpr const char* tagValRequestIndividualUserStatus = "924=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NewPassword : Types::Value<Types::String>
{
  static constexpr const int tag = 925;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct UserStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 926;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valLoggedIn = 1;
  static constexpr const int valNotLoggedIn = 2;
  static constexpr const int valUserNotRecognised = 3;
  static constexpr const int valPasswordIncorrect = 4;
  static constexpr const int valPasswordChanged = 5;
  static constexpr const int valOther = 6;

  static constexpr const char* tagValLoggedIn = "926=1";
  static constexpr const char* tagValNotLoggedIn = "926=2";
  static constexpr const char* tagValUserNotRecognised = "926=3";
  static constexpr const char* tagValPasswordIncorrect = "926=4";
  static constexpr const char* tagValPasswordChanged = "926=5";
  static constexpr const char* tagValOther = "926=6";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UserStatusText : Types::Value<Types::String>
{
  static constexpr const int tag = 927;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct StatusValue : Types::Value<Types::Int>
{
  static constexpr const int tag = 928;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valConnected = 1;
  static constexpr const int valNotConnectedDownExpectedUp = 2;
  static constexpr const int valNotConnectedDownExpectedDown = 3;
  static constexpr const int valInProcess = 4;

  static constexpr const char* tagValConnected = "928=1";
  static constexpr const char* tagValNotConnectedDownExpectedUp = "928=2";
  static constexpr const char* tagValNotConnectedDownExpectedDown = "928=3";
  static constexpr const char* tagValInProcess = "928=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct StatusText : Types::Value<Types::String>
{
  static constexpr const int tag = 929;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RefCompID : Types::Value<Types::String>
{
  static constexpr const int tag = 930;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct RefSubID : Types::Value<Types::String>
{
  static constexpr const int tag = 931;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NetworkResponseID : Types::Value<Types::String>
{
  static constexpr const int tag = 932;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NetworkRequestID : Types::Value<Types::String>
{
  static constexpr const int tag = 933;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LastNetworkResponseID : Types::Value<Types::String>
{
  static constexpr const int tag = 934;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NetworkRequestType : Types::Value<Types::Int>
{
  static constexpr const int tag = 935;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSnapshot = 1;
  static constexpr const int valSubscribe = 2;
  static constexpr const int valStopSubscribing = 4;
  static constexpr const int valLevelOfDetailThenNoCompIDsBecomesRequired = 8;

  static constexpr const char* tagValSnapshot = "935=1";
  static constexpr const char* tagValSubscribe = "935=2";
  static constexpr const char* tagValStopSubscribing = "935=4";
  static constexpr const char* tagValLevelOfDetailThenNoCompIDsBecomesRequired = "935=8";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoCompIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 936;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NetworkStatusResponseType : Types::Value<Types::Int>
{
  static constexpr const int tag = 937;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valFull = 1;
  static constexpr const int valIncrementalUpdate = 2;

  static constexpr const char* tagValFull = "937=1";
  static constexpr const char* tagValIncrementalUpdate = "937=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoCollInquiryQualifier : Types::Value<Types::Int>
{
  static constexpr const int tag = 938;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct TrdRptStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 939;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccepted = 0;
  static constexpr const int valRejected = 1;

  static constexpr const char* tagValAccepted = "939=0";
  static constexpr const char* tagValRejected = "939=1";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct AffirmStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 940;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valReceived = 1;
  static constexpr const int valConfirmRejectedIeNotAffirmed = 2;
  static constexpr const int valAffirmed = 3;

  static constexpr const char* tagValReceived = "940=1";
  static constexpr const char* tagValConfirmRejectedIeNotAffirmed = "940=2";
  static constexpr const char* tagValAffirmed = "940=3";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct UnderlyingStrikeCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 941;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct LegStrikeCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 942;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct TimeBracket : Types::Value<Types::String>
{
  static constexpr const int tag = 943;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct CollAction : Types::Value<Types::Int>
{
  static constexpr const int tag = 944;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valRetain = 0;
  static constexpr const int valAdd = 1;
  static constexpr const int valRemove = 2;

  static constexpr const char* tagValRetain = "944=0";
  static constexpr const char* tagValAdd = "944=1";
  static constexpr const char* tagValRemove = "944=2";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CollInquiryStatus : Types::Value<Types::Int>
{
  static constexpr const int tag = 945;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valAccepted = 0;
  static constexpr const int valAcceptedWithWarnings = 1;
  static constexpr const int valCompleted = 2;
  static constexpr const int valCompletedWithWarnings = 3;
  static constexpr const int valRejected = 4;

  static constexpr const char* tagValAccepted = "945=0";
  static constexpr const char* tagValAcceptedWithWarnings = "945=1";
  static constexpr const char* tagValCompleted = "945=2";
  static constexpr const char* tagValCompletedWithWarnings = "945=3";
  static constexpr const char* tagValRejected = "945=4";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct CollInquiryResult : Types::Value<Types::Int>
{
  static constexpr const int tag = 946;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  static constexpr const int valSuccessful = 0;
  static constexpr const int valInvalidOrUnknownInstrument = 1;
  static constexpr const int valInvalidOrUnknownCollateralType = 2;
  static constexpr const int valInvalidParties = 3;
  static constexpr const int valInvalidTransportTypeRequested = 4;
  static constexpr const int valInvalidDestinationRequested = 5;
  static constexpr const int valNoCollateralFoundForTheTradeSpecified = 6;
  static constexpr const int valNoCollateralFoundForTheOrderSpecified = 7;
  static constexpr const int valCollateralInquiryTypeNotSupported = 8;
  static constexpr const int valUnauthorizedForCollateralInquiry = 9;
  static constexpr const int valOtherfurtherInformationInText = 99;

  static constexpr const char* tagValSuccessful = "946=0";
  static constexpr const char* tagValInvalidOrUnknownInstrument = "946=1";
  static constexpr const char* tagValInvalidOrUnknownCollateralType = "946=2";
  static constexpr const char* tagValInvalidParties = "946=3";
  static constexpr const char* tagValInvalidTransportTypeRequested = "946=4";
  static constexpr const char* tagValInvalidDestinationRequested = "946=5";
  static constexpr const char* tagValNoCollateralFoundForTheTradeSpecified = "946=6";
  static constexpr const char* tagValNoCollateralFoundForTheOrderSpecified = "946=7";
  static constexpr const char* tagValCollateralInquiryTypeNotSupported = "946=8";
  static constexpr const char* tagValUnauthorizedForCollateralInquiry = "946=9";
  static constexpr const char* tagValOtherfurtherInformationInText = "946=99";

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct StrikeCurrency : Types::Value<Types::String>
{
  static constexpr const int tag = 947;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct NoNested3PartyIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 948;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Nested3PartyID : Types::Value<Types::String>
{
  static constexpr const int tag = 949;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Nested3PartyIDSource : Types::Value<Types::Char>
{
  static constexpr const int tag = 950;

  static const char* tagVal(char c)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, c);
    return toStrBuff;
  }

  using Types::Value<Types::Char>::Value;

  static char toStrBuff[];
};

struct Nested3PartyRole : Types::Value<Types::Int>
{
  static constexpr const int tag = 951;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct NoNested3PartySubIDs : Types::Value<Types::Int>
{
  static constexpr const int tag = 952;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct Nested3PartySubID : Types::Value<Types::String>
{
  static constexpr const int tag = 953;

  static const char* tagVal(const char* str)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, str, 0);
    return toStrBuff;
  }

  using Types::Value<Types::String>::Value;

  static char toStrBuff[];
};

struct Nested3PartySubIDType : Types::Value<Types::Int>
{
  static constexpr const int tag = 954;

  static const char* tagVal(int i)
  {
    char* whereWrite = toStrBuff + 4;
    Types::writeThere(whereWrite, i);
    return toStrBuff;
  }

  using Types::Value<Types::Int>::Value;

  static char toStrBuff[];
};

struct LegContractSettlMonth : Types::Value<Types::MonthYear>
{
  static constexpr const int tag = 955;

  static const char* tagVal(int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::MonthYear monthYear; monthYear.year = year; monthYear.month = month;
    Types::writeThere(whereWrite, monthYear);
    return toStrBuff;
  }

  using Types::Value<Types::MonthYear>::Value;

  static char toStrBuff[];
};

struct LegInterestAccrualDate : Types::Value<Types::Date>
{
  static constexpr const int tag = 956;

  static const char* tagVal(int day, int month, int year)
  {
    char* whereWrite = toStrBuff + 4;
    Types::Date date; date.year = year; date.month = month; date.day = day;
    Types::writeThere(whereWrite, date);
    return toStrBuff;
  }

  using Types::Value<Types::Date>::Value;

  static char toStrBuff[];
};

} //namespace FIX
