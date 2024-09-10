#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    int x = (int)ch;
    if((x>= 97 && x<=122) || (x>= 65 && x<=90)){
        cout<<"the character is alphabet. ";
    } else{
        cout<<"the character is not a alphabet. ";
    }
    return 0;
}