#include<iostream>
using namespace std;
int main(){
    int integer;
    cout<<"enter a integer: ";
    cin>>integer;
    if(integer<0){
        cout<<"the absolute value of following integer is: "<< -integer;
    }else{
        cout<<"the absolute value of following integer is: "<< integer;
    }
    return 0;
}