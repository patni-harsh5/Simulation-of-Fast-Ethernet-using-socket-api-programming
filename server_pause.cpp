// net id: h_p108

/*
   server_pause.cpp
*/

#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include "tcpacceptor.h"

int main(int argc, char** argv)
{
    int lsd = socket(PF_INET, SOCK_STREAM, 0);
    struct sockaddr_in address;

    memset(&address, 0, sizeof(address));
    address.sin_family = PF_INET;
    address.sin_port = htons(atoi(argv[1]));
    address.sin_addr.s_addr = INADDR_ANY;
    
    int optval = 1;
    setsockopt(lsd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof optval); 
    
    int result = bind(lsd, (struct sockaddr*)&address, sizeof(address));
    if (result != 0) {
        perror("bind() failed");
        return result;
    }
    pause();

    return 0;
}    
