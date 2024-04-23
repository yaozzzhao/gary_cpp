#include <iostream>
#include <algorithm>
using namespace std;
int n, m, T, a[1000005], CNT = 0;
int main(){
	cin >> T;
	while (T --){
		CNT = 0;
		cin >> n >> m;
		for (int i = 1; i <= n; i ++)
			a[i] = i;
		do {
			long long cnt = 0;
			for (int i = 1; i <= n; i ++){
				if (a[i] == i) cnt ++;
			}
			if (cnt == m) CNT = (CNT + 1) % (int)(1e9 + 7);
		} while (next_permutation(a + 1, a + n + 1));
		cout << CNT << endl;
	}
	return 0;
}