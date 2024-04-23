#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 205;
int n, a[maxn], dp1[maxn][maxn], dp2[maxn][maxn], sum[maxn], ansmax = 0, ansmin = 0x3f3f3f3f;
int main(){
	cin >> n;
	memset(dp1, -0x7f, sizeof dp1);
	memset(dp2, 0x7f, sizeof(dp2));
	for (int i = 1; i <= n; i ++){
		cin >> a[i]; a[n + i] = a[i];
	}
	for (int i = 1; i <= 2 * n - 1; i ++){
		dp1[i][i] = 0; 
		dp2[i][i] = 0;
		sum[i] = sum[i - 1] + a[i];
	}
	for (int len = 2; len <= n; len ++){
		for (int l = 1; l <= 2 * n - len; l ++){
			int r = l + len - 1;
			for (int k = l; k <= r; k ++){
				dp1[l][r] = max(dp1[l][r], dp1[l][k] + dp1[k + 1][r]);
				dp2[l][r] = min(dp2[l][r], dp2[l][k] + dp2[k + 1][r]);
			}
			dp1[l][r] += sum[r] - sum[l - 1];
			dp2[l][r] += sum[r] - sum[l - 1];
		}
	}
	for (int i = 1; i <= n; i++){
        ansmax = max(ansmax, dp1[i][i + n - 1]);
		ansmin = min(ansmin, dp2[i][i + n - 1]);
    }
    cout << ansmin << '\n' << ansmax << '\n';
	return 0;
}