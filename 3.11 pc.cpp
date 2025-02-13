#include<iostream>
using namespace std;
int main()
{
	int units,custnum;
	float charges;
	cin>>custnum>>units;
	cout<<"\n customer number="<<custnum<<" Units="<<units;
	if(units<=30)
	charges=0.75*units;
	else if (units<=100)
	charges=0.75*30+2.50*(units-30);
	
	else if(units<=300)
	charges=0.75*30+2.50*70+3.00*(units-100);
	
	else charges=0.75*30+2.50*70+3.00*200+4.6*(units-300);
	cout<<"\n charges=Rs."<<charges;
}