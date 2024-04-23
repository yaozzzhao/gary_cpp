#include <iostream>
using namespace std;
const int N = 110;
char s[N];
void solve(int p, int q){
	if (q - p + 1 < 6 || q - p + 1 > 12) return ;
	int small = 0, big = 0, num = 0, sp = 0;
	for (int i = p; i <= q; i ++){
		if (s[i] >= 'a' && s[i] <= 'z') small = 1;
		else if (s[i] >= 'A' && s[i] <= 'Z') big = 1;
		else if (s[i] >= '0' && s[i] <= '9') num = 1;
		else if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$') sp = 1;
		else return ;
	}
	if (small + big + num < 2 || sp == 0) return ;
	for (int i = p; i <= q; i ++){
		printf("%c", s[i]);
	}
	printf("\n");
}
int main(){
	scanf("%s", s);
	int n = strlen(s);
	int p = 0, q = 0;
	while (p < n){
		while (s[p] == ',') {
			p ++;
		}
		q = p;
		while (q + 1 < n && s[q + 1] != ','){
			q ++;
		}
		if(q >= n) break;
		solve(p, q);
		p = q + 1;
	}
	return 0;
}
//seHJ12!@,sjdkffH$123,sdf!@&12HDHa!,123&^YUhg@!