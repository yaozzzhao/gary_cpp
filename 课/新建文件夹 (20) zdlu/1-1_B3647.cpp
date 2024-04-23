#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
const int N = 1e2 + 5;
int n, m, dp[N][N], t[i];
int main(){
	cin >> S >> T >> A >> B;
	memset(dp, 0x3f, sizeof dp);
	for (int i = 1; i <= n; i ++) dp[i][i] = 0;
	for (int i = 1; i <= ; i ++){
		int x1, x2, x3, y1, y2, y3, z12, z13, z23;
		cin >>
		z12 = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
		z13 = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
		z23 = sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2));
		
		dp[x][y] = min(dp[x][y], z);
		dp[y][x] = min(dp[y][x], z);
	}
	for (int k = 1; k <= n; k ++)
		for (int i = 1; i <= n; i ++)
			for (int j = 1; j <= n; j ++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
	return 0;
}
