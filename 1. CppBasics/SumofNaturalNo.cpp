#include <iostream>
using namespace std;
//Calculating the sum of N natural Number
int main(void)
{
    int lastIndex, sum;

    cout << "Enter the last index: ";
    cin >> lastIndex;
    //Calculating the sum using mathematical formula
    sum = (lastIndex * (lastIndex + 1)) / 2;

    cout << "Sum of " << lastIndex << " Natural Numbers is " << sum << endl;
    return 0;
}