/**
 * This is a Bank file which contains all the major functionlity of a bank
 * 
 * */   

#include<iostream>
#include"Account.h"
#include"Senior.h"
#include"Adult.h"
#include"Student.h"

using namespace std;


class Bank: public Senior, Adult, Student
{
    private:
        Account *accounts;
        int transaction_count = 0;

        string cus_type, acc_type;
        string name, address, phone_no;
        int age;
        bool has_account = 0;

        float user_dep_amount;
        string user_date;

    public:

        void allocate_account()
        {
            accounts = new Account[50];     // Allocating the accounts array's object for 50 accounts
        }

       /**
        * Function          : add_account
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 26th Oct 2021
        * Purpose           : To create an account 
        * Parameter(s)      : 
        * <1> int account_no : An incremented account number of user
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        *  */
        void add_account(int account_no)
        {
            // Displaying the options and getting the details from the user
            cout<< "Enter Customer Name :"<< endl;
            cin.ignore();
            getline (cin, name);        // Getting the name
            cout<< "Enter Customer Address :"<< endl;
            getline (cin, address);     // Getting the address
            cout<< "Enter Customer Age :"<< endl;
            cin>> age;      // Getting the age
            cout<< "Enter Customer Phone Number :"<< endl;
            cin>> phone_no;     // Getting the phone_no

            // Display the options for customer type
            cout<<"Select:"<< endl;
            cout<<"0: Senior"<< endl;
            cout<<"1: Adult"<< endl;
            cout<<"2: Student"<< endl;

            int cus_type_no;
            cin>> cus_type_no;
            
            // Checking the type of customer
            if(cus_type_no == 0)
                cus_type = "Senior";
            else if(cus_type_no == 1)
                cus_type = "Adult";
            else if(cus_type_no == 2)
                cus_type = "Student";

            // Display the options for account type
            cout<<"Select:"<< endl;
            cout<<"0: Checking"<< endl;
            cout<<"1: Savings"<< endl;

            int acc_type_no;
            cin>> acc_type_no;

            //  Checking the account type
            if(acc_type_no == 0)
                acc_type = "Checking";
            else if(acc_type_no == 1)
                acc_type = "Savings";


            float balance = 0;      // Setting the balance=0 for initial
            // Create an obj of Account and storing the data
            Account acc_obj;
            acc_obj.set_acc_bal(balance);
            acc_obj.set_acc_no(account_no);
            acc_obj.set_customer(name, address, age, phone_no, account_no, cus_type);
            acc_obj.allocate_transactions();
            // Storing the objet of Account class into accouts array
            accounts[account_no] = acc_obj;

            // Display message for successful acount creation
            cout<< account_no<< " Added"<< endl; 

        }

       /**
        * Function          : make_deposit
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 26th Oct 2021
        * Purpose           : To deposit the amount 
        * Parameter(s)      : 
        * <1> int account_no : int account_no
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        *  */
        void make_deposit(int user_account_no)
        {
            // Check that whether targeted account exist or not from all accounts
            for(int acc_index=0; acc_index<50; acc_index++)
            {
                // Execute if account exist
                if (accounts[acc_index].get_acc_no() == user_account_no)
                {  
                    float balance;
                    has_account = 1;    // Setting account flag to 1
                    cout<< "Enter The Amount:"<< endl;
                    cin>> user_dep_amount;      // Getting the amount to add from user

                    cout<< "Enter the date yyyy-mm-dd:"<< endl;
                    cin>> user_date;    // Getting the date of transaction from user

                    // Updating the balance  
                    balance = accounts[acc_index].get_acc_bal() + user_dep_amount;
                    accounts[acc_index].set_acc_bal(balance);
                    // Adding the transaction to transaction array with all details
                    accounts[acc_index].set_transaction("   DEP", user_date, user_dep_amount, balance);
                   
                    // Checking the rate according to customer type    
                    float rate;
                    if (cus_type == "Senior")
                        rate = get_senior_saving_interest();
                               
                    else if (cus_type == "Adult")
                        rate = get_adult_saving_interest();

                    else if (cus_type == "Student")
                        rate = get_student_saving_interest();

                    float user_dep_amount = (balance * rate)/ 100;
                    // Updating the balance by adding interest to balance
                    balance += user_dep_amount;
                    // Adding the transaction of interest
                    accounts[acc_index].set_transaction("INT CR", user_date, user_dep_amount, balance);
                    accounts[acc_index].set_acc_bal(balance);

                    break;
                }

            }
            // Display an error message if account dowsn't exist
            if(has_account == 0)
                cout<< "ACCOUNT NUMBER DOESN'T EXIST. PLESE ENTER VALID ACCOUNT NUMBER"<< endl;
            
        }

