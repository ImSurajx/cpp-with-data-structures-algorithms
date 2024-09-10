#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    if(number%5==0){
        if(number%3==0){
            cout<<"the following number is divisble by 5 & 3";
        } else{
            cout<<"the following number is only divisble by 5.";
        } 
    } else{
            cout<<"the number is not divisible by 5 & 3.";
        }
    return 0;
}