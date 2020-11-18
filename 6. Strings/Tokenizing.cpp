#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char s1[20] = "x=10;y=20;z=30;";

    char *token = strtok(s1, ";"); //Tokenizing

    while (token != NULL)
    {
        cout << token << " ";
        token = strtok(NULL, ";");
    }

    return 0;
}
// Code By: Avinash Kumar.