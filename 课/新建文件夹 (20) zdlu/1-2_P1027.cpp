#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
const int N = 1e2 + 5;
int S, T, A, B, dp[N][N], t[N], x[N][5], y[N][5];
int main(){
	cin >> S >> T >> A >> B;
	memset(dp, 0x[i][3]f, sizeof dp);
	for (int i = 1; i <= S; i ++){
		int z12, z13, z23, z41, z42, z43;
		cin >> x[i][1] >> y[i][1] >> x[i][2] >> y[i][2] >> x[i][3] >> y[i][3] >> t[i];
		z12 = sqrt(pow(abs(x[i][1] - x[i][2]), 2) + pow(abs(y[i][1] - y[i][2]), 2));
		z13 = sqrt(pow(abs(x[i][1] - x[i][3]), 2) + pow(abs(y[i][1] - y[i][3]), 2));
		z23 = sqrt(pow(abs(x[i][2] - x[i][3]), 2) + pow(abs(y[i][2] - y[i][3]), 2));
		if (z12 > z13 && z12 > z23) {
			swap(x[i][1], x[i][3]);
			swap(y[i][1], y[i][3]);
		} else if (z13 > z12 && z13 > z23){
			swap(x[i][1], x[i][2]);
			swap(y[i][1], y[i][2]);
		}
		x[i][4] = x[i][2] + x[i][3] - x[i][1];
		y[i][4] = y[i][2] + y[i][3] - y[i][1];
		z41 = sqrt(pow(abs(x[i][4] - x[i][1]), 2) + pow(abs(y[i][4] - y[i][1]), 2));
		z42 = sqrt(pow(abs(x[i][4] - x[i][2]), 2) + pow(abs(y[i][4] - y[i][2]), 2));
		z43 = sqrt(pow(abs(x[i][4] - x[i][3]), 2) + pow(abs(y[i][4] - y[i][3]), 2));
		dp[x][y] = min(dp[x][y], z);
		dp[y][x] = min(dp[y][x], z);
	}
	for (int k = 1; k <= n; k ++)
		for (int i = 1; i <= n; i ++)
			for (int j = 1; j <= n; j ++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
	return 0;
}
