#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
    Account(int balabce);
    void credit(int);
    void debit(int);
    int getBalance();
    void displayMessage();
private:
    int accountbalance;
};



#endif // ACCOUNT_H_INCLUDED
