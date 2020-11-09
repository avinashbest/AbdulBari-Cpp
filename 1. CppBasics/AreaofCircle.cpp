#include <iostream>
using namespace std;

int main(void)
{
    float radius, area;

    cout << "Enter Radius: ";
    cin >> radius;
    area = 3.1425f * radius * radius;

    cout << "Area is " << area;

    return 0;
}