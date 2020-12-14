#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*program for finding length of a string using for loop*/
    string s = "welcome";
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        cout << "length is" << count << endl;
    }

    /*program for finding length of a string using string iterator*/
    string str = "welcome";
    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << "length is" << count << endl;
    }

    return 0;
}