#include<iostream>
#include"Point.h"
using namespace std;
int main() {
	float x, y;
	static Point points[10]{};
	for (int i = 0; i <10; i++) {
		cin >> x >> y;
		points[i] = Point(x, y);
	}
	extern void lineFit( Point points[], int npoints);
	lineFit(points, 10);
	return 0;
}