#include<iostream>
#include<conio.h>
#include<ostream>
using namespace std;
class time{
    int hr,min,sec;
public:
    //default constructor
    time()
    {
        hr=0,min=0,sec=0;
    }
    //overloaded constructor
        Time(int h,int m,int s)
        {
            hr=h,min=m,sec=s;
        }
        //define the overloaded function
        friend ostream &operator<<(ostream &out,time &tm);
        void gettime();
        void settime();
        void display()
        {
            cout<<hr<<":"<<min<<":"<<sec;
        }
        time operator+(time);        //overloading '+' operator
};
time time::operator+(time t1)       //operator function
{
    time t;
    int a,b;
    a=sec+t1.sec;
    t.sec=a%60;
    b=(a/60)+min+t1.min;
    t.min=b%60;
    t.hr=(b/60)+hr+t1.hr;
    t.hr=t.hr%12;
    return t;
}
void time::gettime()
{
    cout<<"\nEnter hours";
    cin>>hr;
    cout<<"Enter minutes";
    cin>>min;
    cout<<"Enter seconds";
    cin>>sec;
}
void time::settime()
{
    cout<<"\nEnter the hours(0-11)";
    cin>>hr;
    cout<<"Enter the minute(0-50)";
    cin>>min;
    cout<<"Enter the second(0-59)";
    cin>>sec;
}
int main()
{
    time t1,t2,t3;
    cout<<"\nEnter 1st time details::\n";
    t1.gettime();
    cout<<"\nEnter 2nd time details::\n";
    t2.gettime();
    cout<<"\nEnter the first time";
    t1.settime();
    cout<<" \n Enter the second time";
    t2.settime();
    t3=t1+t2;          //adding of two time object using '+' operator
    cout<<"\n First Time";
    t1.display();
    cout<<"\n Second Time";
    t2.display();
    cout<<"\n Sum of times";
    t3.display();
    return 0;
}
