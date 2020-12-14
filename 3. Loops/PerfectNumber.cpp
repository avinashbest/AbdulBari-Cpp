// Program to find perfect number
#include <iostream>
using namespace std;
//Perfect No: If the sum of the factors of a number is equal to the double of the number.
int main()
{
    int n, sum = 0;
    cout << "Enter a no. ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    // cout << "Sum of factors = " << sum << endl;

    //Checking whether the number is Perfect is not.
    if (2 * n == sum)
    {
        cout << "\nPerfect Number." << endl;
    }
    else
    {
        cout << "\nNot Perfect Number." << endl;
    }

    return 0;
}