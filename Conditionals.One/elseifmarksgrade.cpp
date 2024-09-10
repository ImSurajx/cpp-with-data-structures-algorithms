#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter marks: ";
    cin >> n;
    if (n >= 90)
    {
        cout << "Excellent";
    }
    else if (n >= 81)
    {
        cout << "Very Good";
    }
    else if (n >= 71)
    {
        cout << "Good";
    }
    else if (n >= 61)
    {
        cout << "Can do better";
    }
    else if (n >= 51)
    {
        cout << "Below average.";
    }
    else if (n >= 40)
    {
        cout << "Fail";
    }
    else
    {
        cout << "Fail" ;
    }
    
    return 0;
}