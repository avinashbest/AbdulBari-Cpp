//Program to check given number is palindrom or not.
#include <iostream>
using namespace std;
//Palindrome Number: If the reverse of a number is same as original number is called palindrome.
int main(void)
{
    int n, r, reverse;
    cout << "Enter Number: ";
    cin >> n;

    int original_n = n;

    while (n != 0)
    {
        r = n % 10;
        n = n / 10; //updating the n
        reverse = reverse * 10 + r;
    }
    //Checking Palindrome or not
    if (original_n == reverse)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.