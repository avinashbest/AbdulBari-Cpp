//Amstrong Number: The sum of the cube of the digits of the number is Amstrong number.
#include <iostream>
using namespace std;

int main(void)
{
    int n, r, sum = 0;
    cout << "Enter Number: ";
    cin >> n;

    int original_n = n; //Preserving original input number for future refernce in program

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum += (r * r * r); // sum = sum + r^3;
    }
    //Comparing the sum with input number
    if (sum == original_n)
    {
        cout << "Amstrong Number." << endl;
    }
    else
    {
        cout << "Not Amstrong." << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.