#include <iostream>
using namespace std;
 
class Elephant
{
private: //attributes
       int eyes;
       int wings;
       string ears;
       string color;
public: //methods
 



       // create color 
       void setColor(int noColor)
       {
              color = noColor;
       }


       int getColor()
       {
              return color;
       }





       void setEyes(int noEyes)
       {
              eyes = noEyes;
       }
 
       int getEyes()
       {
              return eyes;
       }
 
 
 
       void setWings(int noWings)
       {
              wings = noWings;
       }
 
       int getWings()
       {
              return wings;
       }
 
 
 
       void setEars(string size)
       {
              ears = size;
       }
 
       string getEars()
       {
              return ears;
       }
 
 
 
       bool canFly()
       {
              if (wings == 2)
              {
                     return true;
              }
              else
              {
                     return false;
              }
       }
};
 
int main()
{
 
       Elephant clyde;
       clyde.setEyes(2);
       clyde.setWings(2);
       clyde.setEars("small");
       clyde.setColor("blue");

       Elephant dumbo;
       dumbo.setEars("large");
       dumbo.setEyes(2);
       dumbo.setWings(2);
       dumbo.setColor("white");

       cout << "Clyde has "<< clyde.getEyes() << "eyes \n";
       cout << "Clyde has " << clyde.getEyes() << " wings \n";
       cout << "Clyde can fly? " << clyde.canFly();
       cout << "clyde is " << dumbo.getColor << endl;

       cout << "dumbo has " << dumbo.getEars << "ears" << endl;
       cout << "dumbo has " << dumbo.getEyes << "eyes" << endl;
       cout << "dumbo has " << dumbo.getWings << "wings" << endl;
       cout << "dumbo is " << dumbo.getColor << endl;
 
       return 0;
}