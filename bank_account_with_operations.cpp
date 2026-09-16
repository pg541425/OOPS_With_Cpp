#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
    
public:
    BankAccount() {
        balance = 0;
    }

    void BalanceEnquiry() {
        cout << "Remaining Balance : $" << balance << "\n";
    }
    
    void Withdraw() {
        int amount = 0;
        cout << "Enter the amount to withdraw : ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount. Please enter a positive number.\n";
        } else if (amount > balance) {
            cout << "Insufficient Funds!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        }
        BalanceEnquiry();
    }
    
    void Deposit() {
        int amount = 0;
        cout << "Enter the amount to deposit : ";
        cin >> amount;
        
        if (amount <= 0) {
            cout << "Invalid amount. Please enter a positive number.\n";
        } else {
            balance += amount;
            cout << "Deposit Successful.\n";
        }
        BalanceEnquiry();
    }    
};

int main() {
    BankAccount b;
    int choice = 0;
    
    cout << "----Welcome----\n"
         << "1. Balance Enquiry\n"
         << "2. Deposit\n"
         << "3. Withdraw\n"
         << "4. Exit\n";
         
    while(choice != 4) {
        cout << "\nChoice : ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                b.BalanceEnquiry();
                break;
            case 2:
                b.Deposit();
                break;
            case 3:
                b.Withdraw();
                break;
            case 4:
                cout << "Thank you for using our bank!\n";
                break;
            default:
                cout << "Invalid. Choose (1-4)\n";
        }
    }
    
    return 0;
}