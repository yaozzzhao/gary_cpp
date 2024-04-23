#include <iostream>
#define ll long long
using namespace std;
int n;
const int maxn = 5e5 + 5;
ll cnt, a[maxn], tmp[maxn];
void Merge_sort(int l, int r){
	if (l == r) return ;
	int mid = (l + r) >> 1, i = l, j = mid + 1, cur = l;
	Merge_sort(l, mid);
	Merge_sort(mid + 1, r);
	while (i <= mid && j <= r){
		while (a[j] < a[i] && j <= r)
			cnt += (mid - i + 1), tmp[cur ++] = a[j], j ++;
		tmp[cur ++] = a[i];
		i ++;
	}
	while (i <= mid)
		tmp[cur ++] = a[i], i ++;
	while (j <= r)
		tmp[cur ++] = a[j], j ++;
	for (int i = l; i <= r; i ++)
		a[i] = tmp[i];
	return ;
}
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	Merge_sort(1, n);
	cout << cnt << endl;
	return 0;
}