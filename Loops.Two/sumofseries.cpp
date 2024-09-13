#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout << "enter a number : ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //     }
    //     else
    //     {
    //         sum -= i;
    //     }
    // }
    // when n is even
    if (n%2==0)sum = -n/2;
    else sum = -n/2 + n;
    cout << sum;
    return 0;
}
