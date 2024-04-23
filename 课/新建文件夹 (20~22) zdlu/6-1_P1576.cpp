#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int N = 5e5 + 5;
int n, m, s, a, b, vis[N], fir[N], nxt[N], to[N], len[N], cnt;
double dis[N]; 
priority_queue<pair<double, int> > Q;
void newnode(int u, int v, double w){
	to[++cnt] = v; len[cnt] = w; nxt[cnt] = fir[u]; fir[u] = cnt;
}
int main(){
	cin >> n >> m;
	memset(dis, 0, sizeof dis);
	for (int i = 1; i <= m; i ++){
		int x, y, z;
		cin >> x >> y >> z;
		newnode(x, y, z);
		newnode(y, x, z);
	}
	cin >> a >> b;
	dis[a] = 1;
	Q.push(make_pair(dis[a], a));
	while (!Q.empty()){
		int u = Q.top().second;
		Q.pop();
		if (vis[u]) continue;
		vis[u] = 1;
		for (int i = fir[u]; i; i = nxt[i]){
			if (dis[to[i]] < dis[u] * (100 - len[i]) / 100){
				dis[to[i]] = dis[u] * (100 - len[i]) / 100;
				Q.push(make_pair(dis[to[i]], to[i]));
			}
		}
	}
	printf("%.8lf\n", 100 / dis[b]);
	return 0;
}
