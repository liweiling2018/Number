#include"RealNumber.h"
#include"Number.h"
class IntegerNumber:public RealNumber
{
public:
	IntegerNumber(int m) :RealNumber(m){}
	virtual void print();
	virtual IntegerNumber add(const IntegerNumber &other);
	virtual IntegerNumber mul(const IntegerNumber &other);
};
