#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a integer: ";
    cin>>number;
    if((number%5==0  || number%3==0) &&  (number%15!=0)){
        cout<<"this integer is divisible by 5 & 3 but not 15.";
    } else {
        cout<<"this integer is not divisible by 5 & 3 or 15.";
    }
    return 0;
}