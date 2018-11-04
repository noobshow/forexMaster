#include "Session.hpp"

namespace FIX
{
    Session::Message::Message(){}

    Session::Message::Message(const Session::Message& msg)
    {
        tagVals = msg.tagVals;
        recvTime = msg.recvTime;
        checkSum = msg.checkSum;
    }

    Session::Message::Message(Session::Message&& msg)
    {
        tagVals = std::move(msg.tagVals);
        recvTime = msg.recvTime;
        checkSum = msg.checkSum;
    }
}