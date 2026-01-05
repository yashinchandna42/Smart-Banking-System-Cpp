#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, holderName);
        cout << "Account created successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void displayBalance() {
        cout << "Current Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n===== SMART BANKING SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.displayBalance();
                break;
            case 5:
                cout << "Thank you for using Smart Banking System.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 5);

    return 0;
}
