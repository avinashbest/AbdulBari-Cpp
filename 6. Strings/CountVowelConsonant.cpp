#include <bits/stdc++.h>
using namespace std;
/*program for count vowels consonant and words*/
int main()
{
    string str = "how many words" int vowels = 0, consonant = 0, space = 0;
    for (int i = 0; str[i] = !'\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if (str[i] == ' ')
            space++;
        else
            consonant++;
    }
    cout << "vowels " << vowels << endl;
    cout << "consonant " << consonant << endl;
    cout << "words " << space++ << endl;
    return 0;
}