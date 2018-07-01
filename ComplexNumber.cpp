#include"ComplexNumber.h"
void ComplexNumber::print()
{
	cout << "The value is " << x << "+" << y << "i" << endl;
}
ComplexNumber ComplexNumber::add(const ComplexNumber&other)
{
	return ComplexNumber(x + other.x, y + other.y);
}
ComplexNumber ComplexNumber::mul(const ComplexNumber&other)
{
	return ComplexNumber(x*other.y + x * other.y, x*other.y + y* other.x);
}
