#include<iostream>
using namespace std;
int main() {
	const double PI = 3.1415926;
	int type;
	double r, a, b, area;
	cout << "图形的类型为？1—圆形 2-正方形 3-长方形 ";
	cin >> type;
	switch (type) {
	case 1:cout << "请输入半径：";
		cin >> r;
		cout << "图形的面积是：" << (PI * r * r);
		break;
	case 2:cout << "请输入边长：";
		cin >>a;
		cout << "图形的面积是：" << (a * a);
		break;
	case 3:cout << "请输入长和宽：";
		cin >> a >> b;
		cout << "图形的面积是：" << (a * b);
		break;
	}
	return 0;
}