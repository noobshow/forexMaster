#include "Logger.hpp"
#include "TCPSocket.hpp"
#include "FIX.hpp"
#include "Waiter.hpp"
#include <string>
#include <thread>

TCPSocket theSocket;

inline char* addCstring(char* where, const char* cStr)
{
    char* res = strcpy(where, cStr) + strlen(cStr);
    *res = FIX::SOH;
    return (res+1);
}

inline char* addCstring(char* where, const char c)
{
    *(where++) = c;
    return where+1;
}

template <class T, class... Args> inline char* addCstring(char* where, T a, const Args&... args)
{
    return addCstring(addCstring(where, a), args...);
}
    

char msgBuff[1024*1024];
char* realMsgStart;

template <class... Args> void sendMessage(const Args&... args)
{
    //All user-given tags
    auto last = addCstring(realMsgStart, args...);
    
    //BodyLen
    int bodyLen = last-realMsgStart;
    logg << bodyLen << '\n';
    char bodyLenStr[10];
    sprintf(bodyLenStr, "%d", bodyLen);
    int bodyLenStrLen = strlen(bodyLenStr);
    strcpy(realMsgStart - bodyLenStrLen-1, bodyLenStr);
    for(char* c = realMsgStart-bodyLenStrLen-2; *c != '='; c--){*c = '0';}
    *(realMsgStart-1) = FIX::SOH;

    //Checksum
    int checkSum = 0;
    for(char* c = msgBuff; c < last; c++)
        checkSum = (checkSum + *c)%256;

    *(last++) = '1';
    *(last++) = '0';
    *(last++) = '=';
    *(last++) = '0' + (checkSum/100)%10;
    *(last++) = '0' + (checkSum/10)%10;
    *(last++) = '0' + (checkSum%10);
    *(last++) = FIX::SOH;

    theSocket.send(msgBuff, last-msgBuff);

    logg << "MESSAGE SENT: ";
    for(char* c = msgBuff; *c != 0; c++) logg << (*c == FIX::SOH ? '|' : *c); 
    logg << '\n';
}

char recvBuff[1024*1024];



bool Login()
{
    logg << "Logging in...\n";

    auto curTime = FIX::getCurUTCDateAndTime();

    /*
    Host name: h23.p.ctrader.com
    (Current IP address 46.105.103.224 can be changed without notice)
    Port: 5211 (SSL), 5201 (Plain text).
    Password: (a/c 3001287 password)
    SenderCompID: fxpig.3001287
    TargetCompID: CSERVER
    SenderSubID: QUOTE
    */

    sendMessage(
        FIX::MsgType::tagValLogon,
        FIX::SenderCompID::tagVal("fxpig.3001287"),
        FIX::TargetCompID::tagVal("CSERVER"),
        FIX::TargetSubID::tagVal("QUOTE"),
        FIX::SenderSubID::tagVal("QUOTE"),
        FIX::MsgSeqNum::tagVal(1),
        FIX::SendingTime::tagVal(curTime.day, curTime.month, curTime.year, curTime.hour, curTime.minute, curTime.second),
        FIX::EncryptMethod::tagValNoneOrOther,
        FIX::HeartBtInt::tagVal(30),
        FIX::ResetSeqNumFlag::tagValYesResetSequenceNumbers,
        FIX::Username::tagVal("3001287"),
        FIX::Password::tagVal("thisIsATemporaryPassword1337")
    );

    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    if(theSocket.isSomethingToReceive())
    {
        auto bytesReceived = theSocket.receive(recvBuff, theSocket.avaliableBytes());
        recvBuff[bytesReceived] = 0;
    }
    else
    {
        logg << "Didnt receive answer in time! aborting...\n";
        abort();
        return false;
    }

    if(theSocket.hasDisconnected())
    {
        logg << "Server disconnected!\n";
        return false;
    }

    logg << "MESSAGE RECEIVED:\n";
    for(char* c = recvBuff; *c != 0; c++) logg << (*c == FIX::SOH ? '|' : *c); 
    logg << '\n';
    return true;
}

int main()
{
    const char* serverAddr = "46.105.103.224";
    auto serverPort = 5201;

    if(theSocket.connectTo(serverAddr, serverPort))
        logg << "Succesfully connected to server " << serverAddr << ":" << serverPort << " !!\n";
    else
    {
        logg << "Failed to connect to server " << serverAddr << ":" << serverPort << " !!\n";
        return 0;
    }

    if(theSocket.hasDisconnected())
    {
        logg << "Server disconnected!\n";
        return 0;
    }

    realMsgStart = addCstring(msgBuff, FIX::BeginString::tagValFIX44,"9=123");

    Login();

    theSocket.close();
}