#include<iostream>
using namespace std;
short int unfun(unsigned short int a, unsigned short int b) {
	if (b != 0)
		return short int(a / b);
	else
		return -1;
}
int main() {
	unsigned short int a, b;
	cin >> a >> b;
	cout << unfun(a, b) << endl;
	return 0;
}