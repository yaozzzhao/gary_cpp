#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
const int N = 25;
long long f[N][N];
int dx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
int dy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
int main(){
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	f[0][0] = 1;
	memset(f, -1, sizeof(f));
	for(int i = 0; i < 9; i ++){
		int a = x + dx[i], b = y + dy[i];
		if(a < 0 || a > n || b < 0 || b > m) continue;
		f[a][b] = 0;
	}
	for(int i = 1; i <= n; i ++){
		if(f[i][0] == -1) f[i][0] = 1;
	}
	for(int i = 1; i <= m; i ++){
		if(f[0][i] == -1) f[0][i] = 1;
	}
	for(int i = 0; i <= n; i ++){
		for(int j = 0; j <= m; j ++){
			if(f[i][j] == -1){
				f[i][j] = f[i][j - 1] + f[i - 1][j];
			}
		}
	}
	cout << f[n][m] << endl;
	return 0;
}