       /**
        * Function          : make_withdrawal
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 26th Oct 2021
        * Purpose           : To withdraw the amount 
        * Parameter(s)      : 
        * <1> int account_no : int user_account_no
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        *  */

        void make_withdrawal(int user_account_no)
        {
            // Check that whether targeted account exist or not
            for(int acc_index=0; acc_index<50; acc_index++)
            {
                // Execute if account found
                if (accounts[acc_index].get_acc_no() == user_account_no)
                {  
                    float balance;
                    has_account = 1;
                    // Getting the amount to withdrawn from account
                    cout<< "Enter The Amount:"<< endl;
                    cin>> user_dep_amount;
                    //  Getting the date
                    cout<< "Enter the date yyyy-mm-dd:"<< endl;
                    cin>> user_date;

                    // Getting the current balance
                    balance = accounts[acc_index].get_acc_bal();
                    
                    // Check that wheter requested transaction is possibl or not
                    // If total balance is <= 0 THEN transaction can not ne performed
                    // If rewuested withdrawn amount is large than total balance THEN transaction can not ne performed  
                    if ((balance <= 0) || ( balance - user_dep_amount) < 0)
                    {
                        // Display an error message  
                        cout<< "YOU DON'T HAVE ENOUGHT BUDGHT TO WITHDRAW THE AMOUNT"<< endl;
                        break;
                    }
                    // Update the balance
                    balance -= user_dep_amount;
                    accounts[acc_index].set_acc_bal(balance);
                    // Add transaction into transaction array
                    accounts[acc_index].set_transaction("    WD", user_date, user_dep_amount, balance);
                    accounts[acc_index].set_acc_bal(balance);

                    break;
                }

            }
            // Display an error message if account doesn't exist
            if(has_account == 0)
                cout<< "ACCOUNT NUMBER DOESN'T EXIST. PLESE ENTER VALID ACCOUNT NUMBER"<< endl;
            
        }


       /**
        * Function          : get_account
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 27th Oct 2021
        * Purpose           : Display all the details of the account includeing all privious history 
        * Parameter(s)      : 
        * <1> int account_no : int user_account_no
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        *  */
        // Display the account details
        void get_account(int user_account_no)
        {
            // Check that whether targeted account exist or not
            for(int acc_index=0; acc_index<50; acc_index++)
            {
                // Execute if account found
                if (accounts[acc_index].get_acc_no() == user_account_no)
                {
                    has_account = 1;
                    // Display the information such as account number, owner name, total balance and transaction history
                    cout<< "Account : "<< accounts[acc_index].get_acc_no()<< endl; 
                    cout<< "Owner: "<< accounts[acc_index].get_customer().get_cus_name()<< endl;
                    cout<< "Type of customer: "<< accounts[acc_index].get_customer().get_cus_type()<< endl;
                    cout<< "Balance:"<< " $"<< accounts[acc_index].get_acc_bal()<< endl;
                    
                    // Getting the total number of transaction 
                    int count = accounts[acc_index].get_transaction_count();
                    cout<< "TOTAL COUNT :"<< count<< endl;
                    int account_number = accounts[acc_index].get_acc_no();

                    //  Getting the current balance of an account
                    float balance = accounts[acc_index].get_acc_bal();
                    float rate;
                    if (cus_type == "Senior")
                        rate = get_senior_check_interest();
                               
                    else if (cus_type == "Adult")
                        rate = get_adult_check_interest();

                    else if (cus_type == "Student")
                        rate = get_student_check_interest();

                    // Deducting the checking charge and updating the final balance to account
                    float user_dep_amount = (balance * rate)/100; 
                    balance -= user_dep_amount;
                    accounts[acc_index].set_transaction("CHKCHG", user_date, user_dep_amount, balance);
                    accounts[acc_index].set_acc_bal(balance);

                    // Display all transactions of an account
                    accounts[acc_index].print_transactions(count);
                    break;
                }

            }

            // Display an error message if account doesn't exist
            if(has_account == 0)
                cout<< "ACCOUNT NUMBER DOESN'T EXIST. PLESE ENTER VALID ACCOUNT NUMBER"<< endl;
            
        }

};
