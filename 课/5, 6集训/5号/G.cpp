#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 105;
int n, a[maxn][maxn], dp[maxn][maxn];
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++)
		for (int j = 1; j <= i; j ++)
			cin >> a[i][j];
	for (int i = n; i >= 1; i --)
		for (int j = 1; j <= i; j ++)
			dp[i][j] = a[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
	cout << dp[1][1] << endl;
	return 0;
}