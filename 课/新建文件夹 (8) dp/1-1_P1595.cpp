#include <iostream>
#include <algorithm>
#define LL long long
using namespace std;
const int N = 20 + 5;
LL n, f[N];
/*
LL f(LL n){
	if (n == 1) return 0;
	else if (n == 2) return 1;
	else return (n - 1) * (f(n - 1) + f(n - 2));
}
*/
int main(){
	cin >> n;
//	cout << f(n) << endl;
	f[1] = 0, f[2] = 1;
	for (int i = 3; i <= n; i ++)
		f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
	cout << f[n] << endl;
	return 0;
}
