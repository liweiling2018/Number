#include<iostream>
#include"Number.h"
#include"RealNumber.h"
#include"IntegerNumber.h"
#include"ComplexNumber.h"
using namespace std;
int main()
{
   RealNumber     value1(2.33),value2(5.20),z1(0),z2(0);
   IntegerNumber  value3(200),value4(50),z3(0),z4(0);
   ComplexNumber  value5(6.66,4.44),value6(3.66,9.33),z5(0,0),z6(0,0);

   z1=value2.add(value1);
   z2=value2.mul(value1);
   cout << "For RealNumber:" << endl;
   cout << "2.33+5.20=";
   z1.print();
   cout << "2.33*5.20=";
   z2.print();

   z3=value4.add(value3);
   z4=value4.mul(value3);
   cout << "For IntegerNumber:" << endl;
   cout << "200+50=";
   z3.print();
   cout << "200*50=";
   z4.print();

   z5=value6.add(value5);
   z6=value6.mul(value5);
   cout << "For ComplexNumber:" << endl;
   cout << "(6.66+4.44i)+(3.66+9.33i)=";
   z6.print();
   cout << "(6.66+4.44i)*(3.66+9.33i)="; 
   z6.print();

   return 0;
}
