#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a[5], *pa = a;
	for(int i = 0; i < 5; i++){
		scanf("%d", (a + i));
	}
	printf("\n");
	for(int i = 0; i < 5; i++){
		printf("%d ", *(a + i));
	}
	printf("\n");
	for(int i = 0; i < 5; i++){
		printf("%d ", pa[i]);
	}
	printf("\n");
	for(int *p = a; p < a + 5; p++){
		printf("%d ", *p);
	}
	return 0;
}