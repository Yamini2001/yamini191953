#include<iostream>
#include<cmath>
using namespace std;
float power(float,float);
float power(float,int=5);
void display(float,float);
int main()
{
	float m,n;
	cout<<"Enter the value of m and n"<<endl;
	cin>>m>>n;
	display(m,n);
	return 0;
}
float power(float a,float b){
	float r;
	r=pow(a,b);
	return r;
}
float power(float x,int y){
	float r;
	r=pow(x,y);
	return r;
}
void display(float p,float q){
	cout<<"Result is"<<p<<"^"<<q<<"="<<power(p,q)<<endl;
	cout<<"Result is"<<p<<"^"<<5<<"="<<power(p)<<endl;
}
