#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int N = 5e5 + 5;
int n, m, vis[N], dis[N], fir[N], nxt[N], to[N], len[N], cnt, cnts[N];
queue<int> Q;
void newnode(int u, int v, int w){
	to[++cnt] = v; len[cnt] = w; nxt[cnt] = fir[u]; fir[u] = cnt;
}
int main(){
	cin >> n >> m;
	memset(dis, 0x3f, sizeof dis);
	for (int i = 1; i <= m; i ++){
		int x, y;
		cin >> x >> y;
		newnode(x, y, 1);
		cnts[y] = 1;
	}
	dis[1] = 0;
	Q.push(1);
	while (!Q.empty()){
		int u=Q.front();
		cout << u << " ";
		Q.pop();
		for (int i = fir[u]; i; i = nxt[i])
			if (dis[to[i]] > dis[u] + len[i]){
				dis[to[i]] = dis[u] + len[i];
				Q.push(to[i]);
			}
	}
	cout << '\n';
	for (int i = 1; i <= n; i ++)
		cout << ((dis[i] == dis[0]) ? 2147483647 : dis[i]) << ((i == n)? '\n' : ' ');
	for (int i = 1; i <= n; i ++)
		cout << cnts[i] << " ";
	return 0;
}