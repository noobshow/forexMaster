#include "QuoteSession.hpp"
#include "../Tags.hpp"

namespace FIX
{
    QuoteSession::QuoteSession()
    {
        subscriptionThread = nullptr;
    }

    QuoteSession::~QuoteSession()
    {
        finish();
    }
    
    void QuoteSession::finish()
    {
        ((Session*)this)->finish();

        static bool logoutSent = false;

        if(!socket.hasDisconnected() && !logoutSent)
        {
            //Here should actually send logout //TODO
            socket.close();
            logoutSent = true;
        }

        if(subscriptionThread != nullptr)
        {
            subscriptionThread->join();
            delete subscriptionThread;
            subscriptionThread = nullptr;
        }
    }

    //SUBSCRIPTION
    void QuoteSession::subscribeForCurrency(const char* currencySymbol, 
    const std::function<void (float, float)>& callbackFunc)
    {
        sendNextMessage(
            FIX::MsgType::tagValMarketDataRequest,
            FIX::MDReqID::tagVal("TEST"),
            FIX::SubscriptionRequestType::tagValSnapshotplusUpdates,
            FIX::MarketDepth::tagValTopOfBook, //What does it do? //TODO
            FIX::MDUpdateType::tagValIncrementalRefresh,

            FIX::NoRelatedSym::tagVal(1), // <- how many symbols
            FIX::Symbol::tagVal(currencySymbol),
            FIX::NoMDEntryTypes::tagVal(2),
            FIX::MDEntryType::tagValBid,
            FIX::MDEntryType::tagValOffer
        );


        subscribeCallbacks[std::string(currencySymbol)] = callbackFunc;

        if(subscriptionThread == nullptr)
            subscriptionThread = new std::thread([this](){this->handleSubscriptions();});
            /*
            Possible FxPig SymbolIDs:
            EURUSD 1
            GBPUSD 2
            EURJPY 3
            USDJPY 4
            AUDUSD 5
            USDCHF 6
            GBPJPY 7
            USDCAD 8
            EURGBP 9
            EURCHF 10
            AUDJPY 11
            */

    }

    void QuoteSession::handleSubscriptions()
    {
        doForNewMessages([this](const Message& msg)
        {
            if(!msg.isMsgType(FIX::MsgType::valMarketDataSnapshotOrFullRefresh))
                return;

            float bid = 0;
            float offer = 0;
            const char* symbol = nullptr;
            std::function<void(float,float)>* callback = nullptr;
            for(int i = 0; i < (int)msg.tagVals.size(); i++)
            {
                auto&& tagVal = msg.tagVals[i];

                if(tagVal.tag == FIX::Symbol::tag)
                {
                    symbol = tagVal.val;
                    subscribeCallbacksLock.lock();
                    auto findRes = subscribeCallbacks.find(std::string(symbol));
                    if(findRes == subscribeCallbacks.end())
                        symbol = nullptr;
                    else
                        callback = &(findRes->second);
                    subscribeCallbacksLock.unlock();
                }

                if(symbol != nullptr && tagVal.tag == FIX::MDEntryType::tag)
                {
                    if(tagVal.val[0] == FIX::MDEntryType::valBid 
                        && i+1 < (int)msg.tagVals.size())
                            bid = FIX::floatOfStr(msg.tagVals[i+1].val);
                    
                    if(tagVal.val[0] == FIX::MDEntryType::valOffer
                        && i+1 < (int)msg.tagVals.size())
                            offer = FIX::floatOfStr(msg.tagVals[i+1].val);
                }
            }

            if(callback != nullptr)
                (*callback)(bid, offer);
        });
    }
} //namespace FIX