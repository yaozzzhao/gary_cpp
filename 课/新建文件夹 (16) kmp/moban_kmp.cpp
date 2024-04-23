#include <iostream>
#include <cstring>
using namespace std;
const int N = 100005;
int Next[N];
char b[N];
void udnext(){
	Next[0] = 0;
	for (int i = 1, j = 0; i < strlen(b); i ++){
		while (j && b[i] != b[j]) j = Next[j - 1];
		if (b[i] == b[j]) j ++;
		Next[i] = j;
	}
	return ;
}
int main(){
	cin >> b;
	udnext();
//	for (int i = 0; i < strlen(b); i ++)
//		cout << Next[i] << " ";
	return 0;
}