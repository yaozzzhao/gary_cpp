#include <iostream>
using namespace std;
long long Qpow(long long a, long long b){
	long long ans = 1;
	while (b){
		if (b & 1) 
			ans *= a;
		if (ans > 1e9 || a > 1e9) return -1;
		b >>= 1; a *= a;
	}
	return ans;
}
int main(){
	long long a, b;
	cin >> a >> b;
	cout << Qpow(a, b) << endl;
	return 0;
}