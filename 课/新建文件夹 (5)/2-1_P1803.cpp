#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e6 + 100;
int n;
struct contest{
	int l, r;
	bool operator<(const contest &x){
		return r < x.r;
	}
} a[N];
int main(){
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> a[i].l >> a[i].r;
	sort(a, a + n);
	int ans = 0, last = -1;
	for (int i = 0; i < n; i ++){
		if (a[i].l >= last){
			ans ++;
			last = a[i].r;
		}
	}
	cout << ans << endl;
	return 0;
}