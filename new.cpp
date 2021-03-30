#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<regex>

using namespace std;

class Account
{
        int acno;
        char nm[100], acctype[100];
        float bal;
        string IFSC;
        int branch;
        int phone_no;
        int aadhar_no;
   public:
        Account(int acc_no, char *name, char *acc_type, float balance,string IFSC,int branch,int phone_no,int aadhar_no)  //Parameterized Constructor
        {
                acno=acc_no;
                strcpy(nm, name);
                strcpy(acctype, acc_type);
                bal=balance;
                this->IFSC =IFSC;
                this->branch=branch;
                this->phone_no=phone_no;
                this->aadhar_no=aadhar_no;
        }
        void deposit();
        void withdraw();
        void display();
};
void Account::deposit()   //depositing an amount
{
        int damt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt1;
        bal+=damt1;
}
void Account::withdraw() //Withdrawing an amount
{
    int wamt1;
    cout<<"\nEnter withdraw Amount =";
    cin>>wamt1;
    if(wamt1>bal)
          cout<<"\n Insufficient balance";
    bal-=wamt1;
}
void Account::display()  //displaying the details
{
        cout<<"\n ----------------------";
        cout<<"\n Account No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<bal;
        cout<<"\n IFSC code:"<<IFSC;
        cout<<"\n branch:"<<branch;
        cout<<"\n phone_no"<<phone_no;
        cout<<"\n aadhar_no"<<aadhar_no;
}
//class saving account
class sav_acct:public Account
{
public:
    void interest()
    {
        int t;
        cout<<"\n Enter time interval in year:";
        cin>>t;
        float bal=bal*(1+2*t);
        display();
    }
};
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float balance;
        string IFSC;
        int branch;
        int phone_no;
        int aadhar_no;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Account No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
        cout<<"\n IFSC:";
        cin>>IFSC;
        cout<<"\n branch:";
        cin>>branch;
        cout<<"\n phone_no:";
        cin>>phone_no;
        cout<<"\n aadhar_no:";
        cin>>aadhar_no;

        Account ac(acc_no, name, acc_type, balance,IFSC,branch,phone_no,aadhar_no);  //object is created
        ac.deposit(); //
        ac.withdraw(); // calling member functions
        ac.display(); //
        return 0;
}
