#include<iostream>/*
using namespace std;
class PASSWORD {
private:
	int k;
public:
	PASSWORD(int rk) :k(rk) {}
	char convert(char ch);
	~PASSWORD() {}
};
char PASSWORD::convert(char ch) {
	int a=ch-65;
	int j = 0;
	int b;
	char c;
	for (int i = 0; i < k; i++) {
		if ((a + 26 * i) % k == 0) {
			j++;
			b = (a + 26 * i) / k;
		}
	}

	if (j == 1)
		c = b + 65;
	else
		c = '0';
	return c;
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