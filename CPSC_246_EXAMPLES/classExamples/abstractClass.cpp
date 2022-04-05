#include <iostream>
using namespace std;
//MAKE THIS WORK -- charge 5$ everytime you withdrawl you lose 5$
// add a checking account as well - which charges 2.50 for a withdrawl

// Abstract Class
class Account
{

private:
    double balance;

public:

  Account()
    {
        balance = 0.0;
    }


    void setBalance(pBalance)
    {
        balance = pBalance;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amt)
    {
        balance += amt;
        cout << amt << " Deposited" << endl;
    }

    // Pure Virtual Function
    virtual void withdraw(double amt) = 0; // this is called an abstract method // you have to have code for this elsewhere this is laying the blue print
};

class SavingsAccount : public Account
{

private:
    double interestRate;

public:
    SavingsAccount()
    {
        balance = 0.0;
        interestRate = 5.1;
    }

    // Providing implementation
    void withdraw(double amt)
    {
        balance -= amt;         // call getBalance 
        cout << amt << " Withdrawn \n";
    }
};

int main()
{
    SavingsAccount sa;

    sa.deposit(1000);
    sa.withdraw(400);

    cout << "Savings Account Balance: " << sa.balance << endl;

    return 0;
}