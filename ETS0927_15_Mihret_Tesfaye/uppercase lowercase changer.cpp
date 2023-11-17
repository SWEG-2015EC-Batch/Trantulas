//the program convert uppercase to lowercase or vice versa
#include <iostream>
#include<ctype.h>
using namespace std;

int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
  if (letter >= 'a' && letter <= 'z') {
       letter = letter - 32;
        cout << "Uppercase equivalent: " << letter << endl;
    } else if (letter >= 'A' && letter <= 'Z') {
       letter = letter + 32;
    cout << "Lowercase equivalent: " << letter << endl;
    } else {
    cout << "Invalid input. Please enter a valid letter." << endl;
    }

    return 0;
}
