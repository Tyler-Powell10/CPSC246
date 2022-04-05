#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

       fstream outfile; //create a pointer to a file
       fstream infile; //open the file
       int numVal;//create a pointer to a file
     
       numVal = 0;

       infile.open("input.txt", ios::in);
       outfile.open("output.txt", ios::out);

       if (infile.is_open())
       {
              cout << "Input file is open\n";
              getline(infile, numVal); 
              infile >> numVal; //read from file
              
       }

       if (outfile.is_open())
       {
              cout << "Output file is open\n";
              outfile << numVal; //write to file
       }

       //closing the files
       if (infile.is_open())
       {
              infile.close();
       }

       if (outfile.is_open())
       {
              outfile.close();
       }

       return 0;
}