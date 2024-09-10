#include<iostream>
using namespace std;
int main(){
    int integer;
    cout<<"enter a integer : ";
    cin>>integer;
    if(integer%5==0 || integer%3 == 0){
        if(integer%15!=0){
            cout<<"matching the condition.";
        } else {
            cout<<"not  matching the condition ";
        }
    } else{
        cout<<"not matching the condition";
    }
    return 0;
}