//basic arithmetic calculator 
#include <iostream>
using namespace std;

int main() {
    int num_1, num_2, result, status {0};
    char operate;

    do {
        cout << "Please enter the first number: ";
        cin >> num_1;
        cout << "Please enter the second number: ";
        cin >> num_2;

        bool validOperator = false;
        while (!validOperator) {
            cout << "Enter the type of operation you want, (+ , - , * , / ) or (r) if you want to calculate remainder: ";
            cin >> operate;

            switch (operate) {
                case '+': 
                    result = num_1 + num_2;
                    validOperator = true;
                    break;
                case '-': 
                    result = num_1 - num_2;
                    validOperator = true;
                    break;
                case '*': 
                    result = num_1 * num_2;
                    validOperator = true;
                    break;
                case '/': 
                    if (num_2 != 0) {
                        result = num_1 / num_2;
                        validOperator = true;
                    } else {
                        cout << "Error: Division by zero is not allowed.\n";
                    }
                    break;
                case 'R': case 'r': 
                    if (num_2 != 0) {
                        result = num_1 % num_2;
                        validOperator = true;
                    } else {
                        cout << "Error: Division by zero is not allowed.\n";
                    }
                    break;
                default: 
                    cout << "Unknown operator: " << operate << '\n';
            }
        }

        cout << num_1 << operate << num_2 << " = " << result << endl;
        cout << "Please enter 0 to quit or any other number to continue: ";
        cin >> status;
    } while (status != 0);

    return 0;
}
