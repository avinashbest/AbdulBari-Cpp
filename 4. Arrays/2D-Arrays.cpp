#include <iostream>
using namespace std;
//Cpp Program to demonstrate 2D-Arrays
int main(void)
{
    int arr[2][3] = {2, 5, 9, 6, 9, 15};
    //Traversal
    for (int i = 0; i < 2; i++) //No of rows
    {
        for (int j = 0; j < 3; j++) //No of column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.