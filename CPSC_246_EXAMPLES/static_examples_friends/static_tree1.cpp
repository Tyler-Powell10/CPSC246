#include <iostream>
using namespace std;
 
//Tree Class - Example of a static variable
 
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
 
       int getObjectCount()
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
 
       cout << " We have " << pine.getObjectCount() << " trees in our program\n";
      
       return 0;
 
}