#include<iostream>
using namespace std;
int main()
{
	char c1=127;
	short s1=32767,s2=-32768;
	unsigned u1=32767;
	cout<<c1+c1+c1<<endl;
	cout<<s1+c1<<endl;
	cout<<s1+u1<<endl;
	return 0;
}