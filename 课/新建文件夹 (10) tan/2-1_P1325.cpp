#include <iostream>
#include <algorithm>
#include <cmath>
#define LL long long
using namespace std;
const int N = 1e3 + 5;
struct interval{
	double l, r;
} a[N];
bool cmp(interval a, interval b){
	return a.r < b.r;
}
int main(){
	LL n, d, x, y;
	cin >> n >> d;
	for (int i = 1; i <= n; i ++){
		cin >> x >> y;
		if (y > d){
			cout << -1 << endl;
			return 0;
		}
		a[i].l = x - sqrt(d * d - y * y);
		a[i].r = x + sqrt(d * d - y * y);
	}
	sort(a + 1, a + n + 1, cmp);
	LL cnt = 1;
	double pos = a[1].r;
	for (int i = 2; i <= n; i ++){
		if (a[i].l <= pos && pos <= a[i].r) continue;
		else {
			cnt ++;
			pos = a[i].r;
		}
	}
	cout << cnt << endl;
	return 0;
}
