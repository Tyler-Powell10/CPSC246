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
    ~Rectangle();
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
Destructor - A destructor takes no arguments
*/

Rectangle::~Rectangle()
{
    //deallocate memory
    //close files
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

int main()
{
    //maximum size of the array
    const int MAXSIZE = 10;

    //array of objects
    Rectangle newRect[MAXSIZE];

    //access the object using an index
    newRect[0].setWidth(10.0);

    //Write the relevent code to create a rectangle and compute the area
}