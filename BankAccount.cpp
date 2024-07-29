#include "BankAccount.h"

BankAccount::BankAccount() {

}

BankAccount::BankAccount(double acctBalance, double intRate) :
balance(acctBalance), interestRate(intRate), depositCount(0), withdrawCount(0), serviceCharge(0), monthStartBalance(0) {}

void BankAccount::deposit(double amt) {
	balance += amt;
	depositCount ++;
}
void BankAccount::withdraw(double amt) {
	balance -= amt;
	withdrawCount ++;
}
void BankAccount::calcInt() {
	double monthlyInterestRate = (interestRate/12);
	double monthlyInterest = balance * monthlyInterestRate;
	
	 balance += monthlyInterest;
}
void BankAccount::monthlyProc() {
	balance -= serviceCharge;
	calcInt();
	withdrawCount = 0;
	depositCount = 0;
	serviceCharge = 0;
	monthStartBalance = balance;

}


double BankAccount::getBalance() {
	return balance;
}

std::ostream& operator <<(std::ostream& stream, BankAccount& acct) {
	stream << "Start Balance: \t" << acct.monthStartBalance << std::endl
		<< "Number of Deposits: \t" << acct.getNumDeposits() << std::endl
		<< "Number of Withdrawals: \t" << acct.getNumWithdraws() << std::endl
		<< "Service Charges: \t" << acct.getMonthlyService() << std::endl
		<< "Ending Balance: \t" << acct.getBalance() << std::endl;

		return stream;


}