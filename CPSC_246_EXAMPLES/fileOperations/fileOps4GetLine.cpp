#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool openInputFile(fstream &inFile, string name)  
{
       inFile.open(name, ios::in);

       if (!inFile.fail())
       {
              return true;
       }
       else
       {
              return false;
       }
}

bool openOutputFile(fstream &outFile, string name)
{

       outFile.open(name, ios::out);

       if (!outFile.fail())
       {
              return true;
       }
       else
       {
              return false;
       }
}

int main() {

       int numVal;
       //open the file
       fstream infile;
       fstream outfile;

       //open the files
       openInputFile(infile, "input.txt");
       openOutputFile(outfile, "output.txt");

       numVal = 0;

       if (!infile.fail())
       {
              cout << "Input file is open\n";
              //read from file
              infile >> numVal;
       }

       else
       {
              cout << "Opening input file failed\n";
       }

       if (!outfile.fail())
       {
              cout << "Output file is open\n";
              //write to file
              outfile << numVal;
       }
       else
       {
              cout << "Openings output file filed\n";
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

