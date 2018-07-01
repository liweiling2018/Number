#include"Number.h"
class ComplexNumber :public Number
{
public:
	ComplexNumber(double m, double n) :Number(m,n)
	{}
	virtual void print();
	ComplexNumber add(const ComplexNumber &other);
	ComplexNumber mul(const ComplexNumber &other);
};
