

#include "Bank.h"

#include <string>
#include <vector>
Bank::Bank() {

}
Bank::Bank(double a, int b, double c, int d, string e) {
	 Balance=a;
	Total_Accounts=b;
	 initial_Balance=c;
	 Account_Number=d;
	 Account_Holder_Name=e;
}

void Bank::setTotal_Accounts(int b) {
	Total_Accounts = b;
}
int Bank::getTotal_Accounts() {
	return Total_Accounts;
}
void Bank::setinitial_Balance(double c) {
	initial_Balance = c;
}
double Bank::getinitial_Balance() {
	return initial_Balance;
}
void Bank::setBalance(double a) {
	Balance = a;
}
double Bank::getBalance() {
	return Balance;
}
void Bank::setAccount_Number(int d) {
	Account_Number = d;
}

int Bank::getAccount_Number() {
	return Account_Number;
}
void Bank::setAccount_Holder_Name(string e) {
	Account_Holder_Name = e;

}




string Bank::getAccount_Holder_Name() {
	return Account_Holder_Name;
}



void Bank::createAccount(string name, int accNumber, double initialBalance) {
	// Function Defination to create a Account
	Bank New_Account;
	cout << "Enter you name:" << endl;
	cin >> name;
	cout << "Enter your Account Number: " << endl;
	cin >> accNumber;
	cout << "Enter your Intial Balance: " << endl;
	cin >> initialBalance;
	New_Account.setAccount_Holder_Name(name);
	New_Account.setAccount_Number(accNumber);
	New_Account.setinitial_Balance(initialBalance);
	Accounts.push_back(Account_Holder_Name);
	Accounts_Number.push_back(Account_Number);
	//Accounts_Balance.push_back(Balance);
	Accounts_initial_balance.push_back(initial_Balance);
	Total_Accounts++;
	cout << "Congratulations Your Account Created Successfuly. " << endl;
}

//void Bank::depositToAccount(int accNumber, double amount) {
//	// Function Defination to Deposit Money
//}

//void Bank::withdrawFromAccount(int accNumber, double amount) {
//	//Function Defination goes here
//}

//void Bank::checkBalance(int accNumber) {
//
//}

void Bank::Find_Account() {

	int accNum;
	cout << "Enter Your Account Number: " << endl;
	cin >> accNum;
	if (accNum == this->getAccount_Number()) {
		for (int i = 0; i < Accounts.size(); i++)
		{
			cout << "The Account you Searched is:  " << endl;
			cout << "Your Name is: " << Accounts[i] << endl;
			cout << "Your Account Number is: " << Accounts_Number[i] << endl;
			cout << "Your Balance is: " << Accounts_Balance[i] << endl;
			break;
		}

	}
	else {
		cout << "Enter Valid Account Details" << endl;
	}


}
void Bank::showAllAccounts() {
	for (int i = 0; i < Accounts.size(); i++)
	{
		cout << "The Name is: " << Accounts[i] << endl;
		cout << "The Account Number is: " << Accounts_Number[i] << endl;
		cout << "The Balance is: " << Accounts_Balance[i] << endl;

	}

}

void Bank::Deposit_Cash() {
	double amount;
	int accNum;
	cout << "Enter the Account Number where You want to Deposit Money:  " << endl;
	cin >> accNum;
	/*if (accNum != this->getAccount_Number()) {
		cout << "Your Account Number is Not Found. Enter Valid Account Number to Deposit Balance." << endl;
		return;
	}
	*/
	
	cout << "Enter the Amount you want to add in your Account: " << endl;
	cin >> amount;
	if (amount < 0) {
		cout << "Dear user, Please Enter positive amount" << endl;
	}

	double New_Amount = this->getinitial_Balance() + amount;
	cout << "Congratulation's User Your Balance is Successfuly Added to Your Account. \n";
	this->setBalance(New_Amount);
	cout << "Dear User, Your New Balance is: " << this->getBalance() << endl;

	Accounts_Balance.push_back(this->Balance);

	
		

}
void Bank::get_Account_Details() {
	// Function Defination Goes Here
	int accnum;
	
	cout << "Enter Your Account Number: " << endl;
	cin >> accnum;
	if (accnum == this->getAccount_Number()) {
		for (int  i = 0; i < Accounts.size(); i++)
		{
			cout << "Your Account Details are:  " << endl;
			cout << "Your Name is: " << Accounts[i] << endl;
			cout << "Your Account Number is: " << Accounts_Number[i] << endl;
			cout << "Your Balance is: " << Accounts_Balance[i] << endl;
			break;
		}
	
	}
	else {
		cout << "Enter Valid Account Details" << endl;
	}

	
}



void Bank::Withdraw_Money() {
	// Function Defination Goes Here
	int accNum;
	cout << "Enter the Account Number where you want to withdraw your Money: " << endl;
	cin >> accNum;
	if (accNum == this->getAccount_Number()) {
		int money;
		cout << "Enter the Money You want to Withdraw from your Account" << endl;
		cin >> money;
		double Newbalance;
		Newbalance = Balance - money;
		cout << "Your New Balance is" << "NewBalance" << endl;
		this->setBalance(Newbalance);
		Accounts_Balance.push_back(Balance);
	}

}
void Bank::See_Balance() {

	int accnum;
	cout << "Enter Your Account Number:  " << endl;
	cin >> accnum;
	if (accnum == this->getAccount_Number()) {
		cout << "Your Balance is: " << this->getBalance() << endl;

	}
	else {
		cout << "Enter Valid Account Number to see your Balance" << endl;
	}

}

