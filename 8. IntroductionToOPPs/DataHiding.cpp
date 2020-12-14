#include <iostream>
using namespace std;
//Program to demonstrate Data Hiding (Accessors & Mutators)
class Rectangle
{
private:
    int length;
    int breadth;

public:
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
    //Function to calculate area of rectangle
    int area()
    {
        return (length * breadth);
    }
    //Function to calculate perimeter of rectangle
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};
//Accessors & Mutators are called Property Functions
int main(void)
{
    Rectangle r;
    //Mutators
    r.setLength(10);
    r.setBreadth(5);
    //Public Member Functions
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    //Accessors
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;

    return 0;
}
// Code By: Avinash Kumar.