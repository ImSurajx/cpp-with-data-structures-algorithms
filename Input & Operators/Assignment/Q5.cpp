#include<iostream>
using namespace std;
int main(){
    char ascii_one, ascii_two;
    cout<<"enter character one & character two: ";
    cin>>ascii_one>>ascii_two;
    cout<<(int)ascii_one - (int)ascii_two;
    return 0;
}