
//a program that prints patterns of numbers and characters
#include <iostream>
using namespace std;

int main() {

    int choice;
    int rows;
    int size;
    int num_matrix = 1;
    char letter = 'a';

    do{

        cout<<"Select a pattern:" << endl;
        cout<<"1. half pyramid" << endl;
        cout<<"2. inverted half pyramid"<<endl;
        cout<<"3. full pyramid"<<endl;
        cout<<"4. inverted full pyramid"<<endl;
        cout<<"5. hollow inverted half pyramid"<<endl;
        cout<<"6. hollow full pyramid"<<endl;
        cout<<"7. Box pattern"<<endl;
        cout<<"8. hollow box pattern"<<endl;
        cout<<"9. right angle triangle"<<endl;
        cout<<"10. hollow right angle triangle"<<endl;
        cout<<"11. Inverted Right Angled Triangle Pattern"<<endl;
        cout<<"12. 1-5 matrix"<<endl;
        cout<<"13. 1-5 right angled triangle"<<endl;
        cout<<"14. 'a' to 'e' Box Letter Matrix"<<endl;
        cout<<"15. 'a' to 'x' Box letter matrix"<<endl;
        cout<<"16. Box matrix starting from 10"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice){

            case 1 :

                cout << "Enter number of rows: ";
                cin >> rows;

                for(int i = 1; i <= rows; ++i){
                    for(int j = 1; j <= i; j++) {
                        cout << "^ ";
                    }
                    cout << "\n";
                }
                break;

            case 2 :

                cout<<"enter number of rows:";
                cin>>rows;

                for(int i=rows; i>=1;--i){
                    for(int j=1;j<=i;j++) {
                        cout<<"* ";
                    }
                    cout<<"\n";
                }
                break;

            case 3 :

                cout<<"enter number of rows:";
                cin>>rows;

                for(int i = 1; i <= rows; ++i) {
                    for(int j = 1; j <= rows - i; ++j) {
                        cout << "  ";
                    }
                    for(int k = 1; k <= 2 * i - 1; ++k) {
                        cout << "# ";
                    }
                    cout << "\n";
                }
                break;

            case 4 :

                cout << "Enter number of rows: ";
                cin >> rows;

                for(int i = 1; i <= rows; ++i) {
                    for(int j = 1; j < i; ++j) {
                        cout << "  ";
                    }
                    for(int k = 1; k <= 2 * (rows - i) + 1; ++k) {
                        cout << ". ";
                    }
                    cout << "\n";
                }
                break;

            case 5 :

                cout << "Enter number of rows: ";
                cin >> rows;

                for(int i = rows; i >= 1; --i)
                {
                    for(int j = 1; j <= i; ++j)
                    if(j == 1 || j == i || i == rows)
                        cout << "` ";
                    else
                        cout << "  ";
                    cout << endl;
                }
                break;

            case 6 :

                cout << "Enter number of rows: ";
                cin >> rows;

                for(int i = 1; i <= rows; ++i)
                {
                    for(int space = 1; space <= rows-i; ++space)
                        cout << " ~";
                    cout << endl;
                }
                break;

            case 7:

                cout << "Enter number of rows: ";
                cin >> rows;

for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < rows; j++) {
                        cout << "% ";
                    }
                    cout << endl;
                }
                break;

            case 8 :

                cout << "Enter number of rows: ";
                cin >> rows;

                for (int i = 1; i <= rows; ++i) {
                    cout << "* ";
                }
                cout << "\n";

                for (int i = 2; i < rows; ++i) {
                    cout << "* ";
                    for (int j = 2; j < rows; ++j) {
                        cout << "  ";
                    }
                    cout << "*\n";
                }

                for (int i = 1; i <= rows; ++i) {
                    cout << "* ";
                }
                cout << "\n";

                break;

            case 9:

                cout << "Enter number of rows: ";
                cin >> rows;

                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 10:

                cout << "Enter number of rows: ";
                cin >> rows;

                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j <= i; j++) {
                        if (j == 0 || j == i || i == rows - 1) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }
                break;

            case 11:

                cout << "Please enter the size of the pattern you want: ";
                cin >> rows;

                for (int i = 0; i < rows; i++) {
                    for (int j = rows; j > i; j--) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 12:

                for (int i {0}; i < 5; i++) {
                    for (int j {0}; j < 5; j++) {
                        cout << num_matrix <<" ";
                        num_matrix++;
                    }
                    num_matrix = 1;
                    cout << endl;
                }
                break;

            case 13:

                for (int i {0}; i < 5; i++) {
                    for (int j {0}; j <= i; j++) {
                        cout << num_matrix <<" ";
                        num_matrix++;
                    }
                    num_matrix = 1;
                    cout << endl;
                }
                break;

            case 14:

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        cout << letter << " ";
                        letter++;
                    }
                    letter = 'a';
                    cout << endl;
                }
                break;

            case 15:

                for (int i {0}; i < 4; i++) {
                    for (int j {0}; j < 6; j++) {
                        if (letter <= 'x'){
                           cout << letter << " ";
                           letter++;
                        }
                    }
                    cout <<endl;
                }
                break;

            case 16:


                cout <<"Enter number of rows: ";
                cin >> rows;

for (int i {0}; i < rows; i++) {
                    int num {10};
                        for (int j {0}; j < rows; j++) {
                cout <<num<<" ";
                num++;
                }
                cout <<endl;
                }
                break;


            case 0 :
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
