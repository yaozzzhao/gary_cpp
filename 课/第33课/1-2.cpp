#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int x, n, m = 0;
	char s[100];
	scanf("%d%d", &n, &x);
	while(n > 0){
		int t = n % x;
		if(t >= 0 && t <= 9) s[m] = t + '0';
		else if(t >= 10 && t < x) s[m] = t - 10 + 'A';
		n /= x;	m ++;
	}
	if(m == 0) s[m ++] = '0';
	for(int i = m - 1; i >= 0; i--){
		printf("%c", s[i]);
	}
	return 0;
}