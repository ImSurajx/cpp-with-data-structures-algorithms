#include<iostream>
using namespace std;
int main(){
    int a = 14; // a mean dividend
    int b = 3; // b is divisor
    int q = a/b; // q is quotient
    int r; // r is remainder
    // applying formula to find remainder //
    r = a - (b*q);
    cout<<"the remainder is "<<r<<endl;
    return 0;
}