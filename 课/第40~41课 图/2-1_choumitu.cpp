#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
const int N = 1e3;
int g[N][N];
int main(){
	int n, m;
	cin >> n >> m;
//	for (int i = 0; i < n; i ++){
//		for (int j = 0; j < n; j ++){
//			g[i][j] = pow(2, 31) - 1;
//		}
//	}
//	memset(g, 0x7f, sizeof g);
	memset(g, 0, sizeof g);
	for (int i = 0; i < m; i ++){
		int a, b, c;
		cin >> a >> b;
//		cin >> c;
		g[a][b] = 1;
		g[b][a] = 1;
//		g[a][b] = c;
//		g[b][a] = c;
	}
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= n; j ++){
//			cout << setw(11) << g[i][j] << " ";
			cout << g[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
/*
5 8
1 2 5
1 3 8
1 5 3
2 3 2
2 5 6
3 4 10
3 5 4
4 5 11
*/