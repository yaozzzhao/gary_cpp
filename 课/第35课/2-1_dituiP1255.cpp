#include<iostream>
#include<algorithm>
using namespace std;
int f(int n){
	if(n == 0 || n == 1) return 1;
	return f(n - 1) + f(n - 2); 
}
int main(){
	int n;
	cin >> n;
	cout << f(n - 1) + f(n - 2) << endl;
	return 0;
}