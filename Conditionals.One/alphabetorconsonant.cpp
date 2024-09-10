#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter an alphabet: ";
    cin>>ch;
    int assci = (int)ch;
    if((assci>=65 && assci<=90) ||(assci>=97 && assci<=122) ){
        if(assci == 65 || assci == 97){
            cout<<"alphabet is a vowel.";
        } else if (assci == 69 || assci == 101){
            cout<<"alphabet is a vowel.";
        } else if (assci == 73 || assci == 105){
            cout<<"alphabet is a vowel.";
        }else if (assci == 79 || assci == 111){
            cout<<"alphabet is a vowel.";
        }else if (assci == 85 || assci == 117){
            cout<<"alphabet is a vowel.";
        } else {
            cout<<"alphabet is a constant.";
        }
    }   
    return 0;
}