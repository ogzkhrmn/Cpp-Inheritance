#include "Point.h"

ostream& operator<<(ostream& output, const Point& p)
{
	output << '[' << p.x << ':' << p.y << ']' << endl;

	return output;
}

Point::Point(int x, int y)
{
	setPoint(x, y);
}

void Point::setPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}
