#include<iostream>
using namespace std;
int main(){
    int n, a = 0, b = 1, sum;
    cout<<"enter number : ";
    cin>>n;
    cout<<"1";
    for (int i = 1; i <= n-1; i++)
    {
        sum =  a + b;
        a = b;
        b = sum;
        cout<<" "<<sum;
    }
    return 0;
}