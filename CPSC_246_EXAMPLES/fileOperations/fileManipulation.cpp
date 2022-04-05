#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

       int numVal;
       //create a pointer to a file
       //fstream file;
       //open the file
       fstream infile;
       fstream outfile;
       numVal = -5;
       //define input file
       infile.open("list.txt", ios::in);
       //define output file
       outfile.open("list.txt", ios::out);
       //read from file
       infile >> numVal;
       //write to file
       outfile << numVal;
       //closing the files
       infile.close();
       outfile.close();
       return 0;
}

/*

create document

read document

edit document

save document

*/