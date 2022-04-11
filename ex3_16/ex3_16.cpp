#include<iostream>
using namespace std;
int sumofsquare(int x, int y) {
		return (x * x + y * y);
	}
double sumofsquare(double x,double y){
		return (x * x + y * y);
	}
int main() {
	cout << sumofsquare(1, 2) << endl;
	cout << sumofsquare(1.2, 2.0) << endl;
	return 0;
}

