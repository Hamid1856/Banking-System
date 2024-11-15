// Banking System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bank.h"

using namespace std;
int main()
{
    Bank Mybank;
    int Choice;


    string name;
    int accNumber = 0;
    double initialBalance = 0;
    do {
        cout << "***************************************************************************************************" << endl;
        cout << "Welcome to the Bank Management System \n";
        cout << "***************************************************************************************************" << endl;
        cout << "***************************************************************************************************" << endl;
        
        cout << "1. Create Your Account \n";
        cout << "2. Add Balance to your Account \n";
        cout << "3. Withdraw Balance From Your Account \n";
        cout << "4. Check Balance of any account with specified Account Number: " << endl;
        cout << "5. Show All Accounts. \n";
        cout << "6. Find Your Account. \n";
        cout << "7. See your Account Details. \n";
        cout << "Enter Your Choice: " << endl;
        cout << "Press 0 to exit" << endl;
        cout << "***************************************************************************************************" << endl;
        cout << "***************************************************************************************************" << endl;
        cout << "***************************************************************************************************" << endl;

        cin >> Choice;

        switch (Choice)
        {
        case 1:
            Mybank.createAccount(name, accNumber, initialBalance);
            break;
        case 2:
            Mybank.Deposit_Cash();
            break;
        case 3:
            Mybank.Withdraw_Money();
           
            break;
        case 4:
            Mybank.See_Balance();

            break;
        case 5:
            Mybank.showAllAccounts();
            break;

        case 6:
            Mybank.Find_Account();
            break;

        case 7:
            Mybank.get_Account_Details();
            break;

        default:
            break;
        }

    } while (Choice != 0);



}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
