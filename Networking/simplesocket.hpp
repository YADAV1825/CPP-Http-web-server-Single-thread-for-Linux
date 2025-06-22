/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/

#ifndef simplesocket_hpp
#define simplesocket_hpp


#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <bits/stdc++.h>


namespace HDE{
    class simplesocket{
        private:
            struct sockaddr_in address;
            int sock;
            int connection;
        public:
            //constructor
            simplesocket(int domain, int service, int protocol, int port, u_long interface);
            //virtual function to connncet to a network
            virtual int connect_to_network(int sock,struct sockaddr_in address) = 0; // we could also have added parameter of bool bind and for true it will be bind and for false it will be connect but using virtual was better as it will force anyone inheriting this tempelate to specifiy whether it is bind or connect
            //functio to test sockets and connections
            void test_connection(int );
            //getter functions
            struct sockaddr_in get_address();
            int get_sock();
            int get_connection();
            //setter function used in bindingsocket
            void set_connection(int con);


        };
}


#endif