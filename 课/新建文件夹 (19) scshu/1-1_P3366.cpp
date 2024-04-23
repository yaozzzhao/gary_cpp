#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5e3 + 5;
int n, m, f[N], ans, cnt;
struct edge{
	int x, y, z;
} a[N];
bool cmp(edge p1, edge p2){
	return p1.z < p2.z;
}
int find(int x){
	if (x == f[x]) return x;
	return f[x] = find(f[x]);
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) f[i] = i;
	for (int i = 1; i <= m; i ++){
		int x, y, z;
		cin >> a[i].x >> a[i].y >> a[i].z;
	}
	sort(a + 1, a + 1 + m, cmp);
	for (int i = 1; i <= m; i ++){
		int x = find(a[i].x), y = find(a[i].y);
		if (x == y) continue ;
		f[y] = x, ans += a[i].z, cnt += 1;
	}
	if (cnt == n - 1) cout << ans;
	else cout << "orz";
	return 0;
}
