#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float c,f;
	cin>>f;
	c=5*(f-32)/9;
	cout<<fixed<<setprecision(5)<<c<<endl;
	return 0;
}