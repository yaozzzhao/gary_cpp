#include <iostream>
#include <cstring>
using namespace std;
int dp[2][100000], v[100000];
int main(){
	int T;
	cin >> T;
	while (T --){
		int n;
		cin >> n;
		cin >> v[1];
		dp[0][1] = 0;
		dp[1][1] = v[1];
		memset(dp, 0, sizeof dp);
		for (int i = 2; i <= n; i ++){
			cin >> v[i];
			dp[0][i] = max(dp[0][i - 1], dp[1][i - 1]);
			dp[1][i] = dp[0][i - 1] + v[i];
		}
		cout << max(dp[0][n], dp[1][n]);
	}
	return 0;
}