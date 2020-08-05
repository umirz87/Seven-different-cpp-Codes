#include<iostream>
using namespace std;
int main()
{
	int x=0,g,fun;
bool isless=true;
cout<<"Enter the value"<<endl;
cin>>g;
while(isless)
{
fun=(3*x*x)-(5*x)+11;
if(fun>g)
isless=false;
else
x++;
}
cout<<"first value in f(x) is greater than entered value is ="<<x<<endl;
system("pause");
return 0;
}