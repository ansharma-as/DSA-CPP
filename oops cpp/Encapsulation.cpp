#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private attribute, not accessible from outside

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Invalid initial balance. Set to 0." << endl;
        }
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient funds." << endl;
        }
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(100.0);  // Create an account with an initial balance of 100

    account.deposit(50);         // Deposit 50
    cout << "Current balance: " << account.getBalance() << endl;  // Get current balance

    account.withdraw(30);        // Withdraw 30
    cout << "Current balance: " << account.getBalance() << endl;

    return 0;
}
