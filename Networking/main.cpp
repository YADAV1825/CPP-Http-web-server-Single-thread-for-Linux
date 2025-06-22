#include "listeningsocket.hpp"
using namespace std;
int main(){
    cout<<"binding socket..."<<endl;
    HDE::bindingsocket bs=HDE::bindingsocket(AF_INET,SOCK_STREAM,0,1,INADDR_ANY);
    cout<<"LISTENING SOCKET..."<<endl;
    HDE::listeningsocket ls=HDE::listeningsocket(AF_INET,SOCK_STREAM,0,3000,INADDR_ANY,10);
    cout<<"success";
    return 0;


}