#include<iostream>
using namespace std;
int main(){
    float x1, y1, x2, y2, x3, y3, area;
    cout<<"enter coordinates: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    area = ((1/2) * ((x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2))));
    if(area == 0){
        cout<<"all three points lies on the same line. ";
    } else{
        cout<<"all three points doesn't lies on the same line. ";
    }
    return 0;
}