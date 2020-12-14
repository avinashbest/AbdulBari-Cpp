#include <iostream>
using namespace std;

int &fun(int &a)
{
    cout << a;
    return a;
}

int main(void)
{
    int x = 10;
    fun(x) = 25;
    cout << x;
    return 0;
}
// Code By: Avinash Kumar.