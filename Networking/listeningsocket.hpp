/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/

#ifndef listeningsocket_hpp
#define listeningsocket_hpp

#include <stdio.h>
#include "bindingsocket.hpp"

namespace HDE
{
    class listeningsocket:public bindingsocket
    {
        private:
            int backlog;
            int listening;
        public:
            listeningsocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
            void start_listening();
    };
}

#endif 