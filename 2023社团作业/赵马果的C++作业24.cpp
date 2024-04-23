#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,k;
	cin>>k;
	while(k>2){
		a=a+b;
		b=b+a;
		k=k-2;
	}
	if(k%2==0){
		cout<<b<<endl;
	}
	else{
		cout<<a<<endl;
	}
	return 0;
}