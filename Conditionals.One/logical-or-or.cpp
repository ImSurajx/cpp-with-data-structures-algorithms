#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a integer: ";
    cin>>number;
    if(number%5==0  || number%3==0){
        cout<<"this integer is divisible by 5 or 3.";
    } else {
        cout<<"this integer is not divisible by 5 or 3.";
    }
    return 0;
}