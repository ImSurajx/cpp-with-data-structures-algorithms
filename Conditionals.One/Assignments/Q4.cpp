#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area, perimeter;
    cout << "enter length & breadth of rectangle : ";
    cin >> length >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << area << " Unit Square." << " > " << perimeter << " Unit." << " Therefore, area of rectangle is greater than perimeter";
    }
}