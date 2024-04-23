#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 1000005, maxm = 1000005;
int n, m, s, tot, head[maxn];
int dis[maxn], vis[maxn];
struct edge{
	int to, w, nxt;
} e[maxm];
void addedge(int u, int v, int w){
	tot ++;
	e[tot].to = v;
	e[tot].nxt = head[u];
	e[tot].w = w;
	head[u] = tot;
}

void spfa(int s){
	memset(dis, 0x3f3f3f3f, sizeof dis);
	queue<int> q;
	q.push(s);
	dis[s] = 0;
	vis[s] = 1;
	while (!q.empty()){
		int u = q.front();
		q.pop();
		vis[u] = 0;
		for (int i = head[u]; i; i = e[i].nxt){
			int v = e[i].to;
			if (dis[v] > dis[u] + e[i].w){
				dis[v] = dis[u] + e[i].w;
				if (!vis[v]) q.push(v);
			}
		}
	}
	return ;
}

int main(){
	cin >> n >> m >> s;
	for (int i = 0; i < m; i ++){
		int u, v, w;
		cin >> u >> v >> w;
		addedge(u, v, w);
	}
	spfa(s);
	for (int i = 1; i <= n; i ++){
		if (dis[i] >= 0x3f3f3f3f){
			dis[i] = 2147483647;
		}
		cout << dis[i] << " ";
	}
	return 0;
}