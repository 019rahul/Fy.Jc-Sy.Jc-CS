#include <iostream>
using namespace std;
int main()
{
	int s_no,code;
	float amt,discount,net_amt;
	cin>>s_no>>code>>amt;
	switch(code)
	{
		case 1:
			if (amt >=50000)
			discount=0.1*amt;
			break;
			
			case 2:
				if (amt >= 20000)
				discount=0.1*amt;
				break;
				
				case 3:
					if (amt >= 10000)
					discount=0.1*amt;
					break;
					
					default:
						discount=0.0;
						break;
						
				
	}
	net_amt=amt-discount;
	
	cout<<"\n s-no="<<s_no<<" code="<<code<<" discount="
	<<discount<<" net= "<<net_amt;
}