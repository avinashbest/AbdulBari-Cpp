#include <iostream>
using namespace std;
//Program to demonstrate Inheritance of cuboid from Rectangle class

//Base Class
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
//Derived Class
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        setLength(l);
        setBreadth(b);
        height = h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int volume()
    {
        return (getLength() * getBreadth() * height);
    }
};

int main(void)
{
    Cuboid c(10, 5, 3);
    cout << c.getLength() << " " << c.getBreadth() << " " << c.getHeight();
    cout << "Volume = " << c.volume() << endl;
    cout << "Area = " << c.area() << endl;

    return 0;
}
// Code By: Avinash Kumar.