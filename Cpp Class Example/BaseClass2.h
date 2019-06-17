#pragma once
class BaseClass2
{
public:
	BaseClass2(char x) { letter = x; }
	char getData() const { return letter; }
protected:
	char letter;
};