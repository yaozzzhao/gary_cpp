#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 1e5;
char a[N], b[N];
int n, m;
void init(char a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
}
int main(){
	scanf("%s\n", a);
	fgets(b, N, stdin);
	n = strlen(a);
	m = strlen(b);
	init(a, n);
	init(b, m);
	int i = 0;
	int cnt = 0, idx = -1;
	while(i < m){
		int p = i;
		while(p < m && b[p] == ' '){
			p++;
		}
		int q = p;
		while(q + 1 < m && b[q + 1] != ' '){
			q++;
		}
		if(q - p + 1 == n){
			int op = 1;
			for(int j = 0; j < n; j++){
				if(a[j] != b[p + j]){
					op = 0;
					break;
				}
			}
			if(op == 1 && idx == -1){
				idx = p;
			}
			cnt += op;
		}
		i = q + 1;
	}
	if(idx == -1) cout << idx << endl;
	else cout << cnt << " " << idx << endl;
	return 0;
}