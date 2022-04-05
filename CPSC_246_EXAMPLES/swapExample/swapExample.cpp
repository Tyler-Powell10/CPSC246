#inlude <iostream>
using namespace std;


void swap(int a, int b)
{
int temp = a; 
a = b;
b = temp;

cout << "a: " << a << "\tb: " << b << "\n"; 
}


int main ()
{

int a = 10;
int b = 20;

swap(a, b);

return 0;
}