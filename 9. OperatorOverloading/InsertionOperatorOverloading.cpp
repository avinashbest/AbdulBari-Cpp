// Stream operator overloading
// Input stream cin >> (extraction) operator can be overloaded upon a class
// output stream cout << (insertion) operator can be overloaded upon a class
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
    //Overloading Binary '+' Operator
    friend Complex operator+(Complex c1, Complex c2); //Function prototype
    //Overloading Insertion Operator '<<'
    friend ostream &operator<<(ostream &print, Complex &c); //function Prototype
};
//Function Declaration
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
//Function Declaration
ostream &operator<<(ostream &print, Complex &c)
{
    print << c.real << " + " << c.img << "i" << endl;
    return print;
}

int main(void)
{
    Complex c1(3, 6);
    Complex c2(5, 4);

    Complex c3;

    c3 = c1 + c2; //operator+(c1,c2);

    // Using overloaded Insertion operator to display output to console
    cout << c3 << endl; //operator<<(cout, c3);

    return 0;
}
// Code By: Avinash Kumar.