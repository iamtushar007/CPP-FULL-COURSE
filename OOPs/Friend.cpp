#include <iostream>
using namespace std;

class classIllusFriend
{
    friend void friendFunc(classIllusFriend cIFObject);

public:
    void print();
    void setx(int a);

private:
    int x;
};

void classIllusFriend::print()
{
    cout << "In class classIllusFriend: x = " << x << endl;
}
void classIllusFriend::setx(int a)
{
    x = a;
}

void friendFunc(classIllusFriend cIFObject) // Line 1
{                                           // Line 2
    classIllusFriend localTwoObject;        // Line 3
    localTwoObject.x = 45;                  // Line 4
    localTwoObject.print();                 // Line 5
    cout << "Line 6: In friendFunc accessing "
         << "private member variable "
         << "x = "
         << localTwoObject.x
         << endl;      // Line 6
    cIFObject.x = 88;  // Line 7
    cIFObject.print(); // Line 8
    cout << "Line 9: In friendFunc accessing "
         << "private member variable "
         << "x = "
         << cIFObject.x << endl; // Line 9
}

int main()                          // Line 11
{                                   // Line 12
    classIllusFriend aObject;       // Line 13
    aObject.setx(32);               // Line 14
    cout << "Line 15: aObject.x: "; // Line 15
    aObject.print();                // Line 16
    cout << endl;                   // Line 17
    cout << "*~*~*~* Testing friendFunc *~*~*~*"
         << endl
         << endl;        // Line 18
    friendFunc(aObject); // Line 19
    return 0;            // Line 20
}