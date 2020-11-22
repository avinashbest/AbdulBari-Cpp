#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    //Parametrized Constructor
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
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

int main(void)
{
    Rectangle r3(10, 5); //Parametrized Constructor

    return 0;
}
// Code By: Avinash Kumar.