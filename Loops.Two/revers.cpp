#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int store = 0, lastDigit = 0;
        while (n>0)
        {
            store *= 10;
            lastDigit = n%10;
            store += lastDigit;
            n /= 10;
        }
        cout<<store;
    return 0;
}