#include<iostream>
#include"Point.h"
#include<cmath>
using namespace std;
extern void lineFit(Point points[], int npoints) {
	float avgx = 0, avgy = 0;
	float Lxy = 0.0f, Lxx = 0.0f, Lyy = 0;
	for (int i = 0; i < npoints; i++) {
		avgx += points[i].getX() / npoints;
		avgy += points[i].getY() / npoints;
	}
	for (int i = 0; i < npoints; i++) {
		Lxy += (points[i].getX() - avgx) * (points[i].getY() - avgy);
		Lxx+= (points[i].getX() - avgx) * (points[i].getX() - avgx);
		Lyy+= (points[i].getY() - avgy) * (points[i].getY() - avgy);
	}
	cout << "The line fitted for the points : y=ax+b" << endl;
	cout << "a= " << (Lxy / Lxx) << "  ";
	cout << "b= " << (avgy - avgx * (Lxy / Lxx)) << endl;
	cout << "The relative number is: r= " << Lxy / sqrt(Lxx * Lyy) << endl;
}