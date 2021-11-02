#include<iostream>
#pragma once
using namespace std;

class Customer
{
    private:
        string name;
        string address;
        int age;
        string telephone_no;
        int cus_no;
        string cus_type;

    public:
        /**
        * Function          : set_cus_name
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set customer name 
        * Parameter(s)      : 
        * <1> string customer_name
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_cus_name(string customer_name)
        {
            name = customer_name;
        }
    
        /**
        * Function          : get_cus_name
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : return the customer name 
        * Parameter(s)      : N/A 
        * Precondition(s)   : N/A
        * Returns           : Customer name
        * Side effect       : N/A 
        *
        * */
        string get_cus_name()
        {
            return name;
        }

        /**
        * Function          : set_cus_address
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set customer address
        * Parameter(s)      : 
        * <1> string customer_add
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_cus_address(string customer_add)
        {
            address = customer_add;
        }
     
            
        /**
        * Function          : get_cus_address
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : return the customer address 
        * Parameter(s)      : N/A 
        * Precondition(s)   : N/A
        * Returns           : Customer address
        * Side effect       : N/A 
        *
        * */
        string get_cus_address()
        {
            return address;
        }


        /**
        * Function          : set_cus_age
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set customer age
        * Parameter(s)      : 
        * <1> string customer_add
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_cus_age(int customer_age)
        {
            age = customer_age;
        }

            
        /**
        * Function          : get_cus_age
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : return the customer age 
        * Parameter(s)      : N/A 
        * Precondition(s)   : N/A
        * Returns           : Customer age
        * Side effect       : N/A 
        *
        * */
        int get_cus_age()
        {
            return age;
        }

        
        /**
        * Function          : set_cus_tel_no
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set customer telephone number 
        * Parameter(s)      : 
        * <1> string customer_add
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_cus_tel_no(string customer_tel_no)
        {
            telephone_no = customer_tel_no;
        }

            
        /**
        * Function          : get_cus_tel_no
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : return the telephone number
        * Parameter(s)      : N/A 
        * Precondition(s)   : N/A
        * Returns           : Customer telephone number
        * Side effect       : N/A 
        *
        * */
        string get_cus_tel_no()
        {
            return telephone_no;
        }

        
        /**
        * Function          : set_cus_no
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set customer number
        * Parameter(s)      : 
        * <1> string customer_add
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_cus_no(int customer_no)
        {
            cus_no = customer_no;
        }
            
        /**
        * Function          : get_cus_no
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : return the customer number 
        * Parameter(s)      : N/A 
        * Precondition(s)   : N/A
        * Returns           : Customer number
        * Side effect       : N/A 
        *
        * */
        int get_cus_no()
        {
            return cus_no;
        }

        
        /**
        * Function          : set_cus_type
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : Set customer type(Student, Adult or Senior) 
        * Parameter(s)      : 
        * <1> string customer_add
        * 
        * Precondition(s)   : N/A
        * Returns           : N/A 
        * Side effect       : N/A 
        *
        * */
        void set_cus_type(string customer_type)
        {
            cus_type = customer_type;
        }

    
        /**
        * Function          : get_cus_type
        * Author            : Jaydeep Prajapati(Student ID: 200168915)
        * Date of creation  : 28th Oct 2021
        * Purpose           : return the customer type 
        * Parameter(s)      : N/A 
        * Precondition(s)   : N/A
        * Returns           : Customer type
        * Side effect       : N/A 
        *
        * */
        string get_cus_type()
        {
            return cus_type;
        }


};
