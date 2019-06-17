#pragma once
#include "BaseClass1.h"
#include "BaseClass2.h"
#include <ostream>

using namespace std;

class Derived : public BaseClass1, public BaseClass2
{
	friend std::ostream& operator<<(ostream&, const Derived&);

public:
	Derived(int, char, double);
	double getReal() const;
private:
	double real;
};
