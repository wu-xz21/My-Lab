#include<iostream>
#include<iomanip>
int getVolume(int a, int b = 2, int c = 3);
using namespace std;
int main() {
	const int X = 10, Y = 12, Z = 15;
	cout << "some box data is ";
	cout << getVolume(X, Y, Z) << endl;
	cout << "some box data is ";
	cout << getVolume(X, Y) << endl;
	cout << "some box data is ";
	cout << getVolume(X) << endl;
}	
int getVolume(int a, int b, int c) {
	cout << setw(5) << a << setw(5) << b << setw(5) << c << setw(5);
	return a * b * c;
}