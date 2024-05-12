#include <iostream>
#include <vector>

using namespace std;

class Customer {
private:
    string name;
    string accountNumber;
    double balance;

public:
    Customer(string name, string accountNumber, double balance) : name(name), accountNumber(accountNumber), balance(balance) {}

    string getName() const { return name; }
    string getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }

    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) { balance -= amount; }
};

class Bank {
private:
    vector<Customer> customers;

public:
    void addCustomer(const Customer& customer) { customers.push_back(customer); }

    void displayCustomerDetails() const {
        cout << "Customer Details:" << endl;
        for (const auto& customer : customers) {
            cout << "Name: " << customer.getName() << ", Account Number: " << customer.getAccountNumber() << ", Balance: " << customer.getBalance() << endl;
        }
    }
};

int main() {
    Bank bank;

    // Add some sample customers
    Customer customer1("John Doe", "12345", 1000);
    Customer customer2("Jane Smith", "54321", 2000);

    bank.addCustomer(customer1);
    bank.addCustomer(customer2);

    // Display customer details
    bank.displayCustomerDetails();

    return 0;
}
