// Program for Linear Search
#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9};
    int key;
    cout << "Enter a Key element ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "The Key element is found at " << i << endl;
            exit(0);
        }
    }
    cout << "Key element not found" << endl;

    return 0;
}