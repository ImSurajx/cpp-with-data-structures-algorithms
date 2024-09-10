#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"enter co-ordinate of x & y axis : ";
    cin>>x>>y;
    if (x == 0 && y == 0){
        cout<<("the following coordinate lies on the origin");
    } else if(y==0){
        cout<<("the following coordinate lies on x axis. ");
    } else if(x==0){
        cout<<("the following coordinate lies on y axis. ");
    } else {
        cout << "The coordinate does not lie on any axis.";
    }
    return 0;
}