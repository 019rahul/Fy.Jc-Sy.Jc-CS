#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c, discrimt,x1,x2,temp;
	cout<<"\n enter a,b,c :";
	cin>>b>>c;
	cout<<"\n a="<<a<<" b="<<b<<" c="<<c;
	
	discrimt=b*b-4.0*a*c;
	if(discrimt<0)
	{
		cout<<"\n complex conjugate roots\n";
	}
	else
	{
		if(discrimt==0)
		{
			x1=-b/(2.0*a);
			cout<<"Repeted roots\n";
			cout<<"\n Reat roots= "<<x1;
		}
		{
			temp=sqrt(discrimt);
			x1=(-b+temp)/(2.0*a);
			x2=(-b-temp)/(2.0*a);
			cout<<"\n Real roots\n";
			cout<<"Real root-1= "<<x1;
			cout<<"\n Real root-2=  "<<x2;
		}
	}
	
}