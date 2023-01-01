#include <bits/stdc++.h>
using namespace std;

// n=n & n-1   in binary representation

int numberOfONEs(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << numberOfONEs(19) << endl;
    return 0;
}