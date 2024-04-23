#include <iostream>
using namespace std;
const int N = 1e5 + 5;
long long a[N], n, x, ans = 0;
int main(){
	cin >> n >> x;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	if (a[1] > x){
		ans += a[1] - x;
		a[1] = x; 
	}
	for (int i = 2; i <= n; i ++){
		if (a[i - 1] + a[i] > x){
			long long t = a[i - 1] + a[i] - x;
			a[i] -= t;
			ans += t;
		}
	}
	cout << ans << endl;
	return 0;
}