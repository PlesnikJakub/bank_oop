#include <stdio.h>
#include <string>
#include "Client.h"
#include "Account.h"
#include "PartnerAccount.h"
#pragma once
using namespace std;

class Bank {
private:
    Client** clients;
    int clientsCount;

    Account** accounts;
    int accountsCount;
public:
    Bank(int c, int a);
    ~Bank();
    Client* CreateClient(int c, string n);
    Account* CreateAccount(int n, Client* c);
    Account* CreateAccount(int n, Client* c, double ir);
    PartnerAccount* CreatePartnerAccount(int n, Client* c, Client* p);
    PartnerAccount* CreatePartnerAccount(int n, Client* c, Client* p, double ir);
};
