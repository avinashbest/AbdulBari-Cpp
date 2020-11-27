#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funBase()
    {
        a = 10; //Accessable
        b = 5;  //Accessable
        c = 15; //Accessable
    }
};

class Derived : public Base
{
public:
    void funDerived()
    {
        a = 10; //Cannot Accessable
        b = 5;  //Accessable
        c = 15; //Accessable
    }
};

int main()
{
    Base b;
    b.a = 10;
    b.b = 5;
    b.c = 20;
}
// Code By: Avinash Kumar.