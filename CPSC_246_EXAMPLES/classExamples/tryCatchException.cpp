#include <iostream>

using namespace std;

double division(int firstVal, int secondVal)
{

    if (secondVal == 0)
    {

        throw "Division by zero!";
    }

    return (firstVal / secondVal);
}

int main()
{

    int x;

    int y;

    double z;

    x = 50;

    y = 0;

    z = 0;

    try
    {

        z = division(x, y);

        cout << z << endl;
    }

    catch (const char *msg)
    {

        cout << msg << endl;
    }

    return 0;
}