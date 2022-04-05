#include <iostream>

using namespace std;

// Abstract Class

// Two classes implemeting a virtual method

class Account
{

public:
       double balance;

       Account()
       {

              balance = 0.0;
       }

       void deposit(double amt)
       {

              balance += amt;

              cout << amt << " Deposited" << endl;
       }

       // Pure Virtual Function

       virtual void withdraw(double amt) = 0;
};

class SavingsAccount : public Account
{

public:
       const int MINAMT = 50;

       const int PENALTY = 1000;

       double interestRate;

       SavingsAccount()
       {

              balance = 0.0;

              interestRate = 5.1;
       }

       // Providing implementation

       void withdraw(double amt)
       {

              balance -= amt;

              if (balance < MINAMT)

              {

                     balance = balance - PENALTY;
              }

              cout << amt << " Withdrawn \n";
       }
};

class CheckingAccount : public Account
{

public:
       const int MINAMT = 250;

       const int PENALTY = 10000;

       double interestRate;

       CheckingAccount()
       {

              balance = 0.0;

              interestRate = 5.1;
       }

       // Providing implementation

       void withdraw(double amt)
       {

              balance -= amt;

              if (balance < MINAMT)

              {

                     balance = balance - PENALTY;
              }

              cout << amt << " Withdrawn \n";
       }
};

int main()

{

       SavingsAccount sa;

       sa.deposit(1000);

       sa.withdraw(400);

       cout << "Savings Account Balance: " << sa.balance << endl;

       SavingsAccount sa;

       sa.deposit(1000);

       sa.withdraw(400);

       cout << "Savings Account Balance: " << sa.balance << endl;

       return 0;
}