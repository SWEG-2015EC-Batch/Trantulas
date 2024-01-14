#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    string input;
    cout << "Enter a word: ";
    cin >> input;

    int length = input.length();
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; ++i) {
        if (tolower(input[i]) != tolower(input[length - 1 - i])) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
