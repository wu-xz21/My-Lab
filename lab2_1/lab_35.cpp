#include<iostream>
#include<iomanip>
#include "lab_1.h"
using namespace std;
int main() {
	cout << " ";
	for (int i = 1; i <= 9; i++) {
		cout << setw(4) << i;
	}cout << endl;
	for (int i = 1; i <= 9; i++) {
		cout << i ;
		for (int j = 1; j <= 9; j++) {
			cout << setw(4) << j * i;
		}cout << endl;
	}return 0;
}

