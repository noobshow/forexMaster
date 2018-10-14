/*
#include <chrono>

struct Waiter
{
    Waiter(float seconds)
    {
        howMuchWait = seconds;
        start = cock.now();
    }

    bool isDone()
    {
        return (std::chrono::duration<double, std::chrono::seconds>(cock.now()-start).count() > howMuchWait);
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    float howMuchWait;

    static std::chrono::high_resolution_clock cock;
};
*/