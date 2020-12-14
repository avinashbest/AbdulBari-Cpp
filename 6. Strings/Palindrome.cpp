#include <bits/stdc++.h>
using namespace std;

// program for reverse a string and check a string is a palidrome

int main()
{
    string str = "MADAM";
    string rev = "";
    int len = (int)str.length();
    rev.resize(len);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    if (str.compare(rev) == 0)
        cout << "palindrome" << endl;
    else
        cout << "not a pallindrome" << endl;
    return 0;
}