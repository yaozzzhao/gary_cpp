#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
const int N = 1e2 + 5;
int n, m;
double dp[N][N], x[N], y[N];
int wall(int i){
	return ((i - 2) / 4) + 2;
}
bool slove(int i, int j){
	int ii = wall(i), jj = wall(j);
	if (ii == jj) return 0;
	double yy = y[i] - y[j], xx = abs(x[jj] - x[ii]);
	for (int k = ii + 1; k < jj; k ++){
		double dis = x[k] / xx * yy + y[i];
		if (!((y[(k - 1) * 4 + 2] <= dis && y[(k - 1) * 4 + 3] >= dis) || (y[(k - 1) * 4 + 4] <= dis && y[(k - 1) * 4 + 5] >= dis))) return 0;
	}
	return 1;
}
int main(){
	cin >> n;
	memset(dp, 0x3f, sizeof dp);
	for (int i = 1; i <= n; i ++) dp[i][i] = 0;
	x[1] = 0, y[1] = 0;
	for (int i = 1; i <= n; i ++)
		cin >> x[i + 1] >> y[(i - 1) * 4 + 2] >> y[(i - 1) * 4 + 3] >> y[(i - 1) * 4 + 4] >> y[(i - 1) * 4 + 5];
	x[n + 2] = 10, y[4 * n + 2] = 5;
	for (int i = 1; i <= n * 4 + 2; i ++)
		for (int j = i + 1; j <= n * 4 + 2; j ++)
			if (slove(i, j)){
				double dis = sqrt(pow(abs(x[wall(i)] - x[wall(j)]) , 2) + pow(abs(y[i] - y[j]) , 2));
				dp[i][j] = min(dp[i][j], dis);
			}
	for (int k = 1; k <= 4 * n + 2; k ++)
		for (int i = 1; i <= 4 * n + 2; i ++)
			for (int j = 1; j <= 4 * n + 2; j ++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
	cout << dp[1][4 * n + 2] << "\n";
	return 0;
}