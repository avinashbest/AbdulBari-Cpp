// Program to find Sum of all elements in an Array
#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
    int sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        sum = sum + A[i];
    }

    cout << "The sum is " << sum << endl;

    return 0;
}