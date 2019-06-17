#include "Circle.h"

ostream& operator<<(ostream& output, const Circle& c)
{
	output << "Center = " << static_cast<Point>(c)
		<< "; Radius = "
		<< setiosflags(ios::fixed | ios::showpoint)
		<< setprecision(2) << c.getRadius();

	return output;
}

Circle::Circle(double r, int x, int y) : Point(x, y)
{
	setRadius(r);
}

void Circle::setRadius(double r)
{
	radius = (r > 0 ? r : 0);
}

double Circle::area() const
{
	return 3.14159 * pow(radius, 2);
}

Circle::~Circle()
{
}
