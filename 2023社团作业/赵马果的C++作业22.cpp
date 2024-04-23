#include<iostream>
using namespace std;
int main() 
{
	int a;
	int i=1;
	cin>>a;
	if(a<3){
		cout<<0<<endl;
	}
	else{
		while(i<=a){
			if(i%3==0){
				cout<<i<<" ";
			}
		i=i+1;
		}
	}
	return 0;
}