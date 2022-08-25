#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }
    cout << result << endl;
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}