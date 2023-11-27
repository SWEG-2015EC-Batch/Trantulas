//BMI CALCULATOR
#include<iostream>
using namespace std;
int main(){
   double w,h,bmi;
   char gender;

   cout<<"enter gender(F/M):";
   cin>>gender;

   if(gender=='F'){
    cout<<"your gender is female"<<endl;
   }
   else{
    cout<<"your gender is male"<<endl;
   }

   cout<<"height:";
   cin>>h;
   cout<<"weight: ";
   cin>>w;
   bmi = w/(h*h);
   cout<<"bmi is: "<<bmi;

    if (gender=='F'){
            if ( bmi < 18.5){
        cout<<" you are under weight"<<endl;
        }
        else if(bmi>=18.5 && bmi<=24.9){
                cout<<" you are normal weight"<<endl;
        }
        else if(bmi>=20.5 && bmi<=29.9){
            cout<<" you are over weight"<<endl;
        }
        else {
            cout<<" you are obese"<<endl;
        }

    }
    if (gender=='M'){
            if ( bmi < 20.5){
        cout<<" you are under weight"<<endl;
        }
        else if( bmi>=20.5 && bmi<=25.9){
                cout<<" you are normal weight"<<endl;
        }
        else if(bmi>=26 && bmi<=29.9){
            cout<<" you are over weight"<<endl;
        }
        else {
            cout<<" you are obese"<<endl;
        }
    }

   return 0;

}
