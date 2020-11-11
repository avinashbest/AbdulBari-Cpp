// Dynamic Declaration
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
    {
        //Variable go out of scope.
        int d = a - b;
        if (true)
        {
            cout << d << endl;
        }
    }
    if (int e = a * b)
    {
        cout << e << endl;
    }
}