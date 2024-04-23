#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
const int maxn = 15005;
int T, n, q, a[maxn];
int ans(int x, int y){
	vector<int> b;
	for (int i = 1; i <= n; i ++){
		b.push_back(a[i]);
		for (int j = 0; j < b.size(); j ++){
			bool flag = 0;
			for (int k = b.size() - 1; k > j; k --)
				if (a[j] == a[k]){
					flag = 1;
					b.erase(b.begin() + j, b.begin() + j + k);
					break;
				}
			if (flag) break;
		}
	}
	return b.size();
}
int main(){
	cin >> T;
	while (T --){
		cin >> n;
		int num = n;
		memset(a, 0x3f, sizeof a);
		for (int i = 1; i <= n; i ++)
			cin >> a[i];
		cin >> q;
		while (q --) {
			int x, y;
			cin >> x >> y;
			cout << ans(x, y) << endl;
		}
	}
	return 0;
}