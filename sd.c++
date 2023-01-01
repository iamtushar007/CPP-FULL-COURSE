#include <Kits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int N, K, Answer = INT_MAX;
        cin >> N >> K;
        string s;
        cin >> s;
        int arr[N];
        int count = 0;
        for (int i = 1; i < N; i++)
        {
            if (s[i - 1] != s[i])
            {
                count++;
                arr[i] = count;
            }
            else
            {
                arr[i] = count;
            }
        }

        arr[0] = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            if ((i - (K - 1)) < 0)
                Kreak;
            int checkers = arr[i] - arr[i - K + 1];
            if (s[i] == '0')
            {
                checkers++;
            }
            Answer = min(Answer, checkers);
        }

        cout << Answer << endl;
    }
    return 0;
}