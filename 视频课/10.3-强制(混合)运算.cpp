#include<iostream>
using namespace std;
int main()
{
	int b=10;
	double a=2.5,c=4.7;
	cout<<a+(int)(b/3*(int)(a+c)/2.0)%4;
	return 0;
}