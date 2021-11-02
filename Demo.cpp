/**
 * This program is written in c++ language
 * This program is provides all the basic functions of a bank.
 * Like, create account, add money, withdraw money and check the amount in an account.
 *
 * At start, few options will be given to the end user and actions will be performed
 * according to user's choice. 
 * 
*/

#include<iostream>
using namespace std;

// Including the header file which contains all the functionality of a bank
// including the account, transactions history and other operations as well
#include"Bank.h"


int main()
{
    Bank obj;
    obj.allocate_account();

    int choice, user_acc_no;
    int acc_counter = 0;


    do
    {
        // List of options that a user can perform
        cout<< "\n\n\nSelect:"<< endl;
        cout<< "0: Add Account"<< endl;
        cout<< "1: Make Deposit"<< endl;
        cout<< "2: Make Withdrawal"<< endl;
        cout<< "3: Check Account"<< endl;
        cout<< "4: Exit"<< endl;

        // Getting choice from user
        cout<< "Enter your choice: ";
        cin>> choice;
        
        cout<< "Your choice is :"<< choice<< "\n\n";

        switch(choice)
        {
            // This will ask needed information of user for creating an account and will open a new account in a bank
            // It has a counter, which is auto incresed and indicates the number of accounts in a bank
            case 0:
                obj.add_account(acc_counter++);
                break;
            
            // This action will make a deposit to an existing account and update the balance
            case 1:
                cout<< "Enter account no:"<< endl;
                cin>> user_acc_no;

                obj.make_deposit(user_acc_no);
                break;

            // This action will withdraw the money from an existing account and update the balance
            case 2:
                cout<< "Enter account no:"<< endl;
                cin>> user_acc_no;

                obj.make_withdrawal(user_acc_no);
                break;

            // This action will display the information of account including history 
            case 3:
                cout<< "Enter account no:"<< endl;
                cin>> user_acc_no;
                
                obj.get_account(user_acc_no);
                break;

            // This action will perform when user has selected the operation which is not provided by the bank 
            default:
                cout<< "\nPlease select a valid option from given list"<< endl;

        }

    }
    // Options will be repeate untill user exit.
    while(choice != 4);


    return 0;
}