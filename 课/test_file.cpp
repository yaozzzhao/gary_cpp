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
//	a[i - 1] - a[i - 1 - j] * P ^ j
//		2 * j + 1
}
int main(){
	ULL jj = 0, aa;
	cin >> s + 1;
	len = strlen(s + 1);
	init(); Hash(s);
	for (int j = len - 2; j >= 1; j --){
		jj = 0;
		if (a[j] - a[0] * power[j] == a[len] - a[len - j] * power[j])
			jj = (ULL)(j);
		if (jj == 0) continue;
		aa = a[jj] - a[0] * power[jj];
		for (int i = 1; i < len - jj; i ++)
			if (a[jj] - a[0] * power[jj] == a[jj + i] - a[i] * power[jj]){
				for (int k = i + 1; k <= jj + i; k ++)
					cout << s[k];
				return 0;
			}
	}
	cout << "Just a legend" << endl;
	return 0;
}