#include<iostream>
using namespace std;
int main(){
    int base, exponent;
    float  power = 1;
    cout<<"enter value of base : ";
    cin>>base;
    cout<<"enter value of exponent : ";
    cin>>exponent;
    bool flag = true; // true means power positve.
    if(exponent<0){
        flag = false; // false means negative power.
        exponent = -exponent;
    }
    for(int i = 1; i<=exponent; i++){
        power *=base;
    }
    if(flag == false){
        power = 1/power;
        exponent = -exponent;
    }
    if(base== 0 && exponent == 0) cout<<"not defiend.";
    else cout<<base<<" raised to the power "<<exponent<<" is: "<<power;
    return 0;
}