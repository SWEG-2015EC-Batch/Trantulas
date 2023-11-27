//BMI CALCULATOR
#include<iostream>
using namespace std;
int main(){
    int i,n;
   double w,h,bmi;
   char gender;
   cout<<"enter the number of people";
   cin>>n;
   for(i=1;i<=n;i++){
lb:
   cout<<"enter gender(F/M):";
   cin>>gender;
   if(gender=='F'||gender=='f'){
    cout<<"your gender is female"<<endl;
   }
   else if (gender=='M'||gender=='m'){
    cout<<"your gender is male"<<endl;
   }
   else{
    cout <<"invalid gender"<<endl;
    goto lb;
   }
   cout<<"height:";
   cin>>h;
   cout<<"weight: ";
   cin>>w;
   bmi = w/(h*h);
   cout<<"bmi is: "<<bmi;


    if (gender=='F'||gender=='f'){
            if ( bmi < 18.5){
        cout<<" you are under weight"<<endl;
        }
        else if( bmi>=18.5&&bmi<=24.9){
                cout<<" you are normal weight"<<endl;
        }
        else if(bmi>=25&&bmi<=29.9){
            cout<<" you are over weight"<<endl;
        }
        else {
            cout<<" you are obesity"<<endl;
        }

    }
    if (gender=='M'||gender=='m'){
            if ( bmi < 20.5){
        cout<<" you are under weight"<<endl;
        }
        else if( bmi>=20.5 && bmi<=25.9){
                cout<<" you are normal weight"<<endl;
        }
        else if(bmi>=26&&bmi<=29.9){
            cout<<" you are over weight"<<endl;
        }
        else {
            cout<<" you are in obesity"<<endl;
        }
    }
   }

cout<<"THANK YOU!";
   return 0;

}
