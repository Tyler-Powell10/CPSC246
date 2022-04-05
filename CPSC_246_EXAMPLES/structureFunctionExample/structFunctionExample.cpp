#include <iostream>
using namespace std;

const int MAXSIZE = 3;
const int MAXCLASSES = 4;

struct Address
{

       string address1;
       string address2;
       string city;
       string state;
       string zip;

};

struct Student
{

       string firstName;
       string lastName;
       string classes[MAXCLASSES];
       Address address;

};

struct Faculty
{

       string firstName;
       string lastName;
       string classes[MAXCLASSES];
       Address address;

};

void readStructure(Student &student1)
{

       //Read in the data from the user
       cin >> student1.firstName;
       cin >> student1.lastName;
       cin >> student1.classes[0];

}
/*
       Loading structure
       Pass by reference
*/

void loadStructure(Student &student1)
{

       //loadStructure
       student1.firstName = "Mary";
       student1.lastName = "Doe";
       student1.classes[0] = "Space Science";
       student1.address.address1 = " 250 ATS";
       student1.address.address2 = "100 Main Circle";
       student1.address.city = "Slippery Rock";
       student1.address.state = "PA";
       student1.address.zip = "16057";

}

Student loadStructureNoRef(Student student1) // no reference
{

       //loadStructure
       student1.firstName = "Mary";
       student1.lastName = "Doe";
       student1.classes[0] = "Space Science";
       student1.address.address1 = " 250 ATS";
       student1.address.address2 = "100 Main Circle";
       student1.address.city = "Slippery Rock";
       student1.address.state = "PA";
       student1.address.zip = "16057";

       return student1;

}
/*

       Printing structure

*/
void printStructure(Student student1)
{

       cout << student1.firstName;
       cout << student1.address.address1;

}

int main()
{

       Student student1;
       Student student2;

       //printStructure(loadStructureNoRef(student1)); // you have to call this for each student - this is not the way to do it if you have many of them
 
       //student2 = loadStructure(student1);
       //printStructure(student2);


       readStructure(student1);
       printStructure(student1);

       loadStructure(student1); //**** try this ****

       return 0;

}