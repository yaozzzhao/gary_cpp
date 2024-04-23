#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e6 + 5;
char a[maxn];
int a1[maxn], a2[maxn], b1[maxn], b2[maxn];
int cnt1, cnt2, deep = 0;
int solve(int l, int r){
	if (b1[r] >= l){
		int tmp = solve(l, b1[r] - 1);
		if (tmp == 1){
			cnt1 ++;
			return 1;
		}
		return (tmp | solve(b1[r] + 1, r));
	}
	if (b2[r] >= l){
		int tmp = solve(l, b2[r] - 1);
		if (tmp == 0){
			cnt2 ++;
			return 0;
		}
		return (tmp & solve(b2[r] + 1, r));
	}
	if (a[l] == '(' && a[r] == ')') {
        return solve(l + 1, r - 1);
    }
    return a[l] - '0';
}
int main(){
	cin >> a + 1;
	int len = strlen(a + 1);
	for (int i = 1; i <= len; i ++){
		if (a[i] == '(') deep ++;
		if (a[i] == ')') deep --;
		if (a[i] == '|') a1[deep] = i;
		if (a[i] == '&') a2[deep] = i;
		b1[i] = a1[deep];
		b2[i] = a2[deep];
	}
    int ans = solve(1, len);
    cout << ans << '\n' << cnt2 << " " << cnt1 << '\n';
	return 0;
}