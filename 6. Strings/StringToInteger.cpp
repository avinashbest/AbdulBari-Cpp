#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char s1[] = "235";
    char s2[] = "54.778";
    //String to long integer(string, NUll Character, Base 10)
    long int x = strtol(s1, NULL, 10);
    //String to float(string, NUll Character)
    float y = strtof(s2, NULL);

    cout << x << " " << y << endl;

    x = x * 10;
    y = y * 10;

    cout << x << " " << y << endl;

    return 0;
}
// Code By: Avinash Kumar.