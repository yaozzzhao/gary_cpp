#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 300;
int top = 0;
char s[N], skt[N];
int main(){
	scanf("%s", s);
	bool flag = true;
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		if (s[i] == '(') skt[top ++] = '(';
		else if (s[i] == ')'){
			if(top == 0){
				flag = false;
				break;
			}
			top --;
		}
	}
	if(top > 0) flag = false;
	if(flag) cout << "YES";
	else cout << "NO";
	return 0;
}