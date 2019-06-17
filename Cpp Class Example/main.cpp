#include "Circle.h"
#include "Point.h"
#include <iostream>
#include "Employee.h"
#include "HourlyWorker.h"

using namespace std;

int  main()
{
	Point *point = 0, p(30, 20);
	Circle *circle = 0, c(2.7, 120, 80);

	point = &c;

	cout << "without ptr\n" << c << endl;

	cout << "\nvia ptr" << *point << endl;

	Employee e("Oguz", "Kahraman");
	e.print();

	HourlyWorker h("Oguz", "Kahraman2", 12.00, 13.50);
	h.print();
	return 0;
}
