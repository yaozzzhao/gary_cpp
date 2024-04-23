#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
const int N = 1e6 + 5;
LL n, h[N], m;
bool check(LL x){
	LL res = 0;
	for (int i = 1; i <= n; i ++)
		res += max(0ll, h[i] - x);
	return res >= m;
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
		cin >> h[i];
	LL l = 0, r = *max_element(h + 1, h + n + 1);
	while (l < r){
		LL mid = (l + r + 1) >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	cout << l << endl;
	return 0;
}