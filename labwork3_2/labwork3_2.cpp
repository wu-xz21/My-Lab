#include<iostream>
using namespace std;
int max1(int x, int y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return 0;
}
double max1(double x, double y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return 0;
}
double max1(double x, double y, double z) {
	if (max1(x, y) > z)
		return max1(x, y);
	else if (max1(x, y) < z)
		return z;
	else
		return 0;
}
int main() {
	cout << max1(3, 4) << endl;
	cout << max1(3.3, 23.3) << endl;
	cout << max1(2.2, 32.2, 32.3) << endl;
	return 0;
}