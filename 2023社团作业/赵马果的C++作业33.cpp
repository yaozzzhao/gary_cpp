#include<iostream>
using namespace std;
int main()
{
	#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<" ";
		}
		for(int k=1;k<=i*2+1;k++){
			cout<<"%";
		}
		cout<<endl;
	}	
	return 0;
}