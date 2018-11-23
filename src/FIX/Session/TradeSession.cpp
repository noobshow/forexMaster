#include "TradeSession.hpp"

namespace FIX
{
    TradeSession::TradeSession()
    {

    }

    void TradeSession::finish()
    {
        ((Session*)this)->finish();
    }

    TradeSession::~TradeSession()
    {
        finish();
    }
} //namespace FIX