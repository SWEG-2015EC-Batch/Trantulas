#include <iostream>
using namespace std;

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  if (isupper(ch)) {
    cout << ch << " is an uppercase letter." << endl;
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      cout << "It is also a vowel." << endl;
    } else {
      cout << "It is a consonant." << endl;
    }
  }
  else if (islower(ch)) {
    cout << ch << " is a lowercase letter." << endl;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      cout << "It is also a vowel." << endl;
    } else {
      cout << "It is a consonant." << endl;
    }
  }
  else if (isdigit(ch)) {
    cout << ch << " is a digit." << endl;
    if (ch % 2 == 0) {
      cout << "It is an even number." << endl;
    } else {
      cout << "It is an odd number." << endl;
    }
  }
  else {
    cout << ch << " is a special character." << endl;
  }

  return 0;
}
