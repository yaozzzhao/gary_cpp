#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double d=b*b-4*a*c;
	double x1=(-b+sqrt(d))/(2*a);
	double x2=(-b-sqrt(d))/(2*a);
	cout<<"x1="<<x1<<endl;
	cout<<"x2="<<x2<<endl;
	system("pause");
	return 0;
}