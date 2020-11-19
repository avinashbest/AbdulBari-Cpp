#include <iostream>
using namespace std;
//Function take two integers and returns the sum of them
int add(int a, int b)
{
    return (a + b);
}
//Driver Code
int main(void)
{
    int a = 5, b = 15, c;
    c = add(a, b); //Function Call for add()
    cout << "Sum is " << c << endl;
    return 0;
}
// Code By: Avinash Kumar.