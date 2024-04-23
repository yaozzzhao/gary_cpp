#include<iostream>
using namespace std;
int main()
{
	int time=8000;
	int h,min,s;
	h=time/(60*60);
	min=(time-h*60*60)/60;
	s=time-h*60*60-min*60;
	cout<<"8000s = "<<h<<"h "<<min<<"min "<<s<<"s"<<endl;
	return 0;
}