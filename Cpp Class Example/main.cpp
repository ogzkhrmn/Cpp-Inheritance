#include "Circle.h"
#include "Point.h"
#include <iostream>
#include "Employee.h"
#include "HourlyWorker.h"
#include "BaseClass1.h"
#include "BaseClass2.h"
#include "Derived.h"

using namespace std;

int main()
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

	BaseClass1 bc1(10), *basePtr1;
	BaseClass2 bc2('a'), *basePtr2;
	Derived d(7, 'A', 3.5);

	cout << "Data members of bc1"
		<< "\n Integer: " << bc1.getData();

	cout << "\nData members of bc2"
		<< "\n Char: " << bc2.getData();

	cout << "\nData members of derived"
		<< "\n Integer: " << d.BaseClass1::getData()
		<< "\n Char: " << d.BaseClass2::getData()
		<< "\n Real: " << d.getReal();

	basePtr1 = &d;
	basePtr2 = &d;

	cout << "\nData members of bp1"
		<< "\n Integer: " << basePtr1->getData();

	cout << "\nData members of bp2"
		<< "\n Char: " << basePtr2->getData();
	return 0;
}
