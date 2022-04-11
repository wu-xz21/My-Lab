#include<iostream>
#include"client.h"
using namespace std;
int main() {
	Client::ChangeServerName('s');
	Client::showClientNum();
	Client::ChangeServerName('ss');
	Client::showClientNum();
	return 0;

}