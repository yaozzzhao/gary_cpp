#include <iostream>
#include <vector>
using namespace std;
const int maxn = 10005, maxm = 100005;
int n, m;

int tot, head[maxn];
struct edge1{
	int to, w, nxt;
} e[maxm];
void addedge(int u, int v, int w){
	tot ++;
	e[tot].to = v;
	e[tot].nxt = head[u];
	e[tot].w = w;
	head[u] = tot;
}

struct edge2{
	int v, w;
};
vector<edge2> E[maxm];

int main(){
	cin >> n >> m;
	for (int i = 1; i <= m; i ++){
		int u, v, w;
		cin >> u >> v >> w;
		E[u].push_back({v, w});
		addedge(u, v, w);
	}	
	return 0;
}