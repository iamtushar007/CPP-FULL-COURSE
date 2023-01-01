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

    cout << "Element at 2nd Index: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    cout << "Before Pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After Pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size: " << v.size() << endl;
    v.clear();
    cout << "After clear size: " << v.size() << endl;

    // Known Size vector

    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> c(a);
    for (int i : c)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}