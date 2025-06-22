/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/


#ifndef simpleserver_hpp
#define simpleserver_hpp

#include <stdio.h>
#include <netinet/in.h>
#include "simplesocket.hpp"
#include "bindingsocket.hpp"
#include "connectingsocket.hpp"
#include "listeningsocket.hpp"

namespace HDE
{
    class simpleserver
    {
        private:
            listeningsocket * socket;  //this way the server will hold a socket without actually instantiating it
            virtual void accepter()=0;
            virtual void handler()=0;
            virtual void responder()=0;


        public:
            simpleserver(int domain, int service, int protocol, int port, u_long interface, int bklg);
            virtual void launch()=0;
            listeningsocket * get_socket();

    };

}

#endif 