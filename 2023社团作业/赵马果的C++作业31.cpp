#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,s=0,i;
	double x;
	cin>>x;
	for(i=1;i<=x;i++){
		cin>>a;
		s+=a;
	}
	cout<<fixed<<setprecision(2)<<s/x<<endl;
	return 0;
}