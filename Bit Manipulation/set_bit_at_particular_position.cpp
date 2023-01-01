#include <bits/stdc++.h>
using namespace std;

// set bit means changing the bit at position to 1

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    cout << setBit(5, 1) << endl;
    cout << updateBit(5, 1, 1) << endl;
    return 0;
}