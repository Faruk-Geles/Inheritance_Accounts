#include <iostream>
#include "Trust_Account.h"

//int Trust_Account::num_withdraws=0;
Trust_Account::Trust_Account(std::string name, double balance, double int_rate) 
    :Savings_Account(name, balance, int_rate) ,num_withdrawals{0}
{
    
}

//Deposit gets additionals $50 bonus when amount >=5000
bool Trust_Account::deposit(double amount) {
    if(amount>=bonus_threshold) {
        amount +=bonus_amount;
    }
    return Savings_Account::deposit(amount);
}

//Only 3 withdrawlays each can be up to maxium of 20% of the accounts value are allowed
bool Trust_Account::withdraw(double amount) {
    if ((num_withdrawals>max_withdrawals) ||  (amount>max_withdrawal_percent*balance) ) {
        //std::cout <<"Withdraw fails limit exceded"<<std::endl; 
        return false;
    }
    ++num_withdrawals;
    //std::cout<<"Num withdraw: " <<num_withdrawals<<std::endl;
    return Savings_Account::withdraw(amount);
}

std::ostream & operator<<(std::ostream & os, const Trust_Account & account) {
    os << "[Trust account: " <<account.name << ": " << account.balance << ": " << account.int_rate <<"%" 
    <<" number of withdrawel: " << account.num_withdrawals <<" ]";
    return os;
}