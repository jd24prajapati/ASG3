#include<iostream>
#include"Account.h"
using namespace std;

class Checking: public Account
{
    private:
        float checkinh_interest;

    public:
        void set_deposit()
        {
            // make_deposit();
        }

        void withdraw()
        {
            // make_withdrawal();
        }

        void add_interest(float inc_checking_interest)
        {
            // interest+= inc_checking_interest;
        }

};
