#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<a<<" "<<b<<endl;
	system("pause");
	return 0;
}