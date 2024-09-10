#include<iostream>
using namespace std;
int main(){
    int selling_price, cost_price;
    cout<<"enter cost price of product: ";
    cin>>cost_price;
    cout<<"enter selling price of product: ";
    cin>>selling_price;
    if(selling_price>cost_price){
        cout<<"the seller made profit of: "<< selling_price - cost_price;
    } else if(selling_price == cost_price){
        cout<<"the seller made no profit on this product.";
    } else{
        cout<<"the seller face loss of: "<< cost_price - selling_price;
    }
    return 0;
}