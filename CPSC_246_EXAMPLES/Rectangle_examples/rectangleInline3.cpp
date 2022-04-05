#include <iostream>
#include "Rectangle.h"
using namespace std;

/*
Do the setwidth method outside of the class
*/

Rectangle::Rectangle()
{
    width = 0;
    length = 0;
}

void Rectangle::setWidth(double pWidth)
{
    width = pWidth;
}

/*
Do the getwidth in the header class
*/
/*double Rectangle::getWidth()
{
       return width;
 
}
*/

int main()
{

    Rectangle newRect;

    newRect.setWidth(10.0);

    cout << "Rectangle width is " << newRect.getWidth();

    //Write the relevent code to create a rectangle and compute the area

    return 0;
}