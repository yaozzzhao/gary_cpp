#include<iostream>
using namespace std;
int n, a[100];
void change(){
	n = 5;
}
int main(){
	n = 10;
	change();
	cout << n << endl;
	return 0;
}