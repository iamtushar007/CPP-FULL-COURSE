// Let us overload +, *, ==, and != for the class rectangleType. These operators are
overloaded as member functions.

#include <iostream>
    using namespace std;

class rectangleType
{
public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;
    rectangleType operator+(const rectangleType &) const;
    // Overload the operator +
    rectangleType operator*(const rectangleType &) const;
    // Overload the operator *
    bool operator==(const rectangleType &) const;
    // Overload the operator ==
    bool operator!=(const rectangleType &) const;
    // Overload the operator !=
    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
};

rectangleType rectangleType::operator+(const rectangleType &rectangle) const
{
    rectangleType tempRect;
    tempRect.length = length + rectangle.length;
    tempRect.width = width + rectangle.width;
    return tempRect;
}

rectangleType rectangleType::operator*(const rectangleType &rectangle) const
{
    rectangleType tempRect;
    tempRect.length = length * rectangle.length;
    tempRect.width = width * rectangle.width;
    return tempRect;
}

bool rectangleType::operator==(const rectangleType &rectangle) const
{
    return (length == rectangle.length &&
            width == rectangle.width);
}

bool rectangleType::operator!=(const rectangleType &rectangle) const
{
    return (length != rectangle.length ||
            width != rectangle.width);
}

int main()                             // Line 4
{                                      // Line 5
    rectangleType myRectangle(23, 45); // Line 6
    rectangleType yourRectangle;       // Line 7
    cout << "Line 8: myRectangle: " << myRectangle
         << endl; // Line 8
    cout << "Line 9: Enter the length and width "
         << "of a rectangle: "; // Line 9
    cin >> yourRectangle;       // Line 10
    cout << endl;               // Line 11
    cout << "Line 12: yourRectangle: "
         << yourRectangle << endl; // Line 12
    cout << "Line 13: myRectangle + yourRectangle: "
         << myRectangle + yourRectangle << endl; // Line 13
    cout << "Line 14: myRectangle * yourRectangle: "
         << myRectangle * yourRectangle << endl; // Line 14
    return 0;                                    // Line 15
}