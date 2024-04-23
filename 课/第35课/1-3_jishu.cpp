#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	const int N = 1000 + 1;
	int n, a[N] = {0}, sum = 0;
	bool flag = 1;
	cin >> n;
	for(int i = 0; i < n; i ++){
		int t;
		cin >> t;
		a[t] ++;
	}
	for(int i = 1; i <= n; i ++){
		for(int j = 0; j < a[i]; j ++){
			cout << i << " ";
		}
	}
	return 0;
}