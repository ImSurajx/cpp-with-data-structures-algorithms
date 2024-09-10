#include <iostream>
using namespace std;
int main()
{
    float side1, side2, side3;
    cout << "enter three sides of triangle : ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2)
    {
        if (side1 == side3)
        {
            cout << "It's a Equilateral Triangle";
        }
    }
    if (((side1 == side2) && (side1 != side3)) || ((side2 == side3) && (side2 != side1)) || ((side3 == side1) && (side3 != side2)))
    {
        cout << "It's a Isosceles Triangle";
    }
    if (side1 != side2 && side2 != side3 && side3 != side1)
    {
        cout << "It's a Scalene Triangle";
    }
    return 0;
}