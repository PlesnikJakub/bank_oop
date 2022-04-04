#include "Bank.hpp"
int Client::objectsCount = 0;
double Account::interestRate = 3.14;
Client::Client(int c, string n){
    this->code = c;
    this->name = n;
    Client::objectsCount += 1;
}

Client::~Client(){
    Client::objectsCount -= 1;
}
int Client::GetObjectsCount(){
    return Client::objectsCount;
}
int Client::GetClode(){
    return this->code;
}
string Client::GetName(){
    return this->name;
}
Account::Account(int n, Client *c){
    this->number = n;
    this->owner = c;
    this->balance = 0.0;
    this->partner = nullptr;
}
Account::Account(int n, Client *c, Client *r){
    this->number = n;
    this->owner = c;
    this->partner = r;
    this->balance = 0.0;
    
}
int Account::GetNumber(){
    return this->number;
}
double Account::GetBalance(){
    return this->balance;
}
double Account::GetInterestRate(){
    return this->interestRate;
}
void Account::SetInterestRate(double value){
    Account::interestRate = value;
}
Client* Account::GetOwner(){
    return this->owner;
}
Client* Account::GetPartner(){
    return this->partner;
}
bool Account::CanWithdraw(double a){
    if(this->balance - a >= 0){
        return true;
    }
    return false;
}
void Account::Deposit(double a){
    this->balance = this->balance + a;
}
bool Account::Withdraw(double a){
    if(CanWithdraw(a)){
        this->balance -= a;
    }
    return false;
}
Bank::Bank(int c, int a){
    this->clients = new Client * [c];
    this->accounts = new Account * [a];
    this->clientsCount = 0;
    this->accountsCount = 0;
}
Bank::~Bank(){
    for(int i = 0; i < this->clientsCount; i++){
        delete this->clients[i];
        
    }
    delete [] clients;
    for(int i = 0; i < this->accountsCount; i++){
        delete this->accounts[i];
        
    }
    delete [] accounts;
}
Client* Bank::CreateClient(int c, string n){
    Client * client = new Client(c, n);
    this->clients[this->clientsCount] = client;
    this->clientsCount++;
    return client;
}
Account* Bank::CreateAccount(int n, Client *c){
    Account * account = new Account(n, c);
    this->accounts[this->accountsCount] = account;
    this->accounts++;
    return account;
}

Account* Bank::CreateAccount(int n, Client *c, Client *p){
    this->accounts[this->accountsCount] = new Account(n, c, p);
    this->accounts++;
    return this->accounts[this->accountsCount];
}

