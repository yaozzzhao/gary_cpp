#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int N = 1000005;
char a[N];
int Next[N], t;
void udnext(){
	Next[1] = 0;
	for (int i = 2, j = 0; i <= t; i ++){
		while (j && a[i] != a[j + 1]) j = Next[j];
		if (a[i] == a[j + 1]) j ++;
		Next[i] = j;
	}
	return ;
}
long long find(int x){
	if (Next[x] != 0)
		return Next[x] = find(Next[x]);
	return x;
}
int main(){
	long long ans = 0;
	cin >> t >> a + 1;
	udnext();
	for (int n = 1; n <= t; n ++){
		ans += n - find(n);
	}
//	for (int i = 0; i < strlen(a); i ++)
//		cout << Next[i] << " ";
	cout << ans << endl;
	return 0;
}