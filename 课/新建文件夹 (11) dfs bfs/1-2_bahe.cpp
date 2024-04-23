#include <iostream>
#include <algorithm>
#include <numeric>
#define LL long long
using namespace std;
const int N = 20 + 5;
LL n, minn = 1e5, w[N], sums;
void dfs(int x, int y, int sum){
	if (y == n / 2){
		minn = min(minn, abs(sums - sum - sum));
		return ;
	}
	if (x > n) return ;
	dfs(x + 1, y + 1, sum + w[x]);
	dfs(x + 1, y, sum);
}
int main(){
	int T;
	cin >> T;
	while (T --){
		cin >> n;
		for (int i = 1; i <= n; i ++)
			cin >> w[i];
		sums = accumulate(w + 1, w + n + 1, 0);
		minn = 1e5;
		dfs(1, 0, 0);
		cout << minn << endl;
	}
	return 0;
}
