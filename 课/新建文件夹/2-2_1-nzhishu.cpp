#include <iostream>
using namespace std;
const int N = 1e5 + 100;
bool st[N];
int primes[N], cnt = 0;
void get_primes(int n){
	for (int i = 2; i <= n; i ++){
		if (st[i] == true) continue;
		primes[cnt ++] = i;
		for (int j = i * 2; j <= n; j += i){
			st[j] = true;
		}
	}
}
int main(){
	int n;
	cin >> n;
	get_primes(n);
	cout << cnt << "\n";
	for (int i = 0; i < cnt; i ++){
		cout << primes[i] << " ";
	}
	cout << "\n";
	return 0;
}