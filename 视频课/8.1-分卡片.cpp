#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b,c,d=0;
	cin>>a>>b>>c;
	d+=(a%3);
	a/=3;
	b+=a;
	c+=a;
	d+=(b%3);
	b/=3;
	a+=b;
	c+=b;
	d+=(c%3);
	c/=3;
	a+=c;
	b+=c;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	system("pause");
	return 0;
}