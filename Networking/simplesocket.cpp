/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025


*/


#include "simplesocket.hpp"
using namespace std;


//"SORRY FOR GRAMMAR ERROR IN COMMENTS WROTE THEM WHILE WRITING CODE FOR BETTER UNDERSTANDING"


//DEFAULT CONSTRUCTOR
HDE::simplesocket::simplesocket(int domain, int service, int protocol, int port, u_long interface) 
{
    //Defining address structure
    address.sin_family = domain;
    address.sin_port = htons(port);               //port are given an integer whos bytes are in an order for the system but not in the order of actual network so we use the function "htons" to set them in order of network
    address.sin_addr.s_addr = htonl(interface);   //add another parameter u_long interface as our ip address is added and it is also in order of host system to convert it back to our network we will use similar function "htonl"
    
    //establish socket
    sock = socket(domain, service, protocol);
    test_connection(sock); //test the socket

    //establish network connection
    connection=-1;

}


// seperate test connection virtual functio called to check socket is actually connected of not before going to connectioon to network
void HDE::simplesocket::test_connection(int item_to_test)
{
    //confirms that the socket or connection has been established
    if(item_to_test < 0){
        perror("Failed to connect... xD try again later buddy...");
        exit(EXIT_FAILURE);
    }
}


//GETTER functions
struct sockaddr_in HDE::simplesocket::get_address()
{
    return address;
}


int HDE::simplesocket::get_sock()
{
    return sock;  
}


int HDE::simplesocket::get_connection()
{
    return connection;
}

//SETTER functions
void HDE::simplesocket::set_connection(int con)
{
    connection = con;
}