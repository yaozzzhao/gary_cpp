#include<iostream>
using namespace std;
int main(){
	const int N = 1000;
	int n, a[N];
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i ++){
		int j;
		for(j = i - 1; j >= 0; j --){
			if(a[j] <= a[i]) break;
		}
		if(j != i - 1){
			int t = a[i];
			for(int k = i - 1; k > j; k --){
				a[k + 1] = a[k];
			}
			a[j + 1] = t;
		}
	}
	for(int i = 0; i < n; i ++){
		cout << a[i] << " ";
	}
	return 0;
}