#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count; //Static member variable Declaration
    Test()
    {
        a = 10;
        count++;
    }
    static int getCount() //Static Member Function
    {
        /*a++; //Not Accessable*/
        return count;
    }
};

int Test::count = 0; //Initialization

int main()
{
    Test t1, t2;
    cout << Test::getCount() << endl; //Access upon class name
    cout << t1.getCount() << endl;    //Access upon object
}
// Code By: Avinash Kumar.