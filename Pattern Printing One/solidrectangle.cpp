#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter number of rows : ";
    cin>>n;
    cout<<"enter number of columns : ";
    cin>>m;
    for(int i = 1; i<=n; i++){
        for (int i = 1; i <= m; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}