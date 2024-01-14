#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = "";

    for (char character : input) {
        if (isalpha(character)) {
            result += character;
        }
    }

    cout << "String after removing non-alphabet characters: " << result << endl;

    return 0;
}
