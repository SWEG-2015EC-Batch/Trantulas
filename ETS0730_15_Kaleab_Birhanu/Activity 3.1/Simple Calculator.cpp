//simple calculator
#include<iostream>
using namespace std;

int main() {
    char op,exitcode;//here op stands for operator
    float num1, num2;
    do {

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter operator: (+, -, *, /)   ";
        cin >> op;
        cout << "Enter the second number: ";
        cin >> num2;

        switch(op) {
            case '+':
                cout << num1+num2 << endl;
                break;

            case '-':
                cout << num1-num2 << endl;
                break;

            case '*':
                cout << num1*num2 << endl;
                break;

            case '/':
                if(num2 != 0.0)
                    cout << num1/num2 << endl;
                else
                    cout << "undefined operation !" << endl;
                break;

            default:
                cout << "Invalid operator!" << endl;
                break;
        }
        cout << "Enter 0 to exit, any other key to continue: ";
        cin >> exitcode;
    } while(exitcode != '0');

    return 0;
}
