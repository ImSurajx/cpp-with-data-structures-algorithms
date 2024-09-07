#include<iostream>
using namespace std;
int main(){
    float real_number;
    cout<<"enter a real number: ";
    cin>> real_number;
    int integer = (int)real_number;
    if (integer < 0) integer = integer - 1;
    float fraction = real_number - integer;
    cout<<"the fraction part of following number is: "<<fraction;
    return 0;
}