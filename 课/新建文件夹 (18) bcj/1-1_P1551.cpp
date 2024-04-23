#include <iostream>
#include <algorithm>
using namespace std;
const int N = 5e3 + 5;
int n, m, p, fa[N];
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
	cin >> n >> m >> p;
	for (int i = 1; i <= n; i ++)
		fa[i] = i;
	for (int i = 1; i <= m; i ++){
		int x, y;
		cin >> x >> y;
		Merge(x, y);
	}
	for (int i = 1; i <= p; i ++){
		int x, y;
		cin >> x >> y;
		if (find(x) != find(y)) cout << "No" << endl;
		else cout << "Yes" << endl;
	}	
	return 0;
}