#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << a << b;
    return 0;
}
// Code By: Avinash Kumar.
