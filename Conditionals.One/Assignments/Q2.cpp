#include<iostream>
using namespace std;
int main(){
    float radius, pie = 3.1415, area, circumference ;
    cout<<"enter radius of circle: ";
    cin>>radius;
    area = pie * radius * radius;
    circumference = 2 * pie * radius;
    if(area>circumference){
        cout<<area<<" Unit Square."<<" > "<< circumference <<" Unit."<<" Therefore, Area is greater than circumference";
    }
    return 0;
}