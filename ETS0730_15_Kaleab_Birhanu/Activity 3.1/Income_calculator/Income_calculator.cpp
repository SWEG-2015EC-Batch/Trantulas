// a program that calculates the Net-Pay of an employee
#include <iostream>
using namespace std;
int main(){
  float gross_salary,workedHour,taxRate,overTimeBonusRate,netSalary,bonusPayment=0;
  const float pensionRate=0.07;
  cout<<"Enter Gross salary ";
  cin>>gross_salary;
  cout<<"Enter Worked hour ";
  cin>>workedHour;


  if(workedHour > 40){
    cout<<"Enter over time bonus rate ";
    cin>>overTimeBonusRate;
    bonusPayment = overTimeBonusRate*(workedHour-40);

}

    if (gross_salary <= 200) {
        taxRate = 0.0;
    } else if (gross_salary <= 600) {
        taxRate = 0.1;
    } else if (gross_salary <= 1200) {
        taxRate = 0.15;
    } else if (gross_salary <= 2000) {
        taxRate = 0.2;
    } else if (gross_salary <= 3500) {
        taxRate = 0.25;
    } else {
        taxRate = 0.3;
    }

  netSalary = (gross_salary - (pensionRate*gross_salary) - (taxRate*gross_salary))+ bonusPayment;

 cout<<"Net salary = "<<netSalary;
 return 0;
}
