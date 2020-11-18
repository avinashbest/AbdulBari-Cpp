#include <iostream>
using namespace std;

int main(void)
{
    /*
    char str[20];

    cout << "Enter your name: ";
    cin >> s;
    cout << "Hello! " << str << endl;

    char s[50];
    cout << "Enter your name: ";
    // cin.get(s, 50);
    cin.getline(s, 50);
    cout << "Hello! " << s << endl;
    */

    //Problem with cin.get()
    char a[50];
    cout << "Enter name: ";
    cin.get(a, 50);

    cout << "Welcome " << a << endl;

    cin.ignore(); //Clears the input buffer

    cout << "Enter name again: ";
    cin.getline(a, 50);

    cout << "Welcome " << a << endl;

    return 0;
}
// Code By: Avinash Kumar.