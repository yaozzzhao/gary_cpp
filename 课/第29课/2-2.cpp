#include<iostream>
using namespace std;
int main(){
	int a[10001];
	int n, x;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	cin >> x;
	for(int i = 0 ; i < n; i++){
		if(x == a[i]){
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}