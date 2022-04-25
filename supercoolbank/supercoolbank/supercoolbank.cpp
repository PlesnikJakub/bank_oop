#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Client.h"
#include "CreditAccount.h"

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
    personal->Withdraw(1000.0);


    /* -------------------------- */

    CreditAccount* creditAcc = new CreditAccount(1, john, 10000);
    cout << creditAcc->GetBalance() << endl;
    creditAcc->Withdraw(1000.0);
    creditAcc->Deposit(2000.0);

    cout << creditAcc->GetBalance() << endl;
    creditAcc->Withdraw(1000.0);

    /* TEST */
    Account* b = creditAcc;
    b->Withdraw(1000.0);

    return 0;
}
