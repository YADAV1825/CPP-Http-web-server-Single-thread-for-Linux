/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/

#include "connectingsocket.hpp"
using namespace std;

//constructor
HDE::connectingsocket::connectingsocket(int domain, int service, int protocol, int port, u_long interface): simplesocket(domain, service, protocol,port, interface)
{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

// Definition of connect_to_network virtual function
int HDE::connectingsocket::connect_to_network(int sock, struct sockaddr_in address)
{
    return connect(sock, (struct sockaddr *)&address,sizeof(address));

}