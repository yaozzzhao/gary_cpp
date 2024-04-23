#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	double b;
	cin>>a>>b;
	cout<<setw(5)<<a<<endl;
	cout<<setfill('0')<<setw(5)<<a<<endl;
	cout<<setprecision(3)<<b<<endl;
	cout<<fixed<<setprecision(3)<<b<<endl;
	system("pause");
	return 0;
}