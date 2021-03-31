#include <iostream>
#include<string>
#include<regex>
using namespace std;

// Account Class Declaration and Definition
class account{
private:
int accountNo;
float balance;
string bankName;
string IFSC;
float interest;
int b_code;
public:
account(){ // Default Constructor
accountNo=0;
balance=0.0;
bankName="";
interest=0.0;
IFSC=" ";
b_code=0;
} // End of Default Constructor

account(int ac_num, float bal, string b_name,float inter,string IFSC, int code){ // Parameterized Constructor
accountNo=ac_num;
balance=bal;
bankName=b_name;
interest=inter;
this->IFSC=IFSC;
b_code= code;
} // End Parameterized Constructor


void withdraw(float draw_money){ // WithDrawl Function
if (balance<draw_money){
cout << "\n\a \"Insufficient balance.......\"";
}
else{
balance-=draw_money;
}
} // End of WithDrawl Function

void deposit(float add_money){ // Deposit Function
balance+=add_money;
}
// And other some self explanatory Function of Account Class
float getBalance(){
return balance;
}
int getAccountNo(){
return accountNo;
}
string getBankName(){
return bankName;
}
int getinterest() {
return interest;
}
string getIFSC(){
return IFSC;
}
int getBranchCode(){
return b_code;
}
}; // End of Account Class

class customer{
private:
string name;
string address;
public:
  void setName(string X)
  {
    name=X;
  }
string getName()
{
  return name;
}
account ac; // public because it is represented as public in class diagram
customer(string n, string a, account acc){ // Parameterized Constructor
name= n;
address=a;
ac=acc;
} // End of Parameterized Constructor

void display(){
cout << "\n Customer Name: "<<name;
cout << "\n Customer Address: "<<address;
cout << "\n Bank Name: "<<ac.getBankName();
cout<< "\n interest :"<<ac.getinterest();
cout<<"\n IFSC :"<<ac.getIFSC();
cout << "\n Branch Code: "<<ac.getBranchCode();
cout << "\n Current Balance: "<<ac.getBalance();
cout << "\n Account No. "<<ac.getAccountNo();
}
}; // End of Customer Class

main(){
cout << "..........Displaying Customer Account Information........."<<endl<<endl;
account myaccount(224757,23000,"PNB",12.5,"PUNB2345",4946); // Creating an account Obj
customer DD("XYZ","Programming island", myaccount); // Creating an customer Obj
DD.display();

float dep, draw;
cout << "\n\n Please Enter a value for Deposit: ";
cin >> dep;
DD.ac.deposit(dep);
cout << "\n\n Current Balance after Depositing...";
DD.display();

cout << "\n\n Please Enter a value for Withdrawal: ";
cin >> draw;
DD.ac.withdraw(draw);
cout << "\n\n Current Balance after withdrawing...";
DD.display();

cout << endl<<endl;
system("pause");
}
