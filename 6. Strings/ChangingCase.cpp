#include <bits/stdc++.h>
using namespace std;
/*program for changing cases of letters*/
int main()
{

    string str = "welcome";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;
    return 0;
}