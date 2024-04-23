#include <iostream>
#include <algorithm>
using namespace std;
long long n, c, ans = 0, a[2000001];
int main(){
	cin >> n >> c;
	for (int i = 0; i < n; i ++){
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i ++){
		int b = a[i] - c;
		ans += upper_bound(a, a + n, b) - lower_bound(a, a + n, b);
	}
	cout << ans << endl;
	return 0;
} 