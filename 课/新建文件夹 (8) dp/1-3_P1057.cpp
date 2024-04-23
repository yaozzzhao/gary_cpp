#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
const int N = 30 + 5;
LL n, m, f[N][N];
int main(){
	cin >> n >> m;
	f[2][1] = 1, f[n][1] = 1;
	for (int j = 2; j <= m; j ++)
		for (int i = 1; i <= n; i ++){
			if (i == 1) f[i][j] = f[n][j - 1] + f[i + 1][j - 1];
			else if (i == n) f[i][j] = f[i - 1][j - 1] + f[1][j - 1];
			else f[i][j] = f[i - 1][j - 1] + f[i + 1][j - 1];
		}
	cout << f[1][m] << endl;
	return 0;
}
