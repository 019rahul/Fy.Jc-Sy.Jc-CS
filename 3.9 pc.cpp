#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n enter three integer numbers: ";
	cin>>a>>b>>c;
	cout<<"\na="<<a<<" b="<<b<<" c="<<c;
	
	if (a>b)
	{
		if(a>c)
		cout<<"\na="<<a<<" is largest\n";
		else
		cout<<"\nc="<<c<<" is largest\n";
		
	}
	else
	{
		if(b>c)
		cout<<"\nb="<<b<<" is largest\n";
		else
		cout<<"\nc="<<c<<" is largest\n";
		
		
	}
}
