#include <iostream>
using namespace std;
//Program to demonstrate Operator '+' Overloading with friend function
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    friend Complex operator+(Complex c1, Complex c2);

    void print()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main(void)
{
    Complex c1(3, 6);
    Complex c2(5, 4);

    Complex c3;

    c3 = c1 + c2; //operator+(c1,c2);

    c3.print();
    return 0;
}
// Code By: Avinash Kumar.