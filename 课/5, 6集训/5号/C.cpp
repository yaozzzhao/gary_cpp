#include <iostream>
#include <algorithm>
using namespace std;
long long t, m, a[10005], b[10005], dp[10000005];
int main(){
	cin >> t >> m;
	for (int i = 0; i < m; i ++)
		cin >> a[i] >> b[i];
	for (int i = 0; i < m; i ++)
		for (int j = a[i]; j <= t; j ++)
			dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
	cout << dp[t] << endl;
	return 0;
}
