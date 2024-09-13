#include<iostream>
using namespace std;
int main(){
    int n, digit, sum = 0;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        digit = n%10;
        if(digit%2==0){
            sum += digit;
        }
        n /=10;
    }
    cout<<"the sum of even digit : "<< sum;
    return 0;
}