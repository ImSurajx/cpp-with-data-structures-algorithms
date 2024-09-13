#include<iostream>
using namespace std;
int main(){
    int num, facto = 1;
    cout<<"enter a number: ";
    cin>>num;
    for(int i = 1; i <= num; i++){
        facto *= i; 
        cout<<"the factorial of "<<i<< " is : "<< facto<<endl; 
    }
    return 0;
}
