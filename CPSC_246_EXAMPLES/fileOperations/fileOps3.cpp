#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

       int numVal;

       //open the file
       fstream infile;
       fstream outfile;

       numVal = 0;

       infile.open("input.txt", ios::in);
       outfile.open("output.txt", ios::out);

       if (!infile.fail())
       {
              cout << "Input file reading - No Error\n";
              //read from file
              infile >> numVal;
       }
       else
       {
              cout << "Opening input file failed\n";
       }

       if (!outfile.fail())
       {
              cout << "Output file reading - No Error\n";
              //write to file
              outfile << numVal;
       }
       else
       {
              cout << "Opening output file failed\n";
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