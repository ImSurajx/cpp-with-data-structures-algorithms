#include <iostream>
using namespace std;
int main()
{
    int n, digit, reverse = 0, lastdigit = 0;
    cout << "enter number : ";
    cin >> n;
    digit = n;
    while (n > 0)
    {
        reverse *= 10;
        lastdigit = n % 10;
        reverse += lastdigit;
        n = n / 10;
    }
    cout << "the sum of input digit & it's reverse will be: " << digit + reverse;
    return 0;
}