#pragma once
#ifndef POINT_H
#define POINT_H
class Point {
	friend void lineFit(Point points[],int npoints);
public:
	Point() { x = 0, y = 0; }
	Point(float x,float y):x(x),y(y){}
	float getX() { return x; }
	float getY() { return y; }
private:
	float x, y;
};
#endif POINT_H