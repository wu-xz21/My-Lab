#include<iostream>
#include<cmath>
using namespace std;
class Integer {
private:
	int _num;
public:
	Integer(int num):_num(num){}
	int gcd(Integer B);
};
int Integer::gcd(Integer B) {
	int ra=1;
	for (int i = 1; i <= min(_num, B._num); i++) {
		if ((_num % i == 0) && (B._num % i == 0))
			ra = max(ra, i);
	}
	return ra;
}
int main() {
	int a, b;
	cin >> a >> b;
	Integer A(a);
	Integer B(b);
	cout << A.gcd(B) << endl;
	return 0;
}