#include <iostream>
#include <string.h>
using namespace std;

class BankAccount {
    private:
        string account_number;
        string account_holder_name;
        float balance;
    
    public:
        BankAccount(string acc_no, string acc_name, float bal) {
            account_number = acc_no;
            account_holder_name = acc_name;
            balance = bal;
        }

        void deposit(float amount) {
            balance += amount;
            cout << "Deposit successful. Current balance: " << balance << endl;
        }

        void withdraw(float amount) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal successful. Current balance: " << balance << endl;
            }
            else {
                cout << "Insufficient balance. Withdrawal failed." << endl;
            }
        }

        void display() {
            cout << "Account Number: " << account_number << endl;
            cout << "Account Holder Name: " << account_holder_name << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    BankAccount acc1("123456", "John Doe", 1000);
    acc1.display();

    acc1.deposit(500);
    acc1.withdraw(2000);
    acc1.withdraw(800);

    acc1.display();

    return 0;
}
