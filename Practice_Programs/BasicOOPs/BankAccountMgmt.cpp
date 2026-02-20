/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH09?tab=statement
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private variable to store account balance

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Public getter method to retrieve balance securely
    double getBalance() {
        return balance;
    }
};

int main() {
    double initialDeposit;

    // User enters initial deposit amount
    cin >> initialDeposit;

    // Creating a bank account object with the user's deposit
    BankAccount userAccount(initialDeposit);

    // Retrieving account balance using the public getter method
    cout << "Your current balance is: $" << userAccount.getBalance() << endl;

    return 0;
}
