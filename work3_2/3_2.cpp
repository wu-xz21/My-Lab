#include<iostream>
using namespace std;
int main() {
	int intOne;
	int& rSomedef = intOne;
	intOne = 5;
	cout << "intOne:\t" << intOne << endl;
	cout << "rSomedef:\t" << rSomedef << endl;
	int intTwo=8;
	rSomedef = intTwo;
	cout << "\nintOne:\t" << intOne << endl;
	cout << "intTwo:\t" << intTwo << endl;
	cout << "rSomedef:\t" << rSomedef << endl;
	return 0;
}