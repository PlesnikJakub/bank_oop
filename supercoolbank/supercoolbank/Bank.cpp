#include "Bank.h"

Bank::Bank(int c, int a) {
    this->clients = new Client * [c];
    this->accounts = new Account * [a];
    this->clientsCount = 0;
    this->accountsCount = 0;
}
Bank::~Bank() {
    for (int i = 0; i < this->clientsCount; i++) {
        delete this->clients[i];

    }
    delete[] clients;
    for (int i = 0; i < this->accountsCount; i++) {
        delete this->accounts[i];

    }
    delete[] accounts;
}
Client* Bank::CreateClient(int c, string n) {
    Client* client = new Client(c, n);
    this->clients[this->clientsCount] = client;
    this->clientsCount++;
    return client;
}

Account* Bank::CreateAccount(int n, Client* c) {
    Account* account = new Account(n, c);
    this->accounts[this->accountsCount] = account;
    this->accounts++;
    return account;
}

PartnerAccount* Bank::CreatePartnerAccount(int n, Client* c, Client* p) {
    return new PartnerAccount(n, c, p);
    /* this->accounts++;
    return (PartnerAccount*)this->accounts[this->accountsCount];
    */
}

