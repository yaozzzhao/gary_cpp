#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
const int N = 1e5 + 5;
LL n, a[N], l = 1, r;
/*
bool check(int mid){
	return ;
}
bool check(double mid){
	return ;
}
*/
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	r = n;
	/*
	while (l < r){
		LL mid = (l + r) >> 1;
		if (check(mid)) r = mid - 1;
		else l = mid;
	}
	
	double eps = 1e-(k + 2);
	while (l + eps < r){
		double mid = (l + r) / 2;
		if (check(mid)) r = mid;
		else l = mid;
	}
	*/
	return 0;
}
