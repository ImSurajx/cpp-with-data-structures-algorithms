#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    int assci = (int)ch;
    if(assci>=65 && assci <= 90){
        cout<<"It's a Capital alphabet.";
    } else if(assci>=97 && assci <= 122){
        cout<<"It's a Small alphabet.";
    } else if(assci>=48 && assci <= 57){
        cout<<"It's a Digit.";
    } else{
        cout<<"It's a Special Character.";
    }
    return 0;
}