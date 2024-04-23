#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int N = 5e5 + 5;
int n, m, s, vis[N], dis[N], fir[N], nxt[N], to[N], len[N], cnt, cnts[N];
queue<int> Q;
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
	Q.push(s);
	while (!Q.empty()){
		int u=Q.front();
		Q.pop();
		for (int i = fir[u]; i; i = nxt[i])
			if (dis[to[i]] > dis[u] + len[i]){
				dis[to[i]] = dis[u] + len[i];
				Q.push(to[i]);
			}
	}
	for (int i = 1; i <= n; i ++)
		cout << ((dis[i] == dis[0]) ? 2147483647 : dis[i]) << ((i == n)? '\n' : ' ');
	return 0;
}