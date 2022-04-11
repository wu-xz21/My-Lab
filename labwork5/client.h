#pragma once
#ifndef CLIENT_H
#define CLIENT_H
class Client {
public:
	static void ChangeServerName(const char &ServerName);
	static void showClientNum();
	~Client(){}
private:
	static char ServerName;
	static int ClientNum;
};
#endif CLIENT_H