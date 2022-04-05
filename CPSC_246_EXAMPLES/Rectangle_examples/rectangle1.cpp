#include <iostream>
using namespace std;


//add a method to print what the area, width, length ****** 
//add class square or circle ****
class Rectangle
{

private:      // declaring variables of the rectangle 
    double width;
    double length;
    double area;

public:
    void setWidth(double);        // declare methods ahead of time 
    double getWidth();
    void setLength(double);
    double getLength();
    double getArea();
};

/*
       Do the set width method outside of the class
*/

void Rectangle::setWidth(double pWidth)
{
    width = pWidth;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getLength()
{
    return length;
}

void Rectangle::setLength(double pLength)
{
    length = pLength;
}

double Rectangle::getArea()
{
    area = length * width;

    return area;
}

int main()
{

    Rectangle newRect;

    newRect.setWidth(10.0);
    newRect.setLength(5.0);
    cout << "Area = " << newRect.getArea();

    //add another rectangle for practice - manipulate code 

    //Write the relevent code to create a rectangle and compute the area
}