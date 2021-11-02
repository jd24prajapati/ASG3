/**
 * This is an Adult file which extends the functionality of Customer class and add the rates for adults type account 
 * */
#include<iostream>
#include"Customer.h"
using namespace std;

class Adult: public Customer
{
        private:
        const float SAVINGS_INTEREST = 5.2; 
        const float CHECK_INTEREST = 2.3;
        const float CHECK_CHARGE = 1.4;
        const float OVERDRAFT_PENALTY = 1.5;

    public:
        /**
        * Function          : get_adult_saving_interest
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : return saving interest of adults
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : saving interest of adults
        * Side effect       : N/A 
        *
        * */
        float get_adult_saving_interest()
        {
            return SAVINGS_INTEREST;
        }
        
        
        /**
        * Function          : get_adult_check_interest
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : return check interest of adults
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : check interest of adults
        * Side effect       : N/A 
        *
        * */
        float get_adult_check_interest()
        {
            return CHECK_INTEREST;
        }
        
        
        /**
        * Function          : get_adult_check_charge
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : return check charge of adults
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : check charge of adults
        * Side effect       : N/A 
        *
        * */
        float get_adult_check_charge()
        {
            return CHECK_CHARGE;
        }
        
        
        /**
        * Function          : get_adult_overdraft_penalty
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 31st Oct 2021
        * Purpose           : return overdraft penalty of adults
        * Parameter(s)      : 
        * <1> string transaction_type
        * 
        * Precondition(s)   : N/A
        * Returns           : overdraft penalty of adults
        * Side effect       : N/A 
        *
        * */
        float get_adult_overdraft_penalty()
        {
            return OVERDRAFT_PENALTY;
        }

};
