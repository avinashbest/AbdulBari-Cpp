#include <iostream>
using namespace std;
//Printing the digits of the input number in reverse order
int main(void)
{
    int n, r;
    cout << "Enter Number: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        cout << r << endl; //Printing every time the remainder
        n = n / 10;        //updating the n
    }

    return 0;
}
// Code By: Avinash Kumar.