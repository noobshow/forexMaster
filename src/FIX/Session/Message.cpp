#include "Session.hpp"

namespace FIX
{
    Session::Message::Message(){}

    Session::Message::Message(const Session::Message& msg)
    {
        *this = msg;
    }

    Session::Message::Message(Session::Message&& msg)
    {
        *this = std::move(msg);
    }

    Session::Message& Session::Message::operator=(const Session::Message& msg)
    {
        tagVals = msg.tagVals;
        recvTime = msg.recvTime;
        checkSum = msg.checkSum;
        memory = msg.memory;
        return *this;
    }

    Session::Message& Session::Message::operator=(Session::Message&& msg)
    {
        tagVals = std::move(msg.tagVals);
        recvTime = msg.recvTime;
        checkSum = msg.checkSum;
        memory = msg.memory;
        return *this;
    }
}