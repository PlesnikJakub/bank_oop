#include <stdio.h>
#include <string>
#include "Client.h"
#pragma once
using namespace std;

class Account {
private:
    int number;
    double interestRate;
    double static defaultInterestRate;
    Client* owner;

protected:
    double balance;

public:
    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    void Deposit(double a);
    virtual bool CanWithdraw(double a);
    virtual bool Withdraw(double a);

    static void SetDefaultInterestRate(double value);
    static double GetDefaultInterestRate();
};