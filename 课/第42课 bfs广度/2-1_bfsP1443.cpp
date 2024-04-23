#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int N = 500;
int n, m, d[N][N];
struct Node {
	int x, y;
};
queue<Node> q;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int main(){
	int s, t;
	cin >> n >> m >> s >> t;
	memset(d, -1, sizeof d);
	q.push({s, t});
	d[s][t] = 0;
	while (!q.empty()){
		Node t = q.front();
		q.pop();
		int x = t.x, y = t.y;
		for (int k = 0; k < 8; k ++){
			int a = x + dx[k], b = y + dy[k];
			if (a < 1 || a > n || b < 1 || b > m) continue;
			if (d[a][b] != -1) continue;
			d[a][b] = d[x][y] + 1;
			q.push({a, b});
		}
	}
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= m; j ++){
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}