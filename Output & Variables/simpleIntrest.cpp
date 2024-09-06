#include<iostream>
using namespace std;
int main(){
    float principle = 2000, rate = 16, time = 3.5, simple_intrest;
    simple_intrest = (principle * rate * time) / 100;
    cout<< "simple intrest will be: " << simple_intrest << endl;
    return 0;
}