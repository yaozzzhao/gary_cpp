#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int N = 100005;
int Next[N];
char a[N], b[N];
void udnext(){
	Next[0] = 0;
	for (int i = 1, j = 0; i < strlen(b); i ++){
		while (j && b[i] != b[j]) j = Next[j - 1];
		if (b[i] == b[j]) j ++;
		Next[i] = j;
	}
	return ;
}
int kmp(){
	for (int i = 0, j = 0; i < strlen(a);i ++){
		while (j && a[i] != b[j]) j = Next[j - 1];
		if (a[i] == b[j]) j ++;
		if (j == strlen(b)) return i - j + 1;
	}
	return -1;
}
int main(){
	cin >> a;
	cin >> b;
	udnext();
	cout << kmp() << endl;
	return 0;
}