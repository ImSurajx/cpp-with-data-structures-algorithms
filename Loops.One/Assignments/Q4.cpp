#include<iostream>
using namespace std;
int main(){
    int n, a = 4;
    cout<<"enter number : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        cout<<a<<" ";
        a+=3;
    }
    return 0;
}
