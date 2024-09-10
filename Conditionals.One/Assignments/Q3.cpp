#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter any year : ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " isn't a leap year.";
    }
    return 0;
}