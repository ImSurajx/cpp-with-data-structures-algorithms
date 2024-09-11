#include<iostream>
using namespace std;
int main(){
    int n, a = 1;
    cout<<"enter value of n : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        cout<<a<<" ";
        a *= 2;
    }
    return 0;
}