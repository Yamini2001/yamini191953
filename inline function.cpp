#include<iostream>
#include<cmath>
using namespace std;
void display(float, float);
inline float power(float a,float b){
          return pow(a,b);
          }
int main()
{
   float m,n;
   cout<<"Enter the value of m and n"<<endl;
   cin>>m>>n;
   display(m,n);
   return 0;
}
void display(float p,float q){
          cout<<"Result is"<<p<<"^"<<q<<"="<<power(p,q)<<endl;
}
