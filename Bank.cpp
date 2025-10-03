#include <iostream>

using namespace std;

class Account
{
    public:
        double AccNumber = 0;
        //string AccHolder[15];
        double Balance = 0;
        long int Adhar = 0;

        void enterinfo()
        {
            cout<<"Enter your Account number: \n";
            cin>>AccNumber;

            // cout<<"Enter your Name: \n";
            // cin>>AccHolder;

            cout<<"Enter your Balance: \n";
            cin>>Balance;

        }

        void kyc()
        {
            cout<<"Enter your Adhar: \n";
            cin>>Adhar;

            if (Adhar>1)
            {
                cout<<"Valid Adhar\n";

            }
            else
            {
                cout<<"Invalid\n";
            }
        }

        void displayinfo()
        {
            cout<<"Your Account Number : "<<AccNumber<<"\n";
            cout<<"Your Balance : "<<Balance<<"\n";\
            cout<<"Adhar:"<<Adhar<<"\n";
        }

        

       
};

class Saving : public Account
{


};


class Current : public Account
{


};


int main()
{
    Account * Ap = new Account();

    Ap -> enterinfo();
    Ap-> kyc();
    Ap -> displayinfo();



    return 0;
}