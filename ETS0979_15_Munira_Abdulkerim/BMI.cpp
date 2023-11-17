//This program written to calculate BMI index
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
    cout<<"The Result of your BMI is"<<BMI;
    return 0;
}
