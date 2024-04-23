#include<cstdio>
int main(){
	int fbnq[100] = {1, 1};
	int a = 1, b = 1, c;
	for(int i = 2;i < 45;i++){
		c = a + b;
		fbnq[i] = c;
		a = b;
		b = c;
	}
	for(int i = 0;i < 45;i++){
		printf("%d ",fbnq[i]);
	}
	return 0;
}