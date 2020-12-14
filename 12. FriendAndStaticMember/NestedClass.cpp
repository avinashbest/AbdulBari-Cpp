#include <iostream>
using namespace std;
//Used in Linked List
class Outer
{
public:
    int a = 10;
    static int b;
    void fun()
    {
        i.show();
        cout << i.x << endl;
    }
    class Inner
    {
    public:
        int x = 25;
        void show()
        {
            /*
            cout << a << endl; //Not Allowed
            cout << b << endl; //Allowed
            */
            cout << "Show of Inner" << endl;
        }
    };
    Inner i;
};

int main(void)
{

    return 0;
}
// Code By: Avinash Kumar.