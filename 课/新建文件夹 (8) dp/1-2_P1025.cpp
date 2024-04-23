#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
const int N = 200 + 5;
LL n, m, f[N][10];
int main(){
	cin >> n >> m;
	if (n < m){
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i ++)
		for (int j = 1; j <= m; j ++){
			if (i < j) f[i][j] = 0;
			else if (i == j) f[i][j] = 1;
			else f[i][j] = f[i - 1][j - 1] + f[i - j][j];
		}
	cout << f[n][m] << endl;
	return 0;
}
