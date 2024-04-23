#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double m,r,y,year=0;
	cin>>r>>m>>y;
	while(m<=y){
		year+=1;
		m*=1+r/100;
	}
	cout<<year<<endl;
	return 0;
}