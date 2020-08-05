#include<iostream>
using namespace std;
int main()
{
	int n,check;
bool isorder=true;
cout<<"Entre a No"<<endl;
cin>>n;
check=n;
if(check>=0)
{
while(n>=0)
{
cout<<"Entre a No"<<endl;
cin>>n;
if(n>=check && isorder==true)
isorder=true;
else
if(n>0)
{
isorder=false;
}
check=n;
}
if(isorder)
cout<<"Numbers in order"<<endl;
else
cout<<"Numbers not in order"<<endl;
}
else
	cout<<"Enter a +ve No"<<endl;

system("pause");
return 0;
}