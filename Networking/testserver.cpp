/*
    Rohit Yadav
    NIT JAlandhar
    IT 3rd Year
    PROJECT: HTTP WEB SERVER for Linux
    DATE: 22nd June,2025
*/


#include "testserver.hpp"
using namespace std;


//constructor
HDE::testserver::testserver():simpleserver (AF_INET, SOCK_STREAM, 0, 3000, INADDR_ANY, 10)
{
    launch();
    
}


//accepter
void HDE::testserver::accepter()
{
    struct sockaddr_in address= get_socket()->get_address();
    int addrlen=sizeof(address);
    new_socket = accept(get_socket()->get_sock(),(struct sockaddr *)&address, (socklen_t *)&addrlen);
    read(new_socket,buffer,30000);



}

//Handler
void HDE::testserver::handler()
{
    cout<< buffer <<endl;

}

//responder
void HDE::testserver::responder()
{
    std::ifstream file("index.html");
std::stringstream ss;
ss << file.rdbuf();
std::string html_content = ss.str();

std::string response = 
    "HTTP/1.1 200 OK\r\n"
    "Content-Type: text/html\r\n"
    "Content-Length: " + std::to_string(html_content.length()) + "\r\n"
    "\r\n" +
    html_content;

write(new_socket, response.c_str(), response.length());

}
//launch
void HDE::testserver::launch()
{
    while (true)
    {
        cout<<"---waiting---"<<endl;
        accepter();
        handler();
        responder();
        cout<<"---Done---"<<endl;
    }
    
}
