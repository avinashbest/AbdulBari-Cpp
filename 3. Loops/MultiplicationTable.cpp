#include <iostream>
using namespace std;
//Program to print the multiplication table of a given number
int main(void)
{
    int n;
    cout << "Enter the number which Multiplication Table you want? ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }

    cout << endl;

    return 0;
}
// Code By: Avinash Kumar.