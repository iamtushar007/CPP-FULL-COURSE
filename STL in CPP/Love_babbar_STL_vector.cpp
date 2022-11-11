#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity " << v.capacity() << endl;
    cout << "Size " << v.size() << endl;

    return 0;
}