#include<iostream>
using namespace std;
int main() {
	const double PI = 3.1415926;
	int type;
	double r, a, b, area;
	cout << "ͼ�ε�����Ϊ��1��Բ�� 2-������ 3-������ ";
	cin >> type;
	switch (type) {
	case 1:cout << "������뾶��";
		cin >> r;
		cout << "ͼ�ε�����ǣ�" << (PI * r * r);
		break;
	case 2:cout << "������߳���";
		cin >>a;
		cout << "ͼ�ε�����ǣ�" << (a * a);
		break;
	case 3:cout << "�����볤�Ϳ�";
		cin >> a >> b;
		cout << "ͼ�ε�����ǣ�" << (a * b);
		break;
	}
	return 0;
}