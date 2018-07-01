#include"Number.h"
#include<iostream>
using namespace std;

Number Number::add(const Number& other)
{
  return Number(x+other.x);
}
Number Number::mul(const Number& other)
{
  return Number(x*other.x);
}

