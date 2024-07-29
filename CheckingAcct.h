#pragma once
#include "BankAccount.h"
class CheckingAcct :
    public BankAccount
{
public:
    using BankAccount::BankAccount;
    virtual void withdraw(double amt);
    virtual void montlyProc();
    const double SERVICE_CHARGE = 15;
    const double MONTHLY_FEE = 5;
    const double WITHDRAWAL_FEE = .1;
};

