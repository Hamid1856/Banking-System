#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Bank 
{
protected:
	vector<string> Accounts;
	vector<int> Accounts_Number;
	vector<double> Accounts_Balance;
	vector<double> Accounts_initial_balance;
	double Balance;
	int Total_Accounts;
	double initial_Balance;
	int Account_Number;
	string Account_Holder_Name;

public:
	Bank();
	Bank(double a, int b, double c, int d, string e);
	void setTotal_Accounts(int b);
	int getTotal_Accounts();
	void setinitial_Balance(double c);
	double getinitial_Balance();
	void setBalance(double a);
	double getBalance();
	void setAccount_Number(int d);
	int getAccount_Number();
	void setAccount_Holder_Name(string e);
	string getAccount_Holder_Name();

	void createAccount(string name, int accNumber, double initialBalance);
	void Find_Account();
	/*void depositToAccount(int accNumber, double amount);*/
	/*void withdrawFromAccount(int accNumber, double amount);*/
	/*void checkBalance(int accNumber);*/
	void showAllAccounts();
	void Deposit_Cash();
	void Withdraw_Money();
	void See_Balance();
	void get_Account_Details();

};

