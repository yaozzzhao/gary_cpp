#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void get_divisors(unsigned long long x){
	vector<unsigned long long> res;
	// 1 for (unsigned long long i = 1; i <= x; i ++)
	for (unsigned long long i = 1; i <= x / i; i ++){
		if (x % i == 0){
			// 1 cout << i << " ";
			res.push_back(i);
			if (i != x / i) res.push_back(x / i);
		}
	}
	sort(res.begin(), res.end());
	for (unsigned long long i : res){
		cout << i << " ";
	}
	cout << "\n";
}
int main(){
	int t;
	cin >> t;
	while (t --){
		unsigned long long x;
		cin >> x;
		get_divisors(x);
	}
	return 0;
}