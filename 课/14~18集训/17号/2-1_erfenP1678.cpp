#include <iostream>
#include <algorithm>
using namespace std;
long long n, m, ans = 0, a[2000001], tmp;
int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i ++){
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < m; i ++){
		cin >> tmp;
		long long pos = lower_bound(a, a + n, tmp) - a;
		long long t = abs(a[pos] - tmp);
		if (pos - 1 > 0 && abs(tmp - a[pos - 1]) < t) t = abs(tmp - a[pos - 1]);
		ans += t;
	}
	cout << ans << endl;
	return 0;
} 