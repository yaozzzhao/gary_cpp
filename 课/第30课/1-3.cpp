#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int *p1 = NULL;
	int *p2 = NULL;
	p1 = &a;
	p2 = &a;
	*p1 = 5;
	cout << *p2 << endl;
	return 0;
}