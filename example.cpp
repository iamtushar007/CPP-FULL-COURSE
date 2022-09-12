#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
    }

    int output[n];
    int count[mx];

    for (int i = 0; i < n; ++i)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "count of " << i << "is:\t" << count[i] << endl;
    }

    return 0;
}