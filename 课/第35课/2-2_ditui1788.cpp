#include<iostream>
#include<algorithm>
using namespace std;
int a[1000100] = {0, 1, 2}, mod = 32767;
int main(){
	for(int i = 3; i < 1000000; i ++){
		a[i] = (a[i - 1] * 2 % mod + a[i - 2]) % mod;
	}
	int n;
	cin >> n;
	while(n --){
		int k;
		cin >> k;
		cout << a[k] << endl;
	}
	return 0;
}