#include<iostream>
using namespace std;
int main()
{
	char c1,c2;
	cin>>c1>>c2;
	c1=c1-'a'+'A';
	c2=c2-'A'+'a';
	cout<<c1<<" "<<c2<<endl;
	return 0;
}