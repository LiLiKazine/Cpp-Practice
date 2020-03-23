#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int num)
{
    if (num <= 0)
    {
        balance = 0;
        cout << "Balance is invalid." << endl;
    }
    else
    {
        balance = num;
    }
}

void Account::credit(int num)
{
    balance += num;
}

void Account::debit(int num)
{
    if (num > balance)
    {
        cout << "Debit amount exceeded account balance.";
    }
    else
    {
        balance -= num;
    }
}

int Account::getBalance() const
{
    cout << "Balance: " << balance << endl;
}