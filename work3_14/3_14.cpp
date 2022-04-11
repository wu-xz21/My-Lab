#include<iostream>
using namespace std;
typedef unsigned int unint;
double Lfun(unint n, double x) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return ((2 * n - 1) * x * Lfun(n - 1, x) - (n - 1) * Lfun(n - 2, x)) / n;
}
int main() {
	unint n;
	double x;
	cin >> n >> x;
	cout << "Pn(x) = " << Lfun(n, x) << endl;
	return 0;
}