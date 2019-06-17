#pragma once
#ifndef POINT_H
#define POINT_H
#include <ostream>

using namespace std;

class Point
{
	friend ostream& operator<<(ostream&, const Point&);
public:
	Point(int = 0, int = 0);
	void setPoint(int, int);
	int getX() const { return x; }
	int getY() const { return y; }
	~Point();
protected:
	int x, y;
};

#endif
