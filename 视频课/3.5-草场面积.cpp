#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	double up=7.25;
	double down=12.5;
	double h=2*150/up;
	double s=(up+down)*h/2;
	cout<<"Trapezoid area="<<s<<endl;
	system("pause");
	return 0;
}