#include <iostream>
#include <string>
using namespace std;
 
/*
       An aggregated class
*/
class Address                        // creating class like normal 
{
private:
       string addLine1;
       string addLine2;
       string city;
       string state;
       string zip;
 
public:
       /* default constructor for Address*/
       Address()
       {
              addLine1 = "";
              addLine2 = "";
              city   = "";
              state    = "";
              zip      = "";
 
       }
 
       Address(string pAddLine1, string pAddLine2, string pCity, string pState, string pZip)
       {
              addLine1 = pAddLine1;
              addLine2 = pAddLine2;
              city     = pCity;
              state    = pState;
              zip      = pZip;
 
       }
 
       void setAddLine1(string pAddLine1)
       {
              addLine1 = pAddLine1;
       }
};
 
class Employee
{
       //Employee is an aggregate class that uses the Address class
private:
       Address empAddress;  // using the address class as a variable type***** 
       string firstName;
       string lastName;
public:   //pass variables you are trying to use from another class
       Employee();
       void setEmpAddress(string);
       void setFirstName();
       void setLastName();
       //set address using empAddress.setAddress
};
 
/* Default constructor for employee*/
Employee::Employee()
{
       firstName = "nothing";
       lastName  = "nothing";
}
void Employee::setEmpAddress(string pAddLine1)
{
       empAddress.setAddLine1(pAddLine1);
}
 
void Employee::setFirstName()
{
 
}
 
void Employee::setLastName()
{

 
int main()
{
       Employee someEmployee;
       someEmployee.setEmpAddress("Address 1");
      
       return 0;
}