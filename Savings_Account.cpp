#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate) 
    : Account(name, balance), int_rate{int_rate} {
}

bool Savings_Account::deposit(double amount) {
    
    amount = amount + (amount*int_rate/100); 
    return Account::deposit(amount);
}

std::ostream & operator<<(std::ostream & os, const Savings_Account & account) {
    os << "[Saving account: " <<account.name << ": " << account.balance << ": " << account.int_rate <<"%]";
    return os;
}