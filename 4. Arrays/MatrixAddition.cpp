#include <iostream>
using namespace std;

int main(void)
{
    int A[2][3] = {2, 5, 9, 6, 9, 15};
    int B[2][3] = {6, 9, 15, , 12, 17};

    int C[2][3];
    //Adding Matrix A and Matrix B
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    //Printing Matrix C
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.