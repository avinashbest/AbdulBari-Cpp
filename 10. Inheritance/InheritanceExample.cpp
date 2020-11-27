#include <iostream>
using namespace std;

class Base
{

public:
    int x;
    void show()
    {
        cout << "Base Class:" << endl;
        cout << x << endl;
    }
};

class Derived : public Base
{
public:
    int y;
    void display()
    {
        cout << "Derived Class:" << endl;
        cout << x << " " << y << endl;
    }
};

int main(void)
{
    Base b;
    b.x = 25;
    b.show();

    Derived d;
    d.x = 10;
    d.y = 15;
    d.show();
    d.display();

    return 0;
}
// Code By: Avinash Kumar.