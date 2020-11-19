#include <iostream>
using namespace std;

int *fun(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    return p;
}

int main(void)
{
    int *ptr = fun(5);
    for (int i = 0; i < 5; i++)
        cout << i << endl;

    return 0;
}
// Code By: Avinash Kumar.