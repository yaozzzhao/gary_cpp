#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n, t;
struct coin{
	int m, v;
	bool operator<(const coin &x){
		return v * x.m > m * x.v;
	}
} a[110];
/*
bool cmp(coin x, coin y){
	return x.v * y.m > x.m * y.v;
}
*/
int main(){
	cin >> n >> t;
	double ans = 0.0;
	for (int i = 0; i < n; i ++)
		cin >> a[i].m >> a[i].v;
	sort(a, a + n);
	int i;
	for (i = 0; i < n; i ++){
		if (a[i].m > t) break;
		t -= a[i].m;
		ans += a[i].v;
	}
	if (i < n)
		ans += 1.0 * t / a[i].m * a[i].v;
	printf("%.2lf", ans);
	return 0;
}
