#include <bits/stdc++.h>
using namespace std;

// get bit means to get a bit (0/1) at the position

int getBit(int n,int pos)
{

    return ((n & (1<<pos))!=0);
}

int main()
{
cout<<getBit(5,2)<<endl;

return 0;
}