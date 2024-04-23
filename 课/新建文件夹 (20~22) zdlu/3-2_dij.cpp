#include <iostream>
#include <cstring>
using namespace std;
const int N = 5e5 + 5;
int n, m, s, vis[N], dis[N], fir[N], nxt[N], to[N], len[N], cnt;
void newnode(int u, int v, int w){
	to[++cnt] = v; len[cnt] = w; nxt[cnt] = fir[u]; fir[u] = cnt;
}
int main(){
	cin >> n >> m >> s;
	memset(dis, 0x3f, sizeof dis);
	for (int i = 1; i <= m; i ++){
		int x, y, z;
		cin >> x >> y >> z;
		newnode(x, y, z);
	}
	dis[s] = 0;
	for (int i = 1; i <= n; i ++){
		int id = 0;
		for (int j = 1; j <= n; j ++)
			if (!vis[j] && dis[j] < dis[id])
				id = j;
		if (!id) break;
		vis[id] = 1;
		for (int j = fir[id]; j; j = nxt[j])
			if (!vis[to[j]])
				dis[to[j]] = min(dis[to[j]], dis[id] + len[j]);
	}
	for (int i = 1; i <= n; i ++)
		cout << ((dis[i] == dis[0]) ? 2147483647 : dis[i]) << ((i == n)? '\n' : ' ');
	return 0;
}
