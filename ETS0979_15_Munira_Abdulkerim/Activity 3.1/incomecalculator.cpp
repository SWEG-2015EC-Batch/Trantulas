#include <iostream>
using namespace std;
int main(){
  float grosssalary,workedhour,taxrate,overtimebonusrate,netsalary,bonuspayment=0;
  const float pensionrate=0.07;
  cout<<"Enter Gross salary ";
  cin>>grosssalary;
  cout<<"Enter Worked hour ";
  cin>>workedhour;


  if(workedhour > 40){
    cout<<"Enter over time bonus rate ";
    cin>>overtimebonusrate;
    bonuspayment = overtimebonusrate*(workedhour-40);

}

    if (grosssalary <= 200) {
        taxrate = 0.0;
    } else if (grosssalary <= 600) {
        taxrate = 0.1;
    } else if (grosssalary <= 1200) {
        taxrate = 0.15;
    } else if (grosssalary <= 2000) {
        taxrate = 0.2;
    } else if (grosssalary <= 3500) {
        taxrate = 0.25;
    } else {
        taxrate = 0.3;
    }

  netsalary = (grosssalary - (pensionrate*grosssalary) - (taxrate*grosssalary))+ bonuspayment;

 cout<<"Net salary = "<<netsalary;
 return 0;
}






