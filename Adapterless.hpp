#include <iostream>

class BankAccount {
public:
    BankAccount() {}
    virtual ~BankAccount() {}
    virtual void moneyTransfer() {}
    void accountBalance() {}

private:
    std::string nameOwner;
    std::string UserLogin;
    std::string UsserPassword;
    size_t numberAccount;
};

class CreditCard : public BankAccount {
public:
    void moneyTransfer() override { std::cout << "Payment with using credit card \n"; }

private:
    size_t cardId;
    size_t pinNumber;
};

class Blik {
public:
    void specialPayment() { std::cout << "Payment with using blik \n"; }

private:
    size_t blikCode;
};
