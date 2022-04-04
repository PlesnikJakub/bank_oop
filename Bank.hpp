#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include <string>
#endif /* Bank_hpp */

using namespace std;

class Client{
private:
    int code;
    string name;
    static int objectsCount;
public:
    static int GetObjectsCount();
    Client(int c, string n);
    ~Client();
    int GetClode();
    string GetName();
};
class Account{
private:
    int number;
    double balance;
    static double interestRate;
    
    Client *owner;
    Client* partner;
public:
    Account(int n, Client *c);
    Account(int n, Client *c, Client *r);    
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

class Bank{
private:
    Client** clients;
    int clientsCount;
    
    Account** accounts;
    int accountsCount;
public:
    Bank(int c, int a);
    ~Bank();
    Client* CreateClient(int c, string n);
    Account* CreateAccount(int n, Client *c);
    Account* CreateAccount(int n, Client *c, double ir);
    Account* CreateAccount(int n, Client *c, Client *p);
    Account* CreateAccount(int n, Client *c, Client *p, double ir);
    
};
