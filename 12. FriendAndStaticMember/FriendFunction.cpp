#include <iostream>
using namespace std;

class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void fun();
};

void fun()
{
    Test t;
    t.a = 10;
    t.b = 15;
    t.c = 9;
}

int main(void)
{

    return 0;
}
// Code By: Avinash Kumar.