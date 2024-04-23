#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char mima[100]={'0'};
	char a;
	cout<<"Please input a password."<<"No space please. "<<endl;
	cin>>mima;
	for(int i=1;i<strlen(mima)-1;i++){
		for(int j=i+1;j<strlen(mima);j++){
			a=mima[i];
			mima[i]=mima[j];
			mima[j]=a;
		}
	}
	cout<<"Your new password is "<<mima<<endl;
	return 0;
}