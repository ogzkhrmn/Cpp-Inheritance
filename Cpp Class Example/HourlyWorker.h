#pragma once
#include "Employee.h"

class HourlyWorker : public Employee
{
public:
	HourlyWorker(const char*, const char*, double, double);
	double getPay() const;
	void print() const;
	~HourlyWorker();
private:
	double wage;
	double hours;
};
