#include <iostream>
using namespace std;

int main(void)
{
    int arr[] = {48, 84, 35, 84, 15, 35, 84};
    //Printing elements of the array using for loop
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Printing elements of the array using for-each loop, introduced in C++11
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
// Code By: Avinash Kumar.