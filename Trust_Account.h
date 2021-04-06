#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include <string>
#include "Savings_Account.h"

class Trust_Account: public Savings_Account {
    friend std::ostream & operator<<(std::ostream & os, const Trust_Account & account);
private:
    static constexpr const char *def_name="Unnamed Trust Account";
    static constexpr double balance_def=0.0;
    static constexpr double int_rate_def=0.0;
    static constexpr int max_withdrawals=3;
    static constexpr double bonus_amount=50.0;
    static constexpr double bonus_threshold=5000.0;
    static constexpr double max_withdrawal_percent=0.2;
protected:
    int num_withdrawals;
public:
    Trust_Account(std::string name = def_name, double balance=balance_def, double int_rate=int_rate_def);
    
    //deposits of more then $5000.00 or more will receive $50 bonus
    bool deposit(double amount);
    
    //Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account value
    bool withdraw(double amount);
    
};

#endif //_TRUST_ACCOUNT_H_