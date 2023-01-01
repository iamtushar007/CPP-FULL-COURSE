#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "jhadsfkjbasdflknasd";

    // convert into uppercase string

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    string str2 = "KSJDFBOJASDBFOJABSDF";

    // convert to lowercase string

    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
    }
    cout << str2 << endl;

    // Direct Function for uppercase and lowercase

    string sr1 = "kasjdflasdadf";
    string sr2 = "KHSFDFBKAJSFDFKSJDBF";

    transform(sr1.begin(), sr1.end(), sr1.begin(), ::toupper);
    cout << sr1 << endl;

    transform(sr2.begin(), sr2.end(), sr2.begin(), ::tolower);
    cout << sr2 << endl;

    return 0;
}