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
    //define a rectangle pointer
    Rectangle *newRect;

    //Have it point to nothng
    newRect = nullptr;

    //dynamically allocate a Rectangle object
    newRect = new Rectangle;

    //store values in the objects width
    newRect->setWidth(10.0);

    //*** Extremely important *****
    //Deallocation of memory
    delete newRect;    //return memory back to the heap
    newRect = nullptr; //Have it point to nothing

    //Write the relevent code to create a rectangle and compute the area
}