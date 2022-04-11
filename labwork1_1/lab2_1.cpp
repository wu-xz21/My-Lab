#include<iostream>
using namespace std;
int main() {
	int i = 1;
	int sum1= 0;
	do {
		sum1+= i;
		i++;
	} while (i <= 10);
	cout << sum1<< endl;
	int sum2 = 0;
	for (int j = 1; j <= 10; j++) {
		sum2 += j;
		
	}
	cout << sum2 << endl;
	return 0;
}