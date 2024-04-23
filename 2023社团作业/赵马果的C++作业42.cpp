#include<bits/stdc++.h>
using namespace std;
long long Pow2(int n){
	long long a = 1;
	for(int i = 0; i < n; i++){
		a *= 2;
	}
	return a;
}
int main(){
	cout << Pow2(31) - 1 << endl;
	cout << Pow2(63) - 1 << endl;
	return 0;
}