#include<iostream>
using namespace std;
int fbnq_shu_lie(int n){
	if(n == 1 || n == 2) return 1;
	return fbnq_shu_lie(n - 1) + fbnq_shu_lie(n - 2);
}
int main(){
	int fbnq[21], b[21];
	for(int i = 1; i < 21; i++){
		fbnq[i] = fbnq_shu_lie(i);
	}
	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		b[i] = fbnq[a];
	}
	for(int i = 0; i < n; i++){
		cout << b[i] << endl;
	}
	return 0;
}