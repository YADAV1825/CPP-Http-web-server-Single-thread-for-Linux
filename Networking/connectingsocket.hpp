/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/


#ifndef connectingsocket_hpp
#define connectingsocket_hpp

#include <stdio.h>
#include "simplesocket.hpp"

namespace HDE
{
    class connectingsocket: public simplesocket
    {
    public:
        //constructor
        connectingsocket(int domain, int service, int protocol, int port, u_long interface);

        //virtual function from parent
        int connect_to_network(int sock, struct sockaddr_in address);


    };
}


#endif 