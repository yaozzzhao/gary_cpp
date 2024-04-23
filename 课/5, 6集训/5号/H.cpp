#include <iostream>
using namespace std;
int h[105][105], dp[105][105], r, c, maxl;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int a(int x, int y){
	if (dp[x][y]) return dp[x][y];
	dp[x][y] = 1;
	int nx, ny, m = 0;
	for (int i = 0; i < 4; i ++){
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx < 1 || ny < 1 || nx > r || ny > c) continue;
		if (h[nx][ny] >= h[x][y]) continue;
		m = max(m, a(nx, ny));
	}
	dp[x][y] += m;
	return dp[x][y];
}
int main(){
	cin >> r >> c;
	for (int i = 1; i <= r; i ++)
		for (int j = 1; j <= c; j ++)
			cin >> h[i][j];
	for (int i = 1; i <= r; i ++)
		for (int j = 1; j <= c; j ++)
			maxl = max(maxl, a(i, j));
	cout << maxl << endl;
	return 0;
}