#include<iostream>
using namespace std;
int FibFun(int n) {
	
	if (n == 1 || n == 2)
		return  1;
	else
		return FibFun(n - 1) + FibFun(n - 2);
}
int main() {
	cout << FibFun(4) << endl;
	return 0;
}