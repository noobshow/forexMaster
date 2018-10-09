#include "TCPSocket.hpp"

#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <cstdio> 
#include <errno.h>
#include <sys/ioctl.h>

TCPSocket::TCPSocket()
    {socket = -1;}


bool TCPSocket::connectTo(const char* ipv4addr, unsigned short port)
{
    if((socket = ::socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("[TCPSocket]: Socket creation");
        return false;
    }

    sockaddr_in serverAddress;
    memset(&serverAddress, '0', sizeof(serverAddress));

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(port);

    if(inet_pton(AF_INET, ipv4addr, &serverAddress.sin_addr) <= 0)
    {
        perror("[TCPSocket]: Invalid address");
        return -1;
    }

    if(::connect(socket, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0)
    {
        perror("[TCPSocket]: Connect");
        return -1;
    }

    return 0;
}

TCPSocket::sizeT TCPSocket::send(void* data, TCPSocket::sizeT dataSize)
{
    return ::send(socket, data, dataSize, 0);
}
    
bool TCPSocket::isSomethingToReceive() const //thats kinda prototypa - gotta learn more about this
{
    fd_set theSet;
    FD_ZERO(&theSet);
    FD_SET(socket, &theSet);

    timeval timeout;
    timeout.tv_sec = 0;
    timeout.tv_usec = 0;
    int activity = select(socket + 1, &theSet , NULL , NULL , &timeout);  
    
    if ((activity < 0) && (errno!=EINTR))  
    {  
        perror("select");
    }

    return FD_ISSET(socket, &theSet);
}

TCPSocket::sizeT TCPSocket::avaliableBytes() const
{
    int avaliableBytes;
    ioctl(socket, FIONREAD, &avaliableBytes);
	return avaliableBytes;
}

TCPSocket::sizeT TCPSocket::receive(void* data, TCPSocket::sizeT dataSize)
{
	return ::recv(socket, data, dataSize, 0);;
}

bool TCPSocket::hasClosed() const
{
    return (isSomethingToReceive() && (avaliableBytes() <= 0));
}

void TCPSocket::close()
{
	::close(socket);
}

TCPSocket::~TCPSocket()
{
    if(!hasClosed())
        close();
}