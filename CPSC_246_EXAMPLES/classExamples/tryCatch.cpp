
// know why we use object oriented programming - data encapsulation - inheritance - polymorphism 
// composition vs agregation - compositon is required - agregation is not 
// pass by reference pass by value - arrays are always reference 
// virtual methods 
// 





#include <iostream>
using namespace std;

int main()
{

    int totDays;
    int days;
    int weeks;

    totDays = 0;
    days = 9;
    weeks = 3;

    int totalDays(int days, int weeks);
    
        if ((days < 0) || (days > 7))
        {
            throw "invalid number of days";
        }
        else
        {
            return (7 * weeks + days);
        }
    

    try
    {
        totDays = totalDays(days, weeks);
        cout << "total days: " << days;
    }
    catch (const char* msg) // interpret
    {
        cout << "error: " << msg;
    }

    return 0;
}