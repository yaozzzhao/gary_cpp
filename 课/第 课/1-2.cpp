#include<iostream>
using namespace std;
void Swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	return ;
}
int main(){
	int a, b;
	cin >> a >> b;
	Swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}