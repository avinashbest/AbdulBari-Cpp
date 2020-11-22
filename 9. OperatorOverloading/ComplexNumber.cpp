#include <iostream>
using namespace std;
//Program to demonstrate Operator '+' Overloading
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
    // Complex add(Complex c)
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void print()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main(void)
{
    Complex c1(3, 6);
    Complex c2(5, 4);

    Complex c3;

    // c3 = c1.add(c2); //c3 = c2.add(c1);
    c3 = c1 + c2;

    c3.print();
    return 0;
}
// Code By: Avinash Kumar.