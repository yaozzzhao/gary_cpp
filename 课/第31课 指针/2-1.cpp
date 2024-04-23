#include<iostream>
#include<cstdio>
using namespace std;
const int N = 10010;
int stk[N], top = -1;
int main(){
	int x;
	while (cin >> x){
		stk[++ top] = x;
//		top ++;
	}
	while (top >= 0){
		printf("%d ", stk[top --]);
//		top --;
	}
	return 0;
}