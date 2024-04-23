#include<bits/stdc++.h>
using namespace std;
int zdgys(int n, int m){
	int a = 1, b = 0;
	while(b != 1){
		b = 1;
		for(int i = 2; i <= m; i++){
			if(n % i == 0 && m % i == 0){
				b *= i;
				n /= i;
				m /= i;
			}
		}
		a *= b;
	}
	return a;
}
int main(){
	int n, m, a = 1;
	cin >> n >> m;
	if(n < m) swap(n, m);
	a = zdgys(n, m);
	cout << a << endl;
	return 0;
}