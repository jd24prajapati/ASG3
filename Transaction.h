/**
 * This is Transaction file which contains all information regarding transactions
 * such as transaction type, amount, final balance, and date on which transaction has been performed
 * */

#include<iostream>
using namespace std;

class Transaction
{
    private:
        string tran_type;
        float amount;
        float balance;
        string date;
        string record;

    public:   

        /**
        * Function          : set_tran_type
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : Set transaction type
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_tran_type(string transaction_type)
        {
            tran_type = transaction_type;
        }

        /**
        * Function          : set_tran_amount
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : Set transaction amount
        * Parameter(s)      : 
        * <1> string transaction_amount
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_tran_amount(float transaction_amount)
        {
            amount = transaction_amount;
        }
        
        /**
        * Function          : set_tran_balance
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : Set transaction balance
        * Parameter(s)      : 
        * <1> string transaction_balance
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_tran_balance(float transaction_balance)
        {
            balance = transaction_balance;
        }
                
        /**
        * Function          : set_tran_date
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : Set transaction date
        * Parameter(s)      : 
        * <1> string transaction_date
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_tran_date(string transaction_date)
        {
            date = transaction_date;
        }
        
        /**
        * Function          : get_trans_type
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : Set transaction date
        * Parameter(s)      : 
        * <1> string transaction_date
        * 
        * Precondition(s)   : N/A
        * Returns           : return transaction type(deposit, withdraw, add interest or checking charge)
        * Side effect       : N/A 
        *
        * */
        string get_trans_type()
        {
            return tran_type;
        }
                
        /**
        * Function          : get_date
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : Return transaction date
        * Parameter(s)      : N/A
        * Precondition(s)   : N/A
        * Returns           : return the date of transaction
        * Side effect       : N/A 
        *
        * */
        string get_date()
        {
            return date;
        }
        
                        
        /**
        * Function          : get_amount
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : return amount
        * Parameter(s)      : N/A
        * Precondition(s)   : N/A
        * Returns           : amount
        * Side effect       : N/A 
        *
        * */
        float get_amount()
        {
            return amount;
        }
        
        /**
        * Function          : get_balance
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 29th Oct 2021
        * Purpose           : return balance
        * Parameter(s)      : N/A
        * Precondition(s)   : N/A
        * Returns           : amount
        * Side effect       : N/A 
        *
        * */
        float get_balance()
        {
            return balance;
        }
        
};
