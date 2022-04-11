#include<iostream>
#include"lab5.h"
using namespace std;
int main() {
	Point a(2, 3);
	Point c(23, 999);
	Point b = a;
	cout << b.getX() << " " << b.getY() << endl;
	Line l1(a, c);
	cout << l1.getLen() << endl;
	return 0;
}