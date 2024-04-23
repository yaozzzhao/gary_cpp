#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	cout<<"x1,y1:";
	cin>>x1>>y1;
	cout<<"x2,y2:";
	cin>>x2>>y2;
	cout<<sqrt(pow(x1-x2,2)+pow(y1-y2,2))<<endl;
	system("pause");
	return 0;
}