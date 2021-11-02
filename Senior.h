/**
 * This is a Senior file which extends the functionality of Customer class and add the rates for senior type account 
 * */
#include<iostream>
#include"Customer.h"
using namespace std;

class Senior: public Customer
{
    private:
        const float SAVINGS_INTEREST = 7.2; 
        const float CHECK_INTEREST = 1.3;
        const float CHECK_CHARGE = 1.4;
        const float OVERDRAFT_PENALTY = 1.5;

    public:
            
        /**
        * Function          : get_senior_saving_interest
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : return saving interest for seniors
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : saving interest for seniors
        * Side effect       : N/A 
        *
        * */
        float get_senior_saving_interest()
        {
            return SAVINGS_INTEREST;
        }
        
                
        /**
        * Function          : get_senior_check_interest
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : check interest for seniors
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : check interest for seniors
        * Side effect       : N/A 
        *
        * */
        float get_senior_check_interest()
        {
            return CHECK_INTEREST;
        }
        
                
        /**
        * Function          : get_senior_check_charge
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : check charge for seniors
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : check charge for seniors
        * Side effect       : N/A 
        *
        * */
        float get_senior_check_charge()
        {
            return CHECK_CHARGE;
        }
        
                
        /**
        * Function          : get_senior_overdraft_penalty
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : return overdraft penalty of seniors
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : overdraft penalty of seniors
        * Side effect       : N/A 
        *
        * */
        float get_senior_overdraft_penalty()
        {
            return OVERDRAFT_PENALTY;
        }
        
};
