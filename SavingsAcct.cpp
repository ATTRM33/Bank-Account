#include "SavingsAcct.h"

SavingsAcct::SavingsAcct() {
}


SavingsAcct::SavingsAcct(double balance, double interestRate) :
BankAccount(balance, interestRate) {
	setIsActive();
}

void SavingsAcct::setIsActive() {
	isActive = balance >= MINIMUM_BALANCE;

}

void SavingsAcct::withdraw(double amt) {
	if (isActive)
		BankAccount::withdraw(amt);
	if (balance < MINIMUM_BALANCE)
		isActive = false;
}

void SavingsAcct::deposit(double amt) {
	BankAccount::deposit(amt);
	setIsActive();

}

void SavingsAcct::monthlyProc() {
	if (withdrawCount > MAX_MONTHLY_WITHDRAWALS) {
		serviceCharge += (withdrawCount - (MAX_MONTHLY_WITHDRAWALS)) * WITHDRAWAL_FEE;
	}
	BankAccount::monthlyProc();
	setIsActive();
}