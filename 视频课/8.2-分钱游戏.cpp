#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b,c=8;
	a/=2;
	b/=2;
	c=c+a+b;
	a/=2;
	c/=2;
	b=b+a+c;
	b/=2;
	c/=2;
	a=a+b+c;
	cout<<a<<" "<<b<<" "<<c<<endl;
	system("pause");
	return 0;
}