#include <iostream>
#include <algorithm>
using namespace std;
void xuanze(int a[], int n){
	for(int i = 0; i < n; i++){
		int mini = i;
		for(int j = i + 1; j < n; j++){
			if(a[mini] > a[j]){
				mini = j;
			}
		}
		swap(a[i], a[mini]);
	}
	return ;
}
int main(){
	const int N = 1000;
	int n, a[N];
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	xuanze(a, n);
	for(int i = 0; i < n; i ++){
		cout << a[i] << " ";
	}
	return 0;
}
/*
8
49 38 65 97 76 13 27 49
*/