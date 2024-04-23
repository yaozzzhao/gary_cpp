#include<iostream>
using namespace std;
int main()
{
	int a,i;
	bool flag=1;
	cin>>a;
	for(i=2;i<a;i++){
		if(a%i==0){
			cout<<"N"<<endl;
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<"Y"<<endl;
	}
	return 0;
}