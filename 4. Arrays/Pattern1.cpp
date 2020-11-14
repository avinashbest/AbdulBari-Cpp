#include <iostream>
using namespace std;
/*

1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16

*/
int main(void)
{
    int count = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << count << "\t";
            count++;
        }
        cout << endl;
    }

    return 0;
}
// Code By: Avinash Kumar.