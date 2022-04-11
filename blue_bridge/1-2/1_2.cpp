#include <iostream>
#include "1_2.h"
#include<cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	a = max(a, b);
	b = min(a, b);
	int i = 1;
	do{
		a = max((a - b), b);
		b = min((a - b), b);
		i++;
	} while ((a - b) != b);
	cout << i;
	return 0;
}
