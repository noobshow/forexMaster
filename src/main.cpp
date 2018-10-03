#include "Logger.hpp"
#include <ForexConnect.h>
#include "SessionStatusListener.hpp"


int main() 
{   

    const char *mSubSessionID = "";
    const char *mPin = "";
    auto mSession = CO2GTransport::createSession();
    SessionStatusListener *sessionStatusListener = new SessionStatusListener(mSession, mSubSessionID, mPin);
    mSession->subscribeSessionStatus(sessionStatusListener);
    //mSession->login();

    return 0;
}