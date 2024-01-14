#include <iostream>
using namespace std;
int main(){
    int n;
    float examscores[20],
    test[20],
    assignment[20],
    quiz[20],
    project[20],
    final[20];
    string status[20];
     cout<<"enter the number of students: ";
     cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the test of student "<<i+1<<": ";
        cin>>test[i];
        cout<<"enter the assignment of student "<<i+1<<": ";
        cin>>assignment[i];
        cout<<"enter the quiz of student "<<i+1<<": ";
        cin>>quiz[i];
        cout<<"enter the project of student "<<i+1<<": ";
        cin>>project[i];
        cout<<"enter the final of student "<<i+1<<": ";
        cin>>final[i];
      examscores[i]=test[i]+assignment[i]+quiz[i]+project[i]+final[i];
    if(examscores[i]>=80){
        status[i]="Excellent";
       }else if(examscores[i]>=60){
        status[i]="Very Good";
       }else if(examscores[i]>=50){
        status[i]="Fair";
       }else if(examscores[i]>=40){
        status[i]="Poor";
       }else if(examscores[i]<40){
        status[i]="Fail";
       }else{
        status[i]="Error";
       }
       }
    cout<<"students \t "<<"totalscore\t"<<"score status"<<endl;
   for(int i=0;i<n;i++){
    cout<<"student "<<i+1<<"\t\t"<<examscores[i]<<"\t"<<status[i]<<endl;
   }
     return 0;
}
