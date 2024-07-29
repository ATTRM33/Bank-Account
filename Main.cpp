//Zach Brown
//Date: 7/29/2024
//CS2 Bank Account

#include <iostream>
#include "BankAccount.h"
#include "SavingsAcct.h"
#include "CheckingAcct.h"

using namespace std;

int main() {

	BankAccount account1(523.67, .06);
	SavingsAcct myAccount(600, .03);
	CheckingAcct newAccount(1021, .01);

	account1.deposit(221.54);
	account1.withdraw(600.00);
	//account1.monthlyProc();

	std::cout << account1<< std::endl;
	

	myAccount.withdraw(50);
	myAccount.withdraw(100);
	myAccount.deposit(200);
	myAccount.withdraw(420);
	//myAccount.monthlyProc();

	std::cout << myAccount<< std::endl;


	newAccount.withdraw(428);
	newAccount.withdraw(201.25);
	newAccount.deposit(2525);
	newAccount.withdraw(1000);
	//newAccount.monthlyProc();

	std::cout << newAccount << std::endl;


}