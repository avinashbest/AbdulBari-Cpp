#include <iostream>
using namespace std;
//Simple Program to demonstrate Object orientation
class Rectangle
{
public:
    int length;
    int breadth;
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

int main(void)
{
    //Objects of class Rectangle
    Rectangle r1, r2;
    //Accessing Data members
    r1.length = 10;
    r1.breadth = 5;
    //Accessing Member Functions
    cout << r1.area() << " " << r1.perimeter() << endl;
    //Accessing Data members
    r2.length = 15;
    r2.breadth = 10;
    //Accessing Member Functions
    cout << r2.area() << " " << r2.perimeter() << endl;
    return 0;
}
// Code By: Avinash Kumar.