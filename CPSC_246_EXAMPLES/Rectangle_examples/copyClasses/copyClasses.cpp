#include <iostream>
using namespace std;

class Rectangle
{

private:
    double width;
    double length;

public:
    void setWidth(double);
    double getWidth();
    void setLength(double);
    double getLength();
    double getArea();
};

/*
Do the setwidth method outside of the class
*/

void Rectangle::setWidth(double pWidth)
{
    width = pWidth;
}

double Rectangle::getWidth()
{
    return width;
}

int main()
{

    Rectangle newRect1;
    Rectangle newRect2;

    newRect1.setWidth(10.0);
    newRect2.setWidth(15.0);

    cout << "Before Rectangle 1 width = " << newRect1.getWidth() << endl;
    cout << "Before Rectangle 2 width = " << newRect2.getWidth() << endl;

    newRect2 = newRect1;

    cout << "After Rectangle 1 width = " << newRect1.getWidth() << endl;
    cout << "After Rectangle 2 width = " << newRect2.getWidth() << endl;

    // Write the relevent code to create a rectangle and compute the area
    return 0;
}