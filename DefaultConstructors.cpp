#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int xl, int yl) /// Parameterized Constructor
    {
        x = xl;
        y = yl;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

int main()
{
    // Constructor called
    Point obj = Point(20, 30); /// Explicit Call
    Point obj2(10, 15); /// Implicit Call

    // Access values assigned by constructor
    cout << "1st Value = " << obj.getX() << endl;
    cout << "2nd Value = " << obj.getY() << endl;

    return 0;
}
