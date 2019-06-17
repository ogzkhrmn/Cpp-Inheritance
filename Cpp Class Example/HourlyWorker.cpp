#include "HourlyWorker.h"
#include <iostream>

using namespace std;

HourlyWorker::HourlyWorker(const char* first, const char* last, double w, double h) : Employee(first, last)
{
	wage = w;
	hours = h;
}

double HourlyWorker::getPay() const
{
	return wage * hours;
}

void HourlyWorker::print() const
{
	Employee::print();

	cout << getPay() << endl;
}

HourlyWorker::~HourlyWorker()
{
}
