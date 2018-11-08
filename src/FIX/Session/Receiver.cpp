#include "Session.hpp"

namespace FIX
{
    char Session::Receiver::getNextChar()
    {
        //If already loaded then return it
        if(recvBuffPos < recvBuffEnd)
            return *(recvBuffPos++);
        else
        {
            while(!socket.isSomethingToReceive()) 
            //This should be solved with block-timeout sockets - now its eating CPU //TODO
            {
                //Check if thread should exit
                //Checking it here allows to minize checks while still exiting pretty fast
                if(timeToFinish)
                    pthread_exit(0); //imho the most convienient way to exit x.x

                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }

            if(socket.hasDisconnected())
            {
                logg << "Server disconnected!\n";
                timeToFinish = true;
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

    void Session::Receiver::receive()
    {
        bool wasLastRawDataLen = false;
        int rawDataLen = 0;

        std::vector<TagVal> curMessage;

        //For first two tags memForStart is used as value storage
        //Then when length is known everything is copied onto new chunk of memory
        //that is managed by first MemoryGuard then Message if succesfully created
        char memoryForStart[128]; //Here are stored first two tag's vals
        char* memoryForStartEnd = memoryForStart + 127;
        *memoryForStartEnd = 0;

        //curMem for writing tag value
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
                theMessage.recvTime = clock::now();
                theMessage.checkSum = checkSumFromMsg;

                memoryGuard.ptr = nullptr;
                theMessage.memory = 
                    std::make_shared<bool>();
                // /\ this keeps refernce count - its ugly will be better //TODO

                mySession->onNewMessage(std::move(theMessage));

                curMessage.clear();
                curMem = memoryForStart;
                curMemEnd = memoryForStartEnd;
            }
        }
    }

}