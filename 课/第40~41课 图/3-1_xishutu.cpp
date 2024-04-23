#include <iostream>
#include <vector>
using namespace std;
const int N = 100;
vector<int> g[N];
int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i ++){
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
//		g[b].push_back(a);
	}
	for (int i = 1; i <= n; i ++){
		cout << i << " | ";
		for (int j = 0; j < g[i].size(); j ++){
			cout << g[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
/*
4 5
1 2
1 3
1 4
2 3
2 4
*/