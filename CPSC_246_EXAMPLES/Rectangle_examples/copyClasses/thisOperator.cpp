#include<iostream>
using namespace std;
 
class ThisOperator
{
private:
       int age;
 
public:
       ThisOperator();
       void setAge(int);
       int getAge();
};
 
ThisOperator::ThisOperator()
{
       age = 0;
}
 
/*
       Class variable and parameter have the same variable name. Use thins-> to differentiate
*/
void ThisOperator::setAge(int age)
{
       this->age = age;
}
 
int ThisOperator::getAge()
{
       return age;
}
 
int main()
{
       ThisOperator someAge;
 
       someAge.setAge(34);
       cout << "Age is " << someAge.getAge();
 
       return 0;
}