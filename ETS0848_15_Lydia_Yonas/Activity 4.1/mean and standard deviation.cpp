#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number, sum = 0, sumSq = 0, mean, stdDev;
    int count = 0;

    cout << "Enter numbers separated by spaces, end with a non-number character:\n";

    while (cin >> number) {
        cout << "You entered: " << number << endl;
        sum += number;
        sumSq += number * number;
        count++;
    }

    if (count > 0) {
        mean = sum / count;
        stdDev = sqrt((sumSq / count) - (mean * mean));
        cout << "Mean: " << mean << endl;
       cout << "Standard Deviation: " << stdDev << endl;
    } else {
       cout << "No numbers were entered." << endl;
    }

    return 0;
}
