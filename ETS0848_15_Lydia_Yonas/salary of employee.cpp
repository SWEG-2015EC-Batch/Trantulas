#include <iostream>
using namespace std;

int main() {
    string name;
    float hours_worked, bonus_rate, base_salary;
   cout << "Enter employee name: ";
   cin, name;
    cout << "Enter weekly working hours: ";
    cin >> hours_worked;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;
    cout << "Enter base salary: ";
    cin >> base_salary;
    float gross_salary = (hours_worked * base_salary) + (hours_worked * bonus_rate);
    float bonus_payment = hours_worked * bonus_rate;
    float pension_deduction = gross_salary * 0.05;
    float tax_deduction = gross_salary * 0.15;
    float net_salary = gross_salary - (pension_deduction + tax_deduction);
    cout << "\nEmployee: " << name << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Net Salary: " << net_salary << endl;
    cout << "Bonus Payment: " << bonus_payment << endl;

    return 0;
}
