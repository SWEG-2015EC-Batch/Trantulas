
#include <iostream>
#include <cmath>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}
// Function to find the sum of digits in a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to find the product of even digits in a number
int productOfEvenDigits(int num) {
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

// Function to find the first and last digit and their sum
void firstAndLastDigit(int num) {
    int lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    int firstDigit = num;
    int sum = firstDigit + lastDigit;
    cout << "First Digit: " << firstDigit << endl;
    cout << "Last Digit: " << lastDigit << endl;
   cout << "Sum of First and Last Digit: " << sum << endl;
}
// Function to swap the first and last digit
int swapFirstAndLastDigit(int num) {
    int digits = countDigits(num);
    if (digits <= 1) {
        return num;
    }

    int lastDigit = num % 10;
    int firstDigit = num / pow(10, digits - 1);
    int middlePart = num % static_cast<int>(pow(10, digits - 1)) / 10;

    return lastDigit * static_cast<int>(pow(10, digits - 1)) + middlePart * 10 + firstDigit;
}
// Function to check if a number is palindrome
bool isPalindrome(int num) {
    return num == reverseNumber(num);
}
// Function to find the frequency of each digit
void digitFrequency(int num) {
    int frequency[10] = {0};
    while (num > 0) {
        frequency[num % 10]++;
        num /= 10;
    }

    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << i << "\t" << frequency[i] << endl;
        }
    }
}
// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int originalNum = num;
    int digits = countDigits(num);
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return sum == originalNum;
}

// Function to check if a number is Strong
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    return sum == originalNum;
}
// Function to check if a number is Perfect
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int choice, num;

    do {
        cout << "\nMenu:\n";
        cout << "1. Reverse of the number\n";
        cout << "2. Count the number of digits\n";
        cout << "3. Sum of digits\n";
        cout << "4. Product of even digits\n";
        cout << "5. First and last digit\n";
        cout << "6. Swap first and last digit\n";
        cout << "7. Check if palindrome\n";
        cout << "8. Digit frequency\n";
        cout << "9. Check if Armstrong\n";
        cout << "10. Check if Strong\n";
        cout << "11. Check if Perfect\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an integer: ";
                cin >> num;
                cout << "Reversed number: " << reverseNumber(num) << endl;
                break;
case 2:
                cout << "Enter an integer: ";
                cin >> num;
                cout << "Number of digits: " << countDigits(num) << endl;
                break;

            case 3:
                cout << "Enter an integer: ";
                cin >> num;
                cout << "Sum of digits: " << sumOfDigits(num) << endl;
                break;

            case 4:
                cout << "Enter an integer: ";
                cin >> num;
                cout << "Product of even digits: " << productOfEvenDigits(num) <<endl;
                break;

            case 5:
                cout << "Enter an integer: ";
                cin >> num;
                firstAndLastDigit(num);
                break;

            case 6:
                cout << "Enter an integer: ";
                cin >> num;
                cout << "Number after swapping first and last digit: " << swapFirstAndLastDigit(num) << endl;
                break;

            case 7:
                cout << "Enter an integer: ";
                cin >> num;
                cout << (isPalindrome(num) ? "Palindrome" : "Not a palindrome") << endl;
                break;

            case 8:
                cout << "Enter an integer: ";
                cin >> num;
                digitFrequency(num);
                break;

            case 9:
                cout << "Enter an integer: ";
                cin >> num;
                cout << (isArmstrong(num) ? "Armstrong" : "Not an Armstrong number") <<endl;
                break;
            case 10:
                cout << "Enter an integer: ";
                cin >> num;
                cout << (isStrong(num) ? "Strong" : "Not a Strong number") << endl;
                break;

            case 11:
                cout << "Enter an integer: ";
                cin >> num;
                cout << (isPerfect(num) ? "Perfect" : "Not a Perfect number") <<endl;
                break;

            case 0:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }

    } while (choice != 0);

    return 0;
}
