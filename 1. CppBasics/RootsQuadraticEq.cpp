#include <iostream>
#include <cmath>
using namespace std;
//Finding the root of a Quadratic Equation
int main(void)
{
    float a, b, c, x1, x2;

    cout << "Enter the coefficients of x^2, x and constant terms respectively: ";
    cin >> a >> b >> c;

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x1 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    cout << "\nRoots are:\n"
         << "x1 = " << x1 << " x2 = " << x2 << endl;

    return 0;
}