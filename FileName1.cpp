#include<iostream>
#include<string>
using namespace std;
class Client
{
public:
    Client()
    {
        ClientNum++;
    }
    static string ServerName;
    static int ClientNum;
    static void changeServerName(char s)
    {
        ServerName = s;
    }
    static void show()
    {
        cout << "server name:" << "ServerName" << endl;
        cout << "num of clients:" << ClientNum << endl;
    }
};
string Client::ServerName = "A";
int Client::ClientNum = 0;
int main() {
    Client::show();
    Client c1;
    Client::show();
    Client::changeServerName('B');
    Client::show();
}