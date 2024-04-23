#include <iostream>
using namespace std;
bool is_prime(int x){
	// 1 if (x <= 1) return 0;
	if (x <= 1 || (x != 2 && x % 2 == 0)) return 0;
	// 1 for (int i = 2; i < x; i ++)
	// 2 for (int i = 3; i < x; i += 2)
	for (int i = 3; i <= x / i; i += 2){
		if (x % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while (t --){
		int x;
		cin >> x;
		if (is_prime(x)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}