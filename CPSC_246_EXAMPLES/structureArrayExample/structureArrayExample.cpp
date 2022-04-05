#include <iostream>
using namespace std;

int main()
{

    const int MAXSIZE = 3;
    const int MAXCLASSES = 4;

    struct Student //create structure
    {
        string firstName;
        string lastName;
        string classes[MAXCLASSES];
    };

    Student students[MAXSIZE]; //create array of structure

    //input
    students[0].firstName = "jerry";
    students[0].lastName = "white";
    students[0].classes[0] = "algebra";
    students[0].classes[1] = "critical reading";
    students[0].classes[2] = "history 101";

    students[1].firstName = "mia";
    students[1].lastName = "o";
    students[1].classes[0] = "coding";
    students[1].classes[1] = "calculus";
    students[1].classes[2] = "english";

    for (int i = 0; i < MAXCLASSES; i++)
    {
        cout << students[i].firstName << " ";
        cout << students[i].lastName << endl;
        for (int j = 0; j < MAXCLASSES; j++)
        {
            cout << "\t" << students[i].classes[j] << endl;
        }
    }

    return 0;
}