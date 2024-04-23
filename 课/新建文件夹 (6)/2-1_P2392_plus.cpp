#include <iostream>
#include <algorithm>
#include <numeric>
#define LL long long
using namespace std;
LL s[5], a[25], ans = 0, sum, n, nowtime, maxtime;
void dfs(int x){
	if (x > n){
		maxtime = max(maxtime, nowtime);
		return ;
	}
	if (nowtime + a[x] <= sum / 2){
		nowtime += a[x];
		dfs(x + 1);
		nowtime -= a[x];
	}
	dfs(x + 1);
}
int main(){
	for (int i = 1; i <= 4; i ++)
		cin >> s[i];
	for (int i = 1; i <= 4; i ++){
		n = s[i];
		nowtime = 0, maxtime = 0;
		for (int j = 1; j <= n; j ++)
			cin >> a[j];
		sum = accumulate(a + 1, a + n + 1, 0);
		dfs(1);
		ans += sum - maxtime;
	}
	cout << ans << endl;
	return 0;
}