#include<iostream>
using namespace std;
int main()
{
	int n,count=0,check=0;
	float res;
	cout<<"'Enter No"<<endl;
	cin>>n;
	while(n>=0)
	{
	if(n>60)
	{
		check++;
	}
	count++;
	cout<<"Enter No"<<endl;
	cin>>n;
	}
	res=0;

	if(check!=0)
	res=count/check;
	if(res>=2)
		cout<<"Half below 60"<<endl;
	else if(check!=0)
		cout<<"Half not below 60"<<endl;
system("pause");
return 0;
}