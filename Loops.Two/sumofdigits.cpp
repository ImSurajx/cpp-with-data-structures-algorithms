#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int store = 0;
    while (num != 0)
    {
        store += num % 10;
        num /= 10;
    }
    cout << "the sum of digits: " << store;
    return 0;
}