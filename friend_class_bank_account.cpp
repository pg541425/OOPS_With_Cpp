#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int acnum, double bal) {
        accountNumber = acnum;
        balance = bal;
    }
    friend void compareBalance(BankAccount ac1, BankAccount ac2);
};
void compareBalance(BankAccount ac1, BankAccount ac2) {
    if  (ac1.balance > ac2.balance) {
        cout << "Account " << ac1.accountNumber << " has the higher balance." << endl;
    } 
    else if (ac2.balance > ac1.balance) {
        cout << "Account " << ac2.accountNumber << " has the higher balance." << endl;
    } 
    else {
        cout << "Both accounts have an equal balance." << endl;
    }
}

int main() {
    BankAccount account1(101, 45000);
    BankAccount account2(102, 62000);
    cout << "Account 101 Balance = 45000" << endl;
    cout << "Account 102 Balance = 62000" << endl;
    cout << "Output:" << endl;
    compareBalance(account1, account2);
    return 0;
}