#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter any two integers : ";
    cin >> num1 >> num2;
    if (num1 > num2)
        cout << num1 << " is the greatest integer.";
    else
        cout << num2 << " is the greatest integer.";
    return 0;
}