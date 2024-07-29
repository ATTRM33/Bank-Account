#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>

class BankAccount
{protected:
	double balance;
	int depositCount;
	int withdrawCount;
	double interestRate;
	double serviceCharge;
	double monthStartBalance;
public:
	BankAccount();
	BankAccount(double acctBalance, double intRate);
	virtual void deposit(double amt);
	virtual void withdraw(double amt);
	virtual void calcInt();
	virtual void monthlyProc();
	virtual double getBalance();
	int getNumDeposits() { return depositCount; }
	int getNumWithdraws() {	return withdrawCount;}
	int getMonthlyService() { return serviceCharge; }
	friend std::ostream& operator <<(std::ostream& stream, BankAccount& acct);
};

#endif // !BANKACCOUNT_H
