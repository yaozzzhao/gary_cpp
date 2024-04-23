#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setfill('0')<<setw(3)<<28<<endl;
	system("pause");
	cout<<fixed<<setprecision(2)<<3.14159<<endl;
	cout<<fixed<<setprecision(7)<<3.14159<<endl;
	system("pause");
	return 0;
}