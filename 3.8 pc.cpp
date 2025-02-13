#include<iostream>
#include<math.h>
#define G                  9.8
#define PI              3.14159265
#define RADIANS_PER_DEGREE  (PI/180)
using namespace std;
int main()
{
	float velocity,theta;
	cin>>velocity>>theta;
	/* convert degree into radians */
	theta *=RADIANS_PER_DEGREE;
	cout<<"\n distance="
	<<velocity*velocity*sin(2*theta)/G;
	cout<<"\n time= "<<2*velocity*sin(theta)/G;
	cout<<"\n height= "<<velocity*velocity*sin(theta)/G;
	
}



