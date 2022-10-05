#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int st, en;
    int currentSums = 0;

    for (int i = 0; i < n; i++)
    {
        st = 0;
        en = 0;
        if (currentSums + arr[i] > s)
        {
            int ind = en;
        }
        else
        {
            en++;
        }
        currentSums = currentSums + ar[i];



        
    }

    return 0;
}