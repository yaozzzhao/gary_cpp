#include <iostream>
#include <algorithm>
#include <cstdio>
#define LL long long
using namespace std;
double a, b, c, d, l, r, x1, x2, eps = 1e-4;
double f(double x){
	return a * (x * x * x) + b * (x * x) + c * x + d;
}
int main(){
	cin >> a >> b >> c >> d;
	int cnt = 0;
	for (int i = -100; i <= 100; i ++){
		l = i, r = i + 1;
		x1 = f(l);
		if (!x1) {
			printf("%.2lf ", l);
			cnt ++;
			continue;
		}
		x2 = f(r);
		if (x1 * x2 < 0){
			while (l + eps < r){
				double mid = (l + r) / 2;
				if (f(mid) * f(r) <= 0) l = mid;
				else r = mid;
			}
			printf("%.2lf ", r);
			cnt ++;
		}
		if (cnt == 3) break;
	}
	return 0;
}
