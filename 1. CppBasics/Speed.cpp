#include <iostream>
using namespace std;

int main(void)
{
    float u, v, a; //initial_velocity, final_velocity, acceleration
    cout << "Enter Values: ";
    cin >> u >> v >> a;

    //Calculating speed using formula
    int speed = ((v * v) - (u * u)) / (2 * a);

    cout << "Speed = " << speed << endl;

    return 0;
}