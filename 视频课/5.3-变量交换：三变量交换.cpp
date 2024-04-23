#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
	t=c;
	c=b;
	b=a;
	a=t;
	cout<<a<<" "<<b<<" "<<c<<endl;
	system("pause");
	return 0;
}