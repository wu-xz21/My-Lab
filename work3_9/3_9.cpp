#include<iostream>
using namespace std;
void prnumber(unsigned int n) {
	int j = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			j++;
	}
	if (j == 2)
		cout << n<<" is a prime number." << endl;
	else
		cout<< n<<" is not a prime number." << endl;
}
int main() {
	int n;
	cout << "Please enter a integer: ";
	cin >> n;
	prnumber(n);
	return 0;
}