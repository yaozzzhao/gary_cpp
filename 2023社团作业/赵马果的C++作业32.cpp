#include<iostream>
using namespace std;
int main()
{
	int j,n,i=1;
	cin>>n;
	for(j=1;j<=n;j++){
		for(int k=1;k<=j;k++){
			cout<<i;
			if(i==9){
				i=-1;
			}
			i++;
		}
		cout<<endl;
	}
	return 0;
}