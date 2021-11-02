/**
 * This is Account file which contains all the functionality related to account such as account type, it's interest 
 * and transaction history 
 * */
#include<iostream>
#include"Customer.h"
#include"Transaction.h"

using namespace std;

class Account
{
    private:
        Customer cus_obj;     
        Transaction *transactions;
        double balance;
        int acc_no, trans_count= 0;


    public:
        /**
        * Function          : set_customer
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 27th Oct 2021
        * Purpose           : To set the customer's data using customers object  
        * Parameter(s)      : 
        * <1> string name
        * <2> string address
        * <3> int age
        * <4> string phone_no
        * <5> int account_no
        * <6> string customer_type
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_customer(string name, string address, int age, string phone_no, int account_no, string cus_type)
        {
            // Storing thedetails inside customer object from Account class by creating Customer class object
            cus_obj.set_cus_name(name);
            cus_obj.set_cus_address(address);
            cus_obj.set_cus_age(age);
            cus_obj.set_cus_tel_no(phone_no);
            cus_obj.set_cus_no(account_no);
            cus_obj.set_cus_type(cus_type);


        }

        // A class method which return the object of Customer class
        Customer get_customer()
        {
            return cus_obj;
        }
        /**
        * Function          : allocate_transactions
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 27th Oct 2021
        * Purpose           : To allocate the memory for transactions  
        * Parameter(s)      : N/A
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void allocate_transactions()
        {
            transactions = new Transaction[100];        // Allocating the array for 100 transactions per account
        }

        /**
        * Function          : set_transaction
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 27th Oct 2021
        * Purpose           : To set the transactions performed by a user  
        * Parameter(s)      : 
        * <1> string transaction_type
        * <2> string date 
        * <3> int amount
        * <4> string balance
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_transaction(string tran_type, string user_date, float user_dep_amount, float balance)
        {
            // Create an object of Transaction class to store the data of transaction from Account class
            Transaction trans_temp_obj;

            // Storing the data into transaction object
            transactions[trans_count].set_tran_type(tran_type);
            transactions[trans_count].set_tran_date(user_date);
            transactions[trans_count].set_tran_amount(user_dep_amount);
            transactions[trans_count].set_tran_balance(balance);
            trans_count++;
  
        }
     
        /**
        * Function          : get_transaction_count
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : To get the total number of transactions performed by a user  
        * Parameter(s)      : N/A
        * Precondition(s)   : N/A
        * Returns           : int counter, total number of transactions
        * Side effect       : N/A 
        *
        * */
        int get_transaction_count()
        {   
            return trans_count;     // Return total number of transaction of perticular account
        }

             
        /**
        * Function          : print_transactions
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Print all the transactions of perticular account  
        * Parameter(s)      : int count, total number of transactions made by a user
        * Precondition(s)   : N/A
        * Returns           : N/A
        * Side effect       : N/A 
        *
        * */
        void print_transactions(int count)
        {   
            // Print the history of transaction
            for(int i=0;i<count; i++)
            {
                // display transaction type, amount, balance and date of transaction in well-formatted format
                string record = transactions[i].get_trans_type() + " "+ transactions[i].get_date() + " $ "+ to_string(transactions[i].get_amount())  + " $ "+ to_string(transactions[i].get_balance());
                
                cout<<record<<endl;
            }
        }

             
        /**
        * Function          : set_acc_bal
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set the account balance  
        * Parameter(s)      : int account_balance
        * Precondition(s)   : N/A
        * Returns           : N/A
        * Side effect       : N/A 
        *
        * */
        void set_acc_bal(float account_balance)
        {
            balance = account_balance;      // Set the account balance
        }

             
        /**
        * Function          : get_acc_bal
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : get the account balance  
        * Parameter(s)      : int account_balance
        * Precondition(s)   : N/A
        * Returns           : This will return the account balance
        * Side effect       : N/A 
        *
        * */
        float get_acc_bal()
        {
            return balance;     // Get the account balance
        }
        
        /**
        * Function          : set_acc_no
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set the account number  
        * Parameter(s)      : int account_balance
        * Precondition(s)   : N/A
        * Returns           : N/A
        * Side effect       : N/A 
        *
        * */
        void set_acc_no(float account_no)
        {
            acc_no = account_no;        // Set the account number
        }

        /**
        * Function          : get_acc_no
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set the account number  
        * Parameter(s)      : int account_balance
        * Precondition(s)   : N/A
        * Returns           : This will return the account number
        * Side effect       : N/A 
        *
        * */
        float get_acc_no()
        {
            return acc_no;      // Return the account number
        }

};
