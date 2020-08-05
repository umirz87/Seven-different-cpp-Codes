#include<iostream>
using namespace std;
int main()
{
	int n,check,n1=0,n2=0,n3=0;
	bool issequence=false;
	cout<<"Enter a NO"<<endl;
	cin>>n;
	check=n;
	if(check>=0)
	{
		while(n>=0)
		{
			if(n==1)
			{
     cout<<"Enter a NO"<<endl;
	cin>>n1;
	if(n1==0)
	{
		cout<<"Enter a NO"<<endl;
	cin>>n2;
	}
	if(n2==7)
	{
		cout<<"Enter a NO"<<endl;
	cin>>n3;
	}
	if(n3==2)
	{
		issequence=true;
	}
			}
			cout<<"Enter a NO"<<endl;
	cin>>n;
		}
		if(issequence)
		{
			cout<<"Sequence Exist"<<endl;
		
		}
		else
			cout<<"Sequence does not exist"<<endl;
	}
	else
		cout<<"Enter a +ve NO"<<endl;
system("pause");
return 0;
}