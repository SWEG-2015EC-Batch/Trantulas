// THE PAYROLL MANAGEMENT SYSTEM

// Kaleab Birhanu                                       ETS 0730/15
// Lydia Yonas                                          ETS 0848/15
// Mihret Tesfaye                                       ETS 0927/15
// Misgana Betselot                                     ETS 0961/15
// Munira Abdulkerim                                    ETS 0979/15

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// Define a structure to represent an Employee
struct Employee {
    int payCode;      // Pay code for the type of employee (1 for manager, 2 for hourly, 3 for commission, 4 for pieceworker)
    string name;      // Employee name
    double salary;    // Weekly salary of the employee
};

int main() {
    // Change: Using dynamic memory allocation with new
    Employee* employees = nullptr;  // Pointer to dynamically allocated array
    int numEmployees = 0;           // Number of employees
    char choice;                    // User's menu choice
    char ch;                        // User's choice to add another employee
    int managerCount = 0, hourlyCount = 0, commissionCount = 0, pieceworkerCount = 0;  // Counts for each employee type
    double managerTotal = 0, hourlyTotal = 0, commissionTotal = 0, pieceworkerTotal = 0;  // Totals for each employee type
    double managerMax = 0, hourlyMax = 0, commissionMax = 0, pieceworkerMax = 0;  // Maximum salary for each employee type
    double managerMin = 0, hourlyMin = 0, commissionMin = 0, pieceworkerMin = 0;  // Minimum salary for each employee type

    do {
        cout << "\nMain Menu:\n";
        cout << "1. Add Employee\n";
        cout << "2. Find Specific Record\n";
        cout << "3. Summary Report\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                do {
                    // Change: Using new for dynamic memory allocation
                    Employee* temp = new Employee[numEmployees + 1];
                    for (int i = 0; i < numEmployees; ++i) {
                        temp[i] = employees[i];
                    }
                    delete[] employees;
                    employees = temp;

                    cout << "\nEnter employee data (enter '0' to quit):\n";
                    cout << "Enter pay code (1 for manager, 2 for hourly, 3 for commission, 4 for pieceworker): ";
                    cin >> employees[numEmployees].payCode;

                    if (employees[numEmployees].payCode == 0) {
                        // Quit the loop
                        break;
                    }

                    // Consume newline
                    cin.ignore();

                    cout << "Enter employee name: ";
                    getline(cin, employees[numEmployees].name);
switch (employees[numEmployees].payCode) {
                        case 1: // Manager
                            cout << "Enter weekly salary: ";
                            cin >> employees[numEmployees].salary;
                            managerCount++;
                            managerTotal += employees[numEmployees].salary;
                            managerMax = max(managerMax, employees[numEmployees].salary);
                            managerMin = min(managerMin, employees[numEmployees].salary);
                            break;
                        case 2: // Hourly worker
                            double hourlyRate, hoursWorked;
                            cout << "Enter hourly rate: ";
                            cin >> hourlyRate;
                            cout << "Enter hours worked: ";
                            cin >> hoursWorked;
                            employees[numEmployees].salary = hoursWorked <= 40 ? hourlyRate * hoursWorked : 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
                            hourlyCount++;
                            hourlyTotal += employees[numEmployees].salary;
                            hourlyMax = max(hourlyMax, employees[numEmployees].salary);
                            hourlyMin = min(hourlyMin, employees[numEmployees].salary);
                            break;
                        case 3: // Commission worker
                            double grossSales;
                            cout << "Enter gross weekly sales: ";
                            cin >> grossSales;
                            employees[numEmployees].salary = 250 + grossSales * 0.057;
                            commissionCount++;
                            commissionTotal += employees[numEmployees].salary;
                            commissionMax = max(commissionMax, employees[numEmployees].salary);
                            commissionMin = min(commissionMin, employees[numEmployees].salary);
                            break;
                        case 4: // Pieceworker
                            double wagePerItem, itemsProduced;
                            cout << "Enter wage per item: ";
                            cin >> wagePerItem;
                            cout << "Enter number of items produced: ";
                            cin >> itemsProduced;
                            employees[numEmployees].salary = wagePerItem * itemsProduced;
                            pieceworkerCount++;
                            pieceworkerTotal += employees[numEmployees].salary;
                            pieceworkerMax = max(pieceworkerMax, employees[numEmployees].salary);
                            pieceworkerMin = min(pieceworkerMin, employees[numEmployees].salary);
                            break;
                        default:
                            cout << "Invalid pay code.\n";
                            break; // Skip to the next employee
                    }

                    numEmployees++;  // Increment employee count
cout << "Do you want to add another employee? (y/n): ";
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
                break;
            }
            case '2': {
                // Find specific record
                string searchName;
                cout << "Enter the name to search for: ";
                // Consume newline
                cin.ignore();
                getline(cin, searchName);
                bool found = false;
                for (int i = 0; i < numEmployees; ++i) {
                    if (employees[i].name == searchName) {
                        cout << "Employee found:\n";
                        cout << "Name: " << employees[i].name << ", Pay Code: " << employees[i].payCode << ", Salary: " << fixed << setprecision(2) << employees[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found.\n";
                }
                break;
            }
            case '3': {
                // Summary report
                cout << "\nSummary Report:\n";
                cout << setw(25) << left << "Pay Code" << setw(15) << "Count" << setw(15) << "Total" << setw(15) << "Max" << setw(15) << "Min" << endl;
                cout << setw(25) << left << "Managers" << setw(15) << managerCount << setw(15) << fixed << setprecision(2) << managerTotal << setw(15) << managerMax << setw(15) << managerMin << endl;
                cout << setw(25) << left << "Hourly Workers" << setw(15) << hourlyCount << setw(15) << hourlyTotal << setw(15) << hourlyMax << setw(15) << hourlyMin << endl;
                cout << setw(25) << left << "Commission Workers" << setw(15) << commissionCount << setw(15) << commissionTotal << setw(15) << commissionMax << setw(15) << commissionMin << endl;
                cout << setw(25) << left << "Pieceworkers" << setw(15) << pieceworkerCount << setw(15) << pieceworkerTotal << setw(15) << pieceworkerMax << setw(15) << pieceworkerMin << endl;
                int totalEmployees=managerCount + hourlyCount +commissionCount + pieceworkerCount;
                double totalPayroll=managerTotal + hourlyTotal + commissionTotal + pieceworkerTotal;
                cout <<  "\nTotal Employees:  " <<totalEmployees<<endl;
                cout << "Total Payroll:   "<< totalPayroll<< endl;
                break;
            }
            case '4': {
                // Quit
                cout << setw(15) << "Name" << setw(15) << "Pay Code" << setw(15) << "Weekly Salary" << endl;
                cout << setw(15) << "_________" << setw(15) << "___________" << setw(15) << "____________" << endl;
                for (int i = 0; i < numEmployees; ++i) {
                    cout << setw(15) << employees[i].name << setw(15) << employees[i].payCode << setw(15) << fixed << setprecision(2) << employees[i].salary << endl;
                }
                // Memory deallocation:
                delete[] employees;
                return 0;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != '4');

    return 0;
}
