#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int N = 30;
struct Node {
	int x, y;
};
int n, m, d[N][N];
char g[N][N];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
void bfs(int i, int j){
	queue<Node> q;
	q.push({i, j});
	while (!q.empty()){
		Node t = q.front();
		q.pop();
		int x = t.x, y = t.y;
		for (int k = 0; k < 4; k ++){
			int a = x + dx[k], b = y + dy[k];
			if (a < 0 || a >= n || b < 0 || b >= m) continue;
			if (g[a][b] == '#' || d[a][b] >= 0) continue;
			d[a][b] = d[x][y] + 1;
			if (g[a][b] == '*'){
				cout << d[a][b] + 1 << '\n';
				return ;
			}
			q.push({a, b});
		}
	}
	cout << "-1\n";
}
int main(){
	do {
		memset(d, -1, sizeof d);
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		for (int i = 0; i < n; i ++){
			cin >> g[i];
		}
		for (int i = 0; i < n; i ++){
			for (int j = 0; j < m; j ++){
				if (g[i][j] == '@'){
					bfs(i, j);
				}
			}
		}
	} while (true);
	return 0;
}