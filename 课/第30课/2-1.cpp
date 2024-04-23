#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a, b;
	int *pa, *pb;
	a = 10; b = 10;
	pa = &a; pb = &b;
	printf("%d\n", *pa + *pb);
	printf("%d\n", (*pa) * (*pb));
	return 0;
}