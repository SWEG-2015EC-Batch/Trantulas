#include <iostream>
using namespace std;

int main() {
    int test, quiz, project, assignment, finalExam;
    double totalMark;
    char Grade;

    cout << "Enter the mark for Test (out of 15): ";
    cin >> test;
    cout << "Enter the mark for Quiz (out of 5): ";
    cin >> quiz;
    cout << "Enter the mark for Project (out of 20): ";
    cin >> project;
    cout << "Enter the mark for Assignment (out of 10): ";
    cin >> assignment;
    cout << "Enter the mark for Final Exam (out of 50): ";
    cin >> finalExam;
    totalMark = (test ) + (quiz ) + (project ) + (assignment ) + (finalExam );

    if (totalMark >= 90) {
        cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is A+"<<endl;
    }
    else if (totalMark >= 80) {
        cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is A"<<endl;
    }
     else if (totalMark >= 75) {
         cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is B+"<<endl;
    }
     else if (totalMark >= 60) {
         cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is B"<<endl;
    }
     else if (totalMark >= 55) {
         cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is C+"<<endl;
    }
     else if (totalMark >= 45) {
         cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your  grade is C"<<endl;
    }
     else if (totalMark >= 30) {
         cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is D"<<endl;
    }
     else {
         cout<< "Your Total mark is "<<totalMark<<endl;
        cout<< "Your grade is F"<<endl;
    }
}

