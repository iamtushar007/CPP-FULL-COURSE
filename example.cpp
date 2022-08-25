#include <bits/stdc++.h>
using namespace std;

int check(char str)
{
    return str;
}

int op(string n)
{
    for (int i = n.length() - 1; i >= 0; i--)
    {
        int y = check(n[i]);
        int ans = y;
    }
    return ans;
}

int main()

{
    string n;
    cin >> n;
    cout << op(n) << endl;
    return 0;
}