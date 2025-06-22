/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/


#include "listeningsocket.hpp"
using namespace std;


//constructor
HDE::listeningsocket::listeningsocket(int domain, int service, int protocol, int port, u_long interface,int bklg): bindingsocket(domain, service, protocol, port, interface)
{
    backlog=bklg; 
    start_listening();
    test_connection(listening);
}

//
void HDE::listeningsocket::start_listening()
{
    listening=listen(get_sock(), backlog);

}