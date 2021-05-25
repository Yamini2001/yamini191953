#include<iostream>
using namespace std;
class A
{
protected:
    int x;
public:
    void get_x();
};
class B
{
protected:
    int y;
public:
    void get_y();
};
class C:public A,public B
{
    int sum;
public:
    void add();
    void display();
};
void A::get_x()
{
    cout<<"Enter Value of x: ";
    cin>> x;
}
void B::get_y()
{
    cout<<"Enter Value of y: ";
    cin>>y;
}
void C::add()
{
    sum=x+y;
}
void C::display()
{
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
    cout<<"Sum   :"<<sum<<endl;
}
int main()
{
    C num;
    num.get_x();
    num.get_y();
    num.add();
    num.display();
    return 0;
}
