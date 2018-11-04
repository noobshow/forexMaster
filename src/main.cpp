#include <thread>
#include <Logger.hpp>
#include <FIX/Tags.hpp>
#include <FIX/Session/Session.hpp>

int main()
{
    FIX::Session fixSession;
    fixSession.start("h18.p.ctrader.com", 5201, "asd", "thisIsATemporaryPassword");

    std::this_thread::sleep_for(std::chrono::seconds(1));

    fixSession.finish();

    return 0;
}