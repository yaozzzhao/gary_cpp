#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	const int N = 1000;
	int n, a[N];
	bool flag = 1;
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	while(flag){
		flag = 0;
		for(int i = 0; i < n - 1; i++){
			if(a[i] > a[i + 1]){
				swap(a[i], a[i + 1]);
				flag = 1;
			}
		}
	}
	for(int i = 0; i < n; i ++){
		cout << a[i] << " ";
	}
	return 0;
}