#include<iostream>
#include<cstdio>
using namespace std;
void print(int *a, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return ;
}
int main(){
	int a[5] ={1, 2, 3, 4, 5};
	print(a, 5);
	return 0;
}