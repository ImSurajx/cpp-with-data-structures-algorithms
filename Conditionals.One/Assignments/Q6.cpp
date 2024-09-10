#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter marks of students a,b or c : ";
    cin>>a>>b>>c;
    if(a<=b && a<=c ){
        cout<<a<<"  has least marks.";
    } else if(b<=a && b<=c ){
        cout<<b<<" has least marks.";
    } else if(c<=a && c<=b){
        cout<<c<<" has least marks.";
    }
    return 0;
}