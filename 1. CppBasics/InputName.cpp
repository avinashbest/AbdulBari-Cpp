#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    cout << "May I know Your Name ?" << endl;
    getline(cin, name); //cin>>name;

    cout << "Welcome! " << name << endl;

    return 0;
}