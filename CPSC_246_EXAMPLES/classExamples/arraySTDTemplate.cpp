#include <iostream>
#include <array>

using namespace std;

int main(void)
{

    array<int, 5> intArray; /* Array of 5 integers */
    array<float, 10> floatArray; /* Array of 10 floats */

    cout << "Number of elements in intArray   = " << intArray.size() << endl;
    cout << "Number of elements in floatArray = " << floatArray.size() << endl;

    // initialize the array template
    for (int i = 0; i < intArray.size(); i++)
    {
        intArray.at(i) = 0;    // printing the array at every index location - looping through the whole array 
    }

    // print the array
    for (int i = 0; i < intArray.size(); i++)
    {
        cout << intArray.at(i) << endl;
    }

    // load the numbers into the array
    // print the array

    for (int i = 0; i < intArray.size(); i++)
    {
        intArray.at(i) = i;
    }


    //intArray.begin();

    // intArray.back();

    // intArray.empty();

    //intArray.fill(10);

    return 0;
}