#include<iostream>
#include<math.h>
using namespace std;
float power(float num,int power )
{
	return pow(num,power);
}
float power(float num)
{
	int power=2;
	return pow(num,power);
}
void display(float data){
	cout<<"result is:"<<data<<endl;
}
int main()
{
	int pow;
	float num,result1,result2;
	cout<<"Enter number value=";
	cin>>num;
	cout<<"Enter power value=";
	cin>>pow;
	cout<<"With default Power"<<endl;
	result1=power(num);
	display(result1);
	cout<<"With Entered Power"<<endl;
	result2=power(num,pow);
	display(result2);
	return 0;
}
