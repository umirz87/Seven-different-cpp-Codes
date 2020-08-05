#include<iostream>
using namespace std;
//this function give group of 3 no that is greater in input consectively 
int main()
{
	int a=0,b=0,c=0,sum=0,max=0,n1=0,n2=0,n3=0;
cout<<"enter 1st no "<<endl;
cin>>a;
cout<<"enter 2nd no "<<endl;
cin>>b;
cout<<"enter 3rd no "<<endl;
cin>>c;
max=a+b+c;
while(c>=0)
{
sum=a+b+c;
if(sum>=max)
{
n1=a;
n2=b;
n3=c;

}
a=b;
b=c;
cout<<"Enter next no"<<endl;
cin>>c;
}
cout<<"maximum triple is"<<endl;
cout<<n1<<","<<n2<<","<<n3<<endl;
system("pause");
return 0;
}