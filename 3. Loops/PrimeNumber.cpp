//Program to check Prime Number.
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    bool flag;
    // int count = 0;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = true;
            // count++;
        }
    }

    // (count == 2) ? (cout << "Prime" << endl) : (cout << "Not Prime" << endl);

    if (flag == true)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.