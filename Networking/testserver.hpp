/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/


#ifndef testserver_hpp
#define testserver_hpp

#include <stdio.h>
#include "simpleserver.hpp"
#include <unistd.h>

namespace HDE
{
    class testserver: public simpleserver
    {
        private:
            char buffer[30000]={0};
            int new_socket;
            void accepter();
            void handler();
            void responder();
        public:
            testserver();
            void launch();
            void handle_client(int client_socket);


    };
}

#endif 