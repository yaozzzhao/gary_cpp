#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int h,a,b;
	double s;
	cin>>a>>b>>h;
	s=(a+b)*h/2.0;
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}