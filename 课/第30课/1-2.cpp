#include<iostream>
using namespace std;
struct node {
	int a, b;
	void c(){
		cout << "jinitaimei" << endl;
		return ;
	}
}d = {1, 2};
int main(){
	d.c();
	return 0;
}