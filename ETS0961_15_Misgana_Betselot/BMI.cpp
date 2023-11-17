#include <iostream>
using namespace std;
int main()
{
  double Weight,Height,BMI;
    cout<<"Enter Weight(in Kg)";
    cin>> Weight;
    cout<<"Enter Height(in M)";
    cin>> Height;
    BMI=Weight/(Height*Height);
    cout<<"The Result is;"<<BMI;
    return 0;
}

