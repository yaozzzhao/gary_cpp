#include <iostream>
#include <cmath>
#include <cstring>
#define ULL unsigned long long
using namespace std;
const int P = 131;
ULL a[1000005], b[1000005], maxn = 1, len, power[1000005];
char s[1000005];
void init(){
	power[0] = 1;
	for (int i = 1; i <= 1000000; i ++)
		power[i] = P * power[i - 1];
}
void Hash(char s[]){
	a[0] = 0;
	for (int i = 1; i <= len; i ++)
		a[i] = a[i - 1] * P + (ULL)(s[i]);
	b[0] = 0;
	for (int i = 1; i <= len; i ++){
		b[i] = b[i - 1] * P + (ULL)(s[len - i + 1]);
//		cout << b[i] << "*" << endl;
	}
//	a[i - 1] - a[i - 1 - j] * P ^ j == b[len - i] - b[len - i - j] * P ^ j
//		2 * j + 1
//	a[i] - a[i - j] * P ^ j == b[len - i] - b[len - i - j] * P ^ j
//		2 * j
}
int main(){
	int cnt = 0;
	cin >> s + 1;
	while (!(s[1] == 'E' && s[2] == 'N' && s[3] == 'D')){
		cnt ++;
		maxn = 0;
		len = strlen(s + 1);
		Hash(s);
		init();
//		cout << a[6] << " " << b[6] << endl;
		for (int i = 1; i < len; i ++){
			int l = 0, r = len;
			while (r >= l){
				int j = (r + l) >> 1;
//				cout << a[i - 1] - a[i - 1 - j] * power[j] << " " << b[len - i] - b[len - i - j] * power[j] << endl;
				if (i - 1 - j < 0 || len - i - j < 0){
					r = j - 1;
				} else if (a[i - 1] - a[i - 1 - j] * power[j] == b[len - i] - b[len - i - j] * power[j]){
					maxn = max(maxn, (ULL)(2 * j + 1));
					l = j + 1;
				} else {
					r = j - 1;
				}
			}
			l = 0, r = len;
			while (r >= l){
				int j = (r + l) >> 1;
//				cout << a[i - 1] - a[i - 1 - j] * power[j] << " " << b[len - i] - b[len - i - j] * power[j] << endl;
				if (i - j < 0 || len - i - j < 0){
					r = j - 1;
				} else if (a[i] - a[i - j] * power[j] == b[len - i] - b[len - i - j] * power[j]){
					maxn = max(maxn, (ULL)(2 * j));
					l = j + 1;
				} else {
					r = j - 1;
				}
			}
		}
		cout << "Case " << cnt << ": " << maxn << endl;
		cin >> s + 1;
	}
	return 0;
}
