#include <iostream>
using namespace std;
//Program to demonstrate Constructor
class Rectangle
{
private:
    int length;
    int breadth;

public:
    /*
    //Default Constructor
    Rectangle()
    {
    }
    */

    //Non-Parameterized Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    //Parametrized Constructor
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    //Mutators or Setters
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }
    //Accessors or Getters
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    //Facilatators
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};

int main(void)
{
    Rectangle r1;        //Default Constructor
    Rectangle r2();      //Non-Parameterized Constructor
    Rectangle r3(10, 5); //Parametrized Constructor

    return 0;
}
// Code By: Avinash Kumar.