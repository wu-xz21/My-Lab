#include<iostream>
#include "test2.h"
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	if (n == 1)
		a = 1;
	else {
		if (n % 3 == 0 || n % 3 == 1)
			a = 2 * (n / 3);
		else
			a = 2 * (n / 3) + 1;
	}
	b = m - (m / 6);
	cout << (a * b) << endl;
	return 0;
}