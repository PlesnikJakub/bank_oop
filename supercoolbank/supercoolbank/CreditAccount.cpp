#include "CreditAccount.h"
#include <iostream>

CreditAccount::CreditAccount(int n, Client* c, double credit = 5000) : Account(n, c)
{
    this->creditAmmount = credit;
}

bool CreditAccount::CanWithdraw(double a)
{
    return (this->creditAmmount + this->balance) - a >= 0;
}

bool CreditAccount::Withdraw(double a)
{
    cout << "CreditAccount Withdraw" << endl;
    if (this->CanWithdraw(a)) {
        this->balance -= a;
        return true;
    }

    return false;
}
