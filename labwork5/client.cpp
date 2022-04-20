#include<iostream>
#include"client.h"
using namespace std;
void Client::ChangeServerName(const char &rServerName) {
	ServerName = rServerName;
	ClientNum++;
}
void Client::showClientNum() {
	cout << "ClientNumber:" << ClientNum << endl;
}
int Client::ClientNum = 0;
char Client::ServerName = 0;