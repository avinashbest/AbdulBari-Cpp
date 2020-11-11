#include <iostream>
#include <cmath>
using namespace std;
//Program to check the nature of the roots of a quadratic equation.
int main(void)
{
    float a, b, c, d;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "Roots are Real & Equal." << endl;
        cout << (-b / (2 * a)) << endl;
    }
    else if (d > 0)
    {
        cout << "Roots are Real & Unequal.";
        cout << (-b + sqrt(d)) / (2 * a) << endl
             << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else
    {
        cout << "Imaginary" << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.