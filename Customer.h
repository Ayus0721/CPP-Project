#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<vector>
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

#endif