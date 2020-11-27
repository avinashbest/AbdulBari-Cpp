#include <iostream>
using namespace std;
//Program to demonstrate Constructor in Inheritance

//Parent class
class Base
{
public:
    Base()
    {
        cout << "Default of Base" << endl;
    }
    Base(int x)
    {
        cout << "Parameterized of Base " << x << endl;
    }
};
//Child class
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Default of Derived" << endl;
    }
    Derived(int a)
    {
        cout << "Parameterized of Derived " << a << endl;
    }
    Derived(int x, int a) : Base(x)
    {
        cout << "Parameterized of Derived " << a << endl;
    }
};

int main(void)
{
    Derived d1;
    cout << endl;
    Derived d2(10);
    cout << endl;
    Derived d3(20, 10);

    return 0;
}
// Code By: Avinash Kumar.