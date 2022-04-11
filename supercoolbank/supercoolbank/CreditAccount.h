#include "Account.h"
#pragma once

class CreditAccount : public Account
{	
private:
	double creditAmmount;

public:
	CreditAccount(int n, Client* c, double credit);
	bool CanWithdraw(double a);
	bool Withdraw(double a);
};

