#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int magic;
	int guess;
	
	magic=rand();
	
	cout<<"\n Guess the magic number:";
	cin>>guess;
	
	if(guess==magic)
	cout<<"\n ** Right **";
	else cout<<"\n ** Wrong **";
}