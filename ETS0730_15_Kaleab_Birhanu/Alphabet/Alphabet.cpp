 // for uppercase and lowercase functions
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (isupper(letter)) {
        char lowercase =tolower(letter);
        cout << "Lowercase equivalent: " << lowercase <<endl;
    }
    else if (islower(letter)) {
        char uppercase = toupper(letter);
        cout << "Uppercase equivalent: " << uppercase << endl;
    }
    else {
        cout << "Invalid input! Please enter a valid letter." << endl;
    }

    return 0;
}
