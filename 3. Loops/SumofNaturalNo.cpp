#include <iostream>
using namespace std;
//Program to print the sum of n natural number using loop
int main(void)
{
    int n, sum = 0;

    cout << "Enter number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum += i;
    }

    cout << "Sum of " << n << " natural no is " << sum << endl;

    return 0;
}
// Code By: Avinash Kumar.