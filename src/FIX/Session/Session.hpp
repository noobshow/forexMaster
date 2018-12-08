#pragma once
#include "TCPSocket.hpp"
#include "../Types.hpp"
#include "../Tags.hpp"
#include <utils/Logger.hpp>
#include <list>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>
#include <shared_mutex>
#include <unordered_map>
#include <map>
#include <functional>
#include "MaxSizeQueue.hpp"

namespace FIX
{

class Session
{
public:
    Session();

    bool start(const char* serverHostName, int port,  //ex. 127.0.0.1, 1234
               const char* senderCompID, const char* senderSubID, // fxpig.12345, QUOTE
               const char* targetCompID, const char* targetSubID, // CSERVER, QUOTE
               const char* username,     const char* password);  // 12345, pa55word!

    void finish();
    ~Session();

protected:
    Logger sessionLogg;
    Logger receiveLogg; // = sessionLog.coLogger("receiveLog.txt")

//Basic Session functionality
    using clock = std::chrono::system_clock;
    using timePoint = std::chrono::system_clock::time_point;

    class Receiver;
    #include "Receiver.hpp"

    struct TagVal
    {
        int tag;
        const char* val; //cstring with received value (unparsed)
    };

    struct Message
    {
        std::vector<TagVal> tagVals;

        int checkSum;
        timePoint recvTime;

        bool isMsgType(const char*) const;

        //Not important
        Message();
        Message(const Message& msg);
        Message(Message&& msg);
        Message& operator=(const Message& msg);
        Message& operator=(Message&& msg); //to avoid unnecesary copying
        ~Message(){if(memory.unique())delete[] tagVals[0].val;}
    private:
        friend Receiver;
        std::shared_ptr<bool> memory; 
        //keeps track of how many copies of this message exist
        //this is ugly will be handled better in the future //TODO
    };

//Session data
    std::string senderCompID; // ex. fxpig.3001287
    std::string targetCompID; // ex. CSERVER
    std::string senderSubID;  // ex. QUOTE/TRADE
    std::string targetSubID;  // ex. QUOTE/TRADE
    std::string username;     // 3001287
    std::string password; // <password>

//<Internet stuff>
    TCPSocket socket;

//Sending
    char* sendBuff;
    char* sendBuffContentStart; //Send Buffer after 8=FIX4.4|9=12345|
    std::mutex sendLock;
    std::map<int, std::vector<char> > sendMessages; //messages older than 1000 back are deleted
    //std::shared_mutex sendMessagesLock;

    template <class MsgTypeT, class... Args>
    void sendNextMessage(const MsgTypeT& msgTypeTagVal, const Args&... tagVals);
    // Sends message with approperiate header and trailer
    // updates msgSeqNum etc.

    template <class... Args> 
    int sendTagVals(const Args&... tagVals);
    // Usage e.g. sendMessage(FIX::MsgType::tagValLogon, FIX::Price::tagVal(40));
    // its a helper for sendNxtMessage

    //helpers for sendTagVals
    void addTagVal(const char* tagVal, char*& last);
    template <class T>
    void addTagVal(const writeableTagVal<T>& writeableTagVal, char*& last);

//Receiving
    Receiver* receiver;

    MaxSizeQueue<Message> recvQueue;
    std::shared_mutex recvQueueLock;

    std::condition_variable newMessage;
    std::mutex newMessageLock;

    // Callback called by receiver (from its thread) when new message is received
    void onNewMessage(Message&& msg);

    // Waits until specified message arrives
    // evaluationFunc should return true if message given 
    // is the one we are waiting for
    // If Message is found returns true else false
    // LastCheckedIndex will be updated automatically
    bool waitForMessage(int timeoutMS,
                        const std::function<bool (const Message& m)>& evaluationFunc,
                        int& lastCheckedIndex);

    // Will call doFunc for every new message
    // Stops when isTimeToStop becomes true
    void doForNewMessages(const std::function<void (const Message& m)>& doFunc);

    int getLastMessageIndex();
// </Internet stuff>

//Session handling
    std::atomic<bool> isTimeToStop; // <- to stop threads and session

    std::atomic<int> msgSeqNum;

    bool login();
    void logout();

    std::thread* heartbeatThread;
    int heartbeatFrequency;
    void handleHeartbeat();

    std::thread* resendThread;
    void handleResending();
};


    //Template funcs definitions
    template <class T>
    void Session::addTagVal(const writeableTagVal<T>& writeableTagVal, char*& last){
        last = writeableTagVal.writeThere(last);
    };


    template <class... Args> 
    int FIX::Session::sendTagVals(const Args&... tagVals)
    {
        char* last = sendBuffContentStart;

        //Add all user-given tags
        (... , addTagVal(tagVals, last));
        
        //BodyLen
        int bodyLen = last-sendBuffContentStart;
        char bodyLenStr[10];
        sprintf(bodyLenStr, "%d", bodyLen);
        int bodyLenStrLen = strlen(bodyLenStr);
        strcpy(sendBuffContentStart - bodyLenStrLen-1, bodyLenStr);
        for(char* c = sendBuffContentStart-bodyLenStrLen-2; *c != '='; c--){*c = '0';}
        *(sendBuffContentStart-1) = FIX::SOH;

        //Checksum
        int checkSum = 0;
        for(char* c = sendBuff; c < last; c++)
            checkSum = (checkSum + *c)%256;

        *(last++) = '1';
        *(last++) = '0';
        *(last++) = '=';
        *(last++) = '0' + (checkSum/100)%10;
        *(last++) = '0' + (checkSum/10)%10;
        *(last++) = '0' + (checkSum%10);
        *(last++) = FIX::SOH;

        socket.send(sendBuff, last-sendBuff);

        return last - sendBuff;
    }


    template <class MsgTypeTagVal, class... TagVals>
    void Session::sendNextMessage(const MsgTypeTagVal& msgTypeTagVal, const TagVals&... tagVals)
    {
        std::scoped_lock sendLockGuard(sendLock);

        auto msgLen = sendTagVals(
            msgTypeTagVal, 
            FIX::SenderCompID::tagVal(senderCompID.c_str()),
            FIX::SenderSubID::tagVal(senderSubID.c_str()),
            FIX::TargetCompID::tagVal(targetCompID.c_str()),
            FIX::TargetSubID::tagVal(targetSubID.c_str()),
            FIX::MsgSeqNum::tagVal(msgSeqNum),
            FIX::SendingTime::tagVal(FIX::getUTCDateAndTime()),
            tagVals...
        );
        
        if(sendMessages.size() > 1000)
            sendMessages.erase(sendMessages.begin());

        auto& curMsg = sendMessages[msgSeqNum];
        curMsg.resize(msgLen);
        memcpy(&curMsg[0], sendBuff, msgLen);

        msgSeqNum++;

        sessionLogg << dateAndTimeStamp() << '\n';
        sessionLogg << "MESSAGE SENT: \n";
        for(char c : curMsg) sessionLogg << (c == FIX::SOH ? '|' : c); 
        sessionLogg << '\n';
    }   
}//namespace FIX

