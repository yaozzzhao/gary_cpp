#include <iostream>
#include <cstring>
using namespace std;
const int N = 1e2 + 5;
int n, m, dp[N][N];
int main(){
	cin >> n >> m;
	memset(dp, 0x3f, sizeof dp);
	for (int i = 1; i <= n; i ++) dp[i][i] = 0;
	for (int i = 1; i <= m; i ++){
		int x, y, z;
		cin >> x >> y >> z;
		dp[x][y] = min(dp[x][y], z);
		dp[y][x] = min(dp[y][x], z);
	}
	for (int k = 1; k <= n; k ++)
		for (int i = 1; i <= n; i ++)
			for (int j = 1; j <= n; j ++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= n; j ++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	return 0;
}
