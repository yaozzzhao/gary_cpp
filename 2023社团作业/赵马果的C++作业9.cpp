#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r,v;
	cin>>r;
	v=4/3.0*3.14*r*r*r;
	cout<<fixed<<setprecision(2)<<v<<endl;
	return 0;
}