#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class Account {
public:
    Account(std::string iban, double balance);
    std::string getIban() const;
    double getBalance() const;
    void deposit(double amount);
    bool withdraw(double amount);
private:
    std::string iban_;
    double balance_;
};
#endif
