#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account :  public Account {
    friend std::ostream & operator<<(std::ostream & os, const Checking_Account & account );
private:
    static constexpr const char *def_name="Unnamed Checking Account";
    static constexpr double def_balance=0.0;
    static constexpr double withdraw_fee=1.50;
//protected:

public:
    bool withdraw(double amount);
    Checking_Account(std::string name=def_name,  double balance=def_balance);
};

#endif //_CHECKING_ACCOUNT_H_
