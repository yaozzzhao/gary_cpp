#include<iostream>
using namespace std;
unsigned long long mi_yun_suan(int x, int n){
	if(n == 1) return x;
	else return x * mi_yun_suan(x, n - 1);
}
int main(){
	int x, n;
	cin >> x >> n;
	cout << mi_yun_suan(x, n) << endl;
	return 0;
}