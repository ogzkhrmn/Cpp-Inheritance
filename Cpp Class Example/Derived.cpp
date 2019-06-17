#include "Derived.h"
Derived::Derived(int x, char y, double z): BaseClass1(x), BaseClass2(y), real(z)
{
	
}


double Derived::getReal() const
{
	return real;
}

std::ostream& operator<<(ostream& output, const Derived& d)
{
	output << "Integer: " << d.value
		<< "\n Character: " << d.letter
		<< "\n Real: " << d.real;
	return output;
}

