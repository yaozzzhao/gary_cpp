#include <iostream>
using namespace std;
const int N = 1e4 + 5;
int n, m, f[N];
int find(int x){
	if (x == f[x]) return x;
	return f[x] = find(f[x]);
}
void Merge(int x, int y){
	x = find(x), y = find(y);
	if (x == y) return ;
	f[y] = x;
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
		f[i] = i;
	while (m --){
		int op, x, y;
		cin >> op >> x >> y;
		if (op == 1) Merge(x, y);
		else cout << ((find(x) == find(y)) ? 'Y' : 'N');
	}
	return 0;
}
