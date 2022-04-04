#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Client.h"

int main()
{
    Account* a;

    Bank* bank = new Bank(2, 2);
    Client* john = bank->CreateClient(1, "John");
    Client* barbara = bank->CreateClient(1, "Barbara");
    Account* personal = bank->CreateAccount(1, john);
    PartnerAccount* partnerAcc = bank->CreatePartnerAccount(2, john, barbara);
    a = partnerAcc;

    personal->Deposit(2000.0);
    cout << personal->GetBalance() << endl;

    return 0;
}
