
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
        receiveThread = new std::thread(callReceiveOnObj, this);
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

    //Something like boost::bind, threads cannot be non-static funcs
    static void callReceiveOnObj(Receiver* obj)
        {obj->receive();}

    //Get next char from tcp stream
    char getNextChar()
    {
        //If already loaded then return it
        if(recvBuffPos < recvBuffEnd)
            return *(recvBuffPos++);
        else
        {
            //Check if thread should exit
            //Checking it here allows to minize checks while exiting pretty fast
            while(!socket.isSomethingToReceive())
            {
                if(timeToFinish)
                    pthread_exit(0);
            }

            //Load another chunk of data
            if(recvBuffPos == buff + buffSize)
                recvBuffPos = buff;

            auto bytesReceived = socket.receive(recvBuffPos, buff + buffSize - recvBuffPos);
            recvBuffEnd = recvBuffPos + bytesReceived;

            return *(recvBuffPos++);
        }
    }

    void receive()
    {
        bool wasLastRawDataLen = false;
        int rawDataLen = 0;

        std::vector<TagVal> curMessage;

        //For first two tags memForStart is used as value storage
        //Then when length is known everything is copied onto new chunk of memory
        //that is managed by first TagVal in curMsg
        char memoryForStart[128]; //Here are stored first two tag's vals
        char* memoryForStartEnd = memoryForStart + 127;
        *memoryForStartEnd = 0;

        //curMem for writing val
        char* curMem = memoryForStart;
        char* curMemEnd = memoryForStartEnd;
        
        struct MemoryGuard{
            char* ptr = nullptr;
            ~MemoryGuard() {if(ptr != nullptr){delete[] ptr;}}
        } memoryGuard;
        //If thread exits before creating message memory must be freed


        while(true)
        {
            curMessage.emplace_back();
            TagVal* cur = &curMessage.back();

            //Skip junk until tag
            char c = getNextChar();
            while (c < '0' || c > '9')
                c = getNextChar();

            //Read tag
            for(cur->tag = 0; '0' <= c && c <= '9'; c = getNextChar())
                cur->tag = cur->tag*10 + (c-'0');

            if(cur->tag < 1 || cur->tag > 1000*1000)
            {
                //Oops
            }

            if(c != '=')
            {
                //Oops
            }

            //Get value (cstring from '=' to SOH)
            cur->val = curMem;

            if(!wasLastRawDataLen)
            {//Normal processing
                while(true)
                {
                    c = getNextChar();

                    if(c == FIX::SOH)
                        break;

                    if(curMem < curMemEnd)
                        *(curMem++) = c;
                    else
                        ;//Ooops
                }
            }
            else
            {//Raw data processing
                for(int i = 0; i < rawDataLen; i++)
                {
                    c = getNextChar();

                     if(curMem < curMemEnd)
                        *(curMem++) = c;
                    else
                        ;//Ooops
                }
            }


            //End each cstring with NULL
            if(curMem < curMemEnd)
                *(curMem++) = 0;
            else
                ;//Ooops

            //Start of message
            if(cur->tag == FIX::BeginString::tag) 
            {
                if(curMessage.size() > 1)
                {
                    //Oops
                } 
            }
            
            //Length of message - here we know how much memory to alloc
            if(cur->tag == FIX::BodyLength::tag)
            {
                int len = atoi(cur->val);
                int howMuchMem = len + 20;

                char* mem4Msg = new char[howMuchMem];
                memoryGuard.ptr = mem4Msg;

                memcpy(mem4Msg, memoryForStart, curMem - memoryForStart);

                curMem = mem4Msg + (curMem - memoryForStart);

                for(auto& tagVal : curMessage)
                    tagVal.val = mem4Msg + (tagVal.val - memoryForStart);

                curMemEnd = mem4Msg + howMuchMem - 1;
                *curMemEnd = 0;
            }

            //Next Message will include Raw data, wchich might be SOH
            if(cur->tag == FIX::RawDataLength::tag) 
            {
                wasLastRawDataLen = true;
                rawDataLen = atoi(cur->val);
            }
            else
                wasLastRawDataLen = false;

            //End of message
            if(cur->tag == FIX::CheckSum::tag)
            {
                int checkSum = 0;
                for(auto& tagVal : curMessage)
                {
                    if(tagVal.tag == FIX::CheckSum::tag)
                        continue;

                    for(int tag = tagVal.tag; tag > 0; tag /= 10)
                    {
                        checkSum = (checkSum + '0' + (tag%10))%256;
                    }

                    checkSum = (checkSum + '=')%256;

                    for(const char* ch = tagVal.val; *ch != 0; ch++)
                        checkSum = (checkSum + *ch)%256;

                    checkSum = (checkSum + FIX::SOH)%256;
                }


                int checkSumFromMsg = atoi(cur->val);

                Message theMessage;
                theMessage.tagVals = std::move(curMessage);
                theMessage.recvTime = getCurUTCDateAndTime();
                theMessage.checkSum = checkSumFromMsg;

                memoryGuard.ptr = nullptr;
                theMessage.memory = 
                    std::make_shared<bool>();
                //Since c++17 calls delete[] on arrays by itself C:

                mySession->onNewMessage(std::move(theMessage));

                curMessage.clear();
                curMem = memoryForStart;
                curMemEnd = memoryForStartEnd;
            }
        }
    }
};