#include<iostream>
using namespace std;
void print(int a[], int n){
	for(int i = 0; i < n ; i++){
		cout << a[i] << " ";
	}
	return ;
}
int main(){
	int n, a[100];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	print(a, n);
	return 0;
}