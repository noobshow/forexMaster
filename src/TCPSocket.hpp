#pragma once

//Wrapper for TCP Socket

class TCPSocket
{
using sizeT = int;

public:
    TCPSocket();

    bool connectTo(const char* ipv4, unsigned short port);
    sizeT send(void* data, sizeT dataSize);

    bool isSomethingToReceive() const;
    sizeT avaliableBytes() const;
    sizeT receive(void* dataBuff, sizeT howMuch);

    bool hasDisconnected() const;
    //bool checkConnection(); losing connection != hasClosed

    void close();

    ~TCPSocket();
//private:
    int sockfd;
};