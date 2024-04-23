#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7==0){
			a+=1;
			continue;
		}
		b=i;
		while(b!=0){
			if(b%10==7){
				a+=1;
				break;
			}
			b/=10;
		}
	}
	cout<<n-a<<endl;
	return 0;
}