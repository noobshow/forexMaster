#pragma once

#include "Session.hpp"

namespace FIX
{
class TradeSession : public Session
{
public:
    TradeSession();

    void finish();

    ~TradeSession();
}; //class TradeSession
} //namespace FIX