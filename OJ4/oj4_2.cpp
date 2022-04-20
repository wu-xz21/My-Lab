#include<iostream>
using namespace std;/*
class PASSWORD {
private:
	int k;
public:
	PASSWORD(int rk) :k(rk){}
	char convert(char ch);
	~PASSWORD(){}
};
char PASSWORD::convert(char ch) {
	int a;
	a = (ch - 65 - k) < 0 ? ch - 65 - k + 26 : ch - 65 - k;
	 char b;
	 b = (a % 26)+65;
	 return b;
}
int main() {
	int k;
	cin >> k;
	PASSWORD a(k);
	int n;
	cin >> n;
	char d;
	for (int i = 1; i <= n; i++) {
		cin >> d;
		cout << a.convert(d);
	}
	return 0;
}*/