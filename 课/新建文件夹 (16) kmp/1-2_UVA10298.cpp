#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int N = 100005;
char a[N];
int Next[N];
void udnext(){
	Next[0] = 0;
	for (int i = 1, j = 0; i < strlen(a); i ++){
		while (j && a[i] != a[j]) j = Next[j - 1];
		if (a[i] == a[j]) j ++;
		Next[i] = j;
	}
	return ;
}
int main(){
	cin >> a;
	while (!(a[0] == '.' && strlen(a) == 1)){
		int n = strlen(a);
		memset(Next, 0, sizeof Next);
		udnext();
		if (n % (n - Next[n - 1]) == 0) cout << n / (n - Next[n - 1]) << endl;
		else cout << 1 << endl;
		cin >> a;
	}
	return 0;
}