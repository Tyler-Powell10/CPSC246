#include <iostream>

using namespace std;

class Rectangle
{

private:
    double width;
    double length;

public:
    Rectangle();
    Rectangle(double, double);
    void setWidth(double);
    double getWidth();
    void setLength(double);
    double getLength();
    double getArea();
};

/*
   Constructor
*/

Rectangle::Rectangle()
{
    width = 0;
    length = 0;
}

/*
   Constructor with arguments
*/

Rectangle::Rectangle(double pWidth, double pLength)
{
    width = pWidth;
    length = pLength;
}

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



double Rectangle::getArea()
{
    double area;
    area = 0;
    area = length * width;
    return area;
}

int main()
{

    Rectangle newRect(10.0, 5.0);

    newRect.setWidth(25.0);
    newRect.setLength(35.0);

    newRect.getArea();
    cout << "area is: " << newRect.getArea();

    // set width and length to 0 and then use destructor to destory files 
    

    //Write the relevent code to create a rectangle and compute the area
}