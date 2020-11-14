#include <iostream>
using namespace std;
/*

                        *
                *       *
        *       *       *
*       *       *       *

*/
int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= (n - 1))
            {
                cout << "*"
                     << "\t";
            }
            else
            {
                cout << " "
                     << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.