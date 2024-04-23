#include<iostream>
using namespace std;
int main() 
{
	double m,s1,s2;
	cin>>m;
	s1=m/1.2;
	s2=m/3.0+50;
	if(s1>s2){
		cout<<"Bike"<<endl;
	}
	else if(s2>s1){
		cout<<"Walk"<<endl;
	}
	else{
		cout<<"All"<<endl;
	}
	return 0;
}