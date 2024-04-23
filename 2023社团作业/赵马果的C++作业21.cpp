#include<iostream>
using namespace std;
int main() 
{
	int money,a,b,c;
	cin>>money;
	a=money/4;
	if(money%4==0){
		b=0;c=0;
	}
	else if(money%4==1){
		a=a-1;b=1;c=0;
	}
	else if(money%4==2){
		a=a-1;b=0;c=1;
	}
	else{
		a=a-2;b=1;c=1;
	}
	cout<<"4 yuan:"<<a<<" 5 yuan:"<<b<<" 6 yuan:"<<c<<endl;
	return 0;
}