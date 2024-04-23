#include <iostream>
#include <cstring>
using namespace std;
const int N = 1e3 + 5;
int n, m, s, a[N][N], vis[N], dis[N];
int main(){
	cin >> n >> m >> s;
	memset(a, 0x3f, sizeof a);
	memset(dis, 0x3f, sizeof dis);
	for (int i = 1; i <= m; i ++){
		int x, y, z;
		cin >> x >> y >> z;
		a[x][y] = min(a[x][y], z);
	}
	dis[s] = 0;
	for (int i = 1; i <= n; i ++){
		int id = 0;
		for (int j = 1; j <= n; j ++)
			if (!vis[j] && dis[j] < dis[id])
				id = j;
		if (!id) break;
		vis[id] = 1;
		for (int j = 1; j <= n; j ++)
			if (!vis[j])
				dis[j] = min(dis[j], dis[id] + a[id][j]);
	}
	for (int i = 1; i <= n; i ++)
		cout << ((dis[i] == dis[0]) ? 2147483647 : dis[i]) << ((i == n)? '\n' : ' ');
	return 0;
}
