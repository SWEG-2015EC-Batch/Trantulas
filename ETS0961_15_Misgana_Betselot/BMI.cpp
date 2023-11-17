//This program is written for calculating the body mass index of a person
#include <iostream>
using namespace std;
int main()
{
  double Weight,Height,BMI;//BMI is body mass index
    cout<<"Enter Weight(in Kg)";
    cin>> Weight;
    cout<<"Enter Height(in M)";
    cin>> Height;
    BMI=Weight/(Height*Height);
    cout<<"The Result is;"<<BMI;
    return 0;
}

