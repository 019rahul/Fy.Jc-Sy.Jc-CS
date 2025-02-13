#include<iostream>
using namespace std;
int main()
{
	int d1,d2,d3,d4,d5,sum,number,n;
	cin>>number;
	cout<<"\n number = "<<number;
	n=number;
	d1=n%10;
	n=n/10;
	d2=n%10;
	n=n/10;
	d3=n%10;
	n=n/10;
	d4=n%10;
	n=n/10;
	d5=n;
	sum=d1+d2+d3+d4+d5;
	cout<<"\n sum = "<<sum;
}