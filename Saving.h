#include<iostream>
#include"Account.h"
using namespace std;

class Saving: public Account
{
    private:
        float saving_interest;

    public:
        void set_deposit()
        {
            // make_deposit();
        }

        void withdraw()
        {
            // make_withdrawal();
        }

        void add_interest(float inc_saving_interest)
        {
            // interest+= inc_saving_interest;
        }
};
