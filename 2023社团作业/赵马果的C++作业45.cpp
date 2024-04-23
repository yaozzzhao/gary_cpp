#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[300], b[300], c[300];
	cin >> a >> b;
	int lena = strlen(a), lenb = strlen(b);
	if(lena < lenb || (lena == lenb && strcmp(a, b) == -1)){
		strcpy(c, b);
		strcpy(b, a);
		strcpy(a, c);
		cout << "-";
	}
	int a1[250] = {0}, b1[250] = {0}, c1[250] = {0};
	for(int i = 0; i < lena; i++){
		a1[lena - i] = a[i] - '0';
	}
	for(int i = 0; i < lenb; i++){
		b1[lenb - i] = b[i] - '0';
	}
	int j = 1;
	while(j <= lena || j <= lenb){
		if(a1[j] < b1[j]){
			a1[j] = a1[j] = a1[j] + 10;
			a1[j + 1]--;
		}
		c1[j] = a1[j] - b1[j];
		j++;
	}
	int lenc = j;
	while(c1[lenc] == 0 && lenc > 1){
		lenc--;
	}
	for(int i = lenc; i >= 1; i--){
		cout << c1[i];
	}
	return 0;
} 
