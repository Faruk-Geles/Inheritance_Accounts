#include <iostream>
#include "Account_Util.h"

//Displays Account objects in a vector of Account objects
void display(const std::vector<Account> & accounts) {
    std::cout << "\n===Accounts======================"<<std::endl;
    for (const auto & acc: accounts)
        std::cout << acc << std::endl;
}

//Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> & accounts, double amount) {
     std::cout << "\n===Withdraw Accounts=============="<<std::endl;
     for (auto & acc: accounts) {
         if(acc.withdraw(amount)) 
             std::cout << "Withdrew " << amount << " from " << acc << std::endl; 
         else 
             std::cout <<"Failed Withdrawal of " << amount << " from " << acc << std::endl;
     }    
}

//Deposits supplied amount to each  Account object in the vector
void deposit(std::vector<Account> & accounts, double amount) {
    std::cout << "\n===Depositing the  Accounts=============="<<std::endl;
    for (auto & acc: accounts) {
        if(acc.deposit(amount))
             std::cout << "Depositing " << amount << " to " << acc << std::endl; 
        else 
             std::cout <<"Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

//Displays Account objects in a vector of Savings_Account objects
void display(const std::vector<Savings_Account> & accounts) { 
    std::cout << "\n===Accounts Savings================"<<std::endl;
    for (const auto & acc: accounts)
        std::cout << acc << std::endl;
}

//Withdraw amount from each  Savings Account object in the vector
void withdraw(std::vector<Savings_Account> & accounts, double amount) {
    std::cout << "\n===Withdraw Savings Accounts=============="<<std::endl;
    for (auto & acc:accounts) {
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl; 
        else 
            std::cout <<"Failed Withdrawal of " << amount << " from " << acc << std::endl;    
    }
}

//Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> & accounts, double amount) {
    std::cout << "\n===Depositing the  Savings Accounts=============="<<std::endl;
    for (auto & acc: accounts) {
        if(acc.deposit(amount))
             std::cout << "Depositing " << amount << " to " << acc << std::endl; 
        else 
             std::cout <<"Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

//Displays Account objects in a vector of Checking_Account objects
void display(const std::vector<Checking_Account> & accounts) {
        std::cout << "\n===Checking Accounts ================"<<std::endl;
        for(const auto & acc: accounts) {
            std::cout << acc << std::endl;
        }
}


//Deposits supplied amount to each Checking Account object in the vector
void deposit(std::vector<Checking_Account> & accounts, double amount) {
     std::cout << "\n===Depositing the  Checking Accounts======"<<std::endl;
     for(auto & acc:accounts) {
        if(acc.deposit(amount))
             std::cout << "Depositing " << amount << " to " << acc << std::endl; 
        else 
             std::cout <<"Failed Deposit of " << amount << " to " << acc << std::endl;
     }
}

//Withdraw amount from each  Checking Account object in the vector
void withdraw(std::vector<Checking_Account> & accounts, double amount) {
    std::cout << "\n===Withdraw Checking Accounts==========="<<std::endl;
    for (auto & acc:accounts) {
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl; 
        else 
            std::cout <<"Failed Withdrawal of " << amount << " from " << acc << std::endl;    
    }
}


//Displays Account objects in a vector of Trust_Account objects
void display(const std::vector<Trust_Account> & accounts) {
        std::cout << "\n===Trust Accounts ================"<<std::endl;
        for(const auto & acc: accounts) {
            std::cout << acc << std::endl;
        }
}


//Deposits supplied amount to each Checking Account object in the vector
void deposit(std::vector<Trust_Account> & accounts, double amount) {
     std::cout << "\n===Depositing the  Trust accounts======"<<std::endl;
     for(auto & acc:accounts) {
        if(acc.deposit(amount))
             std::cout << "Depositing " << amount << " to " << acc << std::endl; 
        else 
             std::cout <<"Failed Deposit of " << amount << " to " << acc << std::endl;
     }
}

//Withdraw amount from each  Checking Account object in the vector
void withdraw(std::vector<Trust_Account> & accounts, double amount) {
    std::cout << "\n===Withdraw Trust Accounts==========="<<std::endl;
    for (auto & acc:accounts) {
        if(acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl; 
        else 
            std::cout <<"Failed Withdrawal of " << amount << " from " << acc << std::endl;    
    }
}