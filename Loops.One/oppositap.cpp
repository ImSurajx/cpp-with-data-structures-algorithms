#include<iostream>
using namespace std;
int main(){
    int n, a = 100;
    cout<<"enter a number : ";
    cin>>n;
    for(int i = 1; i<=n; i--){
        cout<< a <<" ";
        a -= 3;
    }
    return 0;
}