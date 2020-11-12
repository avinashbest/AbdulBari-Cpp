// Program to Test all Loops
#include <iostream>
using namespace std;
//Printing Whole numbers less than 10
int main()
{
    int a = 0;
    //while loop: Entry Control Loop
    while (a < 10)
    {
        cout << a << " ";
        a++;
    }

    cout << endl;

    int b = 0;
    //do-while loop: Exit Control Loop
    do
    {
        cout << b << " ";
        b++;
    } while (b < 10);

    cout << endl;

    //for loop: Counter Control Loop
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    return 0;
}