/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/


#include "simpleserver.hpp"
using namespace std;

HDE::simpleserver::simpleserver(int domain, int service, int protocol, int port, u_long interface, int bklg)
{
    socket = new listeningsocket(domain, service, protocol, port, interface, bklg);

}

HDE::listeningsocket * HDE::simpleserver::get_socket()
{
    return socket;

}