#pragma once


template <class T>
class ConcurrentQueue
{
public:
    ConcurrentQueue();

    template <class... Args>
    void push(Args&&... args);

    bool try_get_for(T& t, int timeoutInMS);

private:
    std::deque<T> theQueue;

    int howManyWaiting;
    std::condition_variable isSomethingToGet;
    std::mutex conditionLock;
};


template <class T>
ConcurrentQueue<T>::ConcurrentQueue()
{
    howManyWaiting = 0;
}

template <class T>
template <class... Args>
void ConcurrentQueue<T>::push(Args&&... args)
{
    std::unique_lock<std::mutex> conditionLockGuard(conditionLock);

    theQueue.emplace_back(std::forward<Args>(args)...);
    isSomethingToGet.notify_one();
}


template <class T>
bool ConcurrentQueue<T>::try_get_for(T& t, int timeoutInMS)
{
    std::unique_lock<std::mutex> conditionLockGuard(conditionLock);
    howManyWaiting++;

    //If isnt empty and noone is waiting then take else wait
    if(theQueue.empty() || howManyWaiting > 1)
    {
        auto waitRes = isSomethingToGet.wait_for(conditionLockGuard, std::chrono::milliseconds(timeoutInMS));

        if(waitRes == std::cv_status::timeout)
        {
            howManyWaiting--;
            return false;
        }
    }

    t = std::move(theQueue.front()); 
    theQueue.pop_front(); 

    howManyWaiting--;
    return true;
}
