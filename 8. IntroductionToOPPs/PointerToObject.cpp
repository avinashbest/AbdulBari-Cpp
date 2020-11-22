#include <iostream>
using namespace std;

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
    Rectangle r;
    Rectangle *ptrToStack;
    // ptr created in STACK
    ptrToStack = &r; //Ptr pointing to Rectangle r object
    r.length = 10;
    ptrToStack->length = 20;
    ptrToStack->breadth = 50;
    cout << (ptrToStack->area()) << endl;

    Rectangle *ptrToHeap;
    //ptr created in heap
    ptrToHeap = new Rectangle;
    Rectangle *q = new Rectangle();
    ptrToHeap->length = 50;
    ptrToHeap->breadth = 100;
    cout << (ptrToHeap->area()) << endl;

    return 0;
}
// Code By: Avinash Kumar.