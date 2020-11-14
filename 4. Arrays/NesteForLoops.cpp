#include <iostream>
using namespace std;

int main(void)
{
    for (int i = 1; i <= 5; i++) //Number of rows in a matrix
    {
        for (int j = 1; j <= 5; j++) //Number of column in the matrix
        {
            cout << "(" << i << "," << j << ")"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.