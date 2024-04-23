#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 6e3 + 5;
int n, r[maxn], dp[maxn][2], sum = 0;
struct R{
	int k, ur = 0;
	vector<int> a;
	bool operator<(const R &y){
		if (ur == y.ur){
			return k < y.k;
		} else return ur > y.ur;
	}
} rr[maxn];
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++)
		rr[i].k = i;
	for (int i = 1; i <= n; i ++)
		cin >> r[i];
	for (int i = 2; i <= n; i ++){
		int l, k;
		cin >> l >> k;
		rr[k].a.push_back(l);
		rr[l].ur ++;
		for (int i = 0; i < rr[l].a.size(); i ++){
			rr[rr[l].a[i]].ur ++;
		}
	}
	sort(rr + 1, rr + n + 1);
	for (int i = 1; i <= n; i ++){
		for (int j = 0; j < rr[i].a.size(); j ++)
			dp[rr[i].k][0] += max(dp[rr[i].a[j]][0], dp[rr[i].a[j]][1]);
		dp[rr[i].k][1] = r[rr[i].k];
		for (int j = 0; j < rr[i].a.size(); j ++)
			dp[rr[i].k][1] += dp[rr[i].a[j]][0];
		if (rr[i].ur == 0) sum += max(dp[rr[i].k][1], dp[rr[i].k][0]);
	}
//	for (int i = 1; i <= n; i ++)
//		cout << rr[i].k << ": " << dp[rr[i].k][0] << " " << dp[rr[i].k][1] << endl;
	cout << sum << endl;
	return 0;
}