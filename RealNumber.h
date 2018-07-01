#ifndef REALNUMBER_H
#define REALNUMBER_H
#include"Number.h"
class RealNumber:public Number
{
 public:
        virtual void print();
	virtual RealNumber add(const RealNumber& other);
	virtual RealNumber mul(const RealNumber& other);
	RealNumber(double m) :Number(m){}
};
#endif
