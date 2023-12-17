//program calculating the automobile driven miles per gallon without refueling
#include <iostream>
using namespace std;
int main() {
double fuelCapacity, mpg;
cout << "Enter the fuel tank capacity in gallons: ";
cin >> fuelCapacity;
cout << "Enter the miles per gallon (MPG) of the automobile: ";
cin >> mpg;
double maxDistance = fuelCapacity * mpg;
cout << "The automobile can be driven for " << maxDistance << " miles without refueling." <<endl;
return 0;
}
