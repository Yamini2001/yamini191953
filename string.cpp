#include<iostream>
using namespace std;
class sstring{
private:
    char* Name;
public:
    void setName(char* Name)
    {
        this->Name=Name;
    }
    char* getName()
    {
        return Name;
    }

};
void display(char *);
int main()
{
    sstring s1;
    s1.setName("Yamini Khurana");
    cout<<s1.getName();
    char str1[100],str2[100],str3[100];
    int i=0,j=0;
    cout<<"\nEnter a string:";
    gets(str1);
    cout<<"You entered:"<<str1<<endl;
    cout<<"\nEnter another string:\n";
    gets(str2);
    cout<<"You entered :"<<str2<<endl;
    display(str1);
    display(str2);
    while(str1[i]!=0)
    {
        str3[j]=str1[i];
        j++;
        i++;
    }
    i=0;
    while(str2[i]!=0)
    {
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]=0;
    cout<<"The concatenated string is:"<<str3<<endl;
    char flag;
    if(i!=j)
    {
        flag=0;
    }
    else{

       for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
       {
          char flag;
          if(str1[i]==str2[j])
          {
            flag=0;
           }
       }
    }
    if(flag==0)
    {
        cout<<"Both strings are not equal\n"<<endl;
    }
    else{
        cout<<"Both strings are equal\n"<<endl;
    }
    return 0;
}
void display(char s[])
{
    cout<<"Entered char array is:"<<s<<endl;
}
