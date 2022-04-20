#include "lab5.h"
#include<cmath>
#include<iostream>
Line::Line(Point xp1, Point xp2) {
	p1 = xp1;
	p2 = xp2;
}
Line::Line(Line& l) {
	std::cout << "Calling the infrastructure :" << std::endl;
	p1 = l.p1;
	p2 = l.p2;
}
double Line::getLen() {
	int dx = p1.getX() - p2.getX();
	int dy = p1.getY() - p2.getY();
	len = sqrt(dx * dx + dy * dy);
	return len;
}

Point::Point(int xx/*=0*/, int yy /*=0*/) {

	x = xx;
	y = yy;
}
Point::Point(Point& p) {
	std::cout << "Calling the infrastructure :" << std::endl;
	x = p.x;
	y = p.y;
}