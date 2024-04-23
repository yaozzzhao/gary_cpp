#include<iostream>
using namespace std;
unsigned long long shulie(int n){
	if(n == 1) return 1;
	else if(n == 2) return 2;
	return 2 * shulie(n - 1) + shulie(n - 2);
}
int main(){
	int n, a[100];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << shulie(a[i]) % 32767 << endl;
	}
	return 0;
}