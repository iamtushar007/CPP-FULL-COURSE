#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // string str = "TusharGahtori";
    // cout << str << endl;

    // string str2;
    // getline(cin, str2);
    // cout << str2 << endl;

    // string str1(5, 'n');
    // cout << str1 << endl;

    // string s1 = "Hello";
    // string s2 = "World";
    //  s1.append(s2);
    // cout << s1 + s2 << endl;

    // string s1 = "abc";
    // string s2 = "abc";
    // cout << s2.compare(s1) << endl;

    // string s1 = "abc";
    // cout << s1 << endl;
    // s1.clear();
    // if (s1.empty())
    // {
    //     cout << "String is empty";
    // }

    // string s1 = "nincompoop";
    // s1.erase(3, 2);
    // cout << s1 << endl;

    // string s1 = "nincompoop";
    // cout << s1.find("com") << endl;
    // cout << s1.find("poop") << endl;

    // string s1 = "nincompoop";
    // s1.insert(2, "lol");
    // cout << s1 << endl;

    // string s1 = "nincompoop";
    // cout << s1.size() << endl;
    // cout << s1.length() << endl;

    // string s1 = "nincompoop";
    // string s = s1.substr(6, 4);
    // cout << s << endl;

    // string s1 = "786";
    // int x = stoi(s1); // stoi=="String to integer"
    // cout << x + 2;

    // int x = 786;
    // cout << to_string(x) + "2" << endl;

    string s1 = "aisdhfgbkasjdfhououadhf";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}