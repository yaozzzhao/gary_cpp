#include <cstdio>
#include <cmath>
int main(){
	int x, a, b, c, d, fx = 0;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &x);
	fx += a * pow(x, 3);
	fx += a * pow(x, 2);
	fx += c * x + d;
	printf("%d", fx);
	return 0;
}