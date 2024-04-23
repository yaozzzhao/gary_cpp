#include <iostream>
using namespace std;
void divide(unsigned long long x){
	for (unsigned long long i = 2; i <= x / i; i ++){
		if (x % i == 0){
			int s = 0;
			while (x % i == 0){
				s ++;
				x /= i;
			}
			cout << i << "^" << s << " ";
		}
	}
	if (x > 1) cout << x << "^" << 1 << endl;
	cout << "\n";
}
int main(){
	int t;
	cin >> t;
	while (t --){
		unsigned long long x;
		cin >> x;
		divide(x);
	}
	return 0;
}