// Program to find maximum element from an Array
#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
    int max = INT_MIN;

    for (int i = 0; i <= 10; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    cout << max << endl;

    return 0;
}