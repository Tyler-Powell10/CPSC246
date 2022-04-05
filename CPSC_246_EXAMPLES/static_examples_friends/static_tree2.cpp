#include <iostream>
using namespace std;
 
//Tree Class - Example of a static variable and a static method
 
class Tree
{
private:
       static int objectCount;
 
public:
       //constructor
       Tree()
       {
              objectCount++;
       }
 
       static int getObjectCount()
       {
              return objectCount;
       }
};
 
int Tree::objectCount = 0;
 
int main()
{
       Tree oak;
       Tree elm;
       Tree pine;
 
       cout << " We have " << Tree::getObjectCount() << " trees in our program\n";
 
       return 0;
 
}