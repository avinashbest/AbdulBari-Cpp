//Program to reverse the input number
#include <iostream>
using namespace std;

int main(void)
{
    int n, r, reverse;
    cout << "Enter Number: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        n = n / 10; //updating the n
        reverse = reverse * 10 + r;
    }

    cout << "Reverse Number is = " << reverse << endl;
    return 0;
}
// Code By: Avinash Kumar.