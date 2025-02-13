#include <iostream>
using namespace std;
int main()
{
	int tender_id,max_id,n,i;
	float tender_amt,max_tender=0;
	
	cout<<"\n enter no of tenders \n";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		cin>>tender_id>>tender_amt;
		if(tender_amt>max_tender)
		{
			max_tender=tender_amt;
			max_id=tender_id;
			
		
		}
	}
	cout<<"\n maximum tender-id= "<<max_id;
	cout<<"\n maximum amount="<<max_tender;
}