#include<iostream>
using namespace std;
void Swap(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return ;
}
int main(){
	int a[100], b[100], n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	Swap(a, b, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	return 0;
}