#include<iostream>
using namespace std;
int main()
{
	float n,r,p=1,f1=1,q=1,f2=1,s=1,f3=1,res=1;
cout<<"Enter value of 'n' of this formula n!/(n-r)!r!"<<endl;
cin>>n;
cout<<"Enter value of 'r' of this formula n!/(n-r)!r!"<<endl;
cin>>r;
if(n==0)
{
cout<<"value of n should be greater than 0"<<endl;
}
else
if(r==0)
{
cout<<"Result"<<res<<endl;
}
else
{
while(p<=n)
{
f1=f1*p;
p++;
}
while(q<=r)
{
f2=f2*q;
q++;
}
while(s<=(n-r))
{
f3=f3*s;
s++;
}
res=f1/(f2*f3);
cout<<"result="<<res<<endl;
}
system("pause");
return 0;
}