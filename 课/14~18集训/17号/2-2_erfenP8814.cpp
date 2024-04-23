#include <iostream>
#define ll long long
using namespace std;
ll n, d, e, m;
void erfen(){
	ll l = 1, r = m / 2;
	while (l < r){
		ll mid = (l + r) >> 1;
		if (mid * (m - mid) >= n) r = mid;
		else l = mid + 1;
	}
	if (l * (m - l) == n) cout << l << " " << m - l << '\n';
	else cout << "NO\n";
}
int main(){
	int T;
	cin >> T;
	while (T --){
		cin >> n >> d >> e;
		m = n - e * d + 2;
		erfen();
	}
	return 0;
}