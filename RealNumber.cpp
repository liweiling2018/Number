#include "RealNumber.h"

void RealNumber::print()
{
   cout << "The value is " << x << endl;
}
RealNumber RealNumber::add(const RealNumber& other)
{
   return RealNumber(x + other.x);
}
RealNumber RealNumber::mul(const RealNumber& other)
{
   return RealNumber(x + other.x);
}
