#include <iostream>
using namespace std;
const int maxn = 1e5 + 5;
int prime[maxn], tot, v[maxn];
int main(){
	for (int i = 2; i <= 1e5; i ++){
		if (v[i] == 0){
			prime[++ tot] = i;
			v[i] = i;
		}
		for (int j = 1; j <= tot; j ++){
			if (i * prime[j] > 1e5 || prime[j] > v[i]) break;
			v[i * prime[j]] = prime[j];
		}
	}
	for (int i = 1; i <= tot; i ++){
		cout << prime[i] << " ";
	}
	return 0;
}
