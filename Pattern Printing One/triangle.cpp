#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter value of n : ";
    cin>>n;
    cout<<"enter value of m : ";
    cin>>m;
    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}