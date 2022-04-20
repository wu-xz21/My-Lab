#include<iostream>
#include"lab4.h"
using namespace std;
int main() {
	CPU t1;
	t1.run(P4, 90, 3.45f);
	CPU t2(t1);
	t2.stop();
	return 0;
}