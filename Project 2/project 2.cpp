//printing pattern 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
cout << "Enter a positive integer : ";
cin >> n ;
if(n <= 10){
        if (n < 1) {
        cout << "Error: Please enter a positive integer greater than or equal to 1." << endl;
        return 1; // Exit program with an error code
    }

for(int i=0;i<2*n-1;i++){
    cout<<"0";
}
cout<<endl;
    for (int i = 1; i < n; ++i) {


        for (int j = 0; j <= n - i-1; ++j) {
            cout << i;
        }

        for (int k = 1; k < i; ++k) {
            cout << " ";
        }

        for (int l = 0; l < i; ++l) {
            cout << " ";
        }

        for (int m = 0; m <= n - i-1; ++m) {
            cout << i;
        }

        cout << "\n";
    }

    for (int i = n - 2; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << i;
        }

        for (int k = 1; k < i; ++k) {
            cout << " ";
        }

        for (int l = 0; l < i; ++l) {
            cout << " ";
        }

        for (int m = 0; m < n - i; ++m) {
            cout << i;
        }

        cout << "\n";
    }

    for(int i=0;i<2*n-1;i++){
    cout<<"0";
}
cout<<endl;
        }
else if (n>10){

    if (n < 1) {
        cout << "Error: Please enter a positive integer greater than or equal to 1." << endl;
        return 1; // Exit program with an error code
    }

    // Set the width for printing numbers
    int width = 2; // Adjust as needed for larger values of n

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << setw(width) << i;
        }

        for (int k = 0; k < i; ++k) {
            cout << "  ";
        }

        for (int l = 0; l < i; ++l) {
            cout << "  ";
        }

        for (int m = 0; m < n - i; ++m) {
            cout << setw(width) << i;
        }

        cout << "\n";
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << setw(width) << i;
        }

        for (int k = 0; k < i; ++k) {
            cout << "  ";
        }

        for (int l = 0; l < i; ++l) {
            cout << "  ";
        }

        for (int m = 0; m < n - i; ++m) {
            cout << setw(width) << i;
        }

        cout << "\n";
    }
        }
    return 0;
}
