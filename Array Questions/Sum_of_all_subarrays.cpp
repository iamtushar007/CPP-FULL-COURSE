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

    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum = 0;
        for (int j = i; j < n; j++)
        {
            current_sum += arr[j];
            cout << current_sum << endl;
        }
        cout << endl;
    }

    return 0;
}