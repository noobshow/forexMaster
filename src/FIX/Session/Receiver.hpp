
//Works on seperate thread and handles receiving and initial parsing of FIX messages


class Receiver
{
public:
    Receiver(Session* MySession, TCPSocket& sessionSocket, int checkFrequency = 100) 
    : mySession(MySession), socket(sessionSocket)
    {
        buff = (char*)malloc(buffSize);
        recvBuffPos = buff;
        recvBuffEnd = buff;

        timeToFinish = false;
        receiveThread = new std::thread([this](){this->receive();});
    }

    void finish()
    {
        if(receiveThread != nullptr)
        {
            timeToFinish = true;
            receiveThread->join();
            delete receiveThread;
            receiveThread = nullptr;
        }
    }

    ~Receiver()
    {
        finish();
        free(buff);
    }

private:
    Session* mySession;
    TCPSocket& socket;
    char* buff;
    char* recvBuffPos;
    char* recvBuffEnd;
    static constexpr const int buffSize = 1024;

    std::thread* receiveThread;
    std::atomic<bool> timeToFinish;

    //Get next char from tcp stream
    char getNextChar();

    //handle receiving
    void receive();
};