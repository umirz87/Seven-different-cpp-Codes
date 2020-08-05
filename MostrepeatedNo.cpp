#include<iostream>
using namespace std;
int main()
{
	int n,check=0,count=0,a=0,b=0,res=0;
	cout<<"Enter a No"<<endl;
	cin>>n;
	check=n;
	if(check>=0)
	{
		while(n>=0)
		{
    cout<<"Enter a No"<<endl;
	cin>>n;
	if(check==n)
	{
		count++;
		a=count;
	}
	else
		count=0;
	if(a>b)
	{
		res=n;
	}
	b=a;
	check=n;
		}
   cout<<"The Mode of Input="<<res<<endl;
	}
	else
		cout<<"Enter a +ve No"<<endl;
system("pause");
return 0;
}