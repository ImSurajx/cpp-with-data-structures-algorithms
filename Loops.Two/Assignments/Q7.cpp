#include<iostream>
using namespace std;
int main(){
    int num, product = 1;
    cout<<"enter number : ";
    cin>>num;
    for(int i=1; i<=num; i++){
        product *=i;
        cout<<"factorial of " <<i<< " will be : "<<product<<endl;
    }
    return 0;
}