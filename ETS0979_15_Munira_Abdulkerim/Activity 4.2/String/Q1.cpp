#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowelsCount = 0;
    int consonantsCount = 0;

    for (char character : input) {
        if (isalpha(character)) {
            char lowerChar = tolower(character);
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                vowelsCount++;
            } else {
                consonantsCount++;
            }
        }
    }

    cout << "Number of vowels: " << vowelsCount << endl;
    cout << "Number of consonants: " << consonantsCount << endl;

    return 0;
}
