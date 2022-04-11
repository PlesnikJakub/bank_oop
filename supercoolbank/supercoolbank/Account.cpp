#include "Account.h"
#include <iostream>

double Account::defaultInterestRate = 3.14;

Account::Account(int n, Client* c) {
    this->number = n;
    this->owner = c;
    this->balance = 0.0;
    this->interestRate = Account::defaultInterestRate;

}
Account::Account(int n, Client* c, double ir) {
    this->number = n;
    this->owner = c;
    this->balance = 0.0;
    this->interestRate = ir;
}
int Account::GetNumber() {
    return this->number;
}
double Account::GetBalance() {
    return this->balance;
}
double Account::GetInterestRate() {
    return this->interestRate;
}
Client* Account::GetOwner() {
    return this->owner;
}
bool Account::CanWithdraw(double a) {
    if (this->balance - a >= 0) {
        return true;
    }
    return false;
}
void Account::Deposit(double a) {
    this->balance = this->balance + a;
}
bool Account::Withdraw(double a) {
    cout << "Account Withdraw" << endl;
    if (this->CanWithdraw(a)) {
        this->balance -= a;
        return true;
    }
    return false;
}

void Account::SetDefaultInterestRate(double value) {
    Account::defaultInterestRate = value;
}

double Account::GetDefaultInterestRate()
{
    return Account::defaultInterestRate;
}

