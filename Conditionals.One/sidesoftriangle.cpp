#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2))
    {
        cout << side1 <<" "<< side2 <<" "<< side3 <<" "<< "this can be sides of trianle.";
    }
    else
    {
        cout << side1 <<" "<< side2 <<" "<< side3 <<" "<< "this can not be sides of traingle";
    }
    return 0;
}
