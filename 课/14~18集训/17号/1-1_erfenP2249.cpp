#include <iostream>
#include <algorithm>
using namespace std;
long long n, m, tmp, a[1000000], b[1000000];
int erfen(int g){
	int l = 1, r = n, mid;
	while (l < r){
		mid = (l + r) / 2;
		if (a[mid] >= g) r = mid;
		else l = mid + 1;
	}
	if (a[l] == g) return l;
	return -1;
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i ++){
		cin >> tmp;
		int pos = lower_bound(a + 1, a + n + 1, tmp) - a;
		if (pos <= n && a[pos] == tmp) cout << pos << " ";
		else cout << "-1 ";
//		b[i] = erfen(tmp);
	}
//	for (int i = 0; i < m; i ++){
//		cout << b[i] << " ";
//	}
	return 0;
}