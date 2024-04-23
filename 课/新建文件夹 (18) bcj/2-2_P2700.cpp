#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
long long n, k, di[N], sum = 0, ans = 0, fa[N];
struct edge{
	int u, v, w;
} e[N];
bool cmp(edge a, edge b){
	return a.w > b.w;
}
int find(int x){
	if (x == fa[x])
		return x;
	return fa[x] = find(fa[x]);
}
void Merge(int x, int y){
	x = find(x), y = find(y);
	if (x == y) return ;
	fa[y] = x;
}
int main(){
	cin >> n >> k;
	for (int i = 1; i <= k; i ++){
		int t;
		cin >> t;
		di[t] = 1;
	}
	for (int i = 1; i <= n - 1; i ++)
		cin >> e[i].u >> e[i].v >> e[i].w;
	for (int i = 1; i <= n; i ++)
		fa[i] = i;
	sort(e + 1, e + 1 + n, cmp);
	for (int i = 1; i <= n - 1; i ++){
		sum += e[i].w;
		if (find(e[i].u) == find(e[i].v)) ans += e[i].w;
		if (di[find(e[i].u)] && di[find(e[i].v)]) continue;
		else if (di[find(e[i].u)]){
			fa[find(e[i].v)] = find(e[i].u);
			ans += e[i].w;
		} else {
			fa[find(e[i].u)] = find(e[i].v);
			ans += e[i].w;
		}
	}
	cout << sum - ans << endl; 
	return 0;
}