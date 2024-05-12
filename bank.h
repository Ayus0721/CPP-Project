#include <iostream>
#include <vector>

using namespace std;

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