#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 1e3 + 5;
long n, sum = 0, ans = 0;
struct person{
	int t, i;
	bool operator<(const person &x){
		return t < x.t;
	}
} a[N];
int main(){
	cin >> n;
	for (int i = 1; i <= n; i ++){
		cin >> a[i].t;
		a[i].i = i;
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i ++){
		cout << a[i].i << " ";
		ans += sum;
		sum += a[i].t;
	}
	printf("\n%.2lf\n", 1.0 * ans / n);
	return 0;
}