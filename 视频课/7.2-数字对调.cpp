#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int m,a,b,c;
	cin>>m;
	a=m/100;
	b=m/10%10;
	c=m%10;
	cout<<c*100+b*10+a<<endl;
	system("pause");
	return 0;
}