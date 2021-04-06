#include "Checking_Account.h"
#include <iostream>



Checking_Account::Checking_Account(std::string name,  double balance) 
    : Account(name, balance)
{
        
}
                                            
bool Checking_Account::withdraw(double amount) {
    amount += withdraw_fee;
    return Account::withdraw(amount);
}


std::ostream & operator<<(std::ostream & os, const Checking_Account & account) {
    os <<"[Checking Account: " << account.name << ": " << account.balance << " withdraw fee: " << account.withdraw_fee<<"$]"; 
}