#pragma once
class BaseClass1
{
public:
	BaseClass1(int x) { value = x; }
	int getData() const { return value; }
protected:
	int value;
};
