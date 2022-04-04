#include "Account.h"
double Account::interestRate = 3.14;

Account::Account(int n, Client* c) {
    this->number = n;
    this->owner = c;
    this->balance = 0.0;
    this->partner = nullptr;
}
Account::Account(int n, Client* c, Client* r) {
    this->number = n;
    this->owner = c;
    this->partner = r;
    this->balance = 0.0;

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
void Account::SetInterestRate(double value) {
    Account::interestRate = value;
}
Client* Account::GetOwner() {
    return this->owner;
}
Client* Account::GetPartner() {
    return this->partner;
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
    if (CanWithdraw(a)) {
        this->balance -= a;
    }
    return false;
}