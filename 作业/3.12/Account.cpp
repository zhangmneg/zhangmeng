
#include<iostream>
#include"Account.h"
using namespace std;
Account::Account (int balance)



{
    if(balance>=0)
	{
		accountbalance=balance;
	}
	else
        {accountbalance<0;

		cout<<"��ʼ�������Ч��"<<endl;}

}
void Account::credit(int credit)
{
    accountbalance=accountbalance+credit;
}
void Account::debit(int debit)
{
    if(debit<=accountbalance)
accountbalance=accountbalance-debit;
    if(debit>accountbalance)


cout<<"Debit amount exceeded account balance"<<endl;

}
int Account::getBalance()
{
     return accountbalance;
}
