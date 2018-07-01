#include"IntegerNumber.h"
void IntegerNumber::print()
{
	cout << "The value is " << x << endl;
}
IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	return IntegerNumber(x + other.x);
}
IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	return IntegerNumber(x*other.x);
}
