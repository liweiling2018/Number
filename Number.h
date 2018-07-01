#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
using namespace std;
class Number
{
public:
    Number(double m)
    {   x=m;     }
    Number(double m,double n)
    {   x=m;y=n; }
    virtual Number add(const Number&other);
    virtual Number mul(const Number&other);
protected:
    double x,y;

};
#endif

