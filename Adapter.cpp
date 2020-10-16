//#include "AdapterClass.hpp"
#include "AdapterObject.hpp"
//#include "Adapterless.hpp"

int main() {
    //Incompatible interfaces...
    BankAccount* account = new CreditCard();
    Blik* blik = new Blik();
    account->moneyTransfer();
    blik->specialPayment();
    delete account;
    delete blik;

    //Adapter design pattern
    account = new BlikAdapter;
    account->moneyTransfer();
    delete account;

    account = new CreditCard;
    account->moneyTransfer();
    delete account;

    return 0;
}
