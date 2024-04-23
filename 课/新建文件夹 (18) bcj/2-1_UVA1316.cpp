#include <iostream>
#include <algorithm>
using namespace std;
int n, ans = 0, fa[10005];
struct product{
	int p, d;
} pro[10005];
bool cmp(product a, product b){
	return a.p > b.p;
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
	while (cin >> n){
		ans = 0;
		for (int i = 1; i <= n; i ++)
			cin >> pro[i].p >> pro[i].d;
		for (int i = 1; i <= 10000; i ++)
			fa[i] = i;
		sort(pro + 1, pro + 1 + n, cmp);
		for (int i = 1; i <= n; i ++){
			int t = find(pro[i].d);
			if (t == 0) continue;
			Merge(t - 1, t);
			ans += pro[i].p;
		}
		cout << ans << endl;	
	}
	return 0;
}