#include "TCPSocket.hpp"

#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <cstdio> 
#include <errno.h>
#include <sys/ioctl.h>
#include <netdb.h>

TCPSocket::TCPSocket()
    {sockfd = -1;}


bool TCPSocket::connectTo(std::array<unsigned char, 4> ipv4, unsigned short port)
{
    if((sockfd = ::socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("[TCPSocket]: Socket creation");
        return false;
    }

    sockaddr_in serverAddress;
    memset(&serverAddress, '0', sizeof(serverAddress));

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(port);

    char ipv4addr[4*3 + 3*1];
    sprintf(ipv4addr, "%d.%d.%d.%d", ipv4[0], ipv4[1], ipv4[2], ipv4[3]);

    if(inet_pton(AF_INET, ipv4addr, &serverAddress.sin_addr) <= 0)
    {
        perror("[TCPSocket]: Invalid address");
        return sockfd=-1, false;
    }

    if(::connect(sockfd, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0)
    {
        perror("[TCPSocket]: Connect");
        return sockfd=-1, false;
    }

    return true;
}

int hostnameToIp(const char * hostname , char* ip)
{
    struct hostent *he;
    struct in_addr **addr_list;
    int i;
         
    if ( (he = gethostbyname( hostname ) ) == NULL) 
    {
        // get the host info
        herror("gethostbyname");
        return 1;
    }
 
    addr_list = (struct in_addr **) he->h_addr_list;
     
    for(i = 0; addr_list[i] != NULL; i++) 
    {
        //Return the first one;
        strcpy(ip , inet_ntoa(*addr_list[i]) );
        return 0;
    }
     
    return 1;
}


bool TCPSocket::connectTo(const char* serverHostName, unsigned short port)
{
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if(sockfd < 0)
    {
        perror("[TCPSocket]: Socket creation");
        return false;
    }

    sockaddr_in serverAddress;
    memset(&serverAddress, '0', sizeof(serverAddress));

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(port);

    char ipv4addr[30];
    if(hostnameToIp(serverHostName, ipv4addr) != 0)
    {
        return sockfd=-1, false;
    }

    if(inet_pton(AF_INET, ipv4addr, &serverAddress.sin_addr) <= 0)
    {
        perror("[TCPSocket]: Invalid address");
        return sockfd=-1, false;
    }

    if(::connect(sockfd, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0)
    {
        perror("[TCPSocket]: Connect");
        return sockfd=-1, false;
    }

    return true;
}

TCPSocket::sizeT TCPSocket::send(void* data, TCPSocket::sizeT dataSize)
{
    return ::send(sockfd, data, dataSize, 0);
}
    
bool TCPSocket::isSomethingToReceive() const //thats kinda prototypa - gotta learn more about this
{
    fd_set theSet;
    FD_ZERO(&theSet);
    FD_SET(sockfd, &theSet);

    timeval timeout;
    timeout.tv_sec = 0;
    timeout.tv_usec = 0;
    int activity = select(sockfd + 1, &theSet , NULL , NULL , &timeout);  
    
    if ((activity < 0) && (errno!=EINTR))  
    {  
        perror("select");
    }

    return FD_ISSET(sockfd, &theSet);
}

TCPSocket::sizeT TCPSocket::avaliableBytes() const
{
    int avaliableBytes;
    ioctl(sockfd, FIONREAD, &avaliableBytes);
	return avaliableBytes;
}

TCPSocket::sizeT TCPSocket::receive(void* data, TCPSocket::sizeT dataSize)
{
	return ::recv(sockfd, data, dataSize, 0);;
}

bool TCPSocket::hasDisconnected() const
{
    return (isSomethingToReceive() && (avaliableBytes() <= 0));
}

void TCPSocket::close()
{
    return;
    if(sockfd != -1)
	    ::close(sockfd);

    sockfd = -1;
}

TCPSocket::~TCPSocket()
{
    return;
    if(sockfd != -1)
        close();
}