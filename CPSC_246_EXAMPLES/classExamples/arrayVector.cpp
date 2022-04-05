#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> intVector;

    // display the original size of intVector
    cout << "vector size = " << intVector.size() << endl;

    // push 5 values into the vector
    for (int i = 0; i < 5; i++)
    {
        intVector.push_back(i);
    }

    // display extended size of vec
    cout << "extended vector size = " << intVector.size() << endl;

    // access 5 values from the vector
    for (int i = 0; i < 5; i++)
    {
        cout << "value of intVector [" << i << "] = " << intVector[i] << endl;
    }

    return 0;
}