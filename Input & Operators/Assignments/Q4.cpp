#include<iostream>
using namespace std;
int main(){
    // volume of the cylinder = 3.1415*r*r*h
    float pie = 3.1415, radius, height;
    cout<<"enter radius of cylinder: ";
    cin>>radius;
    cout<<"enter height of cylinder: ";
    cin>>height;
    cout<<"the volume of cylinder is: ";
    float volume =  pie * radius * radius * height;
    cout<<volume;
    return 0;
}