#include <stdio.h>
#include <string>
#include "Client.h"
#pragma once
using namespace std;

class Account {
private:
    int number;
    double balance;
    static double interestRate;

    Client* owner;
    Client* partner;
public:
    Account(int n, Client* c);
    Account(int n, Client* c, Client* r);
    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    Client* GetPartner();
    bool CanWithdraw(double a);
    static void SetInterestRate(double value);
    void Deposit(double a);
    bool Withdraw(double a);
};