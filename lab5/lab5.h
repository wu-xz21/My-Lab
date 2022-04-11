#pragma once
#ifndef LAB5_H
#define LAB5_H
class Point {
public:
	Point(int xx = 0, int yy = 0);
	Point(Point& p);
	int getX() {return x;}
	int getY() { return y; }
	~Point() {};
private:
	int x, y;
};
class Line {
public:
	Line(Point xp1, Point xp2);
	Line(Line& l);
	~Line() {};
	double getLen();
private:
	double len;
	Point p1, p2;
};
#endif LAB5_H