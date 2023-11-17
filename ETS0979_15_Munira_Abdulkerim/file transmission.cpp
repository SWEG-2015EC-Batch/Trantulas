// the program that ccalculate file transmission in byte
#include <iostream>
using namespace std;
int main() {
const int transmissionRate = 960;
   int fileSizeInBytes;
    int timeInSeconds;
  cout << "Enter the file size in bytes: ";
  cin >> fileSizeInBytes;
timeInSeconds = fileSizeInBytes / transmissionRate;
cout << "Time required to send the file: " << timeInSeconds << " seconds" << endl;
return 0;
}
