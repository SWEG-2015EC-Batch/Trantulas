#include <iostream>
#include <string>
using namespace std;
int main() {
  const int numNames = 3;
  string names[numNames];

  // Accept names from the user
  cout << "Enter " << numNames << " names:\n";
  for (int i = 0; i < numNames; ++i) {
    cout << "Name " << i + 1 << ": ";
    getline(cin, names[i]);
  }

  // Sort the names in alphabetical order
  for (int i = 0; i < numNames - 1; i++)
  {
    for (int j = i + 1; j < numNames; j++)
    {
      if (names[i] > names[j])
      {                   // Swap the names
        string temp = names[i];
        names[i] = names[j];
        names[j] = temp;
      }
    }
  }

  // Display the sorted names
  cout << "\n  Their Alphabetic order is :\n";
  for (int i = 0; i < numNames; ++i) {
    cout << names[i] <<endl;
  }

  return 0;
}


