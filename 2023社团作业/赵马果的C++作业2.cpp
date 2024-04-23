#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Please input a number:";
	cin>>a;
	cout<<"The sum of the digits is:"<<a/100+a/10%10+a%10<<endl;
	return 0;
}