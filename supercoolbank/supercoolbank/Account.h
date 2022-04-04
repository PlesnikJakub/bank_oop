#include <stdio.h>
#include <string>
#include "Client.h"
#pragma once
using namespace std;

class Account {
private:
    int number;
    double balance;
    double interestRate;
    double static defaultInterestRate;

    Client* owner;
public:
    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    bool CanWithdraw(double a);
    void Deposit(double a);
    bool Withdraw(double a);

    static void SetDefaultInterestRate(double value);
    static double GetDefaultInterestRate();
};