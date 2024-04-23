#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n1,n2,fu,da,player_da,iq=100;
	cout<<"-----IQ-----"<<endl;
	for(int i=1;i<=10;i++){
		cout<<"IQ:"<<iq<<endl;
		srand(time(0));
		n1=rand()%11+0;
		n2=rand()%11+0;
		fu=rand()%4+0;
		if(fu==0){
			cout<<n1<<"+"<<n2<<"=";
			da=n1+n2;
		}
		else if(fu==1){
			cout<<n1<<"-"<<n2<<"=";
			da=n1-n2;
		}
		else if(fu==2){
			cout<<n1<<"*"<<n2<<"=";
			da=n1*n2;
		}
		else{
			cout<<n1<<"/"<<n2<<"=";
			da=n1/n2;
		}
		cin>>player_da;
		if(player_da==da){
			cout<<"Yes"<<endl;
			iq+=15;
		}
		else{
			cout<<"No"<<endl;
			iq-=10;
		}
	}
	cout<<endl<<"IQ:"<<iq<<endl;
	return 0;
}
