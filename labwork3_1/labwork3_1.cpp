#include<iostream>
using namespace std;
double trans(double F) {
	double C;
	C = (F - 32) * 5 / 9;
	return C;
}
int main() {
	cout << "Please enter the temprature of F: ";
	double F;
	cin >> F;
	cout << "The corresponding temprature of C is:\n" << trans(F);
	return 0;
}
