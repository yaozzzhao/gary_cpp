#include<iostream>
using namespace std;
int main() 
{
	double a;
	cin>>a;
	if(a<5){
		cout<<a*3<<endl;
	}
	else if(a>5){
		cout<<5*3+(a-5)*3*0.8<<endl;
	}
	return 0;
}