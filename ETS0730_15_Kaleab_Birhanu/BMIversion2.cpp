//BMI CALCULATOR
#include <iostream>
using namespace std;
int main()
{
  double Weight,Height,BMI;
   char f,m,gender;


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
    cout <<"invalid gender! please enter valid letter"<<endl;
    goto lb;
   }
   cout<<" Weight(in Kg)";
    cin>> Weight;
    cout<<" Height(in M)";
    cin>> Height;
    BMI=Weight/(Height*Height);
    cout<<"BMI="<<BMI;
    if(gender=='F'||gender=='f'){
           if(BMI<18.5){
         cout<<"   your BMI show that you are under weight"<<endl;
           }

    else if(BMI>18.5 && BMI<=24.9){
        cout<<"  your BMI show that you are normal weight"<<endl;
    }
    else if(BMI>=25 && BMI<=29.9){
        cout<<"  your BMI show that you are over weight"<<endl;
    }
    else{
        cout<<"  your BMI show that you have obesity"<<endl;
    }
    }

     if(gender=='M'||gender=='m'){
           if(BMI<20.5){
         cout<<"   your BMI show that you are under weight"<<endl;
           }

    else if(BMI>20.5 && BMI<=25.9){
        cout<<"  your BMI show that you are normal weight"<<endl;
    }
    else if(BMI>=18.5 && BMI<=24.9){
        cout<<"  your BMI show that you are over weight"<<endl;
    }
    else{
        cout<<"  your BMI show that you have obesity"<<endl;
    }
    }

    return 0;
}
