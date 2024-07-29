#ifndef SAVINGSACCT_H
#define SAVINGSACCT_H


#include "BankAccount.h"


class SavingsAcct : public BankAccount
{private:
	bool isActive;

public:
	SavingsAcct();
	SavingsAcct(double balance, double interestRate);
	void setIsActive();
	void withdraw(double amt);
	void deposit(double amt);
	void monthlyProc();
	const int MAX_MONTHLY_WITHDRAWALS = 4;
	const int WITHDRAWAL_FEE = 1;
	const double MINIMUM_BALANCE = 25;

};

#endif // !SAVINGSACCT_H