#include <iostream>
using namespace std;
int main()
{
	int basic;
	float da,hra,gross;
	cin>>basic;
	da=0.4*basic;
	hra=0.2*basic;
	gross=basic+da+hra;
	cout<<"\n da = "<<da<<" hra ="<<hra<<" gross="<<gross;
	
}