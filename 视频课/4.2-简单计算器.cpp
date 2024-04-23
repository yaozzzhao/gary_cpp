#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	double x,y;
	cout<<"first addend:";
	cin>>x;
	cout<<"second addend:";
	cin>>y;
	cout<<x<<"+"<<y<<"="<<x+y<<endl;
	system("pause");
	cout<<"minuend:";
	cin>>x;
	cout<<"subtrahend:";
	cin>>y;
	cout<<x<<"-"<<y<<"="<<x-y<<endl;
	system("pause");
	cout<<"first factor:";
	cin>>x;
	cout<<"second factor:";
	cin>>y;
	cout<<x<<"*"<<y<<"="<<x*y<<endl;
	system("pause");
	cout<<"dividend:";
	cin>>x;
	cout<<"divisor:";
	cin>>y;
	cout<<x<<"/"<<y<<"="<<x/y<<endl;
	system("pause");
	return 0;
}