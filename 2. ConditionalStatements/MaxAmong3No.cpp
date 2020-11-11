#include <iostream>
using namespace std;
// Program to find maximum among 3 numbers
int main(void)
{
    int a, b, c;

    cout << "Enter 3 number: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is greater" << endl;
    }
    else if (b > c)
    {
        cout << b << " is greater" << endl;
    }
    else
    {
        cout << c << " is greater" << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.