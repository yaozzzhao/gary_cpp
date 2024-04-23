#include <iostream>
#include <cstring>
using namespace std;
const int N = 5e3 + 5;
int n, m, sum, a[N][N], vis[N], dis[N];
int main(){
	cin >> n >> m;
	memset(a, 0x3f, sizeof a);
	memset(dis, 0x3f, sizeof dis);
	for (int i = 1; i <= m; i ++){
		int x, y, z;
		cin >> x >> y >> z;
		a[x][y] = min(a[x][y], z);
		a[y][x] = min(a[y][x], z);
	}
	dis[1] = 0;
	for (int i = 1; i <= n; i ++){
		int id = 0;
		for (int j = 1; j <= n; j ++)
			if (!vis[j] && dis[j] < dis[id])
				id = j;
		if (id == 0){
			cout << "orz\n";
			return 0;
		}
		vis[id] = 1;
		sum += dis[id];
		for (int j = 1; j <= n; j ++)
			if (!vis[j])
				dis[j] = min(dis[j], a[id][j]);
	}
	cout << sum << endl;
	return 0;
}
