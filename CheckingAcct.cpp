#include "CheckingAcct.h"

void CheckingAcct::withdraw(double amt) {
	if (amt > balance) {
		balance -= SERVICE_CHARGE;
	}
	else {
		BankAccount:: withdraw(amt);
	}

}
 
 void CheckingAcct::montlyProc() {
	 serviceCharge += MONTHLY_FEE;
	 serviceCharge += (withdrawCount + WITHDRAWAL_FEE);
	 BankAccount::monthlyProc();
}