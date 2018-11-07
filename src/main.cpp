#include <thread>
#include <Logger.hpp>
#include <FIX/Tags.hpp>
#include <FIX/Session/Session.hpp>

int main()
{
    FIX::Session fixSession;
    if(fixSession.start("h18.p.ctrader.com", 5201, "asd", "thisIsATemporaryPassword"))
    {
        logg << "Session started!\n";
    }
    else
    {
        logg << "Session failed to start!\n";
    }

    std::this_thread::sleep_for(std::chrono::seconds(600));

    fixSession.finish();

    return 0;
}