#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
const int N = 4e2 + 5;
int n, S, T, A, B, t[N], x[N][5], y[N][5];
double dp[N][N];
int main(){
	cin >> n;
	while (n --){
		cin >> S >> T >> A >> B;
		memset(dp, 0x7f, sizeof dp);
		memset(x, 0x7f, sizeof x);
		memset(y, 0x7f, sizeof y);
		memset(t, 0x7f, sizeof t);
		for (int i = 1; i <= S * 4; i ++) dp[i][i] = 0;
		for (int i = 1; i <= S; i ++){
			double z12, z13, z23, z41, z42, z43;
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
			
			z12 = sqrt(pow(abs(x[i][1] - x[i][2]), 2) + pow(abs(y[i][1] - y[i][2]), 2));
			z13 = sqrt(pow(abs(x[i][1] - x[i][3]), 2) + pow(abs(y[i][1] - y[i][3]), 2));
			z23 = sqrt(pow(abs(x[i][2] - x[i][3]), 2) + pow(abs(y[i][2] - y[i][3]), 2));
			z41 = sqrt(pow(abs(x[i][4] - x[i][1]), 2) + pow(abs(y[i][4] - y[i][1]), 2));
			z42 = sqrt(pow(abs(x[i][4] - x[i][2]), 2) + pow(abs(y[i][4] - y[i][2]), 2));
			z43 = sqrt(pow(abs(x[i][4] - x[i][3]), 2) + pow(abs(y[i][4] - y[i][3]), 2));
			
			dp[(i - 1) * 4 + 1][(i - 1) * 4 + 2] = min(dp[(i - 1) * 4 + 1][(i - 1) * 4 + 2], t[i] * z12);
			dp[(i - 1) * 4 + 2][(i - 1) * 4 + 1] = min(dp[(i - 1) * 4 + 2][(i - 1) * 4 + 1], t[i] * z12);
			
			dp[(i - 1) * 4 + 1][(i - 1) * 4 + 3] = min(dp[(i - 1) * 4 + 1][(i - 1) * 4 + 3], t[i] * z13);
			dp[(i - 1) * 4 + 3][(i - 1) * 4 + 1] = min(dp[(i - 1) * 4 + 3][(i - 1) * 4 + 1], t[i] * z13);
			
			dp[(i - 1) * 4 + 1][(i - 1) * 4 + 4] = min(dp[(i - 1) * 4 + 1][(i - 1) * 4 + 4], t[i] * z41);
			dp[(i - 1) * 4 + 4][(i - 1) * 4 + 1] = min(dp[(i - 1) * 4 + 4][(i - 1) * 4 + 1], t[i] * z41);
			
			dp[(i - 1) * 4 + 2][(i - 1) * 4 + 3] = min(dp[(i - 1) * 4 + 2][(i - 1) * 4 + 3], t[i] * z23);
			dp[(i - 1) * 4 + 3][(i - 1) * 4 + 2] = min(dp[(i - 1) * 4 + 3][(i - 1) * 4 + 2], t[i] * z23);
			
			dp[(i - 1) * 4 + 2][(i - 1) * 4 + 4] = min(dp[(i - 1) * 4 + 2][(i - 1) * 4 + 4], t[i] * z42);
			dp[(i - 1) * 4 + 4][(i - 1) * 4 + 2] = min(dp[(i - 1) * 4 + 4][(i - 1) * 4 + 2], t[i] * z42);
			
			dp[(i - 1) * 4 + 3][(i - 1) * 4 + 4] = min(dp[(i - 1) * 4 + 3][(i - 1) * 4 + 4], t[i] * z43);
			dp[(i - 1) * 4 + 4][(i - 1) * 4 + 3] = min(dp[(i - 1) * 4 + 4][(i - 1) * 4 + 3], t[i] * z43);
		}
		for (int i = 1; i <= (S - 1) * 4; i ++)
			for (int j = ((i - 1) / 4 + 1) * 4 + 1; j <= S * 4; j ++){
				double dis = sqrt(pow(abs(x[(i - 1) / 4 + 1][(i - 1) % 4 + 1] - x[(j - 1) / 4 + 1][(j - 1) % 4 + 1]), 2) + pow(abs(y[(i - 1) / 4 + 1][(i - 1) % 4 + 1] - y[(j - 1) / 4 + 1][(j - 1) % 4 + 1]), 2));
				dp[i][j] = min(dp[i][j], T * dis);
				dp[j][i] = min(dp[j][i], T * dis);
//				cout << dp[i][j] << " " << dp[j][i] << endl;
			}
		for (int k = 1; k <= S * 4; k ++)
			for (int i = 1; i <= S * 4; i ++)
				for (int j = 1; j <= S * 4; j ++)
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
		double ans = 1e9;
		for (int i = 1; i <= 4; i ++)
			for (int j = 1; j <= 4; j ++){
				ans = min(ans, dp[(A - 1) * 4 + i][(B - 1) * 4 + j]);
//				cout << dp[(A - 1) * 4 + i][(B - 1) * 4 + j] << endl;
			}
		printf("%.1lf\n", ans);
		
//		for (int i = 1; i <= S * 4; i ++){
//			for (int j = 1; j <= S * 4; j ++)
//				printf("%.1lf ", dp[i][j]);
//			cout << endl;
//		}
	}
	return 0;
}
