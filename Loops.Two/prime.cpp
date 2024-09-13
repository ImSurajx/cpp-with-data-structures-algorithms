#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    bool flag = true; // true means prime
    for(int i = 2; i<=n-1; i++){
        if(n%i==0){ // i is a factor of n
        flag = false; // false means composite;
        break;
        }
    }
    if (n==1){
        cout<<n<<" neither prime or nor composite.";
    }else if(flag == true){
         cout<<n<<" is a prime number : ";
    } else{
         cout<<n<<" is a composite number : ";
    }
    return 0;
}