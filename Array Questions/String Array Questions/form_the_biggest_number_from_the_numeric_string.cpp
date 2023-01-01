#include <bits/stdc++.h>
using namespace std;
int main()
{

    // example::   "53214" -> "54321"

    string str;
    cin >> str;

    sort(str.begin(), str.end());
    // sort(str.begin(), str.end(),greater<int>());
    reverse(str.begin(), str.end());
    cout << stoi(str) << endl;

    return 0;
}