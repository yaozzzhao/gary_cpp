#include<iostream>
using namespace std;
int main()
{
	int a,max=-1,max2=-1,n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a;
		if(a>max){
			max2=max;
			max=a;
		}
		else if(a>max2){
			max2=a;
		}
	}
	cout<<max2<<endl;
	return 0;
}