/**
 * This is a Student file which extends the functionality of Customer class and add the rates for student type account 
 * */


#include<iostream>
#include"Customer.h"
using namespace std;

class Student: public Customer
{
    private:
        const float SAVINGS_INTEREST = 4.0; 
        const float CHECK_INTEREST = 1.3;
        const float CHECK_CHARGE = 0.5;
        const float OVERDRAFT_PENALTY = 1.0;

    public:
        /**
        * Function          : get_student_saving_interest
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 1st Nov 2021
        * Purpose           : return saving interest of student
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : saving interest of student
        * Side effect       : N/A 
        *
        * */
        float get_student_saving_interest()
        {
            return SAVINGS_INTEREST;
        }
        

        /**
        * Function          : get_student_check_interest
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 1st Nov 2021
        * Purpose           : return check interest of student
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : check interest of student
        * Side effect       : N/A 
        *
        * */
        float get_student_check_interest()
        {
            return CHECK_INTEREST;
        }
        
        
        /**
        * Function          : get_student_check_charge
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 1st Nov 2021
        * Purpose           : return check charge of student
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : check charge of student
        * Side effect       : N/A 
        *
        * */
        float get_student_check_charge()
        {
            return CHECK_CHARGE;
        }
        
        
        /**
        * Function          : get_student_overdraft_penalty
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 1st Nov 2021
        * Purpose           : return overdraft penalty of student
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : overdraft penalty of student
        * Side effect       : N/A 
        *
        * */
        float get_student_overdraft_penalty()
        {
            return OVERDRAFT_PENALTY;
        }

};
