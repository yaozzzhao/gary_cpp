#include <iostream>
#include <algorithm>
using namespace std;
const int N = 110, M = 1010;
int n, m, dp[N][M], v[N], w[N];
int main(){
	cin >> m >> n;
	for (int i = 1; i <= n; i ++){
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; i ++){
		for (int j = 0; j <= m; j ++){
			dp[i][j] = max(dp[i - 1][j], ((j >= v[i]) ? (dp[i - 1][j - v[i]] + w[i]) : 0));
		}
	}
	cout << dp[n][m];
	return 0;
}