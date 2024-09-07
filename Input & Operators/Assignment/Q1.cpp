#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number: ";
    cin>>x;
    int y,m;
    cout<<"enter second number and value for taking module: "<<endl;
    cin>>y>>m;
    int Z = (x*y)%m;
    cout<<"output is: "<<Z;
    return 0;
}