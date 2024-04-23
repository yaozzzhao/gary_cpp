#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[100], b[100];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		int maxn = a[0];
		int maxj = -1;
		for(int j = 0; j < n - i; j++){
			if(maxn < a[j]){
				maxn = a[j];
				maxj = j;
			}
		}
		b[i] = maxn;
		for(int j = maxj; j < n - 1; j++){
			a[j] = a[j + 1];
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	return 0;
}