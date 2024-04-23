#include <iostream>
#include <algorithm>
#include <string>
#define ULL unsigned long long
using namespace std;
const int N = 1e5 + 5, P = 131;
ULL n, a[N], cnt = 0;
ULL Hash(string s){
	ULL sum = (ULL)(s[0]);
	for (int i = 1; i < s.size(); i ++)
		sum = sum * P + (ULL)(s[i]);
	return sum;
}
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++){
		string s;
		cin >> s;
		a[i] = Hash(s);
	}
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i ++)
		if (a[i] != a[i - 1]) cnt ++;
	cout << cnt << endl;
	return 0;
}
