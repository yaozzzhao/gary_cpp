#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b;
	c=a*a+b*b;
	c=c-(a+b)*a/2;
	c=c-b*b/2;
	cout<<fixed<<setprecision(1)<<c<<endl;
	return 0;
}