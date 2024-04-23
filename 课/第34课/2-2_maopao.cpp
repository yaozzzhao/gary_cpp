#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	const int N = 1000;
	int n, a[N];
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	for(int i = n - 1; i >= 0; i --){
		for(int j = 0; j < i; j ++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
			}
		}
	}
	for(int i = 0; i < n; i ++){
		cout << a[i] << " ";
	}
	return 0;
}