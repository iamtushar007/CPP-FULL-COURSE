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

    int maximum = -9999;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        cout << maximum << endl;
    }

    cout << "Maximum: " << maximum << endl;
    return 0;
}