#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int x;
	char s[100];
	scanf("%d%s", &x, s);
	long long num = 0, n = strlen(s);
	for(int i = 0; i < n; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			num = num * x + s[i] - 'A' + 10;
		} else {
			num = num * x + s[i] - '0';
		}
	}
	cout << num << endl;
	return 0;
}