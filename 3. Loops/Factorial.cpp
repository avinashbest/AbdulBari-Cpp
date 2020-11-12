#include <iostream>
using namespace std;
//Program to print the factorial of a number
int main(void)
{
    int n, factorial = 1;

    cout << "Enter number to find factorial: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is " << factorial << endl;

    return 0;
}
// Code By: Avinash Kumar.